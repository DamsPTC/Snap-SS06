/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001db6b8; end: 001db6db;  */

void FUN_001db6b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001db6dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001db6dc; end: 001db71b;  */

void FUN_001db6dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5478;
  _swift_getWitnessTable(&UNK_007e5478,&UNK_009b8958);
  puRam0000000000af4248 = puVar1;
  return;
}



/* Entry: 001db71c; end: 001db87f;  */

int FUN_001db71c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001db798;
        goto LAB_001db77c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001db77c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_001db798:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001db880; end: 001dbc83;  */

void FUN_001db880(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_2 < 4) {
    uVar5 = 0x80000000008bbde0;
    uVar4 = 0xd000000000000022;
    if (param_2 != 2) {
      uVar5 = 0xe700000000000000;
      uVar4 = 0x64616f6c657270;
    }
    pcVar2 = "featureSyncJobProcessor";
    uVar3 = 0xd000000000000015;
    if (param_2 != 0) {
      pcVar2 = "esSyncJobProcessor";
      uVar3 = 0xd000000000000017;
    }
    if (param_2 < 2) {
      uVar4 = uVar3;
      uVar5 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
  else {
    uVar5 = 0x80000000008bbda0;
    uVar4 = 0xd000000000000010;
    if (param_2 != 6) {
      uVar5 = 0xef72656469766f72;
      uVar4 = 0x507463656a627573;
    }
    uVar1 = 0xee0073746e656970;
    uVar3 = 0x696365526b6e6172;
    if (param_2 != 4) {
      uVar1 = 0x80000000008bbdc0;
      uVar3 = 0xd000000000000011;
    }
    if (param_2 < 6) {
      uVar4 = uVar3;
      uVar5 = uVar1;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar5);
  return;
}



/* Entry: 001dbc84; end: 001dbdcf;  */

undefined1  [16] FUN_001dbc84(byte param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 4) {
    pcVar2 = "metaInfoProvider";
    if (param_1 != 2) {
      pcVar2 = "extensionInfoProvider";
    }
    uVar6 = 0x80000000008bbc80;
    uVar4 = 0xd00000000000001b;
    if (param_1 != 0) {
      uVar6 = 0xea0000000000746e;
      uVar4 = 0x657645656b616873;
    }
    uVar1 = (ulong)pcVar2 | 0x8000000000000000;
    uVar5 = 0xd000000000000010;
    if (param_1 < 2) {
      uVar1 = uVar6;
      uVar5 = uVar4;
    }
    auVar8._8_8_ = uVar1;
    auVar8._0_8_ = uVar5;
    return auVar8;
  }
  pcVar2 = "featureSettingsProvider";
  uVar4 = 0xd000000000000016;
  if (param_1 != 7) {
    pcVar2 = "DeepLinkHandling";
    uVar4 = 0xd000000000000017;
  }
  pcVar3 = "startSyncManagerUnauth";
  uVar5 = 0xd000000000000014;
  if (param_1 != 6) {
    pcVar3 = pcVar2;
    uVar5 = uVar4;
  }
  pcVar2 = "composerLogProvider";
  uVar4 = 0xd000000000000015;
  if (param_1 != 4) {
    pcVar2 = "startSyncManagerAuth";
    uVar4 = 0xd000000000000013;
  }
  if (param_1 < 6) {
    pcVar3 = pcVar2;
    uVar5 = uVar4;
  }
  auVar7._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 001dbdd0; end: 001dbe67;  */

void FUN_001dbdd0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001dc3d4(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001dbe68; end: 001dbe6f;  */

void FUN_001dbe68(undefined8 param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 < 4) {
    pcVar2 = "metaInfoProvider";
    if (bVar1 != 2) {
      pcVar2 = "extensionInfoProvider";
    }
    uVar6 = 0x80000000008bbc80;
    uVar4 = 0xd00000000000001b;
    if (bVar1 != 0) {
      uVar6 = 0xea0000000000746e;
      uVar4 = 0x657645656b616873;
    }
    uVar5 = 0xd000000000000010;
    uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    if (bVar1 < 2) {
      uVar5 = uVar4;
      uVar7 = uVar6;
    }
  }
  else {
    pcVar2 = "featureSettingsProvider";
    uVar4 = 0xd000000000000016;
    if (bVar1 != 7) {
      pcVar2 = "DeepLinkHandling";
      uVar4 = 0xd000000000000017;
    }
    pcVar3 = "startSyncManagerUnauth";
    uVar5 = 0xd000000000000014;
    if (bVar1 != 6) {
      pcVar3 = pcVar2;
      uVar5 = uVar4;
    }
    pcVar2 = "composerLogProvider";
    uVar4 = 0xd000000000000015;
    if (bVar1 != 4) {
      pcVar2 = "startSyncManagerAuth";
      uVar4 = 0xd000000000000013;
    }
    if (bVar1 < 6) {
      pcVar3 = pcVar2;
      uVar5 = uVar4;
    }
    uVar7 = (ulong)pcVar3 | 0x8000000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar7);
  return;
}



/* Entry: 001dbe70; end: 001dbeaf;  */

void FUN_001dbe70(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001db9c4(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001dbeb0; end: 001dc167;  */

undefined1  [16] FUN_001dbeb0(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_1 < 0xb) {
    if (param_1 == 9) {
      auVar11._8_8_ = 0xee00707574726174;
      auVar11._0_8_ = 0x5374736f50523243;
      return auVar11;
    }
    if (param_1 == 10) {
      auVar9._8_8_ = 0x80000000008bbcc0;
      auVar9._0_8_ = 0xd000000000000017;
      return auVar9;
    }
  }
  else {
    if (param_1 == 0xb) {
      auVar12._8_8_ = 0x80000000008bbca0;
      auVar12._0_8_ = 0xd000000000000013;
      return auVar12;
    }
    if (param_1 == 0xc) {
      auVar10._8_8_ = 0xee00636e79536e65;
      auVar10._0_8_ = 0x6b6f546563617254;
      return auVar10;
    }
  }
  lVar1 = 0xae6940;
  func_0x000115a8(0xae6940,&UNK_007da060);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0x523253;
  *(undefined8 *)(lVar1 + 0x28) = 0xe300000000000000;
  if (param_1 < 4) {
    if (1 < param_1) {
      uVar8 = 0xd000000000000010;
      if (param_1 == 2) {
        pcVar7 = "lastPageProvider";
      }
      else {
        pcVar7 = "metaInfoProvider";
      }
      uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
      goto LAB_001dc0f8;
    }
    if (param_1 != 0) {
      uVar6 = 0xea0000000000746e;
      uVar8 = 0x657645656b616873;
      goto LAB_001dc0f8;
    }
    pcVar7 = "startupCompleteTimeProvider";
    uVar8 = 0xb;
  }
  else {
    if (5 < param_1) {
      if (param_1 == 6) {
        uVar6 = 0x80000000008bbbe0;
        uVar8 = 0xd000000000000014;
      }
      else if (param_1 == 7) {
        uVar6 = 0x80000000008bbbc0;
        uVar8 = 0xd000000000000016;
      }
      else {
        uVar6 = 0x80000000008bbba0;
        uVar8 = 0xd000000000000017;
      }
      goto LAB_001dc0f8;
    }
    if (param_1 != 4) {
      uVar6 = 0x80000000008bbc00;
      uVar8 = 0xd000000000000013;
      goto LAB_001dc0f8;
    }
    pcVar7 = "extensionInfoProvider";
    uVar8 = 5;
  }
  uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
  uVar8 = uVar8 | 0xd000000000000010;
LAB_001dc0f8:
  *(ulong *)(lVar1 + 0x30) = uVar8;
  *(ulong *)(lVar1 + 0x38) = uVar6;
  uVar2 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar3 = uVar2;
  func_0x0002f390();
  uVar4 = 0x23;
  uVar5 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar2,uVar3);
  _swift_release(lVar1);
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = uVar4;
  return auVar13;
}



/* Entry: 001dc168; end: 001dc1d3;  */

void FUN_001dc168(void)

{
  byte *unaff_x20;
  
  if (1 < *unaff_x20 - 9 && *unaff_x20 != 0xc) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStaticObject();
    FUN_001da650();
  }
  return;
}



/* Entry: 001dc1d4; end: 001dc1db;  */

undefined1  [16] FUN_001dc1d4(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  byte *unaff_x20;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  bVar1 = *unaff_x20;
  if (bVar1 < 0xb) {
    if (bVar1 == 9) {
      auVar12._8_8_ = 0xee00707574726174;
      auVar12._0_8_ = 0x5374736f50523243;
      return auVar12;
    }
    if (bVar1 == 10) {
      auVar10._8_8_ = 0x80000000008bbcc0;
      auVar10._0_8_ = 0xd000000000000017;
      return auVar10;
    }
  }
  else {
    if (bVar1 == 0xb) {
      auVar13._8_8_ = 0x80000000008bbca0;
      auVar13._0_8_ = 0xd000000000000013;
      return auVar13;
    }
    if (bVar1 == 0xc) {
      auVar11._8_8_ = 0xee00636e79536e65;
      auVar11._0_8_ = 0x6b6f546563617254;
      return auVar11;
    }
  }
  lVar2 = 0xae6940;
  func_0x000115a8(0xae6940,&UNK_007da060);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined8 *)(lVar2 + 0x20) = 0x523253;
  *(undefined8 *)(lVar2 + 0x28) = 0xe300000000000000;
  if (bVar1 < 4) {
    if (1 < bVar1) {
      uVar9 = 0xd000000000000010;
      if (bVar1 == 2) {
        pcVar8 = "lastPageProvider";
      }
      else {
        pcVar8 = "metaInfoProvider";
      }
      uVar7 = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
      goto LAB_001dc0f8;
    }
    if (bVar1 != 0) {
      uVar7 = 0xea0000000000746e;
      uVar9 = 0x657645656b616873;
      goto LAB_001dc0f8;
    }
    pcVar8 = "startupCompleteTimeProvider";
    uVar9 = 0xb;
  }
  else {
    if (5 < bVar1) {
      if (bVar1 == 6) {
        uVar7 = 0x80000000008bbbe0;
        uVar9 = 0xd000000000000014;
      }
      else if (bVar1 == 7) {
        uVar7 = 0x80000000008bbbc0;
        uVar9 = 0xd000000000000016;
      }
      else {
        uVar7 = 0x80000000008bbba0;
        uVar9 = 0xd000000000000017;
      }
      goto LAB_001dc0f8;
    }
    if (bVar1 != 4) {
      uVar7 = 0x80000000008bbc00;
      uVar9 = 0xd000000000000013;
      goto LAB_001dc0f8;
    }
    pcVar8 = "extensionInfoProvider";
    uVar9 = 5;
  }
  uVar7 = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
  uVar9 = uVar9 | 0xd000000000000010;
LAB_001dc0f8:
  *(ulong *)(lVar2 + 0x30) = uVar9;
  *(ulong *)(lVar2 + 0x38) = uVar7;
  uVar3 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar4 = uVar3;
  func_0x0002f390();
  uVar5 = 0x23;
  uVar6 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar3,uVar4);
  _swift_release(lVar2);
  auVar14._8_8_ = uVar6;
  auVar14._0_8_ = uVar5;
  return auVar14;
}



/* Entry: 001dc1dc; end: 001dc287;  */

void FUN_001dc1dc(void)

{
  byte bVar1;
  undefined8 uVar2;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  if (bVar1 < 0xb) {
    if (bVar1 == 9) {
      uVar2 = 0;
    }
    else {
      if (bVar1 != 10) {
LAB_001dc23c:
        __ss6HasherV8_combineyySuF(2);
        func_0x001db9c4(auStack_68,bVar1);
        goto LAB_001dc270;
      }
      uVar2 = 1;
    }
  }
  else if (bVar1 == 0xb) {
    uVar2 = 3;
  }
  else {
    if (bVar1 != 0xc) goto LAB_001dc23c;
    uVar2 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar2);
LAB_001dc270:
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001dc288; end: 001dc31f;  */

void FUN_001dc288(undefined8 param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 < 0xb) {
    if (bVar1 == 9) {
      uVar4 = 0;
    }
    else {
      if (bVar1 != 10) {
LAB_001dc2d8:
        __ss6HasherV8_combineyySuF(2);
        if (bVar1 < 4) {
          pcVar2 = "metaInfoProvider";
          if (bVar1 != 2) {
            pcVar2 = "extensionInfoProvider";
          }
          uVar6 = 0x80000000008bbc80;
          uVar4 = 0xd00000000000001b;
          if (bVar1 != 0) {
            uVar6 = 0xea0000000000746e;
            uVar4 = 0x657645656b616873;
          }
          uVar5 = 0xd000000000000010;
          uVar7 = (ulong)pcVar2 | 0x8000000000000000;
          if (bVar1 < 2) {
            uVar5 = uVar4;
            uVar7 = uVar6;
          }
        }
        else {
          pcVar2 = "featureSettingsProvider";
          uVar4 = 0xd000000000000016;
          if (bVar1 != 7) {
            pcVar2 = "DeepLinkHandling";
            uVar4 = 0xd000000000000017;
          }
          pcVar3 = "startSyncManagerUnauth";
          uVar5 = 0xd000000000000014;
          if (bVar1 != 6) {
            pcVar3 = pcVar2;
            uVar5 = uVar4;
          }
          pcVar2 = "composerLogProvider";
          uVar4 = 0xd000000000000015;
          if (bVar1 != 4) {
            pcVar2 = "startSyncManagerAuth";
            uVar4 = 0xd000000000000013;
          }
          if (bVar1 < 6) {
            pcVar3 = pcVar2;
            uVar5 = uVar4;
          }
          uVar7 = (ulong)pcVar3 | 0x8000000000000000;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar7);
        return;
      }
      uVar4 = 1;
    }
  }
  else if (bVar1 == 0xb) {
    uVar4 = 3;
  }
  else {
    if (bVar1 != 0xc) goto LAB_001dc2d8;
    uVar4 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar4);
  return;
}



/* Entry: 001dc320; end: 001dc3c7;  */

void FUN_001dc320(void)

{
  byte bVar1;
  undefined8 uVar2;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  if (bVar1 < 0xb) {
    if (bVar1 == 9) {
      uVar2 = 0;
    }
    else {
      if (bVar1 != 10) {
LAB_001dc37c:
        __ss6HasherV8_combineyySuF(2);
        func_0x001db9c4(auStack_68,bVar1);
        goto LAB_001dc3b0;
      }
      uVar2 = 1;
    }
  }
  else if (bVar1 == 0xb) {
    uVar2 = 3;
  }
  else {
    if (bVar1 != 0xc) goto LAB_001dc37c;
    uVar2 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar2);
LAB_001dc3b0:
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001dc3c8; end: 001dc3d3;  */

bool FUN_001dc3c8(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  uVar1 = (uint)*param_2;
  if (*param_1 < 0xb) {
    if (uVar2 == 9) {
      if (uVar1 != 9) {
        return false;
      }
      return true;
    }
    if (uVar2 == 10) {
      if (uVar1 != 10) {
        return false;
      }
      return true;
    }
  }
  else {
    if (uVar2 == 0xb) {
      if (uVar1 != 0xb) {
        return false;
      }
      return true;
    }
    if (uVar2 == 0xc) {
      if (uVar1 != 0xc) {
        return false;
      }
      return true;
    }
  }
  if (uVar1 - 9 < 4) {
    return false;
  }
  return uVar2 == uVar1;
}



/* Entry: 001dc3d4; end: 001dc437;  */

ulong FUN_001dc3d4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (8 < uVar1) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 001dc438; end: 001dc4cb;  */

bool FUN_001dc438(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_1 < 0xb) {
    if (param_1 == 9) {
      if (param_2 != 9) {
        return false;
      }
      return true;
    }
    if (param_1 == 10) {
      if (param_2 != 10) {
        return false;
      }
      return true;
    }
  }
  else {
    if (param_1 == 0xb) {
      if (param_2 != 0xb) {
        return false;
      }
      return true;
    }
    if (param_1 == 0xc) {
      if (param_2 != 0xc) {
        return false;
      }
      return true;
    }
  }
  if (param_2 - 9 < 4) {
    return false;
  }
  return param_1 == param_2;
}



/* Entry: 001dc4cc; end: 001dc50b;  */

void FUN_001dc4cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af42b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e54f8;
  _swift_getWitnessTable(&UNK_007e54f8,&UNK_009b8a48);
  puRam0000000000af42b0 = puVar1;
  return;
}



/* Entry: 001dc50c; end: 001dc52f;  */

void FUN_001dc50c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001dc530();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001dc530; end: 001dc56f;  */

void FUN_001dc530(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af42b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e55b4;
  _swift_getWitnessTable(&UNK_007e55b4,&UNK_009b8ad8);
  puRam0000000000af42b8 = puVar1;
  return;
}



/* Entry: 001dc570; end: 001dc573;  */

void FUN_001dc570(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af42c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e55f4;
  _swift_getWitnessTable(&UNK_007e55f4,&UNK_009b8ad8);
  puRam0000000000af42c0 = puVar1;
  return;
}



/* Entry: 001dc574; end: 001dc5b3;  */

void FUN_001dc574(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af42c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e55f4;
  _swift_getWitnessTable(&UNK_007e55f4,&UNK_009b8ad8);
  puRam0000000000af42c0 = puVar1;
  return;
}



/* Entry: 001dc5b4; end: 001dca4b;  */

int FUN_001dc5b4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001dc630;
        goto LAB_001dc614;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001dc614:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_001dc630:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001dca4c; end: 001de25b;  */

/* WARNING: Possible PIC construction at 0x001f5cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001f5d3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001f5cf8) */
/* WARNING: Removing unreachable block (ram,0x001f5d40) */
/* WARNING: Removing unreachable block (ram,0x001e7950) */
/* WARNING: Removing unreachable block (ram,0x001e794c) */
/* WARNING: Removing unreachable block (ram,0x001e1d78) */
/* WARNING: Removing unreachable block (ram,0x001e1e58) */
/* WARNING: Removing unreachable block (ram,0x001e1d80) */
/* WARNING: Removing unreachable block (ram,0x001e1de8) */
/* WARNING: Removing unreachable block (ram,0x001e1e80) */
/* WARNING: Removing unreachable block (ram,0x001e1d30) */
/* WARNING: Removing unreachable block (ram,0x001e1d38) */
/* WARNING: Removing unreachable block (ram,0x001e1d40) */
/* WARNING: Removing unreachable block (ram,0x001e1e50) */
/* WARNING: Removing unreachable block (ram,0x001e1d48) */
/* WARNING: Removing unreachable block (ram,0x001e1df0) */
/* WARNING: Removing unreachable block (ram,0x001e1db0) */
/* WARNING: Removing unreachable block (ram,0x001e1da0) */
/* WARNING: Removing unreachable block (ram,0x001e1da8) */
/* WARNING: Removing unreachable block (ram,0x001e1e68) */
/* WARNING: Removing unreachable block (ram,0x001e1e18) */
/* WARNING: Removing unreachable block (ram,0x001e1ec0) */
/* WARNING: Removing unreachable block (ram,0x001e1e20) */
/* WARNING: Removing unreachable block (ram,0x001e1b84) */
/* WARNING: Removing unreachable block (ram,0x001e1bbc) */
/* WARNING: Removing unreachable block (ram,0x001e1bcc) */
/* WARNING: Removing unreachable block (ram,0x001e1b74) */
/* WARNING: Removing unreachable block (ram,0x001e1b78) */
/* WARNING: Removing unreachable block (ram,0x001e1c48) */
/* WARNING: Removing unreachable block (ram,0x001e1cd0) */
/* WARNING: Removing unreachable block (ram,0x001e1cd4) */
/* WARNING: Removing unreachable block (ram,0x001e1cdc) */
/* WARNING: Removing unreachable block (ram,0x001e1ce0) */
/* WARNING: Removing unreachable block (ram,0x001e1d00) */
/* WARNING: Removing unreachable block (ram,0x001e1d04) */
/* WARNING: Removing unreachable block (ram,0x001e1d0c) */
/* WARNING: Removing unreachable block (ram,0x001e1d10) */
/* WARNING: Removing unreachable block (ram,0x001e1d14) */
/* WARNING: Removing unreachable block (ram,0x001e1bfc) */
/* WARNING: Removing unreachable block (ram,0x001e1c2c) */
/* WARNING: Removing unreachable block (ram,0x001e1c30) */
/* WARNING: Removing unreachable block (ram,0x001e1d24) */
/* WARNING: Removing unreachable block (ram,0x001ea434) */
/* WARNING: Removing unreachable block (ram,0x001ea430) */
/* WARNING: Removing unreachable block (ram,0x001e9f88) */
/* WARNING: Removing unreachable block (ram,0x001e5c74) */
/* WARNING: Removing unreachable block (ram,0x001e5c70) */
/* WARNING: Removing unreachable block (ram,0x001e1e10) */
/* WARNING: Removing unreachable block (ram,0x001e1e08) */
/* WARNING: Removing unreachable block (ram,0x001e1e90) */
/* WARNING: Removing unreachable block (ram,0x001e1d88) */
/* WARNING: Removing unreachable block (ram,0x001e1d90) */
/* WARNING: Removing unreachable block (ram,0x001e1e60) */
/* WARNING: Removing unreachable block (ram,0x001e1d98) */
/* WARNING: Removing unreachable block (ram,0x001e1de0) */
/* WARNING: Removing unreachable block (ram,0x001e1bdc) */
/* WARNING: Removing unreachable block (ram,0x001e1be4) */
/* WARNING: Removing unreachable block (ram,0x001e1bec) */
/* WARNING: Removing unreachable block (ram,0x001e1e48) */
/* WARNING: Removing unreachable block (ram,0x001e1bf4) */
/* WARNING: Removing unreachable block (ram,0x001e1dd8) */
/* WARNING: Removing unreachable block (ram,0x001e1e78) */
/* WARNING: Removing unreachable block (ram,0x001e1dc0) */
/* WARNING: Removing unreachable block (ram,0x001e1e28) */
/* WARNING: Removing unreachable block (ram,0x001e1bd4) */
/* WARNING: Removing unreachable block (ram,0x001e1d50) */
/* WARNING: Removing unreachable block (ram,0x001e1db8) */
/* WARNING: Removing unreachable block (ram,0x001e1e38) */
/* WARNING: Removing unreachable block (ram,0x001e1d58) */
/* WARNING: Removing unreachable block (ram,0x001e1d60) */
/* WARNING: Removing unreachable block (ram,0x001e1e30) */
/* WARNING: Removing unreachable block (ram,0x001e1d68) */
/* WARNING: Removing unreachable block (ram,0x001e1b6c) */
/* WARNING: Removing unreachable block (ram,0x001e1b64) */
/* WARNING: Removing unreachable block (ram,0x001e1e40) */
/* WARNING: Removing unreachable block (ram,0x001e1b5c) */
/* WARNING: Removing unreachable block (ram,0x001e1dc8) */
/* WARNING: Removing unreachable block (ram,0x001e1e70) */
/* WARNING: Removing unreachable block (ram,0x001e1dd0) */
/* WARNING: Removing unreachable block (ram,0x001e1e00) */
/* WARNING: Removing unreachable block (ram,0x001e9f68) */
/* WARNING: Removing unreachable block (ram,0x001e2718) */
/* WARNING: Removing unreachable block (ram,0x001e2720) */
/* WARNING: Removing unreachable block (ram,0x001e2730) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

mach_header *
FUN_001dca4c(mach_header *param_1,mach_header *param_2,dword *param_3,dword *param_4,dword *param_5,
            dword *param_6,dword *param_7)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort uVar9;
  dword dVar10;
  undefined *puVar11;
  code *pcVar12;
  mach_header **ppmVar13;
  char in_NG;
  byte in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  dword *pdVar17;
  mach_header *pmVar18;
  undefined **ppuVar19;
  mach_header *pmVar20;
  long lVar21;
  dword *pdVar22;
  dword *pdVar23;
  dword *pdVar24;
  dword *pdVar25;
  dword *pdVar26;
  dword *pdVar27;
  dword *pdVar28;
  dword *pdVar29;
  uint uVar30;
  char cVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  char *pcVar38;
  ulong uVar39;
  mach_header *pmVar40;
  ulong uVar41;
  ulong uVar42;
  char *pcVar43;
  undefined8 uVar44;
  uint uVar45;
  mach_header *pmVar46;
  mach_header *pmVar47;
  undefined8 uVar48;
  char *pcVar49;
  mach_header *in_x12;
  mach_header *pmVar50;
  mach_header *pmVar51;
  undefined8 uVar52;
  mach_header *in_x13;
  mach_header *in_x14;
  mach_header *in_x15;
  ulong in_x16;
  mach_header *unaff_x19;
  mach_header *unaff_x20;
  mach_header *unaff_x21;
  dword *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  undefined8 unaff_x30;
  code *in_stack_00000010;
  mach_header *pmStack_90;
  mach_header *pmStack_88;
  mach_header *pmStack_50;
  dword *in_stack_ffffffffffffffb8;
  mach_header *in_stack_ffffffffffffffc0;
  mach_header *in_stack_ffffffffffffffc8;
  
  pmVar50 = pmRam6572706d49707041;
  puVar11 = PTR_s_init_00abbf70;
  uVar32 = (uint)param_3;
  uVar37 = uVar32 >> 2 & 0x3f;
  pcVar38 = (char *)(ulong)uVar37;
  ppmVar13 = &pmStack_50;
  pmVar20 = (mach_header *)&pmStack_50;
  pdVar17 = (dword *)&pmStack_50;
  pdVar22 = (dword *)&pmStack_50;
  pdVar23 = (dword *)&pmStack_50;
  pdVar24 = (dword *)&pmStack_50;
  pdVar25 = (dword *)&pmStack_50;
  pdVar26 = (dword *)&pmStack_50;
  pdVar27 = (dword *)&pmStack_50;
  pdVar28 = (dword *)&pmStack_50;
  pdVar29 = (dword *)&pmStack_50;
  pcVar49 = (char *)(ulong)*(ushort *)(&UNK_007e56b0 + (long)pcVar38 * 2);
  pmVar47 = (mach_header *)((long)pcVar49 * 4 + 0x1dca7c);
  uVar36 = (uint)param_1;
  uVar30 = (uint)unaff_x19;
  uVar33 = (uint)param_4;
  pmVar18 = param_1;
  ppuVar19 = (undefined **)param_1;
  pmVar46 = pmVar47;
  pmVar51 = in_x12;
  switch(uVar37) {
  default:
    if (((ulong)param_2 & 0xff) == 1) {
      pdVar17 = (dword *)0x6e61526567646142;
                    /* WARNING: Could not recover jumptable at 0x001dcabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_007e5752 + (long)param_1 * 2) * 4 + 0x1dcac0))
                (0x6e61526567646142,0xeb0000000072656b);
      return (mach_header *)pdVar17;
    }
    pcVar38 = (char *)0xe000000000000000;
    unaff_x19 = param_1;
code_r0x001dd530:
    in_stack_ffffffffffffffc8 = (mach_header *)pcVar38;
code_r0x001dd538:
    __ss11_StringGutsV4growyySiF(0x10);
code_r0x001dd540:
    _swift_bridgeObjectRelease(in_stack_ffffffffffffffc8);
    pcVar38 = (char *)0x547070416e49;
code_r0x001dd554:
    pcVar38 = (char *)((ulong)pcVar38 | 0x6b61000000000000);
code_r0x001dd558:
code_r0x001dd55c:
code_r0x001dd560:
code_r0x001dd568:
    FUN_001d7948(unaff_x19);
    in_stack_ffffffffffffffc0 = (mach_header *)pcVar38;
code_r0x001dd574:
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(param_2);
    goto code_r0x001dd588;
  case 1:
    pcVar38 = (char *)(ulong)(uVar36 & 0xff);
    pcVar43 = (char *)(ulong)((uVar36 & 0xff) - 2);
code_r0x001dcfd0:
    pmVar47 = (mach_header *)0xd00000000000001a;
code_r0x001dcfdc:
code_r0x001dcfe0:
code_r0x001dcff4:
code_r0x001dcff8:
    in_x13 = (mach_header *)((long)&pmVar47[-1].flags + 2);
code_r0x001dcffc:
code_r0x001dd008:
    iVar35 = (int)pcVar38;
    pcVar38 = (char *)in_x13;
    if (iVar35 != 0) {
      pcVar38 = (char *)((long)&pmVar47[-1].reserved + 1);
    }
    in_CY = 1 < (uint)pcVar43;
code_r0x001dd020:
    pmVar18 = pmVar47;
    if (in_CY) {
      pmVar18 = (mach_header *)pcVar38;
    }
    break;
  case 2:
    param_2 = (mach_header *)0xed00006e6f697373;
    pmVar18 = (mach_header *)0x6572706d49707041;
    pcVar38 = (char *)((ulong)param_1 & 0xff);
    pcVar43 = &UNK_007e5738;
    pcVar49 = (char *)(ulong)*(ushort *)(&UNK_007e5738 + (long)pcVar38 * 2);
    pmVar47 = (mach_header *)((long)pcVar49 * 4 + 0x1dcf68);
    uVar37 = (uint)pcVar38;
    ppuVar19 = (undefined **)pmVar18;
    pmVar40 = pmVar18;
    pmVar46 = pmVar47;
    switch(pcVar38) {
    case (char *)0x0:
      break;
    default:
      pmVar18 = (mach_header *)((long)&MACH_HEADER.flags + 2);
    case "":
    case "":
    case "":
    case "":
    case "":
      pmVar18 = (mach_header *)((ulong)pmVar18 & 0xffffffffffff | 0xd000000000000000);
code_r0x001dcf74:
      ppuVar19 = (undefined **)pmVar18;
code_r0x001dcf78:
code_r0x001dd264:
code_r0x001dd26c:
      pmVar18 = (mach_header *)ppuVar19;
      break;
    case (char *)0x2:
      pmVar18 = (mach_header *)0xd000000000000016;
      break;
    case (char *)0x3:
      goto code_r0x001ddcfc;
    case "\f":
      goto code_r0x001ddccc;
    case "":
      goto code_r0x001ddd2c;
    case "":
      pmVar18 = (mach_header *)0x49556441;
      break;
    case "\x01":
      goto code_r0x001ddd78;
    case "":
      goto code_r0x001de004;
    case "":
      goto code_r0x001ddce4;
    case "":
      pmVar18 = (mach_header *)0x416d726177657250;
      break;
    case "":
      goto code_r0x001ddcb4;
    case "\x06":
      goto code_r0x001de19c;
    case "":
      if (((ulong)unaff_x21 & 0xff) != 0) {
        if (((uint)unaff_x21 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001e7984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)bRamed00006e6fe7de27 * 4 + 0x1e7988))();
          return pmVar18;
        }
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyySuF(0xed00006e6f697373);
        return param_2;
      }
      __ss6HasherV8_combineyySuF(1);
      param_2 = (mach_header *)0xee00726567676f4c;
      __sSS4hash4intoys6HasherVz_tF(0x6572706d49707041,0x656e656870617267,0xee00726567676f4c);
      goto code_r0x0077b234;
    case "":
      goto code_r0x001de6e4;
    case "E":
      if ((uVar30 & 0xff) == 4) {
        __ss6HasherV8_combineyySuF(1);
      }
      else {
        if ((uVar30 & 0xff) != 5) {
          __ss6HasherV8_combineyySuF(0);
          uVar30 = uVar30 & 0xff;
          uVar44 = 0x6e49726567676f6c;
          param_2 = (mach_header *)0xea00000000007469;
          if (uVar30 != 2) {
            uVar44 = 0xd000000000000013;
            param_2 = (mach_header *)0x80000000008bd050;
          }
          uVar48 = 0xd000000000000010;
          pcVar38 = "backgroundExecution";
          if (((ulong)unaff_x19 & 0xff) != 0) {
            uVar48 = 0xd000000000000013;
            pcVar38 = "loggerDebugViewInit";
          }
          if (uVar30 == 1 || ((ulong)unaff_x19 & 0xff) == 0) {
            uVar44 = uVar48;
          }
          if (uVar30 == 1 || ((ulong)unaff_x19 & 0xff) == 0) {
            param_2 = (mach_header *)((ulong)pcVar38 | 0x8000000000000000);
          }
          __sSS4hash4intoys6HasherVz_tF(0x6572706d49707041,uVar44,param_2);
          goto code_r0x0077b234;
        }
        __ss6HasherV8_combineyySuF(2);
      }
      unaff_x20 = (mach_header *)0x6572706d49707041;
      goto code_r0x00778468;
    case "":
      ppmVar13 = (mach_header **)&stack0xffffffffffffffe0;
      goto code_r0x001de5fc;
    case "":
      goto code_r0x001de688;
    case "":
      if ((uVar30 & 0xff) != 5) {
        if ((uVar30 & 0xff) != 6) {
          __ss6HasherV8_combineyySuF(1);
          pcVar38 = &UNK_00007362;
          goto code_r0x001de6c8;
        }
        goto code_r0x001deaf0;
      }
      goto code_r0x001dec90;
    case (char *)0x14:
      param_2 = unaff_x19;
code_r0x001de688:
      uVar30 = (uint)param_2;
      uVar37 = uVar30 & 0xff;
      uVar36 = uVar30 >> 5 & 7;
      if (2 < uVar36) {
        if (uVar36 < 5) {
          if (uVar36 == 3) {
            if (uVar37 < 0x62) {
              if (uVar37 == 0x60) {
                pdVar17 = (dword *)((long)&MACH_HEADER.magic + 2);
              }
              else {
                pdVar17 = (dword *)((long)&MACH_HEADER.magic + 3);
              }
            }
            else if (uVar37 == 0x62) {
              pdVar17 = &MACH_HEADER.cputype;
            }
            else {
              pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 1);
            }
          }
          else if (uVar37 < 0x82) {
            if (uVar37 == 0x80) {
              pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 2);
            }
            else {
              pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 3);
            }
          }
          else if (uVar37 == 0x82) {
            pdVar17 = &MACH_HEADER.cpusubtype;
          }
          else {
            pdVar17 = (dword *)((long)&MACH_HEADER.cpusubtype + 1);
          }
        }
        else if (uVar36 == 5) {
          if (uVar37 < 0xa2) {
            if (uVar37 == 0xa0) {
              pdVar17 = (dword *)((long)&MACH_HEADER.cpusubtype + 2);
            }
            else {
              pdVar17 = (dword *)((long)&MACH_HEADER.cpusubtype + 3);
            }
          }
          else if (uVar37 == 0xa2) {
            pdVar17 = &MACH_HEADER.filetype;
          }
          else {
            pdVar17 = (dword *)((long)&MACH_HEADER.filetype + 1);
          }
        }
        else if (uVar37 == 0xc0) {
          pdVar17 = (dword *)((long)&MACH_HEADER.filetype + 2);
        }
        else {
          pdVar17 = &MACH_HEADER.ncmds;
        }
        __ss6HasherV8_combineyySuF(pdVar17);
        return (mach_header *)pdVar17;
      }
      if (uVar36 == 0) {
        __ss6HasherV8_combineyySuF(0);
        pcVar43 = "doubleEncryptionResolver";
        pcVar38 = "doubleEncryptionInvoker";
        pcVar49 = "encryptionInfoProvider";
        bVar16 = uVar37 == 1;
        uVar44 = 0xd000000000000017;
        if (!bVar16) {
          uVar44 = 0xd000000000000016;
        }
      }
      else {
        if (uVar36 != 1) {
          __ss6HasherV8_combineyySuF(0xf);
          bVar16 = (uVar30 & 0x1f) != 1;
          uVar44 = 0x7475436b63697571;
          if (bVar16) {
            uVar44 = 0x6c6172656e6567;
          }
          param_2 = (mach_header *)0xe800000000000000;
          if (bVar16) {
            param_2 = (mach_header *)0xe700000000000000;
          }
          __sSS4hash4intoys6HasherVz_tF(0x6572706d49707041,uVar44,param_2);
          goto code_r0x0077b234;
        }
        uVar37 = uVar30 & 0x1f;
        __ss6HasherV8_combineyySuF(1);
        pcVar43 = "opportunisticRetranscode";
        pcVar38 = "snapDocTranscode";
        uVar44 = 0xd000000000000010;
        pcVar49 = "snapDocTranscodeForExport";
        bVar16 = uVar37 == 1;
        if (!bVar16) {
          uVar44 = 0xd000000000000019;
        }
      }
      if (!bVar16) {
        pcVar38 = pcVar49;
      }
      uVar48 = 0xd000000000000018;
      if (uVar37 != 0) {
        uVar48 = uVar44;
        pcVar43 = pcVar38;
      }
      __sSS4hash4intoys6HasherVz_tF
                (0x6572706d49707041,uVar48,(ulong)(pcVar43 + -0x20) | 0x8000000000000000);
      param_2 = (mach_header *)((ulong)(pcVar43 + -0x20) | 0x8000000000000000);
      goto code_r0x0077b234;
    case "\"":
      goto code_r0x001de6f8;
    case "":
      pdVar17 = &MACH_HEADER.cpusubtype;
      __ss6HasherV8_combineyySuF(8);
      return (mach_header *)pdVar17;
    case "":
code_r0x001de6c8:
      pcVar38 = (char *)((ulong)pcVar38 | 0xea00000000000000);
      pcVar43 = (char *)(ulong)(uVar30 & 0xff);
      pcVar49 = "DiscoverFeedNotificationProcessors";
      goto code_r0x001de6e4;
    case "":
      goto code_r0x001dd26c;
    case (char *)0x1a:
      goto code_r0x001dd1f4;
    case "\x02":
    case "_text":
      goto code_r0x001dd21c;
    case "":
      goto code_r0x001dd0fc;
    case "":
      goto code_r0x001dd2d4;
    case "":
      goto code_r0x001dd324;
    case "":
      goto code_r0x001dd244;
    case "\x19":
      goto code_r0x001dd36c;
    case "":
      goto code_r0x001dd10c;
    case "":
      goto code_r0x001dd364;
    case "":
      goto code_r0x001dd0d4;
    case "\b\t":
      goto code_r0x001dd104;
    case "\t":
    case (char *)0x52:
      goto code_r0x001dd2fc;
    case "":
      goto code_r0x001dd0a4;
    case "":
      goto code_r0x001dd1fc;
    case "__TEXT":
      goto code_r0x001dcffc;
    case "_TEXT":
      goto code_r0x001dd27c;
    case "TEXT":
      goto code_r0x001dd344;
    case "EXT":
      goto code_r0x001dd450;
    case "XT":
    case "":
      goto code_r0x001dd2ac;
    case "T":
      goto code_r0x001dd2f4;
    case "":
      goto code_r0x001dd448;
    case "":
      goto code_r0x001dd458;
    case "":
      goto code_r0x001dd1a0;
    case "":
      goto code_r0x001dd178;
    case "":
      goto code_r0x001de23c;
    case "":
    case "":
      goto code_r0x001dcfb0;
    case "":
      goto code_r0x001dd460;
    case "":
      goto code_r0x001dd468;
    case "":
      goto code_r0x001dd374;
    case "":
      goto code_r0x001dd274;
    case "":
      goto code_r0x001dd440;
    case "":
      goto code_r0x001dd0cc;
    case "":
      goto code_r0x001dcff4;
    case "":
code_r0x001dcfa0:
      unaff_x20 = pmVar18;
      if ((int)pcVar38 == 4) goto code_r0x001dcfa8;
      goto code_r0x001dda20;
    case "":
code_r0x001dcfa8:
code_r0x001dcfb0:
      pmVar18 = (mach_header *)0x7972616e6143;
code_r0x001dcfc0:
      pmVar18 = (mach_header *)((ulong)pmVar18 & 0xffffffffffff | 0x7453000000000000);
      break;
    case "":
code_r0x001dcf98:
      if ((int)pcVar38 != 3) goto code_r0x001dcfa0;
      goto code_r0x001ddd00;
    case "":
      goto code_r0x001dd488;
    case "":
      pmRam6572706d49707041 = (mach_header *)((ulong)pmRam6572706d49707041 & 0xffffffff00000000);
      return pmVar18;
    case "":
      if (!(bool)in_ZR) {
        in_x14 = (mach_header *)(in_x16 & 0xffffffffffff | 0xeb00000000000000);
        in_x15 = (mach_header *)0x617245636967616d;
      }
      *(mach_header **)pcVar38 = in_x15;
      *(mach_header **)&((mach_header *)pcVar38)->cpusubtype = in_x14;
      return pmVar18;
    case (char *)0x41:
      return pmVar18;
    case (char *)0x42:
      return (mach_header *)((long)&MACH_HEADER.magic + 3);
    case "":
      _objc_retain();
      _objc_msgSendSuper2(&pmStack_50,puVar11);
      return (mach_header *)pdVar22;
    case "":
      return (mach_header *)(ulong)((uVar37 << 8 | 0x7e5738) - 8);
    case "":
      pmVar18 = (mach_header *)((ulong)&in_x13[0x44].ncmds | 0x8000000000000000);
      pmVar50 = (mach_header *)0xd000000000000010;
      if (uVar37 != 0) {
        pmVar18 = (mach_header *)pcVar43;
        pmVar50 = pmVar47;
      }
      param_2 = (mach_header *)pcVar49;
      if (uVar37 < 2) {
        param_2 = pmVar18;
        in_x12 = pmVar50;
      }
      __sSS4hash4intoys6HasherVz_tF(0x6572706d49707041,in_x12,param_2);
      goto code_r0x0077b234;
    case "":
      return (mach_header *)(dword *)((ulong)in_x12 | (ulong)in_x15);
    case "":
      goto code_r0x001dd044;
    case "":
      return (mach_header *)
             (ulong)*(byte *)((long)&((mach_header *)((long)pcVar38 + 0x1d349d00000000))->magic + 1)
      ;
    case "":
    case "":
code_r0x001dd170:
code_r0x001dd178:
      pmVar47 = (mach_header *)0xd00000000000001a;
code_r0x001dd180:
      pmVar47 = (mach_header *)((long)&pmVar47[-1].reserved + 2);
code_r0x001dd194:
      in_x12 = (mach_header *)0x6e5374736f50;
code_r0x001dd1a0:
      pmVar50 = (mach_header *)((ulong)in_x12 & 0xffffffffffff | 0x7061000000000000);
      bVar16 = (int)pcVar38 == 1;
code_r0x001dd1a8:
      pmVar18 = pmVar47;
      if (!bVar16) {
        pmVar18 = pmVar50;
      }
      break;
    case "":
      goto code_r0x001dd20c;
    case "":
      goto code_r0x001dd194;
    case "":
      goto code_r0x001dd060;
    case "":
      goto code_r0x001dd288;
    case "":
      goto code_r0x001dd2c4;
    case (char *)0x51:
code_r0x001dd1d0:
      goto code_r0x001de19c;
    case "":
      goto code_r0x001dd080;
    case "":
      goto code_r0x001dd2ec;
    case "":
      goto code_r0x001dd048;
    case "":
      goto code_r0x001dd070;
    case "\x05":
      goto code_r0x001dd020;
    case "":
      goto code_r0x001dd180;
    case "":
      goto code_r0x001dd008;
    case "":
      goto code_r0x001dd22c;
    case "\x05":
      goto code_r0x001dd2d8;
    case "":
      goto code_r0x001dd360;
    case "":
      goto code_r0x001dd270;
    case "":
      goto code_r0x001dd29c;
    case "\x1c":
      goto code_r0x001dd350;
    case "":
      goto code_r0x001dd370;
    case "":
      goto code_r0x001dd100;
    case "":
code_r0x001dd0c4:
code_r0x001dd0cc:
      pmVar47 = (mach_header *)0xd00000000000001a;
code_r0x001dd0d4:
      pcVar49 = (char *)((long)&pmVar47[-1].reserved + 1);
      if ((int)pcVar38 != 5) {
        pcVar49 = (char *)(mach_header *)0x5377656976657250;
      }
code_r0x001dd0fc:
code_r0x001dd100:
code_r0x001dd104:
code_r0x001dd10c:
      pmVar47 = (mach_header *)&pmVar47[-1].reserved;
      iVar35 = (int)pcVar38;
      if (iVar35 != 3) {
        pmVar47 = (mach_header *)0xd00000000000001a;
      }
      in_OV = SBORROW4(iVar35,4);
      in_NG = iVar35 + -4 < 0;
      in_ZR = iVar35 == 4;
      goto code_r0x001dd730;
    case "":
      goto code_r0x001dd3e8;
    case "":
      goto code_r0x001dcfe0;
    case "":
      goto code_r0x001dd380;
    case "":
      goto code_r0x001dd390;
    case "__text":
      goto code_r0x001dd30c;
    case "text":
      goto code_r0x001dd340;
    case "ext":
      goto code_r0x001dd038;
    case "xt":
      goto code_r0x001dcff8;
    case "t":
      goto code_r0x001dcfc0;
    case "":
      goto code_r0x001dcfd0;
    case "":
      goto code_r0x001dd3ac;
    case "":
      goto code_r0x001dd90c;
    case "":
      goto code_r0x001dd8c4;
    case "":
      goto code_r0x001dd8dc;
    case "":
      goto code_r0x001dd894;
    case "":
      goto code_r0x001dd924;
    case "":
      goto code_r0x001dd93c;
    case "__TEXT":
      goto code_r0x001dd8f4;
    case "_TEXT":
      goto code_r0x001dd96c;
    case "TEXT":
      goto code_r0x001dd8ac;
    case "EXT":
      goto code_r0x001dd954;
    case "":
      goto code_r0x001e9e0c;
    case "":
    case "":
    case "":
    case "":
    case "":
    case "":
    case (char *)0xab:
    case "":
    case "":
    case "tw":
    case "":
    case "":
    case (char *)0xfb:
    case "":
      goto code_r0x001dcfdc;
    case "":
      goto code_r0x001e2338;
    case "":
    case "":
    case "":
    case "":
      goto code_r0x001dcf80;
    case "":
    case "":
    case "":
    case "":
      goto code_r0x001dcf74;
    case "":
    case "":
      goto code_r0x001dcf78;
    case "\x01":
    case "":
    case "v":
    case "":
      if (!in_CY || (bool)in_ZR) {
        if (0xfb < uVar32) {
          pmRam6572706d49707049 = (mach_header *)((ulong)pmRam6572706d49707049 & 0xffffffffffff0000)
          ;
        }
        pmRam6572706d49707049 = (mach_header *)CONCAT71(pmRam6572706d49707049._1_7_,0x8d);
        return pmVar18;
      }
      pmRam6572706d49707049 = (mach_header *)((ulong)pmRam6572706d49707049 & 0xffffffffffffff00);
      pmRam6572706d49707041 = (mach_header *)0x6f697277;
      in_CY = 0xfb < uVar32;
code_r0x001e9e0c:
      if (in_CY) {
        pmRam6572706d49707049._0_2_ = CONCAT11(1,pmRam6572706d49707049._0_1_);
      }
      return pmVar18;
    case "":
      pcVar38 = (char *)((long)&((mach_header *)((long)pcVar38 + 0x6572706d49707040))->magic + 1);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      *(undefined8 *)(_DAT_00af6f70 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6f78 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6f80 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6f88 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6f90 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6f98 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6fa0 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6fa8 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6fb0 + 0x6572706d49707041) = 0;
    case "":
      *(undefined8 *)(_DAT_00af6fb8 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6fc0 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6fc8 + 0x6572706d49707041) = 0;
      *(mach_header **)((long)&_DAT_00af6fd0[0x32b93836a4b8382].magic + 1) = unaff_x19;
      *(undefined8 *)(_DAT_00af6fd8 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6fe0 + 0x6572706d49707041) = 0;
      pcVar38 = (char *)((long)&_DAT_00af6fe8[0x32b93836a4b8382].magic + 1);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      *(undefined8 *)(_DAT_00af6ff0 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af6ff8 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af7000 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af7008 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af7010 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af7018 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af7020 + 0x6572706d49707041) = 0;
      *(undefined8 *)(_DAT_00af7028 + 0x6572706d49707041) = 0;
      puVar11 = PTR_s_init_00abbf70;
      pmStack_50 = (mach_header *)0x6572706d49707041;
      _objc_retain();
      _objc_msgSendSuper2(&pmStack_50,puVar11);
      return (mach_header *)pdVar24;
    case "":
    case "":
      _swift_retain();
      func_0x0021d940(&stack0xffffffffffffffb8);
      _swift_release();
      if (*(long *)(in_stack_ffffffffffffffb8 + 4) == 0) {
        _swift_bridgeObjectRelease(in_stack_ffffffffffffffb8);
      }
      else {
        _swift_bridgeObjectRetain(in_stack_ffffffffffffffb8);
        FUN_000202c0();
        if (((ulong)unaff_x21 & 1) == 0) {
          _swift_bridgeObjectRelease_n(in_stack_ffffffffffffffb8,2);
        }
        else {
          lVar21 = *(long *)(*(long *)(in_stack_ffffffffffffffb8 + 0xe) + (long)unaff_x22 * 8);
          _swift_bridgeObjectRelease_n(in_stack_ffffffffffffffb8,2);
          if (lVar21 != 0) {
            in_stack_ffffffffffffffb8 = (dword *)((long)&unaff_x19->magic + _DAT_00af8170);
            _swift_unknownObjectWeakLoadStrong();
            if (in_stack_ffffffffffffffb8 != (dword *)0x0) {
              func_0x00782860();
              _swift_unknownObjectRelease(in_stack_ffffffffffffffb8);
            }
          }
        }
      }
      return (mach_header *)in_stack_ffffffffffffffb8;
    case (char *)0x90:
      pcVar38 = (char *)((long)&((mach_header *)((long)pcVar38 + 0x6572706d49707040))->magic + 1);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      *(undefined8 *)(_DAT_00af6fc0 + 0x6572706d49707041) = 0;
      goto code_r0x00202078;
    case "tv":
    case "":
    case "":
    case "":
    case "C":
    case "\x04":
    case "":
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x21cde8);
      (*pcVar12)();
    case "":
      goto code_r0x002021a8;
    case "":
      goto code_r0x002021b8;
    case "":
      ((mach_header *)((long)pcVar38 + 0x100))->magic = 0x49707041;
      ((mach_header *)((long)pcVar38 + 0x100))->cputype = 0x6572706d;
      return pmVar18;
    case "":
    case "":
    case "":
      goto code_r0x001dd040;
    case "":
      return (mach_header *)(ulong)(uVar37 + 1);
    case "":
      if ((bool)in_ZR) {
        return (mach_header *)((long)&MACH_HEADER.magic + 1);
      }
      pmVar18 = (mach_header *)0x0;
code_r0x001e2338:
      return pmVar18;
    case "":
      return pmVar18;
    case "":
      goto code_r0x00202268;
    case "":
      __ss6HasherV8_combineyySuF();
      return pmVar18;
    case "":
    case "":
      __ss6HasherV8_combineyys5UInt8VF();
      __ss6HasherV8_combineyySuF();
      lVar21 = *(long *)((long)&_DAT_00af6f00->magic + (long)&unaff_x19->magic);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f08);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f10);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
    case "_stubs":
    case "":
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f18);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f20);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f28);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f30);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f38);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f40);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f48);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&_DAT_00af6f50->magic + (long)&unaff_x19->magic);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f58);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
LAB_001fa358:
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f60);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f68);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f70);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      unaff_x21 = *(mach_header **)((long)&unaff_x19->magic + _DAT_00af6f78);
      if (unaff_x21 == (mach_header *)0x0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
code_r0x001fa428:
        ppuVar19 = (undefined **)((long)&MACH_HEADER.magic + 1);
code_r0x001fa42c:
        __ss6HasherV8_combineyys5UInt8VF(ppuVar19);
        __ss6HasherV8_combineyySuF(unaff_x21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f80);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f88);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f90);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
LAB_001fa4fc:
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6f98);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6fa0);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6fa8);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6fb0);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6fb8);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6fc0);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6fc8);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&_DAT_00af6fd0->magic + (long)&unaff_x19->magic);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6fd8);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6fe0);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&_DAT_00af6fe8->magic + (long)&unaff_x19->magic);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6ff0);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af6ff8);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af7000);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af7008);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af7010);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af7018);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      lVar21 = *(long *)((long)&unaff_x19->magic + _DAT_00af7020);
      if (lVar21 == 0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(lVar21);
      }
      pdVar17 = *(dword **)((long)&unaff_x19->magic + _DAT_00af7028);
      if (pdVar17 == (dword *)0x0) {
        __ss6HasherV8_combineyys5UInt8VF();
      }
      else {
        func_0x007843a0();
        __ss6HasherV8_combineyys5UInt8VF(1);
        __ss6HasherV8_combineyySuF(pdVar17);
      }
      __ss6HasherV8finalizeSiyF();
      return (mach_header *)pdVar17;
    case "":
    case "":
      _objc_opt_self();
      return pmVar18;
    case "__stubs":
    case "":
      pdVar17 = (dword *)((long)&MACH_HEADER.cpusubtype + 2);
      __ss6HasherV8_combineyySuF(10);
      return (mach_header *)pdVar17;
    case "stubs":
    case "__TEXT":
      goto code_r0x001f60fc;
    case "tubs":
    case "_TEXT":
      pmRam6572706d49707041 = (mach_header *)CONCAT71(pmRam6572706d49707041._1_7_,0x77);
      if (1 < uVar37) {
        if (uVar37 != 2) {
          pmRam6572706d49707041 = (mach_header *)CONCAT35(SUB83(pmVar50,5),0x6f697377);
          return pmVar18;
        }
        pmRam6572706d49707041 = (mach_header *)CONCAT53(SUB85(pmVar50,3),0x697377);
        return pmVar18;
      }
      if (uVar37 == 0) {
        return pmVar18;
      }
      pmRam6572706d49707041 = (mach_header *)CONCAT62(SUB86(pmVar50,2),0x7377);
      return pmVar18;
    case "ubs":
    case "TEXT":
      if (in_CY) {
        pmVar18 = (mach_header *)&MACH_HEADER.filetype;
      }
      return pmVar18;
    case "EXT":
      return (mach_header *)(dword *)0x6572706d49707041;
    case "XT":
      pcVar38 = (char *)pmRam6572706d49707041;
      param_2 = pmRam6572706d49707049;
      pmRam6572706d49707041 = pmRamed00006e6f697373;
      pmRam6572706d49707049 = pmRamed00006e6f69737b;
      cVar6 = cRamed00006e6f697383;
      cVar31 = cRam6572706d49707051;
      goto SUB_00089d04;
    case "T":
      ((mach_header *)((long)pcVar38 + 0xc00))->cpusubtype = 0x49707041;
      ((mach_header *)((long)pcVar38 + 0xc00))->filetype = 0x6572706d;
      return pmVar18;
    case "":
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0,0xe000000000000000,
                 "SnapAttribution/AttributedAppInsightsTaskWrapper.swift",0x36,2);
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1f9160);
      (*pcVar12)();
    case "":
      if (in_CY) {
        pmVar18 = (mach_header *)((long)&MACH_HEADER.cputype + 1);
      }
      return pmVar18;
    case "":
      return (mach_header *)(dword *)0x0;
    case "":
      return pmVar18;
    case "":
      goto LAB_001e9fc0;
    case "tC":
      lVar21 = *(long *)((long)&((mach_header *)((long)pcVar38 + 0x6572706d49707040))->magic + 1);
      if (lVar21 != 0) {
        bVar8 = *(byte *)(lVar21 + _DAT_00af7120);
        _objc_release();
        return (mach_header *)(dword *)(ulong)(bVar8 + 0x40);
      }
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x205dac);
      (*pcVar12)();
    case "":
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6572706d49707041,0xe000000000000000);
      goto _objc_autoreleaseReturnValue;
    case (char *)0xe8:
LAB_001e9fc0:
      pdVar17 = (dword *)0xaf4058;
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStaticObject();
      FUN_001da650();
      return (mach_header *)pdVar17;
    case "w":
      return pmVar18;
    case "":
    case "":
    case "":
    case "":
      pmRam6572706d49707041 = (mach_header *)CONCAT71(pmRam6572706d49707041._1_7_,0x73);
      return pmVar18;
    case "\b\x04":
      return (mach_header *)(dword *)(section_00000068.segname + 0xe);
    case "":
      _objc_release();
      return (mach_header *)(dword *)((long)&section_00000068.reloff + 2);
    }
    break;
  case 3:
    FUN_001dbeb0();
    pmVar18 = param_1;
    break;
  case 4:
    pmVar50 = (mach_header *)0xd000000000000018;
    pmVar18 = pmVar50;
    if ((uVar36 & 0xff) != 2) {
      pmVar18 = (mach_header *)0x4c696a6f6d746942;
    }
    pmVar47 = (mach_header *)0xd00000000000001c;
    goto code_r0x001dce44;
  case 5:
    FUN_001e0ae8();
    pmVar18 = param_1;
    break;
  case 6:
    FUN_001e2b18();
    pmVar18 = param_1;
    break;
  case 7:
    uVar36 = uVar36 & 0xff;
    pcVar38 = (char *)(ulong)uVar36;
    if (uVar36 < 5) goto code_r0x001dcf98;
    if (uVar36 == 5) {
      return (mach_header *)(dword *)0x65526769666e6f43;
    }
    in_ZR = uVar36 == 6;
code_r0x001dd508:
    unaff_x20 = param_1;
    if ((bool)in_ZR) {
code_r0x001de23c:
      return (mach_header *)(dword *)0xd000000000000013;
    }
code_r0x001dda20:
    unaff_x19 = (mach_header *)0xd00000000000001a;
    param_1 = (mach_header *)0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)&param_1->flags = 4;
    param_1->ncmds = 2;
    param_1->sizeofcmds = 0;
    pcVar38 = "ConfigRepository";
  case 0x3c:
    pmVar18 = (mach_header *)((long)pcVar38 + -0x20);
    pcVar38 = (char *)((long)&unaff_x19[-1].sizeofcmds + 2);
    *(char **)(param_1 + 1) = pcVar38;
    param_1[1].cpusubtype = (int)((ulong)pmVar18 | 0x8000000000000000);
    param_1[1].filetype = (int)(((ulong)pmVar18 | 0x8000000000000000) >> 0x20);
    ppuVar19 = (undefined **)param_1;
    if (((ulong)unaff_x20 & 0xff) == 0) {
code_r0x001ddee8:
      uVar44 = 0xec000000656d7573;
      pcVar38 = (char *)0x65526e4f74696e69;
    }
    else if (((uint)unaff_x20 & 0xff) == 1) {
      uVar44 = 0xeb000000006e6967;
      pcVar38 = (char *)0x6f4c6e4f74696e69;
    }
    else {
code_r0x001ddf08:
      uVar44 = 0x80000000008bca40;
    }
    *(char **)&((mach_header *)((long)ppuVar19 + 0x20))->ncmds = pcVar38;
    ((mach_header *)((long)ppuVar19 + 0x20))->flags = (int)uVar44;
    ((mach_header *)((long)ppuVar19 + 0x20))->reserved = (int)((ulong)uVar44 >> 0x20);
code_r0x001ddf74:
    unaff_x21 = (mach_header *)0xae6938;
    unaff_x19 = (mach_header *)ppuVar19;
code_r0x001ddf90:
    func_0x000115a8(unaff_x21,&UNK_007cdb30);
    ppuVar19 = (undefined **)unaff_x21;
    func_0x0002f390();
code_r0x001ddf9c:
    pmVar18 = (mach_header *)((long)&segment_command_00000020.cmd + 3);
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,unaff_x21,ppuVar19);
    ppuVar19 = (undefined **)pmVar18;
code_r0x001ddfb4:
    pmVar18 = unaff_x19;
    unaff_x20 = (mach_header *)ppuVar19;
code_r0x001ddfc0:
    ppuVar19 = (undefined **)unaff_x20;
    _swift_release(pmVar18);
code_r0x001ddfcc:
    pmVar18 = (mach_header *)ppuVar19;
    break;
  case 8:
    pcVar38 = (char *)(ulong)(uVar36 & 0xff);
    if (((ulong)param_1 & 0xff) != 0) goto code_r0x001dd170;
code_r0x001dd818:
code_r0x001dd820:
code_r0x001dd828:
    param_1 = (mach_header *)0x4c706f54;
  case 0x2c:
    pmVar18 = (mach_header *)((ulong)param_1 & 0xffffffff | 0x6c65766500000000);
    break;
  case 9:
    FUN_001e3e08();
    pmVar18 = param_1;
    break;
  case 10:
    FUN_001e5218();
    pmVar18 = param_1;
    break;
  case 0xb:
    FUN_001e5810();
    pmVar18 = param_1;
    break;
  case 0xc:
    if (((ulong)param_1 & 0xff) == 0) goto code_r0x001dd810;
    pmVar47 = (mach_header *)0x6c426d6574737953;
    ppuVar19 = (undefined **)0xd000000000000025;
    bVar16 = (uVar36 & 0xff) == 1;
    goto code_r0x001dd4f0;
  case 0xd:
    FUN_001e7170();
    pmVar18 = param_1;
    break;
  case 0xe:
    FUN_001e84c8();
    pmVar18 = param_1;
    break;
  case 0xf:
    FUN_001ea008();
    pmVar18 = param_1;
code_r0x001dcf80:
    break;
  case 0x10:
    uVar37 = (uint)param_2 & 0xff;
    if (uVar37 == 1 || ((ulong)param_2 & 0xff) == 0) goto code_r0x001dd7b0;
    if (uVar37 == 2) {
      return (mach_header *)(dword *)0x50636f4470616e53;
    }
    if (uVar37 != 3) {
      pdVar17 = (dword *)0xd000000000000013;
      if (param_1 != (mach_header *)((long)&MACH_HEADER.magic + 1)) {
        pdVar17 = (dword *)0xd00000000000001a;
      }
      if (param_1 == (mach_header *)0x0) {
        return (mach_header *)(dword *)0xd000000000000016;
      }
      return (mach_header *)pdVar17;
    }
    __ss11_StringGutsV4growyySiF(0x17);
    in_stack_ffffffffffffffc0 = (mach_header *)0x0;
    __sSS6appendyySSF(0xd000000000000015,0x80000000008bc960);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&stack0xffffffffffffffbf,&stack0xffffffffffffffc0,&UNK_009ba908,
               PTR___ss26DefaultStringInterpolationVN_0099b698,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
code_r0x001dd588:
    pmVar18 = in_stack_ffffffffffffffc0;
    break;
  case 0x11:
code_r0x001dd070:
    uVar37 = (uint)pmVar18 & 0xff;
    unaff_x20 = (mach_header *)(ulong)uVar37;
    if (4 < uVar37) goto code_r0x001dd590;
    in_ZR = uVar37 == 2;
code_r0x001dd080:
    if ((bool)in_ZR) goto code_r0x001dde44;
    if ((int)unaff_x20 == 3) goto code_r0x001ddbf8;
    if ((int)unaff_x20 == 4) goto code_r0x001de0c4;
code_r0x001ddb3c:
    ppuVar19 = (undefined **)0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)&((mach_header *)ppuVar19)->flags = 4;
    ((mach_header *)ppuVar19)->ncmds = 2;
    ((mach_header *)ppuVar19)->sizeofcmds = 0;
    pcVar38 = (char *)0x80000000008bc8a0;
    pcVar43 = (char *)((long)&MACH_HEADER.flags + 2);
    unaff_x19 = (mach_header *)ppuVar19;
code_r0x001ddb80:
    *(ulong *)((long)ppuVar19 + 0x20) = ((ulong)pcVar43 | 0xd000000000000000) - 7;
    *(char **)&((mach_header *)((long)ppuVar19 + 0x20))->cpusubtype = pcVar38;
    in_ZR = (int)unaff_x20 == 1;
    pcVar38 = (char *)0x6f707865;
code_r0x001ddb98:
    pmVar40 = (mach_header *)((ulong)pcVar38 | 0x6353657300000000);
    pcVar43 = (char *)0x6d6f7250776f6873;
code_r0x001ddbb0:
    pcVar38 = pcVar43;
    if (!(bool)in_ZR) {
      pcVar38 = (char *)pmVar40;
    }
    pcVar43 = (char *)0xea00000000007470;
    pmVar47 = (mach_header *)0x656741;
code_r0x001ddbc8:
    if (!(bool)in_ZR) {
      pcVar43 = (char *)(((ulong)pmVar47 | 0xeb00000000000000) + 0x92e);
    }
    *(char **)&((mach_header *)((long)ppuVar19 + 0x20))->ncmds = pcVar38;
    *(char **)&((mach_header *)((long)ppuVar19 + 0x20))->flags = pcVar43;
    ppuVar19 = &PTR___objc_empty_cache_00ae6000;
code_r0x001ddbe0:
    unaff_x21 = (mach_header *)&((mach_header *)((long)ppuVar19 + 0x920))->flags;
    goto code_r0x001ddf90;
  case 0x12:
    FUN_001ed334();
    pmVar18 = param_1;
    break;
  case 0x13:
code_r0x001dd270:
    pcVar38 = (char *)(ulong)((uint)pmVar18 & 0xff);
code_r0x001dd274:
    if ((uint)pcVar38 < 4) {
code_r0x001dd27c:
      pcVar43 = (char *)0xd00000000000001a;
      goto code_r0x001dd284;
    }
code_r0x001dd5b4:
  case 0x3a:
code_r0x001dd5bc:
code_r0x001dd5c0:
code_r0x001dd5c4:
    pmVar47 = (mach_header *)0xd00000000000001a;
code_r0x001dd5cc:
    pcVar49 = (char *)((long)&pmVar47[-1].flags + 3);
code_r0x001dd5d8:
code_r0x001dd5dc:
code_r0x001dd5e0:
    in_ZR = (int)pcVar38 == 6;
    pmVar46 = (mach_header *)&pmVar47[-1].flags;
code_r0x001dd5e8:
    pmVar47 = (mach_header *)pcVar49;
    if (!(bool)in_ZR) {
      pmVar47 = pmVar46;
    }
code_r0x001dd5ec:
    goto code_r0x001dd5f0;
  case 0x14:
    FUN_001ef830();
    pmVar18 = param_1;
code_r0x001dd0a4:
    break;
  case 0x15:
    pcVar38 = (char *)(ulong)(uVar36 & 0xff);
    if (2 < (uVar36 & 0xff)) goto code_r0x001dd0c4;
code_r0x001dd73c:
code_r0x001dd740:
code_r0x001dd744:
    pmVar47 = (mach_header *)&UNK_00007250;
  case 0x32:
    pmVar47 = (mach_header *)((ulong)pmVar47 & 0xffffffff0000ffff | 0x76650000);
code_r0x001dd74c:
    pmVar47 = (mach_header *)((ulong)pmVar47 | 0x656900000000);
code_r0x001dd750:
    pmVar47 = (mach_header *)((ulong)pmVar47 | 0x5577000000000000);
code_r0x001dd754:
    pcVar49 = (char *)0x5377656976657250;
    goto code_r0x001dd768;
  case 0x16:
    param_2 = (mach_header *)0x65646e69;
    pmVar40 = param_1;
code_r0x001dd21c:
    param_2 = (mach_header *)((ulong)param_2 & 0xffffffff | 0xed00007200000000);
    pmVar18 = (mach_header *)&UNK_00006e49;
    pcVar38 = (char *)pmVar40;
code_r0x001dd22c:
    pcVar38 = (char *)((ulong)pcVar38 & 0xff);
    pcVar43 = &UNK_007e571e;
    ppuVar19 = (undefined **)((ulong)pmVar18 & 0xffff | 0x6d65527070410000);
code_r0x001dd244:
    pcVar49 = (char *)(ulong)*(ushort *)((long)&((mach_header *)pcVar43)->magic + (long)pcVar38 * 2)
    ;
    pmVar47 = (mach_header *)((long)pcVar49 * 4 + 0x1dd254);
    iVar35 = (int)pcVar38;
    uVar36 = (uint)unaff_x20;
    uVar37 = (uint)param_2;
    pmVar18 = (mach_header *)ppuVar19;
    param_1 = (mach_header *)ppuVar19;
    pmVar40 = (mach_header *)pcVar38;
    pmVar50 = (mach_header *)pcVar43;
    pmVar46 = pmVar47;
    switch(pmVar47) {
    case (mach_header *)0x1db9c4:
      __ss6HasherV8_combineyySuF();
      uVar30 = uVar30 & 0xff;
      if (uVar30 < 4) {
        pcVar38 = "metaInfoProvider";
        if (uVar30 != 2) {
          pcVar38 = "extensionInfoProvider";
        }
        pmVar18 = (mach_header *)0x80000000008bbc80;
        if (((ulong)unaff_x19 & 0xff) != 0) {
          pmVar18 = (mach_header *)0xea0000000000746e;
        }
        param_2 = (mach_header *)((ulong)pcVar38 | 0x8000000000000000);
        if (uVar30 == 1 || ((ulong)unaff_x19 & 0xff) == 0) {
          param_2 = pmVar18;
        }
      }
      else {
        pcVar38 = "featureSettingsProvider";
        if (uVar30 != 7) {
          pcVar38 = "DeepLinkHandling";
        }
        pcVar49 = "startSyncManagerUnauth";
        if (uVar30 != 6) {
          pcVar49 = pcVar38;
        }
        pcVar38 = "composerLogProvider";
        if (uVar30 != 4) {
          pcVar38 = "startSyncManagerAuth";
        }
        if (uVar30 < 6) {
          pcVar49 = pcVar38;
        }
        param_2 = (mach_header *)((ulong)pcVar49 | 0x8000000000000000);
      }
      __sSS4hash4intoys6HasherVz_tF();
      goto code_r0x0077b234;
    case (mach_header *)0x1dd254:
      ppuVar19 = (undefined **)((long)&MACH_HEADER.flags + 2);
    case (mach_header *)0x1dd258:
      ppuVar19 = (undefined **)((ulong)ppuVar19 & 0xffffffffffff | 0xd000000000000000);
code_r0x001dd260:
      goto code_r0x001dd264;
    case (mach_header *)0x1dd260:
      goto code_r0x001dd260;
    case (mach_header *)0x1dd264:
      goto code_r0x001dd264;
    case (mach_header *)0x1dd26c:
      goto code_r0x001dd26c;
    case (mach_header *)0x1dd284:
code_r0x001dd284:
code_r0x001dd288:
    case (mach_header *)0x1dd28c:
      goto code_r0x001dd28c;
    case (mach_header *)0x1dd294:
      goto code_r0x001dd294;
    case (mach_header *)0x1dd29c:
      goto code_r0x001dd29c;
    case (mach_header *)0x1dd2ac:
      goto code_r0x001dd2ac;
    case (mach_header *)0x1dd2bc:
      goto code_r0x001dd2bc;
    case (mach_header *)0x1dd2c8:
      goto code_r0x001dd2c8;
    case (mach_header *)0x1dd2cc:
      goto code_r0x001dd2cc;
    case (mach_header *)0x1dd2e0:
      goto code_r0x001dd2e0;
    case (mach_header *)0x1dd2e4:
      goto code_r0x001dd2e4;
    case (mach_header *)0x1dd2e8:
      goto code_r0x001dd2e8;
    case (mach_header *)0x1dd2f4:
      goto code_r0x001dd2f4;
    case (mach_header *)0x1dd30c:
      goto code_r0x001dd30c;
    case (mach_header *)0x1dd324:
      goto code_r0x001dd324;
    case (mach_header *)0x1dd32c:
      goto code_r0x001dd32c;
    case (mach_header *)0x1dd330:
      goto code_r0x001dd330;
    case (mach_header *)0x1dd334:
      goto code_r0x001dd334;
    case (mach_header *)0x1dd34c:
      goto code_r0x001dd34c;
    case (mach_header *)0x1dd35c:
      goto code_r0x001dd35c;
    case (mach_header *)0x1dd36c:
      goto code_r0x001dd36c;
    case (mach_header *)0x1dd390:
      goto code_r0x001dd390;
    case (mach_header *)0x1dd3b0:
code_r0x001dd3b0:
      goto code_r0x001dd3b4;
    case (mach_header *)0x1dd3b8:
      goto code_r0x001dd3b8;
    case (mach_header *)0x1dd3c0:
      goto code_r0x001dd3c0;
    case (mach_header *)0x1dd3e8:
      goto code_r0x001dd3e8;
    case (mach_header *)0x1dd3ec:
      goto code_r0x001dd3ec;
    case (mach_header *)0x1dd3f0:
      goto code_r0x001dd3f0;
    case (mach_header *)0x1dd3f8:
      goto code_r0x001dd3f8;
    case (mach_header *)0x1dd45c:
      goto code_r0x001dd45c;
    case (mach_header *)0x1dd464:
      goto code_r0x001dd464;
    case (mach_header *)0x1dd46c:
code_r0x001dd46c:
      goto code_r0x001dd474;
    case (mach_header *)0x1dd480:
      goto code_r0x001dd480;
    case (mach_header *)0x1dd48c:
      goto code_r0x001dd48c;
    case (mach_header *)0x1dd4bc:
      goto code_r0x001dd4bc;
    case (mach_header *)0x1dd4e0:
      goto code_r0x001dd4e0;
    case (mach_header *)0x1dd4e8:
      goto code_r0x001dd4e8;
    case (mach_header *)0x1dd4f8:
      goto code_r0x001dd4f8;
    case (mach_header *)0x1dd508:
      goto code_r0x001dd508;
    case (mach_header *)0x1dd518:
      goto code_r0x001de23c;
    case (mach_header *)0x1dd530:
      goto code_r0x001dd530;
    case (mach_header *)0x1dd558:
      goto code_r0x001dd558;
    case (mach_header *)0x1dd55c:
      goto code_r0x001dd55c;
    case (mach_header *)0x1dd560:
      goto code_r0x001dd560;
    case (mach_header *)0x1dd568:
      goto code_r0x001dd568;
    case (mach_header *)0x1dd574:
      goto code_r0x001dd574;
    case (mach_header *)0x1dd588:
      goto code_r0x001dd588;
    case (mach_header *)0x1dd598:
      goto code_r0x001dd598;
    case (mach_header *)0x1dd5b0:
code_r0x001dd5b0:
      goto code_r0x001ddd00;
    case (mach_header *)0x1dd5c0:
      goto code_r0x001dd5c0;
    case (mach_header *)0x1dd5c4:
      goto code_r0x001dd5c4;
    case (mach_header *)0x1dd5d8:
      goto code_r0x001dd5d8;
    case (mach_header *)0x1dd5e0:
      goto code_r0x001dd5e0;
    case (mach_header *)0x1dd5e8:
      goto code_r0x001dd5e8;
    case (mach_header *)0x1dd5f8:
      goto code_r0x001dd5f8;
    case (mach_header *)0x1dd610:
      goto code_r0x001dd610;
    case (mach_header *)0x1dd62c:
      goto code_r0x001dd62c;
    case (mach_header *)0x1dd630:
      goto code_r0x001dd630;
    case (mach_header *)0x1dd63c:
      goto code_r0x001dd63c;
    case (mach_header *)0x1dd64c:
      goto code_r0x001dd64c;
    case (mach_header *)0x1dd650:
      goto code_r0x001dd650;
    case (mach_header *)0x1dd658:
      goto code_r0x001dd658;
    case (mach_header *)0x1dd65c:
      goto code_r0x001dd65c;
    case (mach_header *)0x1dd660:
      goto code_r0x001dd660;
    case (mach_header *)0x1dd66c:
      goto code_r0x001dd66c;
    case (mach_header *)0x1dd67c:
      goto code_r0x001dd67c;
    case (mach_header *)0x1dd698:
      goto code_r0x001dd698;
    case (mach_header *)0x1dd6d4:
      goto code_r0x001dd6d4;
    case (mach_header *)0x1dd72c:
      goto code_r0x001dd72c;
    case (mach_header *)0x1dd734:
      goto code_r0x001dd734;
    case (mach_header *)0x1dd73c:
      goto code_r0x001dd73c;
    case (mach_header *)0x1dd744:
      goto code_r0x001dd744;
    case (mach_header *)0x1dd74c:
      goto code_r0x001dd74c;
    case (mach_header *)0x1dd754:
      goto code_r0x001dd754;
    case (mach_header *)0x1dd774:
      goto code_r0x001dd774;
    case (mach_header *)0x1dd790:
      goto code_r0x001dd790;
    case (mach_header *)0x1ddb80:
      goto code_r0x001ddb80;
    case (mach_header *)0x1ddb98:
      goto code_r0x001ddb98;
    case (mach_header *)0x1ddbb0:
      goto code_r0x001ddbb0;
    case (mach_header *)0x1ddbc8:
      goto code_r0x001ddbc8;
    case (mach_header *)0x1ddbe0:
      goto code_r0x001ddbe0;
    case (mach_header *)0x1ddbf8:
code_r0x001ddbf8:
code_r0x001de19c:
      pmVar18 = (mach_header *)0xd000000000000011;
      break;
    case (mach_header *)0x1ddc10:
      goto code_r0x001ddc10;
    case (mach_header *)0x1ddc28:
      goto code_r0x001ddc28;
    case (mach_header *)0x1ddc40:
      goto code_r0x001ddc40;
    case (mach_header *)0x1ddc58:
      goto code_r0x001ddc58;
    case (mach_header *)0x1ddd70:
code_r0x001ddd78:
      pmVar18 = (mach_header *)0xd000000000000020;
      break;
    case (mach_header *)0x1ddd90:
      goto code_r0x001de1e8;
    case (mach_header *)0x1ddd9c:
code_r0x001de1e8:
      pmVar18 = (mach_header *)0xd000000000000022;
      break;
    case (mach_header *)0x1ddda8:
      goto code_r0x001dddb0;
    case (mach_header *)0x1dddc8:
      goto code_r0x001de19c;
    case (mach_header *)0x1dddd4:
      pmVar18 = (mach_header *)0xd000000000000019;
      break;
    case (mach_header *)0x1dddf4:
      pmVar18 = (mach_header *)0xd00000000000001e;
      break;
    case (mach_header *)0x1dde14:
      goto code_r0x001dde1c;
    case (mach_header *)0x1dde34:
      goto code_r0x001dde44;
    case (mach_header *)0x1dde54:
      goto code_r0x001de19c;
    case (mach_header *)0x1dde60:
      goto code_r0x001dde64;
    case (mach_header *)0x1ddf9c:
      goto code_r0x001ddf9c;
    case (mach_header *)0x1ddfb4:
      goto code_r0x001ddfb4;
    case (mach_header *)0x1ddfc0:
      goto code_r0x001ddfc0;
    case (mach_header *)0x1ddfcc:
      goto code_r0x001ddfcc;
    case (mach_header *)0x1ddfd8:
      goto code_r0x001ddfd8;
    case (mach_header *)0x1ddfe4:
      goto code_r0x001ddfe4;
    case (mach_header *)0x1de004:
      goto code_r0x001de004;
    case (mach_header *)0x1de010:
      goto code_r0x001de010;
    case (mach_header *)0x1de01c:
      goto code_r0x001de01c;
    case (mach_header *)0x1de02c:
      goto code_r0x001de02c;
    case (mach_header *)0x1de050:
      goto code_r0x001de050;
    case (mach_header *)0x1de528:
      __ss6HasherV8_combineyySuF(0x13);
      uVar37 = uVar30 >> 4 & 0xf;
      if (uVar37 < 4) {
        if (1 < uVar37) {
          if (uVar37 == 2) {
            uVar30 = uVar30 & 0xff;
            if (uVar30 < 0x22) {
              if (uVar30 == 0x20) {
                ppuVar19 = (undefined **)0x0;
              }
              else {
                ppuVar19 = (undefined **)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar30 == 0x22) {
              ppuVar19 = (undefined **)((long)&MACH_HEADER.magic + 2);
            }
            else {
              ppuVar19 = (undefined **)((long)&MACH_HEADER.magic + 3);
            }
          }
          else {
            uVar30 = uVar30 & 0xff;
            if (uVar30 < 0x32) {
              if (uVar30 == 0x30) {
                ppuVar19 = (undefined **)&MACH_HEADER.cputype;
              }
              else {
                ppuVar19 = (undefined **)((long)&MACH_HEADER.cputype + 1);
              }
            }
            else if (uVar30 == 0x32) {
              ppuVar19 = (undefined **)((long)&MACH_HEADER.cputype + 2);
            }
            else {
              ppuVar19 = (undefined **)((long)&MACH_HEADER.cputype + 3);
            }
          }
          goto LAB_001eaf30;
        }
        if (uVar37 == 0) {
          __ss6HasherV8_combineyySuF(0x12);
          param_2 = (mach_header *)0xe900000000000079;
          if ((uVar30 & 0xff) != 1) {
            param_2 = (mach_header *)0x80000000008bda20;
          }
        }
        else {
          __ss6HasherV8_combineyySuF(0x19);
          if (((ulong)unaff_x19 & 0xf) == 0) {
            param_2 = (mach_header *)0xe700000000000000;
          }
          else {
            param_2 = (mach_header *)0xeb00000000325665;
            if ((uVar30 & 0xf) != 1) {
              param_2 = (mach_header *)0x80000000008bd9c0;
            }
          }
        }
        __sSS4hash4intoys6HasherVz_tF();
        goto code_r0x0077b234;
      }
      if (5 < uVar37) {
        if (uVar37 == 6) {
          uVar30 = uVar30 & 0xff;
          if (uVar30 < 0x62) {
            if (uVar30 == 0x60) {
              ppuVar19 = (undefined **)&MACH_HEADER.ncmds;
            }
            else {
              ppuVar19 = (undefined **)((long)&MACH_HEADER.ncmds + 1);
            }
          }
          else if (uVar30 == 0x62) {
            ppuVar19 = (undefined **)((long)&MACH_HEADER.ncmds + 3);
          }
          else {
            ppuVar19 = (undefined **)&MACH_HEADER.sizeofcmds;
          }
        }
        else if (uVar37 == 7) {
          uVar30 = uVar30 & 0xff;
          if (uVar30 < 0x72) {
            if (uVar30 == 0x70) {
              ppuVar19 = (undefined **)((long)&MACH_HEADER.sizeofcmds + 1);
            }
            else {
              ppuVar19 = (undefined **)((long)&MACH_HEADER.sizeofcmds + 2);
            }
          }
          else if (uVar30 == 0x72) {
            ppuVar19 = (undefined **)((long)&MACH_HEADER.sizeofcmds + 3);
          }
          else {
            ppuVar19 = (undefined **)&MACH_HEADER.flags;
          }
        }
        else if ((uVar30 & 0xff) == 0x80) {
          ppuVar19 = (undefined **)((long)&MACH_HEADER.flags + 2);
        }
        else if ((uVar30 & 0xff) == 0x81) {
          ppuVar19 = (undefined **)((long)&MACH_HEADER.flags + 3);
        }
        else {
          ppuVar19 = (undefined **)&MACH_HEADER.reserved;
        }
        goto LAB_001eaf30;
      }
      if (uVar37 != 4) {
        uVar30 = uVar30 & 0xff;
        if (uVar30 < 0x52) {
          if (uVar30 != 0x50) {
            __ss6HasherV8_combineyySuF(0xd);
            goto code_r0x00778468;
          }
          ppuVar19 = (undefined **)&MACH_HEADER.filetype;
        }
        else if (uVar30 == 0x52) {
          ppuVar19 = (undefined **)((long)&MACH_HEADER.filetype + 2);
        }
        else {
          ppuVar19 = (undefined **)((long)&MACH_HEADER.filetype + 3);
        }
        goto LAB_001eaf30;
      }
      uVar30 = uVar30 & 0xff;
      if (uVar30 < 0x42) {
        if (uVar30 == 0x40) {
          ppuVar19 = (undefined **)&MACH_HEADER.cpusubtype;
        }
        else {
          ppuVar19 = (undefined **)((long)&MACH_HEADER.cpusubtype + 1);
        }
        goto LAB_001eaf30;
      }
      if (uVar30 == 0x42) {
        ppuVar19 = (undefined **)((long)&MACH_HEADER.cpusubtype + 2);
        goto LAB_001eaf30;
      }
      ppuVar19 = (undefined **)((long)&MACH_HEADER.cpusubtype + 3);
    case (mach_header *)0x1eaf28:
LAB_001eaf30:
      __ss6HasherV8_combineyySuF(ppuVar19);
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1de8e4:
      __ss6HasherV8_combineyySuF();
      if (unaff_x21 != (mach_header *)((long)&MACH_HEADER.magic + 1)) goto code_r0x001dea1c;
code_r0x001deab4:
      ppuVar19 = (undefined **)((long)&MACH_HEADER.magic + 1);
      goto code_r0x001deab8;
    case (mach_header *)0x1de928:
      if ((bool)in_ZR) {
code_r0x001dead0:
        unaff_x19 = (mach_header *)((long)&MACH_HEADER.magic + 3);
        goto code_r0x001de7a0;
      }
      if (iVar35 == 6) {
code_r0x001deaf8:
        unaff_x19 = (mach_header *)&MACH_HEADER.cputype;
        goto code_r0x001de7a0;
      }
      __ss6HasherV8_combineyySuF(2);
      pcVar38 = (char *)(ulong)(uVar30 & 0xff);
      if (((ulong)unaff_x19 & 0xff) != 0) {
        pcVar43 = &UNK_00006967;
        goto code_r0x001de948;
      }
      param_2 = (mach_header *)0xec000000656d7573;
      goto code_r0x001dec68;
    case (mach_header *)0x1de948:
code_r0x001de948:
      pcVar43 = (char *)((ulong)pcVar43 & 0xffffffff0000ffff | 0xeb000000006e0000);
      pcVar49 = "initOnForeground";
    case (mach_header *)0x1de968:
      pcVar49 = (char *)((ulong)((long)pcVar49 + -0x20) | 0x8000000000000000);
code_r0x001de974:
      param_2 = (mach_header *)pcVar43;
      if ((int)pcVar38 != 1) {
        param_2 = (mach_header *)pcVar49;
      }
      goto code_r0x001dec68;
    case (mach_header *)0x1de974:
      goto code_r0x001de974;
    case (mach_header *)0x1de994:
      if (uVar30 == 6) {
        unaff_x19 = (mach_header *)((long)&MACH_HEADER.cputype + 1);
        goto code_r0x001de7a0;
      }
      if (uVar30 == 7) {
        unaff_x19 = (mach_header *)((long)&MACH_HEADER.cputype + 2);
        goto code_r0x001de7a0;
      }
      __ss6HasherV8_combineyySuF(2);
      in_ZR = uVar30 == 1;
    case (mach_header *)0x1de9b4:
code_r0x001de9b8:
code_r0x001de9d0:
      pcVar38 = (char *)0xea00000000007362;
code_r0x001de9dc:
      pcVar38 = (char *)((long)&((mach_header *)((long)pcVar38 + 0x100))->filetype + 2);
      pcVar43 = &UNK_00006764;
code_r0x001de9e4:
      param_2 = (mach_header *)pcVar38;
      if (!(bool)in_ZR) {
        param_2 = (mach_header *)
                  (((ulong)pcVar43 & 0xffffffff0000ffff | 0xeb00000000650000) + 0x90b);
      }
      goto code_r0x001dec68;
    case (mach_header *)0x1de9d0:
      goto code_r0x001de9d0;
    case (mach_header *)0x1de9e4:
      goto code_r0x001de9e4;
    case (mach_header *)0x1e2444:
      pdVar17 = (dword *)&UNK_007e5c50;
      _swift_getWitnessTable(&UNK_007e5c50,&UNK_009b9068);
      pdRam0000000000af4d50 = pdVar17;
      return (mach_header *)pdVar17;
    case (mach_header *)0x1e24e4:
      pdVar17 = (dword *)&UNK_007e5dac;
      _swift_getWitnessTable(&UNK_007e5dac,&UNK_009b9188);
      pdRam0000000000af4d60 = pdVar17;
      return (mach_header *)pdVar17;
    case (mach_header *)0x1e2524:
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1e2624:
      uVar36 = (uint)pcVar43;
      if (!in_CY) {
        uVar36 = 1;
      }
      uVar30 = 0;
      if (0xfe < uVar32) {
        uVar30 = uVar36;
      }
      if (uVar37 < 0xff) {
        if (uVar30 < 2) {
          if (uVar30 != 0) {
            *(char *)((long)&((mach_header *)ppuVar19)->magic + 1) = '\0';
            if (uVar37 == 0) {
              return (mach_header *)ppuVar19;
            }
            goto code_r0x001e2684;
          }
        }
        else if (uVar30 == 2) {
          pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + 1);
          pcVar38[0] = '\0';
          pcVar38[1] = '\0';
        }
        else {
          pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + 1);
          pcVar38[0] = '\0';
          pcVar38[1] = '\0';
          pcVar38[2] = '\0';
          pcVar38[3] = '\0';
        }
        if (uVar37 != 0) {
code_r0x001e2684:
          *(char *)&((mach_header *)ppuVar19)->magic = (char)param_2 + '\x01';
          return (mach_header *)ppuVar19;
        }
      }
      else {
        iVar35 = (uVar37 - 0xff >> 8) + 1;
        *(char *)&((mach_header *)ppuVar19)->magic = (char)(uVar37 - 0xff);
        if (1 < uVar30) {
          if (uVar30 != 2) {
            *(int *)((long)&((mach_header *)ppuVar19)->magic + 1) = iVar35;
            return (mach_header *)ppuVar19;
          }
          *(short *)((long)&((mach_header *)ppuVar19)->magic + 1) = (short)iVar35;
          return (mach_header *)ppuVar19;
        }
        if (uVar30 != 0) {
          *(char *)((long)&((mach_header *)ppuVar19)->magic + 1) = (char)iVar35;
          return (mach_header *)ppuVar19;
        }
      }
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1e4ca8:
      return (mach_header *)(ulong)(iVar35 + 1);
    case (mach_header *)0x1e5f10:
      uVar32 = uVar32 & 0xff;
      if (uVar32 == 1 || ((ulong)param_3 & 0xff) == 0) {
        if (((ulong)param_3 & 0xff) == 0) {
          uVar44 = 0;
        }
        else {
          uVar44 = 2;
        }
LAB_001e604c:
        __ss6HasherV8_combineyySuF(uVar44);
        __ss6HasherV8_combineyySuF(param_2);
        return param_2;
      }
      unaff_x20 = (mach_header *)ppuVar19;
      if (uVar32 != 2) {
        if (uVar32 == 3) {
          uVar44 = 4;
          goto LAB_001e604c;
        }
        __ss6HasherV8_combineyySuF(1);
        goto code_r0x00778468;
      }
      __ss6HasherV8_combineyySuF(3);
      uVar37 = uVar37 & 0xff;
      pcVar38 = (char *)(ulong)uVar37;
      pcVar43 = (char *)0xe600000000000000;
      pmVar47 = (mach_header *)0x65646f4d6961;
      pmVar18 = (mach_header *)0xe900000000000072;
      pmVar50 = (mach_header *)0x65766f6563696f76;
      if (uVar37 != 3) {
        pmVar18 = (mach_header *)0xeb00000000726573;
        pmVar50 = (mach_header *)0x617245636967616d;
      }
      in_x12 = (mach_header *)0x7372656b63697473;
      if (uVar37 != 2) {
        in_x12 = pmVar50;
      }
      pcVar49 = (char *)(mach_header *)0xe800000000000000;
      if (uVar37 != 2) {
        pcVar49 = (char *)pmVar18;
      }
      in_x13 = (mach_header *)0xe800000000000000;
      in_x14 = (mach_header *)0x736e6f6974706163;
      goto code_r0x001e5fe4;
    case (mach_header *)0x1e6708:
      pdVar17 = (dword *)(ulong)(byte)unaff_x20->magic;
      __ss6HasherV5_seedABSi_tcfC(&stack0xffffffffffffffb8);
      __ss6HasherV8_combineyySuF(pdVar17);
      __ss6HasherV9_finalizeSiyF();
      return (mach_header *)pdVar17;
    case (mach_header *)0x1e8ee8:
      pmVar18 = (mach_header *)"miniCameraLensIconWorkflow";
      pmVar47 = (mach_header *)((long)&unaff_x19->cputype + 1);
      if (uVar36 != 1) {
        pmVar18 = (mach_header *)"LensCarouselPreview";
        pmVar47 = (mach_header *)&unaff_x19->cpusubtype;
      }
      pmVar50 = (mach_header *)((long)pcVar38 + -0x20);
      if (uVar36 != 0) {
        pmVar50 = pmVar18;
        unaff_x19 = pmVar47;
      }
      __sSS4hash4intoys6HasherVz_tF
                (&stack0xffffffffffffffb8,unaff_x19,(ulong)pmVar50 | 0x8000000000000000);
      pdVar17 = (dword *)((ulong)pmVar50 | 0x8000000000000000);
      _swift_bridgeObjectRelease(pdVar17);
      __ss6HasherV9_finalizeSiyF();
      return (mach_header *)pdVar17;
    case (mach_header *)0x1ea068:
      in_x12 = (mach_header *)0x6974756f5270614d;
      in_x14 = (mach_header *)0xd000000000000016;
    case (mach_header *)0x1ea098:
      goto code_r0x001ea098;
    case (mach_header *)0x1ea0c8:
      goto code_r0x001ea0c8;
    case (mach_header *)0x1ea0f8:
      _swift_allocObject(ppuVar19,param_2,7);
      *(undefined8 *)&((mach_header *)ppuVar19)->flags = 4;
      ((mach_header *)ppuVar19)->ncmds = 2;
      ((mach_header *)ppuVar19)->sizeofcmds = 0;
      ((mach_header *)((long)ppuVar19 + 0x20))->magic = 0x4d70614d;
      ((mach_header *)((long)ppuVar19 + 0x20))->cputype = 0x61737365;
      ((mach_header *)((long)ppuVar19 + 0x20))->cpusubtype = 0x736567;
      ((mach_header *)((long)ppuVar19 + 0x20))->filetype = 0xeb000000;
      pcVar38 = (char *)(ulong)(uVar36 & 0xff);
      pcVar43 = "externalPlaceUrl";
      unaff_x19 = (mach_header *)ppuVar19;
      goto code_r0x001ea13c;
    case (mach_header *)0x1ea168:
      goto code_r0x001ea168;
    case (mach_header *)0x1ea198:
      pmVar47 = (mach_header *)&UNK_0000614d;
      goto code_r0x001ea19c;
    case (mach_header *)0x1ea1c8:
      goto code_r0x001ea1c8;
    case (mach_header *)0x1ea1f8:
      goto code_r0x001ea1f8;
    case (mach_header *)0x1ea6e0:
      pdVar17 = (dword *)&stack0xffffffffffffffb8;
      __sSS4hash4intoys6HasherVz_tF
                (pdVar17,(ulong)param_2 & 0xffffffff | 0x6e6f697400000000,0xef676e6972616853);
      __ss6HasherV9_finalizeSiyF();
      return (mach_header *)pdVar17;
    case (mach_header *)0x1f57a4:
      return (mach_header *)(dword *)0xd00000000000001c;
    case (mach_header *)0x1f5b90:
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1f5bf8:
      _swift_getWitnessTable(ppuVar19,&UNK_009bc018);
      pmRam0000000000af6b80 = (mach_header *)ppuVar19;
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1f5ffc:
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1f63e8:
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1f6774:
      *(ulong *)&((mach_header *)((long)ppuVar19 + 0x20))->ncmds =
           ((ulong)pcVar43 | 0xd000000000000000) - 5;
      *(char **)&((mach_header *)((long)ppuVar19 + 0x20))->flags = pcVar38;
      uVar44 = 0xae6938;
      func_0x000115a8(0xae6938,&UNK_007cdb30);
      uVar48 = uVar44;
      func_0x0002f390();
      pdVar17 = (dword *)((long)&segment_command_00000020.cmd + 3);
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar44,uVar48);
      _swift_release(ppuVar19);
      return (mach_header *)pdVar17;
    case (mach_header *)0x1f8020:
      return (mach_header *)(ulong)((char)((mach_header *)ppuVar19)->magic == (char)param_2->magic);
    case (mach_header *)0x1f9404:
      (*in_stack_00000010)();
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1f9be8:
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1f9c24:
      _swift_getWitnessTable(ppuVar19,&UNK_009bc980);
      pmRam0000000000af6ec0 = (mach_header *)ppuVar19;
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1fa358:
      goto LAB_001fa358;
    case (mach_header *)0x1fa428:
      goto code_r0x001fa428;
    case (mach_header *)0x1fcc54:
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1fd254:
      if ((mach_header *)(segment_command_00000020.segname + 2) < ppuVar19) {
        ppuVar19 = (undefined **)(segment_command_00000020.segname + 3);
      }
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1fdc4c:
      pcVar38 = (char *)((long)&((mach_header *)pcVar38)->magic +
                        (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      *(mach_header **)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ef8) = unaff_x19;
      pcVar38 = (char *)((long)&_DAT_00af6f00->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f08);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f10);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f18);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f20);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f28);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f30);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f38);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f40);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f48);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6f50->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f58);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f60);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f68);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f70);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f78);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)0xaf6000;
      goto code_r0x001fdd20;
    case (mach_header *)0x202078:
code_r0x00202078:
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6fc8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6fd0->magic + (long)&pmVar18->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      *(mach_header **)((long)&pmVar18->magic + _DAT_00af6fd8) = unaff_x19;
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6fe0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6fe8->magic + (long)&pmVar18->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6ff0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6ff8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7000);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7008);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7010);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7018);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7020);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7028);
      pcVar38[0] = '\0';
      puVar11 = PTR_s_init_00abbf70;
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pmStack_50 = pmVar18;
      _objc_retain();
      _objc_msgSendSuper2(&pmStack_50,puVar11);
      return (mach_header *)pdVar25;
    case (mach_header *)0x202354:
      goto code_r0x00202354;
    case (mach_header *)0x202494:
      goto code_r0x00202494;
    case (mach_header *)0x2024a4:
      goto code_r0x002024a4;
    case (mach_header *)0x202554:
      goto code_r0x00202554;
    case (mach_header *)0x204b84:
      if (*(char *)((long)&((mach_header *)pcVar38)->magic + (long)&((mach_header *)ppuVar19)->magic
                   ) != '\x01') {
        param_4 = param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x00204b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_4 + 4))();
      return (mach_header *)param_4;
    case (mach_header *)0x204ce4:
      return (mach_header *)(dword *)0x0;
    case (mach_header *)0x204d44:
      pmVar18 = (mach_header *)&pmStack_90;
      _swift_getObjCClassMetadata();
      pmVar47 = (mach_header *)ppuVar19;
      _objc_allocWithZone();
      *(char *)((long)&pmVar47->magic + *(long *)param_3) = (char)param_4;
      pmStack_90 = pmVar47;
      pmStack_88 = (mach_header *)ppuVar19;
      _objc_msgSendSuper2(&pmStack_90,PTR_s_init_00abbf70);
      goto _objc_autoreleaseReturnValue;
    case (mach_header *)0x205f24:
      *(mach_header **)
       ((long)&((mach_header *)ppuVar19)->magic +
       *(long *)&((mach_header *)((long)pcVar38 + 0x120))->flags) = unaff_x19;
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7140);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7148);
      pcVar38[0] = '\0';
      puVar11 = PTR_s_init_00abbf70;
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pmStack_50 = (mach_header *)ppuVar19;
      _objc_retain();
      _objc_msgSendSuper2(&pmStack_50,puVar11);
      return (mach_header *)pdVar29;
    case (mach_header *)0x21d0d0:
      FUN_0021d320(pcVar38,unaff_w25 & 1);
      pdVar17 = unaff_x22;
      pmVar18 = unaff_x19;
      FUN_000202c0();
      if ((unaff_w24 & 1) != ((uint)pmVar18 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_0099b040);
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x21d110);
        (*pcVar12)();
      }
      lVar21 = *unaff_x23;
      if ((unaff_w24 & 1) != 0) {
        *(mach_header **)(*(long *)(lVar21 + 0x38) + (long)pdVar17 * 8) = unaff_x21;
        return (mach_header *)pdVar17;
      }
      lVar2 = lVar21 + ((ulong)pdVar17 >> 6) * 8;
      *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << ((ulong)pdVar17 & 0x3f);
      puVar3 = (ulong *)(*(long *)(lVar21 + 0x30) + (long)pdVar17 * 0x10);
      *puVar3 = (ulong)unaff_x22;
      puVar3[1] = (ulong)unaff_x19;
      *(mach_header **)(*(long *)(lVar21 + 0x38) + (long)pdVar17 * 8) = unaff_x21;
      if (SCARRY8(*(long *)(lVar21 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x21d1b8);
        (*pcVar12)();
      }
      *(long *)(lVar21 + 0x10) = *(long *)(lVar21 + 0x10) + 1;
      ppuVar19 = (undefined **)unaff_x19;
      goto code_r0x0021d1a4;
    case (mach_header *)0x21d248:
      bVar8 = (byte)unaff_x21[1].magic;
      uVar41 = 1L << ((ulong)bVar8 & 0x3f);
      uVar42._0_4_ = unaff_x21[2].magic;
      uVar42._4_4_ = unaff_x21[2].cputype;
      uVar39 = 0xffffffffffffffff;
      if ((bVar8 & 0x3f) < 6) {
        uVar39 = ~(-1L << (uVar41 & 0x3f));
      }
      uVar39 = uVar39 & uVar42;
      if (uVar39 == 0) goto LAB_0021d294;
      do {
        uVar42 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
        uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
        uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
        uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
        uVar42 = uVar42 >> 0x20 | uVar42 << 0x20;
        uVar39 = uVar39 - 1 & uVar39;
        while( true ) {
          uVar42 = LZCOUNT(uVar42) | (long)unaff_x23 << 6;
          puVar4 = (undefined8 *)(*(long *)&unaff_x21[1].ncmds + uVar42 * 0x10);
          uVar44 = puVar4[1];
          uVar48 = *(undefined8 *)(*(long *)&unaff_x21[1].flags + uVar42 * 8);
          puVar5 = (undefined8 *)(*(long *)&unaff_x20[1].ncmds + uVar42 * 0x10);
          *puVar5 = *puVar4;
          puVar5[1] = uVar44;
          *(undefined8 *)(*(long *)&unaff_x20[1].flags + uVar42 * 8) = uVar48;
          _swift_bridgeObjectRetain();
          if (uVar39 != 0) break;
LAB_0021d294:
          do {
            plVar1 = (long *)((long)unaff_x23 + 1);
            if (SCARRY8((long)unaff_x23,1)) goto LAB_0021d31c;
            if ((long)(uVar41 + 0x3f >> 6) <= (long)plVar1) {
              _swift_release();
              *(mach_header **)unaff_x19 = unaff_x20;
              return unaff_x21;
            }
            uVar39 = *(ulong *)(unaff_x22 + (long)unaff_x23 * 2 + 2);
            unaff_x23 = (long *)((long)unaff_x23 + 1);
          } while (uVar39 == 0);
          uVar42 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
          uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
          uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
          uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
          uVar42 = uVar42 >> 0x20 | uVar42 << 0x20;
          uVar39 = uVar39 - 1 & uVar39;
          unaff_x23 = plVar1;
        }
      } while( true );
    }
    break;
  case 0x17:
    param_2 = (mach_header *)0xe600000000000000;
    pmVar40 = param_1;
code_r0x001dd2fc:
    pmVar18 = (mach_header *)0x6c65736e6954;
    pcVar38 = (char *)pmVar40;
code_r0x001dd30c:
    pcVar38 = (char *)((ulong)pcVar38 & 0xff);
    pcVar43 = &UNK_007e56fe;
    pcVar49 = (char *)(ulong)*(ushort *)(&UNK_007e56fe + (long)pcVar38 * 2);
    pmVar47 = (mach_header *)((long)pcVar49 * 4 + 0x1dd328);
    ppuVar19 = (undefined **)pmVar18;
code_r0x001dd324:
    uVar37 = (uint)pcVar38;
    uVar36 = (uint)pcVar43;
    uVar45 = (uint)pmVar47;
    pmVar18 = (mach_header *)ppuVar19;
    param_1 = (mach_header *)ppuVar19;
    pmVar46 = pmVar47;
    switch(pmVar47) {
    case (mach_header *)0x59b80:
      pdVar17 = *(dword **)&unaff_x20->ncmds;
                    /* WARNING: Could not recover jumptable at 0x00059b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pdVar17 + 4))();
      return (mach_header *)pdVar17;
    case (mach_header *)0x1dbb1c:
      __ss6HasherV8_combineyySuF();
      uVar30 = uVar30 & 0xff;
      if (uVar30 < 4) {
        param_2 = (mach_header *)0xec00000070756d72;
        if (uVar30 != 2) {
          param_2 = (mach_header *)0x80000000008bbd40;
        }
        pcVar38 = "warmupCustomStories";
        if (((ulong)unaff_x19 & 0xff) != 0) {
          pcVar38 = "snapReadReceiptCleanup";
        }
        pmVar18 = (mach_header *)((ulong)pcVar38 | 0x8000000000000000);
        bVar14 = SBORROW4(uVar30,1);
        iVar35 = uVar30 - 1;
        bVar16 = uVar30 == 1;
      }
      else {
        pmVar18 = (mach_header *)0xee00676e69676461;
        if (uVar30 != 7) {
          pmVar18 = (mach_header *)0x80000000008bbce0;
        }
        param_2 = (mach_header *)0x80000000008bbd00;
        if (uVar30 != 6) {
          param_2 = pmVar18;
        }
        pmVar18 = (mach_header *)0x80000000008bbd20;
        if (uVar30 != 4) {
          pmVar18 = (mach_header *)0xec00000073656972;
        }
        bVar14 = SBORROW4(uVar30,5);
        iVar35 = uVar30 - 5;
        bVar16 = uVar30 == 5;
      }
      if (bVar16 || iVar35 < 0 != bVar14) {
        param_2 = pmVar18;
      }
      __sSS4hash4intoys6HasherVz_tF();
      goto code_r0x0077b234;
    case (mach_header *)0x1dd328:
    case (mach_header *)0x1dd32c:
code_r0x001dd32c:
code_r0x001dd330:
      goto code_r0x001de19c;
    case (mach_header *)0x1dd334:
      goto code_r0x001dd334;
    case (mach_header *)0x1dd338:
      goto code_r0x001dd338;
    case (mach_header *)0x1dd340:
      goto code_r0x001dd340;
    case (mach_header *)0x1dd358:
      goto code_r0x001dd358;
    case (mach_header *)0x1dd360:
      goto code_r0x001dd360;
    case (mach_header *)0x1dd368:
      goto code_r0x001dd368;
    case (mach_header *)0x1dd370:
      goto code_r0x001dd370;
    case (mach_header *)0x1dd380:
      goto code_r0x001dd380;
    case (mach_header *)0x1dd390:
      goto code_r0x001dd390;
    case (mach_header *)0x1dd39c:
      goto code_r0x001dd39c;
    case (mach_header *)0x1dd3a0:
      goto code_r0x001dd3a0;
    case (mach_header *)0x1dd3b4:
code_r0x001dd3b4:
    case (mach_header *)0x1dd3b8:
code_r0x001dd3b8:
code_r0x001dd3bc:
      pmVar47 = (mach_header *)&UNK_00006154;
code_r0x001dd3c0:
      pmVar47 = (mach_header *)((ulong)pmVar47 & 0xffffffff0000ffff | 0x61436b6c0000);
code_r0x001dd3c8:
      pmVar47 = (mach_header *)((ulong)pmVar47 | 0x6c6c000000000000);
      in_x12 = (mach_header *)((long)&MACH_HEADER.flags + 2);
code_r0x001dd3e0:
      in_x12 = (mach_header *)((ulong)in_x12 & 0xffffffffffff | 0xd000000000000000);
      in_x13 = (mach_header *)((long)&in_x12[-1].flags + 1);
code_r0x001dd3e8:
code_r0x001dd3ec:
code_r0x001dd3f0:
code_r0x001dd3f8:
      in_x15 = (mach_header *)((long)&in_x12[-1].reserved + 1);
code_r0x001dd400:
code_r0x001dd404:
code_r0x001dd408:
      if ((int)pcVar38 != 7) {
        in_x15 = (mach_header *)((long)&in_x12[-1].sizeofcmds + 3);
      }
      in_ZR = (int)pcVar38 == 6;
code_r0x001dd420:
      if (!(bool)in_ZR) {
        in_x13 = in_x15;
      }
code_r0x001dd430:
      in_x12 = (mach_header *)&in_x12[-1].reserved;
      in_ZR = (int)pcVar38 == 4;
code_r0x001dd440:
      pmVar46 = in_x12;
      if (!(bool)in_ZR) {
        pmVar46 = pmVar47;
      }
code_r0x001dd448:
      iVar34 = (int)pcVar38;
      bVar14 = SBORROW4(iVar34,5);
      iVar35 = iVar34 + -5;
      bVar16 = iVar34 == 5;
code_r0x001dd44c:
      pmVar18 = in_x13;
      if (bVar16 || iVar35 < 0 != bVar14) {
        pmVar18 = pmVar46;
      }
code_r0x001dd450:
      break;
    case (mach_header *)0x1dd3bc:
      goto code_r0x001dd3bc;
    case (mach_header *)0x1dd3c8:
      goto code_r0x001dd3c8;
    case (mach_header *)0x1dd3e0:
      goto code_r0x001dd3e0;
    case (mach_header *)0x1dd3f8:
      goto code_r0x001dd3f8;
    case (mach_header *)0x1dd400:
      goto code_r0x001dd400;
    case (mach_header *)0x1dd404:
      goto code_r0x001dd404;
    case (mach_header *)0x1dd408:
      goto code_r0x001dd408;
    case (mach_header *)0x1dd420:
      goto code_r0x001dd420;
    case (mach_header *)0x1dd430:
      goto code_r0x001dd430;
    case (mach_header *)0x1dd440:
      goto code_r0x001dd440;
    case (mach_header *)0x1dd464:
      goto code_r0x001dd464;
    case (mach_header *)0x1dd484:
      goto code_r0x001dd484;
    case (mach_header *)0x1dd48c:
      goto code_r0x001dd48c;
    case (mach_header *)0x1dd494:
      goto code_r0x001dd494;
    case (mach_header *)0x1dd4bc:
code_r0x001dd4bc:
    case (mach_header *)0x1dd4c0:
      pmVar47 = (mach_header *)&UNK_00007453;
code_r0x001dd4c4:
      pmVar47 = (mach_header *)((ulong)pmVar47 & 0xffffffff0000ffff | 0x4b65726f0000);
code_r0x001dd4cc:
      pmVar47 = (mach_header *)((ulong)pmVar47 | 0x7469000000000000);
code_r0x001dd4e0:
      in_x12 = (mach_header *)0xd00000000000001a;
code_r0x001dd4e8:
      ppuVar19 = (undefined **)((ulong)in_x12 | 4);
code_r0x001dd4ec:
      bVar16 = (mach_header *)pcVar38 == (mach_header *)((long)&MACH_HEADER.magic + 1);
code_r0x001dd4f0:
      if (!bVar16) {
        ppuVar19 = (undefined **)pmVar47;
      }
code_r0x001dd4f8:
      pmVar18 = (mach_header *)ppuVar19;
      break;
    case (mach_header *)0x1dd4c4:
      goto code_r0x001dd4c4;
    case (mach_header *)0x1dd4cc:
      goto code_r0x001dd4cc;
    case (mach_header *)0x1dd530:
      goto code_r0x001dd530;
    case (mach_header *)0x1dd538:
      goto code_r0x001dd538;
    case (mach_header *)0x1dd540:
      goto code_r0x001dd540;
    case (mach_header *)0x1dd554:
      goto code_r0x001dd554;
    case (mach_header *)0x1dd560:
      goto code_r0x001dd560;
    case (mach_header *)0x1dd590:
code_r0x001dd590:
      if ((int)unaff_x20 == 5) {
        return (mach_header *)(dword *)0x4d6b726f7774656e;
      }
code_r0x001dd598:
      if ((int)unaff_x20 != 6) {
        if ((int)unaff_x20 == 7) goto code_r0x001dd5b0;
        goto code_r0x001ddb3c;
      }
code_r0x001de004:
      ppuVar19 = (undefined **)0xd000000000000017;
code_r0x001de010:
      pmVar18 = (mach_header *)ppuVar19;
      break;
    case (mach_header *)0x1dd5b4:
      goto code_r0x001dd5b4;
    case (mach_header *)0x1dd5bc:
      goto code_r0x001dd5bc;
    case (mach_header *)0x1dd5cc:
      goto code_r0x001dd5cc;
    case (mach_header *)0x1dd5dc:
      goto code_r0x001dd5dc;
    case (mach_header *)0x1dd5ec:
      goto code_r0x001dd5ec;
    case (mach_header *)0x1dd604:
      goto code_r0x001dd604;
    case (mach_header *)0x1dd62c:
      goto code_r0x001dd62c;
    case (mach_header *)0x1dd630:
      goto code_r0x001dd630;
    case (mach_header *)0x1dd634:
      goto code_r0x001dd634;
    case (mach_header *)0x1dd63c:
      goto code_r0x001dd63c;
    case (mach_header *)0x1dd648:
      goto code_r0x001dd648;
    case (mach_header *)0x1dd65c:
      goto code_r0x001dd65c;
    case (mach_header *)0x1dd66c:
      goto code_r0x001dd66c;
    case (mach_header *)0x1dd684:
      goto code_r0x001dd684;
    case (mach_header *)0x1dd694:
      goto code_r0x001dd694;
    case (mach_header *)0x1dd698:
      goto code_r0x001dd698;
    case (mach_header *)0x1dd6ac:
      goto code_r0x001dd6ac;
    case (mach_header *)0x1dd6b4:
code_r0x001dd6b4:
code_r0x001de1bc:
      pmVar18 = (mach_header *)0xd00000000000001d;
      break;
    case (mach_header *)0x1dd6bc:
      goto code_r0x001dd6bc;
    case (mach_header *)0x1dd6cc:
      goto code_r0x001dd6cc;
    case (mach_header *)0x1dd6e4:
      goto code_r0x001dd6e4;
    case (mach_header *)0x1dd700:
      goto code_r0x001dd700;
    case (mach_header *)0x1dd704:
      goto code_r0x001dd704;
    case (mach_header *)0x1dd710:
      goto code_r0x001dd710;
    case (mach_header *)0x1dd720:
      goto code_r0x001dd720;
    case (mach_header *)0x1dd724:
      goto code_r0x001dd724;
    case (mach_header *)0x1dd72c:
      goto code_r0x001dd72c;
    case (mach_header *)0x1dd730:
      goto code_r0x001dd730;
    case (mach_header *)0x1dd734:
      goto code_r0x001dd734;
    case (mach_header *)0x1dd740:
      goto code_r0x001dd740;
    case (mach_header *)0x1dd750:
      goto code_r0x001dd750;
    case (mach_header *)0x1dd76c:
      goto code_r0x001dd76c;
    case (mach_header *)0x1dd7a8:
      goto code_r0x001dd7a8;
    case (mach_header *)0x1dd800:
      goto code_r0x001dd800;
    case (mach_header *)0x1dd808:
      goto code_r0x001dd808;
    case (mach_header *)0x1dd810:
      goto code_r0x001dd810;
    case (mach_header *)0x1dd818:
      goto code_r0x001dd818;
    case (mach_header *)0x1dd820:
      goto code_r0x001dd820;
    case (mach_header *)0x1dd828:
      goto code_r0x001dd828;
    case (mach_header *)0x1dd848:
      goto code_r0x001dd848;
    case (mach_header *)0x1dd864:
      goto code_r0x001dd864;
    case (mach_header *)0x1ddc54:
      goto code_r0x001ddc54;
    case (mach_header *)0x1ddc6c:
      goto code_r0x001ddc6c;
    case (mach_header *)0x1ddc84:
code_r0x001ddc84:
      pcVar43 = (char *)0x614264616f6c6572;
      goto code_r0x001ddf70;
    case (mach_header *)0x1ddc9c:
code_r0x001ddc9c:
      pcVar38 = (char *)((ulong)&((mach_header *)((long)pcVar38 + 0x1a0))->ncmds |
                        0x8000000000000000);
      pcVar43 = (char *)&unaff_x19[-1].flags;
      goto code_r0x001ddf70;
    case (mach_header *)0x1ddcb4:
code_r0x001ddcb4:
      pmVar18 = (mach_header *)0x7472657373416441;
      break;
    case (mach_header *)0x1ddccc:
code_r0x001ddccc:
code_r0x001dde1c:
      pmVar18 = (mach_header *)0xd000000000000021;
      break;
    case (mach_header *)0x1ddce4:
code_r0x001ddce4:
      goto code_r0x001dd7f4;
    case (mach_header *)0x1ddcfc:
code_r0x001ddcfc:
      goto code_r0x001ddd00;
    case (mach_header *)0x1ddd14:
      goto code_r0x001ddd14;
    case (mach_header *)0x1ddd2c:
code_r0x001ddd2c:
code_r0x001dddb0:
      pmVar18 = (mach_header *)0xd00000000000001b;
      break;
    case (mach_header *)0x1dde44:
      goto code_r0x001dde44;
    case (mach_header *)0x1dde64:
code_r0x001dde64:
      goto code_r0x001de19c;
    case (mach_header *)0x1dde70:
code_r0x001dde70:
code_r0x001dde7c:
      pmVar18 = (mach_header *)0x6c615778696d6552;
      break;
    case (mach_header *)0x1dde7c:
      goto code_r0x001dde7c;
    case (mach_header *)0x1dde9c:
      goto code_r0x001dde9c;
    case (mach_header *)0x1ddea8:
      goto code_r0x001ddea8;
    case (mach_header *)0x1ddec8:
code_r0x001ddec8:
      pmVar18 = (mach_header *)0xd000000000000012;
      break;
    case (mach_header *)0x1ddee8:
      goto code_r0x001ddee8;
    case (mach_header *)0x1ddf08:
      goto code_r0x001ddf08;
    case (mach_header *)0x1ddf28:
      goto code_r0x001ddf28;
    case (mach_header *)0x1ddf34:
      goto code_r0x001ddf34;
    case (mach_header *)0x1ddfd0:
code_r0x001ddfd8:
      ppuVar19 = (undefined **)&UNK_00004954;
code_r0x001ddfe4:
      pmVar18 = (mach_header *)((ulong)ppuVar19 & 0xffff | 0x6669746f4e560000);
      break;
    case (mach_header *)0x1ddff4:
      goto code_r0x001de004;
    case (mach_header *)0x1de014:
code_r0x001de01c:
      ppuVar19 = (undefined **)0x756f6c43;
code_r0x001de02c:
      pmVar18 = (mach_header *)((ulong)ppuVar19 & 0xffffffff | 0x6363416400000000);
      break;
    case (mach_header *)0x1de038:
      ppuVar19 = (undefined **)0x70616e53;
code_r0x001de050:
      pmVar18 = (mach_header *)((ulong)ppuVar19 & 0xffffffff | 0x656b6f5400000000);
      break;
    case (mach_header *)0x1de05c:
      ppuVar19 = (undefined **)&UNK_00006946;
    case (mach_header *)0x1de070:
      pmVar18 = (mach_header *)((ulong)ppuVar19 & 0xffff | 0x7375696c65640000);
      break;
    case (mach_header *)0x1de080:
    case (mach_header *)0x1de088:
code_r0x001dd7f4:
      pcVar38 = (char *)((long)&MACH_HEADER.flags + 2);
code_r0x001dd800:
      ppuVar19 = (undefined **)(((ulong)pcVar38 | 0xd000000000000000) - 5);
code_r0x001dd808:
      pmVar18 = (mach_header *)ppuVar19;
      break;
    case (mach_header *)0x1de08c:
    case (mach_header *)0x1de094:
      ppuVar19 = (undefined **)0x6d726548;
code_r0x001de0a0:
      pmVar18 = (mach_header *)((ulong)ppuVar19 & 0xffffffff | 0x7544646f00000000);
      break;
    case (mach_header *)0x1de0a0:
      goto code_r0x001de0a0;
    case (mach_header *)0x1de0ac:
      ppuVar19 = (undefined **)0x534f43;
    case (mach_header *)0x1de0b8:
      pmVar18 = (mach_header *)ppuVar19;
      break;
    case (mach_header *)0x1de0bc:
code_r0x001de0c4:
      ppuVar19 = (undefined **)0xd000000000000010;
    case (mach_header *)0x1de0d8:
      pmVar18 = (mach_header *)ppuVar19;
      break;
    case (mach_header *)0x1de0dc:
    case (mach_header *)0x1de0e4:
    case (mach_header *)0x1de100:
code_r0x001de100:
      pmVar18 = (mach_header *)0x7974697275636553;
      break;
    case (mach_header *)0x1de0f0:
      goto code_r0x001de100;
    case (mach_header *)0x1de114:
      ppuVar19 = (undefined **)&UNK_00006146;
    case (mach_header *)0x1de124:
      pmVar18 = (mach_header *)((ulong)ppuVar19 & 0xffff | 0x6543796c696d0000);
      break;
    case (mach_header *)0x1de134:
      goto code_r0x001de1bc;
    case (mach_header *)0x1de140:
      pmVar18 = (mach_header *)0x574353;
      break;
    case (mach_header *)0x1de310:
      unaff_x20 = (mach_header *)ppuVar19;
      goto code_r0x00778468;
    case (mach_header *)0x1de5fc:
code_r0x001de5fc:
      *(mach_header **)((long)ppmVar13 + -0x20) = unaff_x20;
      *(mach_header **)((long)ppmVar13 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppmVar13 + -0x10) = &stack0xfffffffffffffff0;
      *(undefined8 *)((long)ppmVar13 + -8) = unaff_x30;
      uVar37 = (uint)param_2;
      if ((uVar32 & 0xff) == 1 || ((ulong)param_3 & 0xff) == 0) {
        if (((ulong)param_3 & 0xff) == 0) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF(param_2);
          return param_2;
        }
        __ss6HasherV8_combineyySuF(5);
        uVar36 = uVar37 & 0xff;
        pmVar50 = (mach_header *)0xeb00000000646565;
        uVar48 = 0x4673646e65697266;
        pmVar47 = (mach_header *)0xed00006465654674;
        uVar44 = 0x6867696c746f7073;
        if (uVar36 != 3) {
          pmVar47 = (mach_header *)0xe700000000000000;
          uVar44 = 0x6e776f6e6b6e75;
        }
        uVar52 = 0x79726f7473;
        if (uVar36 != 2) {
          uVar52 = uVar44;
        }
        pmVar46 = (mach_header *)0xe500000000000000;
        if (uVar36 != 2) {
          pmVar46 = pmVar47;
        }
        pmVar47 = (mach_header *)0xe300000000000000;
        uVar44 = 0x70616d;
      }
      else {
        if ((uVar32 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x001f0968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)param_2[0x3f3cd].flags * 4 + 0x1f096c))();
          return pmVar18;
        }
        __ss6HasherV8_combineyySuF(10);
        uVar36 = uVar37 & 0xff;
        pmVar50 = (mach_header *)0xe900000000000064;
        uVar48 = 0x6565466f54646461;
        uVar44 = 0x6574496863746566;
        pmVar47 = (mach_header *)0xea0000000000736d;
        if (uVar36 != 3) {
          uVar44 = 0xd000000000000013;
          pmVar47 = (mach_header *)0x80000000008bdf20;
        }
        uVar52 = 0x646565466e497369;
        if (uVar36 != 2) {
          uVar52 = uVar44;
        }
        pmVar46 = (mach_header *)0xe800000000000000;
        if (uVar36 != 2) {
          pmVar46 = pmVar47;
        }
        pmVar47 = (mach_header *)0xee00646565466d6f;
        uVar44 = 0x724665766f6d6572;
      }
      if (((ulong)param_2 & 0xff) != 0) {
        pmVar50 = pmVar47;
        uVar48 = uVar44;
      }
      param_2 = pmVar46;
      if ((uVar37 & 0xff) < 2) {
        param_2 = pmVar50;
        uVar52 = uVar48;
      }
      __sSS4hash4intoys6HasherVz_tF(pmVar18,uVar52,param_2);
      goto code_r0x0077b234;
    case (mach_header *)0x1de9b8:
      goto code_r0x001de9b8;
    case (mach_header *)0x1de9dc:
      goto code_r0x001de9dc;
    case (mach_header *)0x1de9fc:
      if (((!(bool)in_ZR) || (param_3 != (dword *)0x0)) || ((uVar33 & 0xff) != 0x98)) {
        if ((unaff_x19 == (mach_header *)((long)&MACH_HEADER.magic + 2)) &&
           (param_3 == (dword *)0x0)) goto code_r0x001dea88;
        goto code_r0x001deb20;
      }
      uVar44 = 3;
      goto code_r0x001dec8c;
    case (mach_header *)0x1dea1c:
code_r0x001dea1c:
      __ss6HasherV8_combineyySuF(0);
      goto code_r0x001de7a0;
    case (mach_header *)0x1dea3c:
      unaff_x19 = (mach_header *)&MACH_HEADER.cpusubtype;
      goto code_r0x001de7a0;
    case (mach_header *)0x1dea68:
      if (uVar37 < 0x82) {
        if (uVar37 != 0x80) goto code_r0x001deab4;
        goto code_r0x001dec90;
      }
      if (uVar37 != 0x82) goto code_r0x001deaf8;
code_r0x001deaf0:
      unaff_x19 = (mach_header *)((long)&MACH_HEADER.magic + 2);
code_r0x001de7a0:
      __ss6HasherV8_combineyySuF();
      return unaff_x19;
    case (mach_header *)0x1dea88:
code_r0x001dea88:
      if ((uVar33 & 0xff) == 0x98) {
        uVar44 = 0xf;
      }
      else {
code_r0x001deb20:
        if (((unaff_x19 == (mach_header *)((long)&MACH_HEADER.magic + 3)) &&
            (param_3 == (dword *)0x0)) && ((uVar33 & 0xff) == 0x98)) {
          uVar44 = 0x11;
        }
        else {
          uVar44 = 0x1d;
        }
      }
code_r0x001dec8c:
      __ss6HasherV8_combineyySuF(uVar44);
code_r0x001dec90:
      unaff_x19 = (mach_header *)0x0;
      goto code_r0x001de7a0;
    case (mach_header *)0x1deaa4:
      if (unaff_x19 != (mach_header *)((long)&MACH_HEADER.magic + 1) ||
          unaff_x21 != (mach_header *)0x0) goto code_r0x001dead0;
      goto code_r0x001deaf0;
    case (mach_header *)0x1deab8:
code_r0x001deab8:
      unaff_x19 = (mach_header *)ppuVar19;
      goto code_r0x001de7a0;
    case (mach_header *)0x1e25b8:
      uVar36 = (uint)(byte)((mach_header *)ppuVar19)->magic;
      uVar37 = uVar36 - 2;
      if (uVar36 < 2) {
        uVar37 = 0xffffffff;
      }
      pcVar38 = (char *)(ulong)uVar37;
code_r0x001e25f8:
      return (mach_header *)(ulong)((int)pcVar38 + 1);
    case (mach_header *)0x1e25f8:
      goto code_r0x001e25f8;
    case (mach_header *)0x1e26f8:
      cVar6 = *(char *)((long)&((mach_header *)ppuVar19)->magic + 1);
      if (cVar6 == '\0') {
        uVar37 = (uint)(byte)((mach_header *)ppuVar19)->magic;
        iVar35 = uVar37 - 5;
        if (uVar37 < 5) {
          iVar35 = -1;
        }
        return (mach_header *)(ulong)(iVar35 + 1);
      }
      return (mach_header *)(ulong)(CONCAT11(cVar6,(char)((mach_header *)ppuVar19)->magic) - 4);
    case (mach_header *)0x1e4d7c:
      return (mach_header *)pcVar43;
    case (mach_header *)0x1e5fe4:
code_r0x001e5fe4:
      if ((uint)pcVar38 != 0) {
        pcVar43 = (char *)in_x13;
        pmVar47 = in_x14;
      }
      param_2 = (mach_header *)pcVar49;
      if ((uint)pcVar38 < 2) {
        param_2 = (mach_header *)pcVar43;
        in_x12 = pmVar47;
      }
      __sSS4hash4intoys6HasherVz_tF(unaff_x20,in_x12,param_2);
      goto code_r0x0077b234;
    case (mach_header *)0x1e67dc:
      pdVar17 = &((mach_header *)((long)ppuVar19 + 0x880))->flags;
      _swift_getWitnessTable(pdVar17,&UNK_009b9c88);
      pdRam0000000000af53b8 = pdVar17;
      return (mach_header *)pdVar17;
    case (mach_header *)0x1e8fbc:
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1ea13c:
code_r0x001ea13c:
      pcVar43 = (char *)((ulong)((long)pcVar43 + -0x20) | 0x8000000000000000);
      in_ZR = (int)pcVar38 == 1;
      pcVar38 = (char *)0x4264657469736976;
      if (!(bool)in_ZR) {
        pcVar38 = (char *)0xd000000000000010;
      }
      pmVar47 = (mach_header *)((long)&MACH_HEADER.cpusubtype + 1);
code_r0x001ea168:
      pcVar49 = section_00000068.sectname + 8;
code_r0x001ea16c:
      pmVar18 = (mach_header *)((ulong)pcVar49 | 0xe900000000000000 | (ulong)pmVar47);
      if (!(bool)in_ZR) {
        pmVar18 = (mach_header *)pcVar43;
      }
      *(char **)&((mach_header *)((long)ppuVar19 + 0x20))->ncmds = pcVar38;
      *(mach_header **)&((mach_header *)((long)ppuVar19 + 0x20))->flags = pmVar18;
      uVar44 = 0xae6938;
      func_0x000115a8(0xae6938,&UNK_007cdb30);
      uVar48 = uVar44;
      func_0x0002f390();
      pdVar17 = (dword *)((long)&segment_command_00000020.cmd + 3);
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar44,uVar48);
      _swift_release(unaff_x19);
      return (mach_header *)pdVar17;
    case (mach_header *)0x1ea16c:
      goto code_r0x001ea16c;
    case (mach_header *)0x1ea19c:
code_r0x001ea19c:
      pmVar47 = (mach_header *)((ulong)pmVar47 & 0xffffffff0000ffff | 0x756d726157700000);
      pcVar49 = (char *)0xd000000000000010;
code_r0x001ea1c8:
code_r0x001ea1cc:
      in_x14 = (mach_header *)pcVar49;
      if ((int)pcVar43 != 0x22) {
        in_x14 = (mach_header *)0x746361655270614d;
      }
code_r0x001ea1f8:
      if ((uint)pcVar43 != 0x20) {
        pmVar47 = (mach_header *)((ulong)pcVar49 | 1);
      }
      if ((uint)pcVar43 < 0x22) {
        in_x14 = pmVar47;
      }
      return in_x14;
    case (mach_header *)0x1ea1cc:
      goto code_r0x001ea1cc;
    case (mach_header *)0x1ea29c:
      pmVar46 = in_x13;
      if (!(bool)in_ZR) {
        pmVar46 = pmVar47;
      }
      bVar15 = SBORROW4(uVar37,0x41);
      bVar16 = (int)(uVar37 - 0x41) < 0;
      bVar14 = uVar37 == 0x41;
      goto LAB_001ea33c;
    case (mach_header *)0x1ea2cc:
      in_x12 = (mach_header *)0x6853654d7261654e;
      if (uVar37 != 0x62) {
        in_x12 = (mach_header *)0x6f72506563616c50;
      }
      if (uVar37 != 0x60) {
        pmVar46 = (mach_header *)0xd000000000000010;
      }
      bVar15 = SBORROW4(uVar37,0x61);
      bVar16 = (int)(uVar37 - 0x61) < 0;
      bVar14 = uVar37 == 0x61;
      goto LAB_001ea33c;
    case (mach_header *)0x1ea7b4:
      pdVar17 = (dword *)*ppuVar19;
      uVar52._0_4_ = ((mach_header *)ppuVar19)->cpusubtype;
      uVar52._4_4_ = ((mach_header *)ppuVar19)->filetype;
      FUN_001eb2b8(pdVar17,uVar52);
      *(char *)&((mach_header *)pcVar38)->magic = (char)pdVar17;
      return (mach_header *)pdVar17;
    case (mach_header *)0x1eaffc:
      if (uVar45 < 6) {
        if (uVar45 == 4) {
          if (uVar36 < 0x42) {
            if (uVar36 == 0x40) {
              if (uVar37 == 0x40) {
                return (mach_header *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar37 == 0x41) {
              return (mach_header *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar36 == 0x42) {
            if (uVar37 == 0x42) {
              return (mach_header *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar37 == 0x43) {
            return (mach_header *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar36 < 0x52) {
          if (uVar36 == 0x50) {
            if (uVar37 == 0x50) {
              return (mach_header *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar37 == 0x51) {
            return (mach_header *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar36 == 0x52) {
          if (uVar37 == 0x52) {
            return (mach_header *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar37 == 0x53) {
          return (mach_header *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar45 == 6) {
        if (uVar36 < 0x62) {
          if (uVar36 == 0x60) {
            if (uVar37 == 0x60) {
              return (mach_header *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar37 == 0x61) {
            return (mach_header *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar36 == 0x62) {
          if (uVar37 == 0x62) {
            return (mach_header *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar37 == 99) {
          return (mach_header *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar45 == 7) {
        if (uVar36 < 0x72) {
          if (uVar36 == 0x70) {
            if (uVar37 == 0x70) {
              return (mach_header *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar37 == 0x71) {
            return (mach_header *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar36 == 0x72) {
          if (uVar37 == 0x72) {
            return (mach_header *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar37 == 0x73) {
          return (mach_header *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar36 == 0x80) {
        if (uVar37 == 0x80) {
          return (mach_header *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar36 == 0x81) {
        if (uVar37 == 0x81) {
          return (mach_header *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar37 == 0x82) {
        return (mach_header *)((long)&MACH_HEADER.magic + 1);
      }
      return (mach_header *)(dword *)0x0;
    case (mach_header *)0x1f5878:
      unaff_x20 = (mach_header *)ppuVar19;
code_r0x00778468:
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)();
      return unaff_x20;
    case (mach_header *)0x1f5c64:
      cVar6 = cRam6572706d49707051;
      cVar31 = (char)((mach_header *)ppuVar19)->ncmds;
SUB_00089d04:
      cRam6572706d49707051 = cVar6;
      if (cVar31 != '\x01') {
        return (mach_header *)pcVar38;
      }
      goto code_r0x0077b234;
    case (mach_header *)0x1f5ccc:
      uVar44._0_4_ = param_2->magic;
      uVar44._4_4_ = param_2->cputype;
      uVar48._0_4_ = param_2->cpusubtype;
      uVar48._4_4_ = param_2->filetype;
      uVar7 = (undefined1)param_2->ncmds;
      func_0x00089a44(uVar44,uVar48,uVar7);
      param_2 = *(mach_header **)&unaff_x19->cpusubtype;
      unaff_x19->magic = (undefined4)uVar44;
      unaff_x19->cputype = uVar44._4_4_;
      unaff_x19->cpusubtype = (undefined4)uVar48;
      unaff_x19->filetype = uVar48._4_4_;
      dVar10 = unaff_x19->ncmds;
      *(undefined1 *)&unaff_x19->ncmds = uVar7;
      pcVar38 = (char *)*(mach_header **)unaff_x19;
      cVar6 = cRam6572706d49707051;
      cVar31 = (char)dVar10;
      goto SUB_00089d04;
    case (mach_header *)0x1f60d0:
      if ((bool)in_ZR) {
        uVar9 = *(ushort *)((long)&((mach_header *)ppuVar19)->magic + 1);
        uVar37 = (uint)uVar9;
        if (uVar9 == 0) {
LAB_001f6110:
          uVar37 = (uint)(byte)((mach_header *)ppuVar19)->magic;
          iVar35 = uVar37 - 5;
          if (uVar37 < 5) {
            iVar35 = -1;
          }
          return (mach_header *)(ulong)(iVar35 + 1);
        }
      }
      else {
        uVar37 = (uint)*(byte *)((long)&((mach_header *)ppuVar19)->magic + 1);
        if (uVar37 == 0) goto LAB_001f6110;
      }
      pcVar38 = (char *)(ulong)((uint)(byte)((mach_header *)ppuVar19)->magic | uVar37 << 8);
code_r0x001f60fc:
      return (mach_header *)(ulong)((int)pcVar38 - 4);
    case (mach_header *)0x1f64bc:
      if (pdRam0000000000af6c10 == (dword *)0x0) {
        pdVar17 = (dword *)&UNK_007e8b30;
        _swift_getWitnessTable(&UNK_007e8b30,&UNK_009bc1f8);
        pdRam0000000000af6c10 = pdVar17;
        return (mach_header *)pdVar17;
      }
      return (mach_header *)pdRam0000000000af6c10;
    case (mach_header *)0x1f6848:
      uVar39 = (ulong)pmVar47 | 0xea00000000000000;
      uVar44 = 0x6f4a74696d627573;
      if (uVar36 != 3) {
        uVar39 = 0x80000000008bc790;
        uVar44 = 0xd000000000000015;
      }
      uVar41 = 0x80000000008bc7b0;
      uVar48 = 0xd000000000000023;
      if (uVar36 != 2) {
        uVar41 = uVar39;
        uVar48 = uVar44;
      }
      pcVar49 = "registerSystemJobProviders";
      if (uVar36 != 0) {
        pcVar49 = "ticatedJobProviders";
      }
      if (uVar36 < 2) {
        uVar48 = 0xd00000000000001a;
        uVar41 = (ulong)pcVar49 | 0x8000000000000000;
      }
      ((mach_header *)pcVar38)->magic = (int)uVar48;
      ((mach_header *)pcVar38)->cputype = (int)((ulong)uVar48 >> 0x20);
      ((mach_header *)pcVar38)->cpusubtype = (int)uVar41;
      ((mach_header *)pcVar38)->filetype = (int)(uVar41 >> 0x20);
      return (mach_header *)ppuVar19;
    case (mach_header *)0x1f80f4:
      _objc_msgSendSuper2(&pmStack_50);
      pmVar18 = pmVar20;
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
      return pmVar18;
    case (mach_header *)0x1f94d8:
      func_0x001f9360();
      _objc_release();
      return unaff_x20;
    case (mach_header *)0x1f9cf8:
      FUN_001fc794();
      _objc_release(ppuVar19);
      return pmVar18;
    case (mach_header *)0x1fa42c:
      goto code_r0x001fa42c;
    case (mach_header *)0x1fa4fc:
      goto LAB_001fa4fc;
    case (mach_header *)0x1fcd28:
      return (mach_header *)(ulong)*(byte *)((long)&((mach_header *)pcVar38)->magic + _DAT_00af7430)
      ;
    case (mach_header *)0x1fd328:
      pcVar38 = (char *)((long)&((mach_header *)pcVar38)->magic +
                        (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f40);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f48);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6f50->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f58);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f60);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f68);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f70);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f78);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f80);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f88);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f90);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f98);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fa0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fa8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fb0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fb8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fc0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fc8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6fd0->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fd8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fe0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6fe8->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ff0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ff8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7000);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7008);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7010);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7018);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7020);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7028);
      pcVar38[0] = '\0';
      puVar11 = PTR_s_init_00abbf70;
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pmStack_50 = (mach_header *)ppuVar19;
      _objc_retain();
      _objc_msgSendSuper2(&pmStack_50,puVar11);
      return (mach_header *)pdVar17;
    case (mach_header *)0x1fdd20:
code_r0x001fdd20:
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + *(long *)((long)pcVar38 + 0xf80))
      ;
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f88);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f90);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f98);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fa0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fa8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fb0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fb8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fc0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fc8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6fd0->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fd8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fe0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6fe8->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ff0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ff8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7000);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7008);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7010);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7018);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7020);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7028);
      pcVar38[0] = '\0';
      puVar11 = PTR_s_init_00abbf70;
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pmStack_50 = (mach_header *)ppuVar19;
      _objc_retain();
      _objc_msgSendSuper2(&pmStack_50,puVar11);
      return (mach_header *)pdVar23;
    case (mach_header *)0x20214c:
      FUN_0020392c();
      _objc_allocWithZone();
      *(char *)((long)&pmVar18->magic + _DAT_00af6ed0) = '!';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6ed8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6ee0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6ee8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6ef0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)0xaf6000;
      unaff_x19 = (mach_header *)ppuVar19;
code_r0x002021a8:
      pcVar38 = (char *)((long)&pmVar18->magic +
                        *(long *)&((mach_header *)((long)pcVar38 + 0xee0))->flags);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)_DAT_00af6f00;
code_r0x002021b8:
      pcVar38 = (char *)((long)&((mach_header *)pcVar38)->magic + (long)&pmVar18->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f08);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f10);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f18);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f20);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f28);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f30);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f38);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f40);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f48);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6f50->magic + (long)&pmVar18->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f58);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f60);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f68);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f70);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)0xaf6000;
code_r0x00202268:
      pcVar38 = (char *)((long)&pmVar18->magic +
                        *(long *)&((mach_header *)((long)pcVar38 + 0xf60))->flags);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f80);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f88);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f90);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6f98);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6fa0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6fa8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6fb0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6fb8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6fc0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6fc8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6fd0->magic + (long)&pmVar18->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6fd8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      *(mach_header **)((long)&pmVar18->magic + _DAT_00af6fe0) = unaff_x19;
      pcVar38 = (char *)((long)&_DAT_00af6fe8->magic + (long)&pmVar18->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6ff0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af6ff8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7000);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7008);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7010);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
code_r0x00202354:
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7018);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7020);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&pmVar18->magic + _DAT_00af7028);
      pcVar38[0] = '\0';
      puVar11 = PTR_s_init_00abbf70;
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pmStack_50 = pmVar18;
      _objc_retain(unaff_x19);
      _objc_msgSendSuper2(&pmStack_50,puVar11);
      return (mach_header *)pdVar26;
    case (mach_header *)0x202428:
      pcVar38 = (char *)((long)&((mach_header *)pcVar38)->magic +
                        (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f10);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f18);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f20);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f28);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f30);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f38);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f40);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f48);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)_DAT_00af6f50;
code_r0x00202494:
      pcVar38 = (char *)((long)&((mach_header *)pcVar38)->magic +
                        (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f58);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
code_r0x002024a4:
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f60);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f68);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f70);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f78);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f80);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f88);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f90);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f98);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fa0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fa8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fb0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fb8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fc0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fc8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)_DAT_00af6fd0;
code_r0x00202554:
      pcVar38 = (char *)((long)&((mach_header *)pcVar38)->magic +
                        (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fd8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)0xaf6000;
    case (mach_header *)0x202568:
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + *(long *)((long)pcVar38 + 0xfe0))
      ;
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)_DAT_00af6fe8;
code_r0x00202578:
      *(mach_header **)
       ((long)&((mach_header *)pcVar38)->magic + (long)&((mach_header *)ppuVar19)->magic) =
           unaff_x19;
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ff0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ff8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7000);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7008);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7010);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7018);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7020);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7028);
      pcVar38[0] = '\0';
      puVar11 = PTR_s_init_00abbf70;
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pmStack_50 = (mach_header *)ppuVar19;
      _objc_retain();
      _objc_msgSendSuper2(&pmStack_50,puVar11);
      return (mach_header *)pdVar27;
    case (mach_header *)0x202578:
      goto code_r0x00202578;
    case (mach_header *)0x202628:
      _objc_allocWithZone();
      *(char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ed0) = '#';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ed8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ee0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ee8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ef0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ef8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6f00->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f08);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f10);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f18);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f20);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f28);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f30);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f38);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f40);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f48);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6f50->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f58);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f60);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f68);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f70);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f78);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f80);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f88);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f90);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6f98);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fa0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fa8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fb0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fb8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fc0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fc8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6fd0->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fd8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6fe0);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&_DAT_00af6fe8->magic + (long)&((mach_header *)ppuVar19)->magic);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      *(mach_header **)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ff0) = unaff_x19;
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af6ff8);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7000);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7008);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7010);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7018);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7020);
      pcVar38[0] = '\0';
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pcVar38 = (char *)((long)&((mach_header *)ppuVar19)->magic + _DAT_00af7028);
      pcVar38[0] = '\0';
      puVar11 = PTR_s_init_00abbf70;
      pcVar38[1] = '\0';
      pcVar38[2] = '\0';
      pcVar38[3] = '\0';
      pcVar38[4] = '\0';
      pcVar38[5] = '\0';
      pcVar38[6] = '\0';
      pcVar38[7] = '\0';
      pmStack_50 = (mach_header *)ppuVar19;
      _objc_retain();
      _objc_msgSendSuper2(&pmStack_50,puVar11);
      return (mach_header *)pdVar28;
    case (mach_header *)0x204c58:
      return (mach_header *)ppuVar19;
    case (mach_header *)0x204db8:
      bVar8 = *(byte *)((long)&((mach_header *)pcVar38)->magic +
                       (long)&((mach_header *)ppuVar19)->magic);
      if (bVar8 < 2) {
        if (bVar8 != 0) {
          param_3 = param_4;
        }
      }
      else {
        param_3 = param_5;
        if ((bVar8 != 2) && (param_3 = param_6, bVar8 != 3)) {
          param_3 = param_7;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00204df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 4))(param_3);
      return (mach_header *)param_3;
    case (mach_header *)0x205ff8:
      return (mach_header *)ppuVar19;
    case (mach_header *)0x21d1a4:
code_r0x0021d1a4:
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_0099b978)();
      return (mach_header *)ppuVar19;
    case (mach_header *)0x21d31c:
LAB_0021d31c:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x21d320);
      (*pcVar12)();
    }
    break;
  case 0x18:
    if (((ulong)param_2 & 0xff00) != 0x100) {
      pcVar38 = (char *)((ulong)param_2 & 0xff);
      goto code_r0x001dd4bc;
    }
    bVar16 = param_1 < (mach_header *)((long)&MACH_HEADER.magic + 3);
    uVar39 = (long)(char)param_2 + (ulong)!bVar16;
    if ((long)-uVar39 < 0 != SCARRY8(~uVar39,(ulong)bVar16)) {
      bVar16 = param_1 < (mach_header *)((long)&MACH_HEADER.cputype + 1);
      uVar39 = (long)(char)param_2 + (ulong)!bVar16;
      if ((long)-uVar39 < 0 == SCARRY8(~uVar39,(ulong)bVar16)) {
        if (param_1 == (mach_header *)((long)&MACH_HEADER.magic + 3) && ((ulong)param_2 & 0xff) == 0
           ) {
          return (mach_header *)(dword *)0x65724349416e6547;
        }
        return (mach_header *)(dword *)0x73746e6f464941;
      }
      if (param_1 == (mach_header *)((long)&MACH_HEADER.cputype + 1) && ((ulong)param_2 & 0xff) == 0
         ) {
        return (mach_header *)(dword *)0x6f6d6552736e654c;
      }
      goto code_r0x001ddec8;
    }
    if (param_1 == (mach_header *)0x0 && ((ulong)param_2 & 0xff) == 0) goto code_r0x001dde70;
    if (param_1 == (mach_header *)((long)&MACH_HEADER.magic + 1) && ((ulong)param_2 & 0xff) == 0)
    goto code_r0x001dd990;
    ppuVar19 = (undefined **)0x726553746550;
code_r0x001dde9c:
    ppuVar19 = (undefined **)((ulong)ppuVar19 & 0xffffffffffff | 0x6976000000000000);
code_r0x001ddea8:
    pmVar18 = (mach_header *)ppuVar19;
    break;
  case 0x19:
    FUN_001f36f0();
    pmVar18 = param_1;
    break;
  case 0x1a:
code_r0x001dd48c:
    uVar37 = (uint)ppuVar19 & 0xff;
    pcVar38 = (char *)(ulong)uVar37;
    in_ZR = uVar37 == 3;
code_r0x001dd494:
    if (!(bool)in_ZR) {
      if ((int)pcVar38 == 4) {
code_r0x001de23c:
        return (mach_header *)(dword *)0x73676e6974746553;
      }
      unaff_x19 = (mach_header *)0xd00000000000001a;
      pcVar38 = (char *)(mach_header *)0xae6940;
code_r0x001dd8dc:
      pmVar18 = (mach_header *)pcVar38;
      func_0x000115a8(pmVar18,&UNK_007da060);
      unaff_x20 = (mach_header *)ppuVar19;
code_r0x001dd8f4:
      _swift_allocObject();
      *(undefined8 *)&pmVar18->flags = 4;
      pmVar18->ncmds = 2;
      pmVar18->sizeofcmds = 0;
      pcVar38 = "DiscoverFeedNotificationProcessors";
code_r0x001dd90c:
      uVar39 = (ulong)&((mach_header *)((long)pcVar38 + 0x180))->ncmds | 0x8000000000000000;
      *(undefined1 **)(pmVar18 + 1) = (undefined1 *)((long)&unaff_x19[-1].flags + 1);
      pmVar18[1].cpusubtype = (int)uVar39;
      pmVar18[1].filetype = (int)(uVar39 >> 0x20);
      in_ZR = ((ulong)unaff_x20 & 0xff) == 0;
      pcVar38 = (char *)(ulong)((uint)unaff_x20 & 0xff);
code_r0x001dd924:
      ppuVar19 = (undefined **)pmVar18;
      if ((bool)in_ZR) {
        pcVar38 = (char *)0xeb00000000656764;
        goto code_r0x001ddc84;
      }
      if ((int)pcVar38 != 1) {
        pcVar38 = "DiscoverFeedNotificationProcessors";
        goto code_r0x001ddc9c;
      }
      pcVar38 = (char *)0xe90000000000006e;
code_r0x001dd93c:
      pcVar43 = (char *)0x6f63496863746566;
      ppuVar19 = (undefined **)pmVar18;
      goto code_r0x001ddf70;
    }
code_r0x001dd8c4:
code_r0x001ddd00:
    ppuVar19 = (undefined **)0xd000000000000018;
code_r0x001ddd14:
    pmVar18 = (mach_header *)ppuVar19;
    break;
  case 0x1b:
    FUN_001f55dc(param_1,param_2,uVar32 & 3);
    pmVar18 = param_1;
    break;
  case 0x1c:
code_r0x001dd334:
    pcVar38 = (char *)(ulong)((uint)ppuVar19 & 0xff);
code_r0x001dd338:
    if ((uint)pcVar38 < 3) {
code_r0x001dd340:
      pcVar43 = (char *)0x1a;
code_r0x001dd344:
      pcVar43 = (char *)((ulong)pcVar43 | 0xd000000000000000);
code_r0x001dd34c:
code_r0x001dd350:
code_r0x001dd358:
code_r0x001dd35c:
code_r0x001dd360:
code_r0x001dd364:
code_r0x001dd368:
      in_x12 = (mach_header *)((long)&MACH_HEADER.cputype + 1);
code_r0x001dd36c:
      in_x12 = (mach_header *)((ulong)pcVar43 | (ulong)in_x12);
code_r0x001dd370:
      in_x13 = (mach_header *)((long)&MACH_HEADER.flags + 2);
code_r0x001dd374:
      in_x13 = (mach_header *)((ulong)in_x13 & 0xffffffffffff | 0xd000000000000000);
code_r0x001dd380:
      if ((int)pcVar38 != 1) {
        in_x12 = in_x13;
      }
code_r0x001dd390:
      ppuVar19 = (undefined **)pcVar43;
      if ((int)pcVar38 != 0) {
        ppuVar19 = (undefined **)in_x12;
      }
code_r0x001dd39c:
code_r0x001dd3a0:
      return (mach_header *)ppuVar19;
    }
  case 0x3b:
code_r0x001dd63c:
code_r0x001dd648:
    pmVar47 = (mach_header *)((long)&MACH_HEADER.cputype + 1);
code_r0x001dd64c:
    pcVar49 = (char *)((long)&MACH_HEADER.flags + 2);
code_r0x001dd650:
    pcVar49 = (char *)((ulong)pcVar49 | 0xd000000000000000);
    pmVar47 = (mach_header *)((ulong)pcVar49 | (ulong)pmVar47);
code_r0x001dd658:
    goto code_r0x001dd65c;
  case 0x1d:
    uVar36 = uVar36 & 0xff;
    pcVar38 = (char *)(ulong)uVar36;
    in_OV = SBORROW4(uVar36,3);
    in_NG = (int)(uVar36 - 3) < 0;
    in_ZR = uVar36 == 3;
code_r0x001dd3ac:
    if (!(bool)in_ZR && in_NG == in_OV) goto code_r0x001dd3b0;
code_r0x001dd6bc:
code_r0x001dd6cc:
    pmVar47 = (mach_header *)0xd00000000000001a;
code_r0x001dd6d4:
    pcVar49 = (char *)((long)&pmVar47[-1].reserved + 2);
code_r0x001dd6e4:
    if ((int)pcVar38 != 2) {
      pcVar49 = (char *)&pmVar47[-1].reserved;
    }
code_r0x001dd700:
code_r0x001dd704:
    in_x13 = (mach_header *)((long)&pmVar47[-1].reserved + 3);
code_r0x001dd710:
    pmVar47 = (mach_header *)((long)&pmVar47[-1].flags + 2);
code_r0x001dd720:
    in_ZR = (int)pcVar38 == 0;
    pmVar46 = pmVar47;
  case 0x35:
code_r0x001dd724:
    pmVar47 = in_x13;
    if (!(bool)in_ZR) {
      pmVar47 = pmVar46;
    }
code_r0x001dd72c:
    iVar35 = (int)pcVar38;
    in_OV = SBORROW4(iVar35,1);
    in_NG = iVar35 + -1 < 0;
    in_ZR = iVar35 == 1;
code_r0x001dd730:
    ppuVar19 = (undefined **)pcVar49;
    if ((bool)in_ZR || in_NG != in_OV) {
      ppuVar19 = (undefined **)pmVar47;
    }
code_r0x001dd734:
    pmVar18 = (mach_header *)ppuVar19;
    break;
  case 0x1e:
    if ((uVar36 & 0xff) == 5) goto code_r0x001dd844;
    if ((uVar36 & 0xff) == 6) goto code_r0x001dd1d0;
code_r0x001dd848:
    ppuVar19 = (undefined **)0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    unaff_x19 = param_1;
code_r0x001dd864:
    param_1 = (mach_header *)ppuVar19;
  case 0x2d:
    _swift_allocObject();
    *(undefined8 *)&param_1->flags = 4;
    param_1->ncmds = 2;
    param_1->sizeofcmds = 0;
    *(undefined **)(param_1 + 1) = &UNK_0000534a;
    param_1[1].cpusubtype = 0;
    param_1[1].filetype = 0xe2000000;
code_r0x001dd888:
    uVar37 = (uint)unaff_x19 & 0xff;
    pcVar38 = (char *)(ulong)uVar37;
    pmVar18 = param_1;
    if (uVar37 == 1 || ((ulong)unaff_x19 & 0xff) == 0) {
      pcVar43 = (char *)0xd00000000000001a;
      ppuVar19 = (undefined **)param_1;
code_r0x001ddc10:
      if ((int)pcVar38 == 0) {
        pcVar38 = "exposeUserJobProviderScope";
      }
      else {
        pcVar38 = "registerSystemJobProviders";
      }
      pcVar38 = (char *)((ulong)(pcVar38 + -0x20) | 0x8000000000000000);
    }
    else {
code_r0x001dd894:
      ppuVar19 = (undefined **)pmVar18;
      if ((int)pcVar38 == 2) {
        pcVar38 = "registerUnauthenticatedJobProviders";
code_r0x001ddf28:
        pcVar38 = (char *)((ulong)((long)pcVar38 + -0x20) | 0x8000000000000000);
        pcVar43 = (char *)((long)&MACH_HEADER.flags + 2);
code_r0x001ddf34:
        pcVar43 = (char *)(((ulong)pcVar43 | 0xd000000000000000) + 9);
      }
      else if ((int)pcVar38 == 3) {
        pcVar38 = (char *)0xea00000000007362;
code_r0x001dd8ac:
        pcVar43 = (char *)0x6f4a74696d627573;
        ppuVar19 = (undefined **)pmVar18;
      }
      else {
        pcVar38 = (char *)0x80000000008bc790;
        pcVar43 = (char *)0xd000000000000015;
      }
    }
code_r0x001ddf70:
    *(char **)&((mach_header *)((long)ppuVar19 + 0x20))->ncmds = pcVar43;
    *(char **)&((mach_header *)((long)ppuVar19 + 0x20))->flags = pcVar38;
    goto code_r0x001ddf74;
  case 0x1f:
code_r0x001dd038:
code_r0x001dd040:
    pmVar47 = (mach_header *)&UNK_00006f43;
code_r0x001dd044:
    pmVar47 = (mach_header *)((ulong)pmVar47 & 0xffffffff0000ffff | 0x706d0000);
code_r0x001dd048:
    pmVar47 = (mach_header *)((ulong)pmVar47 | 0x7265736f00000000);
code_r0x001dd060:
    pcVar38 = (char *)((ulong)param_1 & 0xff);
    ppuVar19 = (undefined **)0xd00000000000001c;
    goto code_r0x001dd4ec;
  case 0x20:
    pcVar38 = (char *)0xd00000000000001a;
    pcVar43 = (char *)((ulong)param_1 & 0xff);
code_r0x001dd1f4:
code_r0x001dd1fc:
    pmVar18 = (mach_header *)((long)&((mach_header *)pcVar38)->magic + 2);
    if ((mach_header *)pcVar43 == (mach_header *)0x1) {
      pmVar18 = (mach_header *)((long)&((mach_header *)pcVar38)->magic + 1);
    }
code_r0x001dd20c:
    break;
  case 0x21:
    pmVar47 = (mach_header *)0xd00000000000001d;
    pmVar50 = (mach_header *)0xd000000000000016;
    if ((uVar36 & 0xff) != 3) {
      pmVar50 = (mach_header *)0xd000000000000022;
    }
    pmVar18 = pmVar47;
    if ((uVar36 & 0xff) != 2) {
      pmVar18 = pmVar50;
    }
    pmVar50 = (mach_header *)0xd00000000000001a;
code_r0x001dce44:
    if (((ulong)param_1 & 0xff) != 0) {
      pmVar47 = pmVar50;
    }
    if ((uVar36 & 0xff) < 2) {
      pmVar18 = pmVar47;
    }
    break;
  case 0x22:
    uVar36 = uVar36 & 0xff;
    pmVar47 = (mach_header *)0xd00000000000001e;
    if (uVar36 != 3) {
      pmVar47 = (mach_header *)0x697463416576694c;
    }
    pmVar18 = (mach_header *)0xd000000000000017;
    if (uVar36 != 2) {
      pmVar18 = pmVar47;
    }
    pmVar47 = (mach_header *)0xd000000000000015;
    if (((ulong)param_1 & 0xff) != 0) {
      pmVar47 = (mach_header *)0xd000000000000016;
    }
    if (uVar36 == 1 || ((ulong)param_1 & 0xff) == 0) {
      pmVar18 = pmVar47;
    }
    break;
  case 0x23:
    if (((ulong)param_1 & 0xff) != 0) {
      if ((uVar36 & 0xff) == 1) {
        return (mach_header *)(dword *)0xd000000000000012;
      }
      return (mach_header *)(dword *)0xd00000000000001c;
    }
    goto code_r0x001dd7f4;
  case 0x24:
    uVar36 = uVar36 & 0xff;
    pmVar18 = (mach_header *)0xd000000000000010;
    if (uVar36 != 3) {
      pmVar18 = (mach_header *)0xd000000000000019;
    }
    in_x13 = (mach_header *)0xd000000000000014;
    if (uVar36 != 2) {
      in_x13 = pmVar18;
    }
    pmVar46 = (mach_header *)0x614365646f435251;
    if (((ulong)param_1 & 0xff) != 0) {
      pmVar46 = (mach_header *)0xd000000000000018;
    }
    bVar14 = SBORROW4(uVar36,1);
    iVar35 = uVar36 - 1;
    bVar16 = uVar36 == 1;
    goto code_r0x001dd44c;
  case 0x25:
    pmVar47 = (mach_header *)0x43656761726f7453;
    pmVar50 = (mach_header *)0xd000000000000010;
    bVar16 = ((ulong)param_1 & 0xff) == 1;
    goto code_r0x001dd1a8;
  case 0x26:
code_r0x001dd458:
    pcVar38 = (char *)((ulong)param_2 | (ulong)ppuVar19);
code_r0x001dd45c:
    if ((mach_header *)pcVar38 == (mach_header *)0x0) {
code_r0x001dd460:
      pcVar38 = (char *)(ulong)(uVar32 & 0xff);
code_r0x001dd464:
      in_ZR = (int)pcVar38 == 0x98;
code_r0x001dd468:
      if ((bool)in_ZR) goto code_r0x001dd46c;
    }
code_r0x001dd698:
    if (((mach_header *)ppuVar19 == (mach_header *)((long)&MACH_HEADER.magic + 1)) &&
       (param_2 == (mach_header *)0x0)) {
      in_ZR = (uVar32 & 0xff) == 0x98;
code_r0x001dd6ac:
      if ((bool)in_ZR) goto code_r0x001dd6b4;
    }
    in_ZR = (mach_header *)ppuVar19 == (mach_header *)((long)&MACH_HEADER.magic + 2);
    pmVar18 = (mach_header *)ppuVar19;
code_r0x001dd954:
    if (((!(bool)in_ZR) || (param_2 != (mach_header *)0x0)) || ((uVar32 & 0xff) != 0x98)) {
      in_ZR = (uVar32 & 0xff) == 0x98;
      ppuVar19 = (undefined **)pmVar18;
code_r0x001ddc28:
      in_ZR = (((mach_header *)ppuVar19 == (mach_header *)((long)&MACH_HEADER.magic + 3) &&
               param_2 == (mach_header *)0x0) & in_ZR) == 0;
      pcVar38 = &UNK_00006544;
code_r0x001ddc40:
      pcVar38 = (char *)(ulong)((uint)pcVar38 | 0x6f6d0000);
      pcVar43 = (char *)0x7247656d75736552;
code_r0x001ddc54:
      ppuVar19 = (undefined **)pcVar43;
      if ((bool)in_ZR) {
        ppuVar19 = (undefined **)pcVar38;
      }
code_r0x001ddc58:
code_r0x001ddc6c:
      return (mach_header *)ppuVar19;
    }
code_r0x001dd96c:
    goto code_r0x001de1bc;
  case 0x28:
    goto code_r0x001dd7d4;
  case 0x29:
code_r0x001dd990:
code_r0x001dd474:
    pcVar38 = (char *)((long)&MACH_HEADER.flags + 2);
code_r0x001dd480:
    pcVar38 = (char *)((ulong)pcVar38 | 0xd000000000000000);
code_r0x001dd484:
    pmVar18 = (mach_header *)((long)&((mach_header *)((long)pcVar38 + -0x20))->flags + 2);
code_r0x001dd488:
    break;
  case 0x2a:
    goto code_r0x001dd800;
  case 0x2b:
    goto code_r0x001dd768;
  case 0x2e:
code_r0x001dd810:
code_r0x001dde44:
    pmVar18 = (mach_header *)0xd00000000000001c;
    break;
  case 0x2f:
    goto code_r0x001dd894;
  case 0x30:
code_r0x001dd7b0:
    pmVar47 = (mach_header *)0x6172546f65646956;
    pcVar49 = (char *)0x67616d49;
    goto code_r0x001dd7d4;
  case 0x31:
    goto code_r0x001dd888;
  case 0x33:
    goto code_r0x001dd78c;
  case 0x34:
code_r0x001dd844:
    goto code_r0x001de19c;
  case 0x36:
    goto code_r0x001dd7e0;
  case 0x38:
    goto code_r0x001dd5f0;
  case 0x39:
    goto code_r0x001dd5fc;
  case 0x3d:
    goto code_r0x001dd65c;
  case 0x3e:
    goto code_r0x001dd61c;
  case 0x3f:
    goto code_r0x001dd688;
  }
  return pmVar18;
code_r0x001dd768:
code_r0x001dd76c:
code_r0x001dd774:
  in_x14 = (mach_header *)0xd00000000000001a;
  goto code_r0x001dd78c;
code_r0x001dd65c:
code_r0x001dd660:
code_r0x001dd66c:
  in_x14 = (mach_header *)((long)&((mach_header *)pcVar49)->cputype + 2);
code_r0x001dd67c:
  if ((int)pcVar38 != 4) {
    pcVar49 = (char *)in_x14;
  }
code_r0x001dd684:
  uVar37 = (uint)pcVar38;
  goto code_r0x001dd688;
code_r0x001dd5f0:
  pcVar49 = (char *)0xd00000000000001a;
code_r0x001dd5f8:
code_r0x001dd5fc:
code_r0x001dd604:
code_r0x001dd610:
  uVar37 = (uint)pcVar38;
  in_x14 = (mach_header *)((long)&((mach_header *)((long)pcVar49 + -0x20))->reserved + 3);
  goto code_r0x001dd61c;
code_r0x001dd7d4:
  pcVar49 = (char *)((ulong)pcVar49 | 0x6172546500000000);
  in_ZR = uVar37 == 0;
code_r0x001dd7e0:
  if ((bool)in_ZR) {
    return pmVar47;
  }
  return (mach_header *)pcVar49;
code_r0x001dd688:
  ppuVar19 = (undefined **)pmVar47;
  if (uVar37 != 3) {
    ppuVar19 = (undefined **)pcVar49;
  }
code_r0x001dd694:
  return (mach_header *)ppuVar19;
code_r0x001dd78c:
  in_x14 = (mach_header *)((long)&in_x14[-1].sizeofcmds + 3);
code_r0x001dd790:
  if ((int)pcVar38 != 1) {
    in_x14 = pmVar47;
  }
  ppuVar19 = (undefined **)pcVar49;
  if ((int)pcVar38 != 0) {
    ppuVar19 = (undefined **)in_x14;
  }
code_r0x001dd7a8:
  return (mach_header *)ppuVar19;
code_r0x001dd28c:
code_r0x001dd294:
code_r0x001dd29c:
  in_ZR = (int)pcVar38 == 2;
  pmVar51 = (mach_header *)((long)&((mach_header *)pcVar43)->magic + 2);
code_r0x001dd2ac:
  in_x12 = (mach_header *)pcVar43;
  if (!(bool)in_ZR) {
    in_x12 = pmVar51;
  }
code_r0x001dd2bc:
code_r0x001dd2c4:
  in_x13 = (mach_header *)((long)&((mach_header *)pcVar43)->cpusubtype + 2);
code_r0x001dd2c8:
code_r0x001dd2cc:
code_r0x001dd2d4:
code_r0x001dd2d8:
  pmVar50 = (mach_header *)((long)&((mach_header *)pcVar43)->cputype + 3);
  in_ZR = (int)pcVar38 == 0;
code_r0x001dd2e0:
  pcVar43 = (char *)in_x13;
  if (!(bool)in_ZR) {
    pcVar43 = (char *)pmVar50;
  }
code_r0x001dd2e4:
code_r0x001dd2e8:
  iVar35 = (int)pcVar38;
  in_OV = SBORROW4(iVar35,1);
  in_NG = iVar35 + -1 < 0;
  in_ZR = iVar35 == 1;
code_r0x001dd2ec:
  pmVar18 = in_x12;
  if ((bool)in_ZR || in_NG != in_OV) {
    pmVar18 = (mach_header *)pcVar43;
  }
code_r0x001dd2f4:
  return pmVar18;
code_r0x001dd61c:
  if (uVar37 != 4) {
    pcVar49 = (char *)in_x14;
  }
  in_OV = SBORROW4(uVar37,5);
  in_NG = (int)(uVar37 - 5) < 0;
  in_ZR = uVar37 == 5;
code_r0x001dd62c:
  ppuVar19 = (undefined **)pmVar47;
  if ((bool)in_ZR || in_NG != in_OV) {
    ppuVar19 = (undefined **)pcVar49;
  }
code_r0x001dd630:
code_r0x001dd634:
  return (mach_header *)ppuVar19;
code_r0x001ea098:
  if (iVar35 != 0x72) {
    in_x12 = in_x14;
  }
  pmVar46 = (mach_header *)0xd000000000000010;
  if (iVar35 != 0x70) {
    pmVar46 = pmVar47;
  }
code_r0x001ea0c8:
  bVar15 = SBORROW4(iVar35,0x71);
  bVar16 = iVar35 + -0x71 < 0;
  bVar14 = iVar35 == 0x71;
LAB_001ea33c:
  if (!bVar14 && bVar16 == bVar15) {
    return in_x12;
  }
  return pmVar46;
code_r0x001de6e4:
  pcVar49 = (char *)((ulong)&((mach_header *)((long)pcVar49 + 0x7a0))->ncmds | 0x8000000000000000);
code_r0x001de6f8:
  uVar37 = (uint)pcVar43;
  if (uVar37 != 3) {
    pcVar38 = (char *)(mach_header *)0x80000000008bc790;
  }
  if (uVar37 != 2) {
    pcVar49 = pcVar38;
  }
  pcVar38 = "registerSystemJobProviders";
  if (uVar37 != 0) {
    pcVar38 = "ticatedJobProviders";
  }
  param_2 = (mach_header *)pcVar49;
  if (uVar37 < 2) {
    param_2 = (mach_header *)((ulong)pcVar38 | 0x8000000000000000);
  }
code_r0x001dec68:
  __sSS4hash4intoys6HasherVz_tF();
code_r0x0077b234:
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return param_2;
}



/* Entry: 001de25c; end: 001de25f;  */

undefined8 *
FUN_001de25c(undefined8 *param_1,ulong param_2,uint param_3,undefined8 *param_4,ulong param_5,
            byte param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *unaff_x19;
  char *unaff_x20;
  
  uVar9 = param_3 >> 2 & 0x3f;
  uVar4 = (uint)param_1;
  uVar7 = (uint)param_4;
  uVar8 = (uint)param_5;
  uVar6 = (uint)param_2;
  switch(uVar9) {
  default:
    if (3 < param_6) {
      return (undefined8 *)0x0;
    }
  case 0x3d:
    uVar9 = uVar8 & 0xff;
  case 0x3e:
    in_ZR = (param_2 & 0xff) == 1;
  case 0x39:
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x001def20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_007e581a + (long)param_1 * 2) * 4 + 0x1def24))();
      return param_1;
    }
    if ((uVar9 != 1) && (uVar4 == uVar7)) {
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    break;
  case 1:
    if ((param_6 & 0xfc) == 4) {
code_r0x001df324:
      return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
    }
    break;
  case 2:
    if ((param_6 & 0xfc) == 8) goto code_r0x001df324;
    break;
  case 3:
    if ((param_6 & 0xfc) == 0xc) {
      uVar9 = uVar7 & 0xff;
      uVar6 = uVar4 & 0xff;
      if (uVar6 < 0xb) {
        if (uVar6 == 9) {
          if (uVar9 != 9) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 10) {
          if (uVar9 != 10) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        if (uVar6 == 0xb) {
          if (uVar9 != 0xb) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 0xc) {
          if (uVar9 != 0xc) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      if ((3 < uVar9 - 9) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 4:
    if ((param_6 & 0xfc) == 0x10) goto code_r0x001df324;
    break;
  case 5:
    if ((param_6 & 0xfc) == 0x14) {
      uVar9 = uVar4 & 0xff;
      uVar6 = uVar7 & 0xff;
      uVar4 = uVar4 >> 5 & 7;
      if (uVar4 < 3) {
        if (uVar4 == 0) {
          if (uVar6 < 0x20) {
            return (undefined8 *)(ulong)(uVar9 == uVar6);
          }
        }
        else if (uVar4 == 1) {
          if ((uVar7 & 0xe0) == 0x20) {
LAB_001e20dc:
            return (undefined8 *)(ulong)(((uVar6 ^ uVar9) & 0x1f) == 0);
          }
        }
        else if ((uVar7 & 0xe0) == 0x40) goto LAB_001e20dc;
      }
      else if (uVar4 < 5) {
        if (uVar4 == 3) {
          if (uVar9 < 100) {
            if (uVar9 < 0x62) {
              if (uVar9 == 0x60) {
                if (uVar6 == 0x60) {
                  return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                }
              }
              else if (uVar6 == 0x61) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar9 == 0x62) {
              if (uVar6 == 0x62) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 99) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 < 0x66) {
            if (uVar9 == 100) {
              if (uVar6 == 100) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x65) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x66) {
            if (uVar6 == 0x66) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x67) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x84) {
          if (uVar9 < 0x82) {
            if (uVar9 == 0x80) {
              if (uVar6 == 0x80) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x81) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x82) {
            if (uVar6 == 0x82) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x83) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x86) {
          if (uVar9 == 0x84) {
            if (uVar6 == 0x84) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x85) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x86) {
          if (uVar6 == 0x86) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x87) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 5) {
        if (uVar9 < 0xa4) {
          if (uVar9 < 0xa2) {
            if (uVar9 == 0xa0) {
              if (uVar6 == 0xa0) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0xa1) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0xa2) {
            if (uVar6 == 0xa2) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0xa3) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0xa6) {
          if (uVar9 == 0xa4) {
            if (uVar6 == 0xa4) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0xa5) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0xa6) {
          if (uVar6 == 0xa6) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0xa7) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 < 0xc2) {
        if (uVar9 == 0xc0) {
          if (uVar6 == 0xc0) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0xc1) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0xc2) {
        if (uVar6 == 0xc2) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0xc3) {
        if (uVar6 == 0xc3) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar6 == 0xc4) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 6:
    if ((param_6 & 0xfc) == 0x18) {
      uVar4 = uVar4 & 0xff;
      uVar9 = uVar7 & 0xff;
      if (uVar4 == 4) {
        if (uVar9 == 4) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 5) {
        if (uVar9 == 5) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((uVar7 & 0xfe) != 4) {
        return (undefined8 *)(ulong)(uVar4 == uVar9);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 7:
    if ((param_6 & 0xfc) == 0x1c) {
      uVar9 = uVar7 & 0xff;
      uVar6 = uVar4 & 0xff;
      if (uVar6 < 5) {
        if (uVar6 == 3) {
          if (uVar9 != 3) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 4) {
          if (uVar9 != 4) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        if (uVar6 == 5) {
          if (uVar9 != 5) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 6) {
          if (uVar9 != 6) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      if ((3 < uVar9 - 3) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 8:
    if ((param_6 & 0xfc) == 0x20) goto code_r0x001df324;
    break;
  case 9:
    if ((param_6 & 0xfc) == 0x24) {
      uVar9 = uVar4 & 0xff;
      uVar6 = uVar7 & 0xff;
      if (uVar9 >> 6 == 0) {
        if ((uVar6 < 0x40) && ((uVar7 & 0x3f) == (uVar4 & 0xff))) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 >> 6 == 1) {
        if (((uVar7 & 0xc0) == 0x40) && (((uVar6 ^ uVar9) & 0x3f) == 0)) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 < 0x82) {
        if (uVar9 == 0x80) {
          if (uVar6 == 0x80) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x81) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0x82) {
        if (uVar6 == 0x82) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar6 == 0x83) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 10:
    if ((param_6 & 0xfc) == 0x28) goto code_r0x001df324;
    break;
  case 0xb:
    if ((param_6 & 0xfc) == 0x2c) {
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          if ((param_5 & 0xff) == 0) {
LAB_001e61b0:
            return (undefined8 *)(ulong)(uVar4 == uVar7);
          }
        }
        else if ((uVar8 & 0xff) == 1) goto LAB_001e61b0;
      }
      else if (uVar6 == 2) {
        if ((uVar8 & 0xff) == 2) {
          return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
        }
      }
      else if (uVar6 == 3) {
        if ((uVar8 & 0xff) == 3) goto LAB_001e61b0;
      }
      else if (((uVar8 & 0xff) == 4) && (param_4 == (undefined8 *)0x0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0xc:
    if ((param_6 & 0xfc) == 0x30) goto code_r0x001df324;
    break;
  case 0xd:
    if ((param_6 & 0xfc) == 0x34) {
      if ((param_2 & 0xff) == 0) {
        if ((param_5 & 0xff) == 0) {
          return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
        }
      }
      else {
        if ((uVar6 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001e7b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)(param_1 + 0xfcd59) * 4 + 0x1e7b48))();
          return param_1;
        }
        if ((uVar8 & 0xff) == 1) {
          return (undefined8 *)(ulong)(uVar4 == uVar7);
        }
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0xe:
    if ((param_6 & 0xfc) == 0x38) {
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          if ((param_5 & 0xff) == 0) {
LAB_001e9570:
            return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
          }
        }
        else if ((uVar8 & 0xff) == 1) goto LAB_001e9570;
      }
      else if (uVar6 == 2) {
        if ((uVar8 & 0xff) == 2) {
          return (undefined8 *)(ulong)(uVar4 == uVar7);
        }
      }
      else {
        if (uVar6 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e9548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)((long)param_1 + 0x7e6d33) * 4 + 0x1e954c))();
          return param_1;
        }
        if ((uVar8 & 0xff) == 3) goto LAB_001e9570;
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0xf:
    if ((param_6 & 0xfc) == 0x3c) {
      uVar9 = uVar4 & 0xff;
      uVar6 = uVar7 & 0xff;
      uVar4 = uVar4 >> 4 & 0xf;
      if (uVar4 < 4) {
        if (uVar4 < 2) {
          if (uVar4 == 0) {
            if (uVar6 < 0x10) {
              return (undefined8 *)(ulong)(uVar9 == uVar6);
            }
          }
          else if ((uVar7 & 0xf0) == 0x10) {
            return (undefined8 *)(ulong)(((uVar6 ^ uVar9) & 0xf) == 0);
          }
        }
        else if (uVar4 == 2) {
          if (uVar9 < 0x22) {
            if (uVar9 == 0x20) {
              if (uVar6 == 0x20) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x21) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x22) {
            if (uVar6 == 0x22) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x23) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x32) {
          if (uVar9 == 0x30) {
            if (uVar6 == 0x30) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x31) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x32) {
          if (uVar6 == 0x32) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x33) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 < 6) {
        if (uVar4 == 4) {
          if (uVar9 < 0x42) {
            if (uVar9 == 0x40) {
              if (uVar6 == 0x40) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x41) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x42) {
            if (uVar6 == 0x42) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x43) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x52) {
          if (uVar9 == 0x50) {
            if (uVar6 == 0x50) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x51) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x52) {
          if (uVar6 == 0x52) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x53) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 6) {
        if (uVar9 < 0x62) {
          if (uVar9 == 0x60) {
            if (uVar6 == 0x60) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x61) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x62) {
          if (uVar6 == 0x62) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 99) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 7) {
        if (uVar9 < 0x72) {
          if (uVar9 == 0x70) {
            if (uVar6 == 0x70) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x71) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x72) {
          if (uVar6 == 0x72) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x73) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0x80) {
        if (uVar6 == 0x80) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0x81) {
        if (uVar6 == 0x81) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar6 == 0x82) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x10:
    if ((param_6 & 0xfc) == 0x40) {
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          if ((param_5 & 0xff) == 0) {
LAB_001ecdc0:
            return (undefined8 *)(ulong)(uVar4 == uVar7);
          }
        }
        else if ((uVar8 & 0xff) == 1) goto LAB_001ecdc0;
      }
      else if (uVar6 == 2) {
        if ((uVar8 & 0xff) == 2) goto LAB_001ecdc0;
      }
      else if (uVar6 == 3) {
        if ((uVar8 & 0xff) == 3) {
          return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
        }
      }
      else {
        uVar8 = uVar8 & 0xff;
        if (param_1 == (undefined8 *)0x0) {
          if ((uVar8 == 4) && (param_4 == (undefined8 *)0x0)) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
          if ((uVar8 == 4) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 1))) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if ((uVar8 == 4) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 2))) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x11:
    if ((param_6 & 0xfc) == 0x44) {
      uVar9 = uVar7 & 0xff;
      uVar6 = uVar4 & 0xff;
      if (uVar6 < 5) {
        if (uVar6 == 2) {
          if (uVar9 != 2) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 3) {
          if (uVar9 != 3) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 4) {
          if (uVar9 != 4) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        if (uVar6 == 5) {
          if (uVar9 != 5) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 6) {
          if (uVar9 != 6) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 7) {
          if (uVar9 != 7) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      if ((5 < uVar9 - 2) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 0x12:
    if ((param_6 & 0xfc) == 0x48) {
      uVar9 = uVar4 & 0xff;
      uVar6 = uVar7 & 0xff;
      uVar4 = uVar4 >> 5 & 7;
      if (uVar4 < 3) {
        if (uVar4 == 0) {
          if (uVar6 < 0x20) {
            return (undefined8 *)(ulong)(uVar9 == uVar6);
          }
        }
        else if (uVar4 == 1) {
          if ((uVar7 & 0xe0) == 0x20) {
LAB_001ee998:
            return (undefined8 *)(ulong)(((uVar6 ^ uVar9) & 0x1f) == 0);
          }
        }
        else if ((uVar7 & 0xe0) == 0x40) goto LAB_001ee998;
      }
      else if (uVar4 < 5) {
        if (uVar4 == 3) {
          if (uVar9 < 0x62) {
            if (uVar9 == 0x60) {
              if (uVar6 == 0x60) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x61) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x62) {
            if (uVar6 == 0x62) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 99) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x82) {
          if (uVar9 == 0x80) {
            if (uVar6 == 0x80) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x81) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x82) {
          if (uVar6 == 0x82) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x83) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 5) {
        if (uVar9 < 0xa2) {
          if (uVar9 == 0xa0) {
            if (uVar6 == 0xa0) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0xa1) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0xa2) {
          if (uVar6 == 0xa2) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0xa3) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0xc0) {
        if (uVar6 == 0xc0) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar6 == 0xc1) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x13:
    if ((param_6 & 0xfc) == 0x4c) goto code_r0x001df324;
    break;
  case 0x14:
    if ((param_6 & 0xfc) == 0x50) {
      if ((uVar6 & 0xff) == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          if ((param_5 & 0xff) == 0) {
            return (undefined8 *)(ulong)(uVar4 == uVar7);
          }
        }
        else if ((uVar8 & 0xff) == 1) goto LAB_001f0b7c;
      }
      else {
        if ((uVar6 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x001f0ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)((long)param_1 + 0x7e79c6) * 4 + 0x1f0ba4))();
          return param_1;
        }
        if ((uVar8 & 0xff) == 2) {
LAB_001f0b7c:
          return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
        }
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x15:
    if ((param_6 & 0xfc) == 0x54) goto code_r0x001df324;
    break;
  case 0x16:
    if ((param_6 & 0xfc) == 0x58) goto code_r0x001df324;
    break;
  case 0x17:
    if ((param_6 & 0xfc) == 0x5c) goto code_r0x001df324;
    break;
  case 0x18:
    if ((param_6 & 0xfc) != 0x60) {
      return (undefined8 *)0x0;
    }
    uVar9 = uVar8 >> 8 & 0xff;
    if ((param_2 & 0xff00) != 0x100) {
      if (uVar9 == 1) {
        return (undefined8 *)0x0;
      }
      if ((param_2 & 0xff) == 1) {
        if ((uVar8 & 0xff) != 1) {
          return (undefined8 *)0x0;
        }
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      if ((uVar8 & 0xff) == 1) {
        return (undefined8 *)0x0;
      }
      if (uVar4 != uVar7) {
        return (undefined8 *)0x0;
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    bVar3 = param_1 < (undefined8 *)((long)&MACH_HEADER.magic + 3);
    uVar2 = (long)(char)param_2 + (ulong)!bVar3;
    if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)bVar3)) {
      if (param_1 == (undefined8 *)0x0 && (param_2 & 0xff) == 0) {
        if (uVar9 != 1) {
          return (undefined8 *)0x0;
        }
        if ((param_5 & 0xff) != 0 || param_4 != (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      if (param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 1) && (param_2 & 0xff) == 0) {
        if (uVar9 != 1) {
          return (undefined8 *)0x0;
        }
        if (param_4 != (undefined8 *)((long)&MACH_HEADER.magic + 1) || (param_5 & 0xff) != 0) {
          return (undefined8 *)0x0;
        }
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      if (uVar9 != 1) {
        return (undefined8 *)0x0;
      }
      if (param_4 != (undefined8 *)((long)&MACH_HEADER.magic + 2) || (param_5 & 0xff) != 0) {
        return (undefined8 *)0x0;
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    bVar3 = param_1 < (undefined8 *)((long)&MACH_HEADER.cputype + 1);
    uVar2 = (long)(char)param_2 + (ulong)!bVar3;
    if ((long)-uVar2 < 0 != SCARRY8(~uVar2,(ulong)bVar3)) {
      in_ZR = uVar9 == 1;
      if (param_1 == (undefined8 *)((long)&MACH_HEADER.cputype + 1) && (param_2 & 0xff) == 0) {
        if (!(bool)in_ZR) {
          return (undefined8 *)0x0;
        }
        if (param_4 != (undefined8 *)((long)&MACH_HEADER.cputype + 1) || (param_5 & 0xff) != 0) {
          return (undefined8 *)0x0;
        }
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      goto code_r0x001df834;
    }
    if (param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 3) && (param_2 & 0xff) == 0) {
      if (uVar9 != 1) {
        return (undefined8 *)0x0;
      }
      if (param_4 != (undefined8 *)((long)&MACH_HEADER.magic + 3) || (param_5 & 0xff) != 0) {
        return (undefined8 *)0x0;
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    if (uVar9 != 1) {
      return (undefined8 *)0x0;
    }
  case 0x2b:
    if ((dword *)param_4 == &MACH_HEADER.cputype && (param_5 & 0xff) == 0) {
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    break;
  case 0x19:
    if ((param_6 & 0xfc) == 100) {
      uVar9 = uVar7 & 0xff;
      uVar6 = uVar4 & 0xff;
      if (uVar6 < 10) {
        if (uVar6 == 8) {
          if (uVar9 != 8) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 9) {
          if (uVar9 != 9) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        if (uVar6 == 10) {
          if (uVar9 != 10) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 0xb) {
          if (uVar9 != 0xb) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      if (((uVar7 & 0xfc) != 8) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 0x1a:
    if ((param_6 & 0xfc) == 0x68) {
      uVar9 = uVar7 & 0xff;
      if ((uVar4 & 0xff) == 3) {
        if (uVar9 == 3) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((uVar4 & 0xff) == 4) {
        if (uVar9 == 4) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((1 < uVar9 - 3) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 0x1b:
    if ((param_6 & 0xfc) == 0x6c) {
      if ((param_3 & 3) == 0) {
        if ((param_6 & 3) == 0) {
          return (undefined8 *)(ulong)(uVar4 == uVar7);
        }
      }
      else {
        if ((param_3 & 3) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001f5a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)((long)param_1 + 0x7e89b4) * 4 + 0x1f5a5c))();
          return param_1;
        }
        if ((param_6 & 3) == 1) {
          if ((param_1 == param_4) && (param_2 == param_5)) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x00778f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_0099b6b8
          )(param_1,param_2,param_4,param_5,0);
          return param_1;
        }
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x1c:
    if ((param_6 & 0xfc) == 0x70) goto code_r0x001df324;
    break;
  case 0x1d:
    if ((param_6 & 0xfc) == 0x74) goto code_r0x001df324;
    break;
  case 0x1e:
    if ((param_6 & 0xfc) == 0x78) {
      uVar9 = uVar7 & 0xff;
      if ((uVar4 & 0xff) == 6) {
        if (uVar9 == 6) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((uVar4 & 0xff) == 5) {
        if (uVar9 == 5) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((1 < uVar9 - 5) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 0x1f:
    if ((param_6 & 0xfc) == 0x7c) goto code_r0x001df324;
    break;
  case 0x20:
    if ((char)param_6 < -0x7c) goto code_r0x001df324;
    break;
  case 0x21:
    if ((param_6 & 0xfc) == 0x84) goto code_r0x001df324;
    break;
  case 0x22:
    if ((param_6 & 0xfc) == 0x88) goto code_r0x001df324;
    break;
  case 0x23:
    if ((param_6 & 0xfc) == 0x8c) goto code_r0x001df324;
    break;
  case 0x24:
    if ((param_6 & 0xfc) == 0x90) goto code_r0x001df324;
  case 0x37:
    break;
  case 0x25:
    if ((param_6 & 0xfc) == 0x94) goto code_r0x001df324;
    break;
  case 0x26:
    if ((param_2 == 0 && param_1 == (undefined8 *)0x0) && ((param_3 & 0xff) == 0x98)) {
      if ((((param_6 & 0xfc) == 0x98) && (param_5 == 0 && param_4 == (undefined8 *)0x0)) &&
         (param_6 == 0x98)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else if ((param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) &&
            ((param_2 == 0 && ((param_3 & 0xff) == 0x98)))) {
      if (((((param_6 & 0xfc) == 0x98) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 1)))
          && (param_5 == 0)) && (param_6 == 0x98)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else if ((param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 2)) &&
            ((param_2 == 0 && ((param_3 & 0xff) == 0x98)))) {
      if ((((param_6 & 0xfc) == 0x98) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 2)))
         && ((param_5 == 0 && (param_6 == 0x98)))) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else if ((param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 3)) &&
            ((param_2 == 0 && ((param_3 & 0xff) == 0x98)))) {
      if ((((param_6 & 0xfc) == 0x98) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 3)))
         && ((param_5 == 0 && (param_6 == 0x98)))) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else if (((param_6 & 0xfc) == 0x98) &&
            ((((dword *)param_4 == &MACH_HEADER.cputype && (param_5 == 0)) && (param_6 == 0x98)))) {
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    break;
  case 0x28:
    return param_1;
  case 0x29:
    goto code_r0x001df84c;
  case 0x2a:
    return param_1;
  case 0x2c:
    return param_1;
  case 0x2d:
    return param_1;
  case 0x2e:
    return param_1;
  case 0x2f:
    return param_1;
  case 0x30:
code_r0x001df834:
    if (((bool)in_ZR) &&
       ((param_5 & 0xff) != 0 ||
        CARRY8((param_5 & 0xff) - 1,
               (ulong)((undefined8 *)((long)&MACH_HEADER.cputype + 1) < param_4)))) {
      param_1 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
code_r0x001df84c:
      return param_1;
    }
    break;
  case 0x31:
    return param_1;
  case 0x36:
    uVar1 = 0x6d6f7250776f6873;
    if (*unaff_x20 != '\x01') {
      uVar1 = 0x635365736f707865;
    }
    puVar5 = (undefined8 *)0xea00000000007470;
    if (*unaff_x20 != '\x01') {
      puVar5 = (undefined8 *)0xeb0000000065706f;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,puVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(puVar5);
    return puVar5;
  case 0x38:
    puVar5 = (undefined8 *)*param_1;
    FUN_001e471c(puVar5,param_1[1]);
    *unaff_x19 = (char)puVar5;
    return puVar5;
  }
  return (undefined8 *)0x0;
}



/* Entry: 001de260; end: 001decef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

segment_command *
FUN_001de260(segment_command *param_1,segment_command *param_2,ulong param_3,uint param_4)

{
  char *pcVar1;
  char *pcVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  bool in_ZR;
  bool bVar7;
  bool bVar8;
  segment_command *psVar9;
  segment_command *psVar10;
  segment_command *psVar11;
  uint uVar12;
  segment_command *psVar13;
  char *pcVar14;
  undefined8 uVar15;
  segment_command *psVar16;
  char *in_x12;
  undefined8 uVar17;
  segment_command *in_x13;
  segment_command *psVar18;
  ulong in_x14;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  segment_command *unaff_x21;
  
  psVar9 = (segment_command *)&stack0xffffffffffffffd0;
  psVar10 = (segment_command *)&stack0xffffffffffffffd0;
  psVar11 = (segment_command *)&stack0xffffffffffffffd0;
  uVar21 = param_4 >> 2 & 0x3f;
  psVar13 = (segment_command *)(ulong)uVar21;
  pcVar14 = &UNK_007e5768;
  psVar16 = (segment_command *)(ulong)*(ushort *)(&UNK_007e5768 + (long)psVar13 * 2);
  psVar18 = (segment_command *)((long)psVar16 * 4 + 0x1de294);
  uVar12 = (uint)param_2;
  uVar22 = (uint)param_3;
  switch(uVar21) {
  default:
    psVar18 = (segment_command *)0x0;
    __ss6HasherV8_combineyySuF(0);
    if ((param_3 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x001de2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)param_2[0x1c138].cmd * 4 + 0x1dea3c))();
      return psVar18;
    }
code_r0x001de838:
    uVar19 = 2;
    goto code_r0x001deadc;
  case 1:
    uVar19 = 1;
    break;
  case 2:
    uVar19 = 4;
    break;
  case 3:
    __ss6HasherV8_combineyySuF(5);
    uVar21 = uVar12 & 0xff;
    if (uVar21 < 0xb) {
      if (uVar21 != 9) {
        if (uVar21 == 10) goto code_r0x001deab4;
code_r0x001de904:
        __ss6HasherV8_combineyySuF(2);
        uVar12 = uVar12 & 0xff;
        if (uVar12 < 4) {
          pcVar14 = "metaInfoProvider";
          if (uVar12 != 2) {
            pcVar14 = "extensionInfoProvider";
          }
          psVar18 = (segment_command *)0x80000000008bbc80;
          uVar19 = 0xd00000000000001b;
          if (((ulong)param_2 & 0xff) != 0) {
            psVar18 = (segment_command *)0xea0000000000746e;
            uVar19 = 0x657645656b616873;
          }
          uVar15 = 0xd000000000000010;
          if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
            uVar15 = uVar19;
          }
          psVar16 = (segment_command *)((ulong)pcVar14 | 0x8000000000000000);
          if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
            psVar16 = psVar18;
          }
        }
        else {
          pcVar14 = "featureSettingsProvider";
          uVar19 = 0xd000000000000016;
          if (uVar12 != 7) {
            pcVar14 = "DeepLinkHandling";
            uVar19 = 0xd000000000000017;
          }
          pcVar2 = "startSyncManagerUnauth";
          uVar15 = 0xd000000000000014;
          if (uVar12 != 6) {
            pcVar2 = pcVar14;
            uVar15 = uVar19;
          }
          pcVar14 = "composerLogProvider";
          uVar19 = 0xd000000000000015;
          if (uVar12 != 4) {
            pcVar14 = "startSyncManagerAuth";
            uVar19 = 0xd000000000000013;
          }
          if (uVar12 < 6) {
            pcVar2 = pcVar14;
            uVar15 = uVar19;
          }
          psVar16 = (segment_command *)((ulong)pcVar2 | 0x8000000000000000);
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,psVar16);
        goto code_r0x0077b234;
      }
      goto code_r0x001dec90;
    }
    if (uVar21 == 0xb) goto code_r0x001dead0;
    if (uVar21 != 0xc) goto code_r0x001de904;
    goto code_r0x001deaf8;
  case 4:
    uVar19 = 6;
    break;
  case 5:
    __ss6HasherV8_combineyySuF(7);
  case 0x3c:
    uVar21 = uVar12 & 0xff;
    uVar22 = uVar12 >> 5 & 7;
    if (2 < uVar22) {
      if (uVar22 < 5) {
        if (uVar22 == 3) {
          if (uVar21 < 100) {
            if (uVar21 < 0x62) {
              if (uVar21 == 0x60) {
                psVar18 = (segment_command *)0x0;
              }
              else {
                psVar18 = (segment_command *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar21 == 0x62) {
              psVar18 = (segment_command *)((long)&MACH_HEADER.magic + 2);
            }
            else {
              psVar18 = (segment_command *)((long)&MACH_HEADER.magic + 3);
            }
          }
          else if (uVar21 < 0x66) {
            if (uVar21 == 100) {
              psVar18 = (segment_command *)&MACH_HEADER.cputype;
            }
            else {
              psVar18 = (segment_command *)((long)&MACH_HEADER.cputype + 2);
            }
          }
          else if (uVar21 == 0x66) {
            psVar18 = (segment_command *)((long)&MACH_HEADER.cputype + 3);
          }
          else {
            psVar18 = (segment_command *)&MACH_HEADER.cpusubtype;
          }
        }
        else if (uVar21 < 0x84) {
          if (uVar21 < 0x82) {
            if (uVar21 == 0x80) {
              psVar18 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 1);
            }
            else {
              psVar18 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 2);
            }
          }
          else if (uVar21 == 0x82) {
            psVar18 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 3);
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.filetype + 1);
          }
        }
        else if (uVar21 < 0x86) {
          if (uVar21 == 0x84) {
            psVar18 = (segment_command *)((long)&MACH_HEADER.filetype + 2);
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.filetype + 3);
          }
        }
        else if (uVar21 == 0x86) {
          psVar18 = (segment_command *)&MACH_HEADER.ncmds;
        }
        else {
          psVar18 = (segment_command *)((long)&MACH_HEADER.ncmds + 1);
        }
      }
      else if (uVar22 == 5) {
        if (uVar21 < 0xa4) {
          if (uVar21 < 0xa2) {
            if (uVar21 == 0xa0) {
              psVar18 = (segment_command *)((long)&MACH_HEADER.ncmds + 2);
            }
            else {
              psVar18 = (segment_command *)((long)&MACH_HEADER.ncmds + 3);
            }
          }
          else if (uVar21 == 0xa2) {
            psVar18 = (segment_command *)&MACH_HEADER.sizeofcmds;
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 1);
          }
        }
        else if (uVar21 < 0xa6) {
          if (uVar21 == 0xa4) {
            psVar18 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 2);
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 3);
          }
        }
        else {
          if (uVar21 != 0xa6) {
            __ss6HasherV8_combineyySuF(0x1a);
            param_3 = 0x80000000008bcc40;
            param_2 = (segment_command *)0xd000000000000012;
code_r0x00778468:
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)(param_1,param_2,param_3);
            return param_1;
          }
          psVar18 = (segment_command *)&MACH_HEADER.flags;
        }
      }
      else if (uVar21 < 0xc2) {
        if (uVar21 == 0xc0) {
          psVar18 = (segment_command *)((long)&MACH_HEADER.flags + 3);
        }
        else {
          psVar18 = (segment_command *)&MACH_HEADER.reserved;
        }
      }
      else if (uVar21 == 0xc2) {
        psVar18 = (segment_command *)((long)&MACH_HEADER.reserved + 1);
      }
      else if (uVar21 == 0xc3) {
        psVar18 = (segment_command *)((long)&MACH_HEADER.reserved + 2);
      }
      else {
        psVar18 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
      }
      __ss6HasherV8_combineyySuF(psVar18);
      return psVar18;
    }
    if (uVar22 == 0) {
      __ss6HasherV8_combineyySuF(5);
      uVar19 = 0xd000000000000019;
      pcVar14 = "LockedCameraCapture";
      if (uVar21 != 1) {
        uVar19 = 0xd000000000000012;
        pcVar14 = "invalidateSessionContents";
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,(ulong)pcVar14 | 0x8000000000000000);
      psVar16 = (segment_command *)((ulong)pcVar14 | 0x8000000000000000);
    }
    else {
      uVar12 = uVar12 & 0x1f;
      if (uVar22 == 1) {
        __ss6HasherV8_combineyySuF(0xc);
        uVar15 = 0xd000000000000010;
        if (uVar12 != 1) {
          uVar15 = 0x6573624f6c6c6163;
        }
        psVar16 = (segment_command *)0x80000000008bce20;
        if (uVar12 != 1) {
          psVar16 = (segment_command *)0xec00000072657672;
        }
      }
      else {
        __ss6HasherV8_combineyySuF(0x19);
        psVar18 = (segment_command *)0xed00007261657070;
        uVar19 = 0x4164694477656976;
        if (uVar12 != 3) {
          psVar18 = (segment_command *)0xee00686374656665;
          uVar19 = 0x725064616f6c7075;
        }
        psVar16 = (segment_command *)0x80000000008bcc80;
        uVar15 = 0xd000000000000011;
        if (uVar12 != 2) {
          psVar16 = psVar18;
          uVar15 = uVar19;
        }
        psVar18 = (segment_command *)0xed000074696e4972;
        uVar19 = 0x65746c69466f6567;
        if (((ulong)param_2 & 0x1f) != 0) {
          psVar18 = (segment_command *)0x80000000008bcca0;
          uVar19 = 0xd000000000000017;
        }
        if (uVar12 == 1 || ((ulong)param_2 & 0x1f) == 0) {
          uVar15 = uVar19;
        }
        if (uVar12 == 1 || ((ulong)param_2 & 0x1f) == 0) {
          psVar16 = psVar18;
        }
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,psVar16);
    }
    goto code_r0x0077b234;
  case 6:
    __ss6HasherV8_combineyySuF(8);
    if ((uVar12 & 0xff) == 4) {
      __ss6HasherV8_combineyySuF(1);
      param_2 = (segment_command *)0x4c63696d616e7964;
      param_3 = 0xed0000656c61636f;
    }
    else {
      if ((uVar12 & 0xff) != 5) {
        __ss6HasherV8_combineyySuF(0);
        uVar12 = uVar12 & 0xff;
        uVar19 = 0x6e49726567676f6c;
        psVar16 = (segment_command *)0xea00000000007469;
        if (uVar12 != 2) {
          uVar19 = 0xd000000000000013;
          psVar16 = (segment_command *)0x80000000008bd050;
        }
        uVar15 = 0xd000000000000010;
        pcVar14 = "backgroundExecution";
        if (((ulong)param_2 & 0xff) != 0) {
          uVar15 = 0xd000000000000013;
          pcVar14 = "loggerDebugViewInit";
        }
        if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
          uVar19 = uVar15;
        }
        if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
          psVar16 = (segment_command *)((ulong)pcVar14 | 0x8000000000000000);
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,psVar16);
        goto code_r0x0077b234;
      }
      __ss6HasherV8_combineyySuF(2);
      param_2 = (segment_command *)0x49726f74696e6f6d;
      param_3 = 0xeb0000000074696e;
    }
    goto code_r0x00778468;
  case 7:
    __ss6HasherV8_combineyySuF(9);
    uVar21 = uVar12 & 0xff;
    if (uVar21 < 5) {
      if (uVar21 == 3) goto code_r0x001dec90;
      if (uVar21 == 4) goto code_r0x001deab4;
    }
    else {
      if (uVar21 == 5) goto code_r0x001dead0;
      if (uVar21 == 6) goto code_r0x001deaf8;
    }
    __ss6HasherV8_combineyySuF(2);
    if (((ulong)param_2 & 0xff) != 0) {
      psVar16 = (segment_command *)0xeb000000006e6967;
      psVar18 = (segment_command *)0x6f4c6e4f74696e69;
      pcVar14 = "initOnForeground";
      lVar5 = -5;
      goto code_r0x001de97c;
    }
    psVar18 = (segment_command *)0x65526e4f74696e69;
    psVar16 = (segment_command *)0xec000000656d7573;
    goto code_r0x001dec68;
  case 8:
    uVar19 = 10;
    break;
  case 9:
    __ss6HasherV8_combineyySuF(0xb);
    uVar21 = uVar12 >> 6 & 3;
    if (uVar21 == 0) {
      __ss6HasherV8_combineyySuF(3);
      uVar12 = uVar12 & 0xff;
      if (uVar12 < 4) {
        psVar16 = (segment_command *)0xec00000070756d72;
        uVar19 = 0x615779636167656c;
        if (uVar12 != 2) {
          psVar16 = (segment_command *)0x80000000008bbd40;
          uVar19 = 0xd000000000000016;
        }
        uVar15 = 0xd000000000000013;
        pcVar14 = "warmupCustomStories";
        if (((ulong)param_2 & 0xff) != 0) {
          pcVar14 = "snapReadReceiptCleanup";
        }
        psVar18 = (segment_command *)((ulong)pcVar14 | 0x8000000000000000);
        bVar8 = SBORROW4(uVar12,1);
        iVar20 = uVar12 - 1;
        bVar7 = uVar12 == 1;
      }
      else {
        psVar18 = (segment_command *)0xee00676e69676461;
        uVar15 = 0x42736569726f7473;
        if (uVar12 != 7) {
          psVar18 = (segment_command *)0x80000000008bbce0;
          uVar15 = 0xd00000000000001a;
        }
        psVar16 = (segment_command *)0x80000000008bbd00;
        uVar19 = 0xd000000000000010;
        if (uVar12 != 6) {
          psVar16 = psVar18;
          uVar19 = uVar15;
        }
        psVar18 = (segment_command *)0x80000000008bbd20;
        uVar15 = 0xd00000000000001c;
        if (uVar12 != 4) {
          psVar18 = (segment_command *)0xec00000073656972;
          uVar15 = 0x6f74536863746566;
        }
        bVar8 = SBORROW4(uVar12,5);
        iVar20 = uVar12 - 5;
        bVar7 = uVar12 == 5;
      }
      if (bVar7 || iVar20 < 0 != bVar8) {
        psVar16 = psVar18;
        uVar19 = uVar15;
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,psVar16);
      goto code_r0x0077b234;
    }
    if (uVar21 == 1) {
      __ss6HasherV8_combineyySuF(5);
      psVar13 = (segment_command *)0x80000000008bcb40;
      in_ZR = (uVar12 & 0x3f) == 1;
      param_2 = (segment_command *)0xd000000000000012;
      if (!in_ZR) {
        param_2 = (segment_command *)0x6163696669746f6e;
      }
      pcVar14 = (char *)0xec0000006e6f6974;
      goto code_r0x001de49c;
    }
    uVar12 = uVar12 & 0xff;
    if (0x81 < uVar12) {
      if (uVar12 != 0x82) goto code_r0x001deaf8;
      goto code_r0x001deaf0;
    }
    if (uVar12 != 0x80) goto code_r0x001deab4;
    goto code_r0x001dec90;
  case 10:
    uVar19 = 0xc;
    break;
  case 0xb:
    __ss6HasherV8_combineyySuF(0xd);
    uVar22 = uVar22 & 0xff;
    if (uVar22 == 1 || (param_3 & 0xff) == 0) {
      if ((param_3 & 0xff) == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = 2;
      }
    }
    else {
      if (uVar22 == 2) {
        __ss6HasherV8_combineyySuF(3);
        uVar12 = uVar12 & 0xff;
        psVar18 = (segment_command *)0xe900000000000072;
        uVar19 = 0x65766f6563696f76;
        if (uVar12 != 3) {
          psVar18 = (segment_command *)0xeb00000000726573;
          uVar19 = 0x617245636967616d;
        }
        uVar15 = 0x7372656b63697473;
        if (uVar12 != 2) {
          uVar15 = uVar19;
        }
        psVar16 = (segment_command *)0xe800000000000000;
        if (uVar12 != 2) {
          psVar16 = psVar18;
        }
        bVar7 = ((ulong)param_2 & 0xff) != 0;
        uVar19 = 0x65646f4d6961;
        if (bVar7) {
          uVar19 = 0x736e6f6974706163;
        }
        psVar18 = (segment_command *)0xe600000000000000;
        if (bVar7) {
          psVar18 = (segment_command *)0xe800000000000000;
        }
        if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
          uVar15 = uVar19;
        }
        if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
          psVar16 = psVar18;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,psVar16);
        goto code_r0x0077b234;
      }
      if (uVar22 != 3) {
        __ss6HasherV8_combineyySuF(1);
        param_3 = 0x80000000008bd3c0;
        param_2 = (segment_command *)0xd000000000000013;
        goto code_r0x00778468;
      }
      uVar19 = 4;
    }
    __ss6HasherV8_combineyySuF(uVar19);
    __ss6HasherV8_combineyySuF(param_2);
    return param_2;
  case 0xc:
    uVar19 = 0xe;
    break;
  case 0xd:
  case 0x3a:
    __ss6HasherV8_combineyySuF(0x10);
    if ((param_3 & 0xff) != 0) {
      if ((uVar22 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001e7984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)&param_2[0x1c17b].vmaddr + 4) * 4 + 0x1e7988))();
        return param_1;
      }
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyySuF(param_2);
      return param_2;
    }
    __ss6HasherV8_combineyySuF(1);
    uVar12 = uVar12 & 0xff;
    uVar19 = 0x6863746566657270;
    if (uVar12 != 2) {
      uVar19 = 0x656e656870617267;
    }
    psVar16 = (segment_command *)0xe800000000000000;
    if (uVar12 != 2) {
      psVar16 = (segment_command *)0xee00726567676f4c;
    }
    psVar18 = (segment_command *)0xe900000000000061;
    uVar15 = 0x7461446775626564;
    if (((ulong)param_2 & 0xff) != 0) {
      psVar18 = (segment_command *)0xec00000072656c64;
      uVar15 = 0x6e6148726f727265;
    }
    if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
      uVar19 = uVar15;
    }
    if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
      psVar16 = psVar18;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,psVar16);
    goto code_r0x0077b234;
  case 0xe:
    __ss6HasherV8_combineyySuF(0x12);
    uVar22 = uVar22 & 0xff;
    if (uVar22 == 1 || (param_3 & 0xff) == 0) {
      if ((param_3 & 0xff) != 0) {
        __ss6HasherV8_combineyySuF(9);
        if (((ulong)param_2 & 0xff) == 0) {
          uVar19 = 0xd000000000000012;
          pcVar14 = "replyActivationWorkflow";
        }
        else {
          uVar19 = 0xd000000000000017;
          pcVar14 = "miniCameraLensIconWorkflow";
          if ((uVar12 & 0xff) != 1) {
            uVar19 = 0xd00000000000001a;
            pcVar14 = "LensCarouselPreview";
          }
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,(ulong)pcVar14 | 0x8000000000000000);
        psVar16 = (segment_command *)((ulong)pcVar14 | 0x8000000000000000);
        goto code_r0x0077b234;
      }
      __ss6HasherV8_combineyySuF(3);
      uVar12 = uVar12 & 0xff;
      psVar16 = (segment_command *)0xe900000000000073;
      uVar19 = 0x65736e654c746567;
      if (uVar12 != 2) {
        psVar16 = (segment_command *)0xef74736575716552;
        uVar19 = 0x70747448736e656c;
      }
      psVar18 = (segment_command *)0x80000000008bd890;
      uVar15 = 0xd000000000000010;
      if (((ulong)param_2 & 0xff) != 0) {
        psVar18 = (segment_command *)0xea0000000000736e;
        uVar15 = 0x654c657461657263;
      }
      if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
        uVar19 = uVar15;
      }
      if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
        psVar16 = psVar18;
      }
    }
    else {
      if (uVar22 == 2) {
        __ss6HasherV8_combineyySuF(10);
        __ss6HasherV8_combineyySuF(param_2);
        return param_2;
      }
      if (uVar22 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e930c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)&param_2[0x1c184].cmd + 2) * 4 + 0x1e9310))();
        return param_1;
      }
      __ss6HasherV8_combineyySuF(0xb);
      bVar7 = ((ulong)param_2 & 0xff) != 1;
      uVar19 = 0x74754265736f6c63;
      if (bVar7) {
        uVar19 = 0x766f72506e6f6369;
      }
      psVar16 = (segment_command *)0xeb000000006e6f74;
      if (bVar7) {
        psVar16 = (segment_command *)0xec00000072656469;
      }
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,psVar16);
    goto code_r0x0077b234;
  case 0xf:
    __ss6HasherV8_combineyySuF(0x13);
  case 0x33:
    uVar21 = uVar12 >> 4 & 0xf;
    if (uVar21 < 4) {
      if (1 < uVar21) {
        if (uVar21 == 2) {
          uVar12 = uVar12 & 0xff;
          if (uVar12 < 0x22) {
            if (uVar12 == 0x20) {
              psVar18 = (segment_command *)0x0;
            }
            else {
              psVar18 = (segment_command *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar12 == 0x22) {
            psVar18 = (segment_command *)((long)&MACH_HEADER.magic + 2);
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.magic + 3);
          }
        }
        else {
          uVar12 = uVar12 & 0xff;
          if (uVar12 < 0x32) {
            if (uVar12 == 0x30) {
              psVar18 = (segment_command *)&MACH_HEADER.cputype;
            }
            else {
              psVar18 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
            }
          }
          else if (uVar12 == 0x32) {
            psVar18 = (segment_command *)((long)&MACH_HEADER.cputype + 2);
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.cputype + 3);
          }
        }
        goto LAB_001eaf30;
      }
      if (uVar21 == 0) {
        __ss6HasherV8_combineyySuF(0x12);
        bVar7 = (uVar12 & 0xff) != 1;
        uVar19 = 0x4264657469736976;
        if (bVar7) {
          uVar19 = 0xd000000000000010;
        }
        psVar16 = (segment_command *)0xe900000000000079;
        if (bVar7) {
          psVar16 = (segment_command *)0x80000000008bda20;
        }
      }
      else {
        __ss6HasherV8_combineyySuF(0x19);
        if (((ulong)param_2 & 0xf) == 0) {
          uVar19 = 0x6c6172656e6567;
          psVar16 = (segment_command *)0xe700000000000000;
        }
        else {
          uVar19 = 0x6d6f72684370616d;
          psVar16 = (segment_command *)0xeb00000000325665;
          if ((uVar12 & 0xf) != 1) {
            uVar19 = 0xd000000000000010;
            psVar16 = (segment_command *)0x80000000008bd9c0;
          }
        }
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,psVar16);
      goto code_r0x0077b234;
    }
    if (5 < uVar21) {
      if (uVar21 == 6) {
        uVar12 = uVar12 & 0xff;
        if (uVar12 < 0x62) {
          if (uVar12 == 0x60) {
            psVar18 = (segment_command *)&MACH_HEADER.ncmds;
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.ncmds + 1);
          }
        }
        else if (uVar12 == 0x62) {
          psVar18 = (segment_command *)((long)&MACH_HEADER.ncmds + 3);
        }
        else {
          psVar18 = (segment_command *)&MACH_HEADER.sizeofcmds;
        }
      }
      else if (uVar21 == 7) {
        uVar12 = uVar12 & 0xff;
        if (uVar12 < 0x72) {
          if (uVar12 == 0x70) {
            psVar18 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 1);
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 2);
          }
        }
        else if (uVar12 == 0x72) {
          psVar18 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 3);
        }
        else {
          psVar18 = (segment_command *)&MACH_HEADER.flags;
        }
      }
      else if ((uVar12 & 0xff) == 0x80) {
        psVar18 = (segment_command *)((long)&MACH_HEADER.flags + 2);
      }
      else if ((uVar12 & 0xff) == 0x81) {
        psVar18 = (segment_command *)((long)&MACH_HEADER.flags + 3);
      }
      else {
        psVar18 = (segment_command *)&MACH_HEADER.reserved;
      }
LAB_001eaf30:
      __ss6HasherV8_combineyySuF(psVar18);
      return psVar18;
    }
    if (uVar21 == 4) {
      uVar12 = uVar12 & 0xff;
      if (uVar12 < 0x42) {
        if (uVar12 == 0x40) {
          psVar18 = (segment_command *)&MACH_HEADER.cpusubtype;
        }
        else {
          psVar18 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 1);
        }
      }
      else if (uVar12 == 0x42) {
        psVar18 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 2);
      }
      else {
        psVar18 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 3);
      }
      goto LAB_001eaf30;
    }
    uVar12 = uVar12 & 0xff;
    if (0x51 < uVar12) {
      if (uVar12 == 0x52) {
        psVar18 = (segment_command *)((long)&MACH_HEADER.filetype + 2);
      }
      else {
        psVar18 = (segment_command *)((long)&MACH_HEADER.filetype + 3);
      }
      goto LAB_001eaf30;
    }
    if (uVar12 == 0x50) {
      psVar18 = (segment_command *)&MACH_HEADER.filetype;
      goto LAB_001eaf30;
    }
    __ss6HasherV8_combineyySuF(0xd);
    param_2 = (segment_command *)0x6e6f697461636f6c;
    param_3 = 0xef676e6972616853;
    goto code_r0x00778468;
  case 0x10:
    __ss6HasherV8_combineyySuF(0x14);
    uVar22 = uVar22 & 0xff;
    if (uVar22 != 1 && (param_3 & 0xff) != 0) {
      if (uVar22 != 2) {
        if (uVar22 == 3) {
          unaff_x21 = (segment_command *)0xe90000000000006c;
          __ss6HasherV8_combineyySuF(4);
          uVar21 = uVar12 & 0xff;
          if (uVar21 == 1 || ((ulong)param_2 & 0xff) == 0) {
            psVar18 = (segment_command *)0x65646f4d64616f6c;
            psVar16 = unaff_x21;
            if (((ulong)param_2 & 0xff) != 0) {
              psVar18 = (segment_command *)0x6f4d64616f6c6e75;
              psVar16 = (segment_command *)0xeb000000006c6564;
            }
            goto code_r0x001dec68;
          }
          pcVar14 = "DiscoverFeedNotificationProcessors";
          goto code_r0x001de370;
        }
        if (param_2 == (segment_command *)0x0) goto code_r0x001dead0;
        if (param_2 == (segment_command *)((long)&MACH_HEADER.magic + 1)) goto code_r0x001deac8;
        goto code_r0x001deb10;
      }
      goto code_r0x001de838;
    }
    if ((param_3 & 0xff) == 0) goto code_r0x001dea1c;
    uVar19 = 1;
    goto code_r0x001deadc;
  case 0x11:
    param_2 = (segment_command *)(ulong)(uVar12 & 0xff);
    __ss6HasherV8_combineyySuF(0x15);
  case 0x37:
    iVar20 = (int)param_2;
    if (iVar20 < 5) {
      if (iVar20 == 2) goto code_r0x001dec90;
      if (iVar20 == 3) {
code_r0x001deab4:
        param_2 = (segment_command *)((long)&MACH_HEADER.magic + 1);
        goto code_r0x001de7a0;
      }
      if (iVar20 == 4) {
code_r0x001dead0:
        param_2 = (segment_command *)((long)&MACH_HEADER.magic + 3);
        goto code_r0x001de7a0;
      }
    }
    else {
      if (iVar20 == 5) {
code_r0x001deaf8:
        param_2 = (segment_command *)&MACH_HEADER.cputype;
        goto code_r0x001de7a0;
      }
      if (iVar20 == 6) {
code_r0x001deac8:
        param_2 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
        goto code_r0x001de7a0;
      }
      if (iVar20 == 7) {
code_r0x001deb10:
        param_2 = (segment_command *)((long)&MACH_HEADER.cputype + 2);
        goto code_r0x001de7a0;
      }
    }
    __ss6HasherV8_combineyySuF(2);
    psVar18 = (segment_command *)0x6d6f7250776f6873;
    if (iVar20 != 1) {
      psVar18 = (segment_command *)0x635365736f707865;
    }
    psVar16 = (segment_command *)0xea00000000007470;
    if (iVar20 != 1) {
      psVar16 = (segment_command *)0xeb0000000065706f;
    }
    goto code_r0x001dec68;
  case 0x12:
    __ss6HasherV8_combineyySuF(0x16);
    uVar21 = uVar12 & 0xff;
    uVar22 = uVar12 >> 5 & 7;
    if (2 < uVar22) {
      if (uVar22 < 5) {
        if (uVar22 == 3) {
          if (uVar21 < 0x62) {
            if (uVar21 == 0x60) {
              psVar18 = (segment_command *)((long)&MACH_HEADER.magic + 2);
            }
            else {
              psVar18 = (segment_command *)((long)&MACH_HEADER.magic + 3);
            }
          }
          else if (uVar21 == 0x62) {
            psVar18 = (segment_command *)&MACH_HEADER.cputype;
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
          }
        }
        else if (uVar21 < 0x82) {
          if (uVar21 == 0x80) {
            psVar18 = (segment_command *)((long)&MACH_HEADER.cputype + 2);
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.cputype + 3);
          }
        }
        else if (uVar21 == 0x82) {
          psVar18 = (segment_command *)&MACH_HEADER.cpusubtype;
        }
        else {
          psVar18 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 1);
        }
      }
      else if (uVar22 == 5) {
        if (uVar21 < 0xa2) {
          if (uVar21 == 0xa0) {
            psVar18 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 2);
          }
          else {
            psVar18 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 3);
          }
        }
        else if (uVar21 == 0xa2) {
          psVar18 = (segment_command *)&MACH_HEADER.filetype;
        }
        else {
          psVar18 = (segment_command *)((long)&MACH_HEADER.filetype + 1);
        }
      }
      else if (uVar21 == 0xc0) {
        psVar18 = (segment_command *)((long)&MACH_HEADER.filetype + 2);
      }
      else {
        psVar18 = (segment_command *)&MACH_HEADER.ncmds;
      }
      __ss6HasherV8_combineyySuF(psVar18);
      return psVar18;
    }
    if (uVar22 == 0) {
      __ss6HasherV8_combineyySuF(0);
      pcVar1 = "doubleEncryptionResolver";
      pcVar14 = "doubleEncryptionInvoker";
      pcVar2 = "encryptionInfoProvider";
      bVar7 = uVar21 == 1;
      uVar19 = 0xd000000000000017;
      if (!bVar7) {
        uVar19 = 0xd000000000000016;
      }
    }
    else {
      if (uVar22 != 1) {
        __ss6HasherV8_combineyySuF(0xf);
        bVar7 = (uVar12 & 0x1f) != 1;
        uVar19 = 0x7475436b63697571;
        if (bVar7) {
          uVar19 = 0x6c6172656e6567;
        }
        psVar16 = (segment_command *)0xe800000000000000;
        if (bVar7) {
          psVar16 = (segment_command *)0xe700000000000000;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar19,psVar16);
        goto code_r0x0077b234;
      }
      uVar21 = uVar12 & 0x1f;
      __ss6HasherV8_combineyySuF(1);
      pcVar1 = "opportunisticRetranscode";
      pcVar14 = "snapDocTranscode";
      uVar19 = 0xd000000000000010;
      pcVar2 = "snapDocTranscodeForExport";
      bVar7 = uVar21 == 1;
      if (!bVar7) {
        uVar19 = 0xd000000000000019;
      }
    }
    if (!bVar7) {
      pcVar14 = pcVar2;
    }
    uVar15 = 0xd000000000000018;
    if (uVar21 != 0) {
      uVar15 = uVar19;
      pcVar1 = pcVar14;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar15,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    psVar16 = (segment_command *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    goto code_r0x0077b234;
  case 0x13:
    uVar19 = 0x17;
    break;
  case 0x14:
  case 0x3f:
    __ss6HasherV8_combineyySuF(0x18);
  case 0x38:
    if ((uVar22 & 0xff) == 1 || (param_3 & 0xff) == 0) {
      if ((param_3 & 0xff) == 0) {
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF(param_2);
        return param_2;
      }
      __ss6HasherV8_combineyySuF(5);
      uVar21 = uVar12 & 0xff;
      psVar13 = (segment_command *)0xeb00000000646565;
      uVar15 = 0x4673646e65697266;
      psVar18 = (segment_command *)0xed00006465654674;
      uVar19 = 0x6867696c746f7073;
      if (uVar21 != 3) {
        psVar18 = (segment_command *)0xe700000000000000;
        uVar19 = 0x6e776f6e6b6e75;
      }
      uVar17 = 0x79726f7473;
      if (uVar21 != 2) {
        uVar17 = uVar19;
      }
      psVar16 = (segment_command *)0xe500000000000000;
      if (uVar21 != 2) {
        psVar16 = psVar18;
      }
      psVar18 = (segment_command *)0xe300000000000000;
      uVar19 = 0x70616d;
    }
    else {
      if ((uVar22 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x001f0968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)param_2[0x1c1b0].maxprot * 4 + 0x1f096c))();
        return param_1;
      }
      __ss6HasherV8_combineyySuF(10);
      uVar21 = uVar12 & 0xff;
      psVar13 = (segment_command *)0xe900000000000064;
      uVar15 = 0x6565466f54646461;
      uVar19 = 0x6574496863746566;
      psVar18 = (segment_command *)0xea0000000000736d;
      if (uVar21 != 3) {
        uVar19 = 0xd000000000000013;
        psVar18 = (segment_command *)0x80000000008bdf20;
      }
      uVar17 = 0x646565466e497369;
      if (uVar21 != 2) {
        uVar17 = uVar19;
      }
      psVar16 = (segment_command *)0xe800000000000000;
      if (uVar21 != 2) {
        psVar16 = psVar18;
      }
      psVar18 = (segment_command *)0xee00646565466d6f;
      uVar19 = 0x724665766f6d6572;
    }
    if (((ulong)param_2 & 0xff) != 0) {
      psVar13 = psVar18;
      uVar15 = uVar19;
    }
    if ((uVar12 & 0xff) < 2) {
      psVar16 = psVar13;
      uVar17 = uVar15;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar17,psVar16);
    goto code_r0x0077b234;
  case 0x15:
    uVar19 = 0x19;
    break;
  case 0x16:
    uVar19 = 0x1a;
    break;
  case 0x17:
    uVar19 = 0x1b;
    break;
  case 0x18:
    __ss6HasherV8_combineyySuF(0x1c);
    unaff_x21 = (segment_command *)(param_3 & 0xff);
    if ((param_3 & 0xff00) == 0x100) {
      bVar7 = param_2 < (segment_command *)((long)&MACH_HEADER.magic + 3);
      uVar4 = (long)(char)param_3 + (ulong)!bVar7;
      if ((long)-uVar4 < 0 != SCARRY8(~uVar4,(ulong)bVar7)) goto code_r0x001de4fc;
      if (param_2 != (segment_command *)0x0 || unaff_x21 != (segment_command *)0x0) {
        if (param_2 == (segment_command *)((long)&MACH_HEADER.magic + 1) &&
            unaff_x21 == (segment_command *)0x0) goto code_r0x001deaf0;
        goto code_r0x001dead0;
      }
    }
    else {
      __ss6HasherV8_combineyySuF(0);
      if (unaff_x21 != (segment_command *)((long)&MACH_HEADER.magic + 1)) goto code_r0x001dea1c;
    }
    goto code_r0x001deab4;
  case 0x19:
    __ss6HasherV8_combineyySuF(0x1e);
    uVar21 = uVar12 & 0xff;
    if (9 < uVar21) {
      if (uVar21 == 10) goto code_r0x001dead0;
      if (uVar21 == 0xb) goto code_r0x001deaf8;
      goto code_r0x001de850;
    }
    if (uVar21 != 8) goto code_r0x001de4c0;
    goto code_r0x001dec90;
  case 0x1a:
    __ss6HasherV8_combineyySuF(0x1f);
    if ((uVar12 & 0xff) == 3) goto code_r0x001deab4;
    if ((uVar12 & 0xff) == 4) goto code_r0x001deaf0;
    __ss6HasherV8_combineyySuF(0);
    if (((ulong)param_2 & 0xff) == 0) {
      psVar18 = (segment_command *)0x614264616f6c6572;
      psVar16 = (segment_command *)0xeb00000000656764;
      goto code_r0x001dec68;
    }
    psVar16 = (segment_command *)0xe90000000000006e;
    psVar18 = (segment_command *)0x6f63496863746566;
    pcVar14 = "bitmojiBadgeReload";
    lVar5 = -3;
code_r0x001de97c:
    if ((uVar12 & 0xff) != 1) {
      psVar18 = (segment_command *)(lVar5 + -0x2fffffffffffffeb);
      psVar16 = (segment_command *)((ulong)(pcVar14 + -0x20) | 0x8000000000000000);
    }
    goto code_r0x001dec68;
  case 0x1b:
    psVar18 = &segment_command_00000020;
    __ss6HasherV8_combineyySuF(0x20);
    if ((param_4 & 3) != 0) {
      if ((param_4 & 3) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001dea38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)&param_2[0x1c137].initprot + 2) * 4 + 0x1dea3c))();
        return psVar18;
      }
      __ss6HasherV8_combineyySuF(1);
      goto code_r0x00778468;
    }
code_r0x001dea1c:
    uVar19 = 0;
code_r0x001deadc:
    __ss6HasherV8_combineyySuF(uVar19);
    goto code_r0x001de7a0;
  case 0x1c:
    uVar19 = 0x21;
    break;
  case 0x1d:
    uVar19 = 0x22;
    break;
  case 0x1e:
    __ss6HasherV8_combineyySuF(0x23);
    if ((uVar12 & 0xff) != 5) {
      if ((uVar12 & 0xff) == 6) goto code_r0x001deaf0;
      __ss6HasherV8_combineyySuF(1);
      uVar12 = uVar12 & 0xff;
      psVar13 = (segment_command *)0x6f4a74696d627573;
      psVar11 = (segment_command *)0xea00000000007362;
      if (uVar12 != 3) {
        psVar13 = (segment_command *)0xd000000000000015;
        psVar11 = (segment_command *)0x80000000008bc790;
      }
      psVar16 = (segment_command *)0x80000000008bc7b0;
      psVar18 = (segment_command *)0xd000000000000023;
      if (uVar12 != 2) {
        psVar16 = psVar11;
        psVar18 = psVar13;
      }
      pcVar14 = "registerSystemJobProviders";
      if (((ulong)param_2 & 0xff) != 0) {
        pcVar14 = "ticatedJobProviders";
      }
      if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
        psVar18 = (segment_command *)0xd00000000000001a;
      }
      if (uVar12 == 1 || ((ulong)param_2 & 0xff) == 0) {
        psVar16 = (segment_command *)((ulong)pcVar14 | 0x8000000000000000);
      }
      goto code_r0x001dec68;
    }
    goto code_r0x001dec90;
  case 0x1f:
    uVar19 = 0x24;
    break;
  case 0x20:
    uVar19 = 0x25;
    break;
  case 0x21:
    uVar19 = 0x26;
    break;
  case 0x22:
    uVar19 = 0x27;
    break;
  case 0x23:
    uVar19 = 0x28;
    break;
  case 0x24:
    uVar19 = 0x29;
    break;
  case 0x25:
    uVar19 = 0x2a;
    break;
  case 0x26:
    if ((param_3 == 0 && param_2 == (segment_command *)0x0) && ((param_4 & 0xff) == 0x98)) {
      uVar19 = 2;
    }
    else if ((param_2 == (segment_command *)((long)&MACH_HEADER.magic + 1)) &&
            ((param_3 == 0 && ((param_4 & 0xff) == 0x98)))) {
      uVar19 = 3;
    }
    else if ((param_2 == (segment_command *)((long)&MACH_HEADER.magic + 2)) &&
            ((param_3 == 0 && ((param_4 & 0xff) == 0x98)))) {
      uVar19 = 0xf;
    }
    else if ((param_2 == (segment_command *)((long)&MACH_HEADER.magic + 3)) &&
            ((param_3 == 0 && ((param_4 & 0xff) == 0x98)))) {
      uVar19 = 0x11;
    }
    else {
      uVar19 = 0x1d;
    }
    __ss6HasherV8_combineyySuF(uVar19);
code_r0x001dec90:
    param_2 = (segment_command *)0x0;
    goto code_r0x001de7a0;
  case 0x27:
    if (!in_ZR) {
      psVar16 = in_x13;
      in_x12 = (char *)(in_x14 & 0xffff | 0x656e656870610000);
    }
    if (uVar21 != 0) {
      pcVar14 = (char *)(segment_command *)0xec00000072656c64;
      psVar18 = (segment_command *)0x6e6148726f727265;
    }
    if (uVar21 < 2) {
      psVar16 = (segment_command *)pcVar14;
      in_x12 = (char *)psVar18;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,in_x12,psVar16);
    goto code_r0x0077b234;
  case 0x28:
    if (uVar21 != 2) {
      param_1->cmd = 0;
      return param_1;
    }
    *(undefined2 *)&param_1->cmd = 0;
    return param_1;
  case 0x29:
    __ss6HasherV8_combineyySuF();
    return param_1;
  case 0x2a:
    *(undefined8 *)((long)psVar13->segname + (long)(param_1->segname + -0x10)) = 0;
    pcVar14 = param_1->segname + _DAT_00af6ff8 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7000 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7008 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7010 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7018 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7020 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7028 + -8;
    pcVar14[0] = '\0';
    puVar6 = PTR_s_init_00abbf70;
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    _objc_retain(param_2);
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,puVar6);
    return psVar10;
  case 0x2b:
    _objc_retain();
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,param_1);
    return psVar11;
  case 0x2c:
    if (!in_ZR) {
      in_x12 = (char *)(in_x14 & 0xffffffffffff | 0xeb00000000000000);
      in_x13 = (segment_command *)0x617245636967616d;
    }
    if (uVar12 != 2) {
      psVar18 = (segment_command *)in_x12;
      psVar16 = in_x13;
    }
    if (uVar12 != 0) {
      psVar13 = (segment_command *)0xe800000000000000;
      pcVar14 = (char *)(segment_command *)0x736e6f6974706163;
    }
    if ((int)uVar12 < 2) {
      psVar18 = psVar13;
      psVar16 = (segment_command *)pcVar14;
    }
    __sSS4hash4intoys6HasherVz_tF(&stack0xffffffffffffffd8,psVar16,psVar18);
    _swift_bridgeObjectRelease(psVar18);
    __ss6HasherV9_finalizeSiyF();
    return psVar18;
  case 0x2d:
    if (uVar21 == 0x40) {
      psVar18 = (segment_command *)0x0;
    }
    else {
      psVar18 = (segment_command *)0xaf4058;
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStaticObject();
      FUN_001da650();
    }
    return psVar18;
  case 0x2e:
    sVar3 = *(short *)((long)&param_1->cmd + 1);
    if (sVar3 != 0) {
      return (segment_command *)(ulong)(CONCAT21(sVar3,(char)param_1->cmd) - 1);
    }
    uVar12 = (uint)(byte)param_1->cmd;
    iVar20 = uVar12 - 2;
    if (uVar12 < 2) {
      iVar20 = -1;
    }
    return (segment_command *)(ulong)(iVar20 + 1);
  case 0x2f:
code_r0x001de370:
    pcVar14 = (char *)((long)pcVar14 + 0xb40);
  case 0x3d:
    pcVar14 = (char *)((ulong)&((segment_command *)((long)pcVar14 + -0x48))->fileoff |
                      0x8000000000000000);
    psVar18 = (segment_command *)0xd000000000000013;
    psVar16 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 1);
code_r0x001de38c:
    psVar16 = (segment_command *)((ulong)psVar16 | 0xd000000000000000);
    in_x12 = "NotificationCenterBadgeUpdate";
code_r0x001de39c:
    in_x12 = (char *)((ulong)in_x12 | 0x8000000000000000);
    in_x13 = (segment_command *)((long)unaff_x21->segname + 3);
    in_x14 = 0x75626564;
code_r0x001de3ac:
    psVar13 = psVar16;
    if (uVar21 != 3) {
      in_x12 = (char *)in_x13;
      psVar13 = (segment_command *)(in_x14 & 0xffffffff | 0x6569566700000000);
    }
    psVar16 = (segment_command *)pcVar14;
    if (uVar21 != 2) {
      psVar18 = psVar13;
      psVar16 = (segment_command *)in_x12;
    }
code_r0x001dec68:
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar18,psVar16);
code_r0x0077b234:
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(psVar16);
    return psVar16;
  case 0x30:
    *(undefined8 *)((long)psVar13->segname + (long)(param_1->segname + -0x10)) = 0;
    pcVar14 = param_1->segname + _DAT_00af6f28 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f30 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f38 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f40 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f48 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f50 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f58 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f60 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f68 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f70 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f78 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f80 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f88 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f90 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6f98 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fa0 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fa8 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fb0 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fb8 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fc0 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fc8 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fd0 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fd8 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fe0 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6fe8 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6ff0 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af6ff8 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7000 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7008 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7010 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7018 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7020 + -8;
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14 = param_1->segname + _DAT_00af7028 + -8;
    pcVar14[0] = '\0';
    puVar6 = PTR_s_init_00abbf70;
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    _objc_retain(param_2);
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,puVar6);
    return psVar9;
  case 0x31:
  case 0x34:
code_r0x001de49c:
    psVar18 = param_2;
    psVar16 = psVar13;
    if (!in_ZR) {
      psVar16 = (segment_command *)pcVar14;
    }
    goto code_r0x001dec68;
  case 0x35:
code_r0x001de4c0:
    if (uVar21 == 9) {
code_r0x001deaf0:
      param_2 = (segment_command *)((long)&MACH_HEADER.magic + 2);
      goto code_r0x001de7a0;
    }
code_r0x001de850:
    __ss6HasherV8_combineyySuF(1);
    uVar12 = uVar12 & 0xff;
    if (uVar12 < 4) {
      psVar16 = (segment_command *)0x80000000008bbde0;
      psVar18 = (segment_command *)0xd000000000000022;
      if (uVar12 != 2) {
        psVar16 = (segment_command *)0xe700000000000000;
        psVar18 = (segment_command *)0x64616f6c657270;
      }
      pcVar14 = "featureSyncJobProcessor";
      psVar11 = (segment_command *)0xd000000000000015;
      if (((ulong)param_2 & 0xff) != 0) {
        pcVar14 = "esSyncJobProcessor";
        psVar11 = (segment_command *)0xd000000000000017;
      }
      psVar13 = (segment_command *)((ulong)pcVar14 | 0x8000000000000000);
      bVar8 = SBORROW4(uVar12,1);
      iVar20 = uVar12 - 1;
      bVar7 = uVar12 == 1;
    }
    else {
      psVar16 = (segment_command *)0x80000000008bbda0;
      psVar18 = (segment_command *)0xd000000000000010;
      if (uVar12 != 6) {
        psVar16 = (segment_command *)0xef72656469766f72;
        psVar18 = (segment_command *)0x507463656a627573;
      }
      psVar13 = (segment_command *)0xee0073746e656970;
      psVar11 = (segment_command *)0x696365526b6e6172;
      if (uVar12 != 4) {
        psVar13 = (segment_command *)0x80000000008bbdc0;
        psVar11 = (segment_command *)0xd000000000000011;
      }
      bVar8 = SBORROW4(uVar12,5);
      iVar20 = uVar12 - 5;
      bVar7 = uVar12 == 5;
    }
    if (bVar7 || iVar20 < 0 != bVar8) {
      psVar18 = psVar11;
      psVar16 = psVar13;
    }
    goto code_r0x001dec68;
  case 0x36:
    goto code_r0x001de38c;
  case 0x39:
code_r0x001de4fc:
    bVar7 = param_2 < (segment_command *)((long)&MACH_HEADER.cputype + 1);
    uVar4 = (long)(char)unaff_x21 + (ulong)!bVar7;
    if ((long)-uVar4 < 0 == SCARRY8(~uVar4,(ulong)bVar7)) {
      if (param_2 == (segment_command *)((long)&MACH_HEADER.magic + 3) &&
          unaff_x21 == (segment_command *)0x0) goto code_r0x001deaf8;
      goto code_r0x001deac8;
    }
    if (param_2 != (segment_command *)((long)&MACH_HEADER.cputype + 1) ||
        unaff_x21 != (segment_command *)0x0) {
      param_2 = (segment_command *)((long)&MACH_HEADER.cputype + 3);
      goto code_r0x001de7a0;
    }
    goto code_r0x001deb10;
  case 0x3b:
    goto code_r0x001de3ac;
  case 0x3e:
    goto code_r0x001de39c;
  }
  __ss6HasherV8_combineyySuF(uVar19);
  param_2 = (segment_command *)((ulong)param_2 & 0xff);
code_r0x001de7a0:
  __ss6HasherV8_combineyySuF(param_2);
  return param_2;
}



/* Entry: 001decf0; end: 001decfb;  */

/* WARNING: Removing unreachable block (ram,0x001eb0b4) */
/* WARNING: Removing unreachable block (ram,0x001eb0bc) */
/* WARNING: Removing unreachable block (ram,0x001eb110) */
/* WARNING: Removing unreachable block (ram,0x001eb118) */
/* WARNING: Removing unreachable block (ram,0x001eb148) */
/* WARNING: Removing unreachable block (ram,0x001eb150) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_001decf0(segment_command *param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  short sVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  dword dVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar11;
  bool bVar12;
  segment_command *psVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  segment_command *psVar25;
  undefined *puVar26;
  undefined1 **ppuVar27;
  uint uVar28;
  undefined8 uVar29;
  uint uVar30;
  segment_command *psVar31;
  char *pcVar32;
  segment_command *psVar33;
  segment_command *psVar34;
  segment_command *psVar35;
  segment_command *psVar36;
  char *in_x12;
  segment_command *in_x13;
  segment_command *in_x14;
  int iVar37;
  uint uVar38;
  segment_command *psVar39;
  segment_command *unaff_x19;
  ulong uVar40;
  segment_command *unaff_x20;
  long lVar41;
  segment_command *unaff_x21;
  ulong unaff_x22;
  undefined1 *puVar42;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
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
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined1 auStack_a8 [72];
  undefined1 *puStack_40;
  
  psVar25 = *(segment_command **)unaff_x20;
  psVar35 = *(segment_command **)unaff_x20->segname;
  bVar3 = (byte)*(dword *)((long)unaff_x20->segname + 8);
  puVar16 = &stack0xffffffffffffffd0;
  puVar17 = &stack0xffffffffffffffd0;
  puVar18 = &stack0xffffffffffffffd0;
  puVar19 = &stack0xffffffffffffffd0;
  puVar20 = &stack0xffffffffffffffd0;
  puVar21 = &stack0xffffffffffffffd0;
  puVar22 = &stack0xffffffffffffffd0;
  puVar23 = &stack0xffffffffffffffd0;
  puStack_40 = &stack0xfffffffffffffff0;
  uVar38 = (uint)(bVar3 >> 2);
  psVar31 = (segment_command *)(ulong)uVar38;
  pcVar32 = &UNK_007e5768;
  psVar36 = (segment_command *)(ulong)*(ushort *)(&UNK_007e5768 + (long)psVar31 * 2);
  psVar34 = (segment_command *)((long)psVar36 * 4 + 0x1de294);
  uVar30 = (uint)psVar25;
  uVar28 = (uint)psVar35;
  puVar10 = &stack0xffffffffffffffd0;
  puVar9 = &stack0xffffffffffffffd0;
  psVar13 = param_1;
  psVar33 = psVar25;
  psVar39 = psVar25;
  puVar42 = puStack_40;
  switch(bVar3 >> 2) {
  default:
    param_1 = (segment_command *)0x0;
  case 0x83:
  case 0x90:
  case 0x97:
  case 0xc4:
  case 0xcb:
  case 0xeb:
  case 0xf9:
    unaff_x21 = psVar35;
code_r0x001de29c:
    __ss6HasherV8_combineyySuF(param_1);
code_r0x001de2a0:
    psVar31 = (segment_command *)((ulong)unaff_x21 & 0xff);
code_r0x001de2a4:
    if (psVar31 == (segment_command *)((long)&MACH_HEADER.magic + 1)) {
code_r0x001de2ac:
                    /* WARNING: Could not recover jumptable at 0x001de2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)psVar25[0x1c138].cmd * 4 + 0x1dea3c))();
      auVar43._8_8_ = psVar33;
      auVar43._0_8_ = param_1;
      return auVar43;
    }
code_r0x001de838:
    uVar14 = 2;
code_r0x001deadc:
    __ss6HasherV8_combineyySuF(uVar14);
    param_1 = psVar25;
    goto code_r0x001de7a0;
  case 1:
    param_1 = (segment_command *)((long)&MACH_HEADER.magic + 1);
  case 0x46:
    break;
  case 2:
    param_1 = (segment_command *)&MACH_HEADER.cputype;
    break;
  case 3:
  case 0x51:
    __ss6HasherV8_combineyySuF(5);
    uVar38 = uVar30 & 0xff;
    in_OV = SBORROW4(uVar38,10);
    in_NG = (int)(uVar38 - 10) < 0;
    in_ZR = uVar38 == 10;
  case 0x43:
    if (in_ZR || in_NG != in_OV) {
      if (uVar38 == 9) goto code_r0x001dec90;
      if (uVar38 == 10) {
code_r0x001deab4:
        param_1 = (segment_command *)((long)&MACH_HEADER.magic + 1);
        goto code_r0x001de7a0;
      }
    }
    else {
      if (uVar38 == 0xb) {
code_r0x001dead0:
        param_1 = (segment_command *)((long)&MACH_HEADER.magic + 3);
        goto code_r0x001de7a0;
      }
      if (uVar38 == 0xc) {
code_r0x001deaf8:
        param_1 = (segment_command *)&MACH_HEADER.cputype;
        goto code_r0x001de7a0;
      }
    }
    __ss6HasherV8_combineyySuF(2);
    uVar40 = (ulong)psVar25 & 0xff;
    uVar6 = (ulong)psVar25 & 0xff;
    uVar30 = uVar30 & 0xff;
    if (uVar30 < 4) {
      pcVar32 = "metaInfoProvider";
      if (uVar30 != 2) {
        pcVar32 = "extensionInfoProvider";
      }
      psVar34 = (segment_command *)0x80000000008bbc80;
      psVar31 = (segment_command *)0xd00000000000001b;
      if (((ulong)psVar25 & 0xff) != 0) {
        psVar34 = (segment_command *)0xea0000000000746e;
        psVar31 = (segment_command *)0x657645656b616873;
      }
      psVar25 = (segment_command *)0xd000000000000010;
      if (uVar30 == 1 || uVar40 == 0) {
        psVar25 = psVar31;
      }
      psVar13 = (segment_command *)((ulong)pcVar32 | 0x8000000000000000);
      if (uVar30 == 1 || uVar6 == 0) {
        psVar13 = psVar34;
      }
    }
    else {
      pcVar32 = "featureSettingsProvider";
      psVar34 = (segment_command *)0xd000000000000016;
      if (uVar30 != 7) {
        pcVar32 = "DeepLinkHandling";
        psVar34 = (segment_command *)0xd000000000000017;
      }
      pcVar2 = "startSyncManagerUnauth";
      psVar25 = (segment_command *)0xd000000000000014;
      if (uVar30 != 6) {
        pcVar2 = pcVar32;
        psVar25 = psVar34;
      }
      pcVar32 = "composerLogProvider";
      psVar34 = (segment_command *)0xd000000000000015;
      if (uVar30 != 4) {
        pcVar32 = "startSyncManagerAuth";
        psVar34 = (segment_command *)0xd000000000000013;
      }
      if (uVar30 < 6) {
        pcVar2 = pcVar32;
        psVar25 = psVar34;
      }
      psVar13 = (segment_command *)((ulong)pcVar2 | 0x8000000000000000);
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
    goto code_r0x0077b234;
  case 4:
    param_1 = (segment_command *)((long)&MACH_HEADER.cputype + 2);
  case 0x4a:
    break;
  case 5:
    psVar13 = (segment_command *)((long)&MACH_HEADER.cputype + 3);
  case 0x44:
    __ss6HasherV8_combineyySuF(psVar13);
code_r0x001de618:
    uVar38 = uVar30 & 0xff;
    uVar28 = uVar30 >> 5 & 7;
    if (2 < uVar28) {
      if (uVar28 < 5) {
        if (uVar28 == 3) {
          if (uVar38 < 100) {
            if (uVar38 < 0x62) {
              if (uVar38 == 0x60) {
                uVar14 = 0;
              }
              else {
                uVar14 = 1;
              }
            }
            else if (uVar38 == 0x62) {
              uVar14 = 2;
            }
            else {
              uVar14 = 3;
            }
          }
          else if (uVar38 < 0x66) {
            if (uVar38 == 100) {
              uVar14 = 4;
            }
            else {
              uVar14 = 6;
            }
          }
          else if (uVar38 == 0x66) {
            uVar14 = 7;
          }
          else {
            uVar14 = 8;
          }
        }
        else if (uVar38 < 0x84) {
          if (uVar38 < 0x82) {
            if (uVar38 == 0x80) {
              uVar14 = 9;
            }
            else {
              uVar14 = 10;
            }
          }
          else if (uVar38 == 0x82) {
            uVar14 = 0xb;
          }
          else {
            uVar14 = 0xd;
          }
        }
        else if (uVar38 < 0x86) {
          if (uVar38 == 0x84) {
            uVar14 = 0xe;
          }
          else {
            uVar14 = 0xf;
          }
        }
        else if (uVar38 == 0x86) {
          uVar14 = 0x10;
        }
        else {
          uVar14 = 0x11;
        }
      }
      else if (uVar28 == 5) {
        if (uVar38 < 0xa4) {
          if (uVar38 < 0xa2) {
            if (uVar38 == 0xa0) {
              uVar14 = 0x12;
            }
            else {
              uVar14 = 0x13;
            }
          }
          else if (uVar38 == 0xa2) {
            uVar14 = 0x14;
          }
          else {
            uVar14 = 0x15;
          }
        }
        else if (uVar38 < 0xa6) {
          if (uVar38 == 0xa4) {
            uVar14 = 0x16;
          }
          else {
            uVar14 = 0x17;
          }
        }
        else {
          if (uVar38 != 0xa6) {
            __ss6HasherV8_combineyySuF(0x1a);
            unaff_x21 = (segment_command *)0x80000000008bcc40;
            psVar25 = (segment_command *)0xd000000000000012;
code_r0x00778468:
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)(param_1,psVar25,unaff_x21);
            auVar100._8_8_ = psVar25;
            auVar100._0_8_ = param_1;
            return auVar100;
          }
          uVar14 = 0x18;
        }
      }
      else if (uVar38 < 0xc2) {
        if (uVar38 == 0xc0) {
          uVar14 = 0x1b;
        }
        else {
          uVar14 = 0x1c;
        }
      }
      else if (uVar38 == 0xc2) {
        uVar14 = 0x1d;
      }
      else if (uVar38 == 0xc3) {
        uVar14 = 0x1e;
      }
      else {
        uVar14 = 0x1f;
      }
      __ss6HasherV8_combineyySuF(uVar14);
      auVar47._8_8_ = psVar25;
      auVar47._0_8_ = uVar14;
      return auVar47;
    }
    if (uVar28 == 0) {
      __ss6HasherV8_combineyySuF(5);
      psVar25 = (segment_command *)0xd000000000000019;
      pcVar32 = "LockedCameraCapture";
      if (uVar38 != 1) {
        psVar25 = (segment_command *)0xd000000000000012;
        pcVar32 = "invalidateSessionContents";
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,(ulong)pcVar32 | 0x8000000000000000);
      psVar13 = (segment_command *)((ulong)pcVar32 | 0x8000000000000000);
    }
    else {
      uVar40 = (ulong)psVar25 & 0x1f;
      uVar6 = (ulong)psVar25 & 0x1f;
      uVar30 = uVar30 & 0x1f;
      if (uVar28 == 1) {
        __ss6HasherV8_combineyySuF(0xc);
        psVar25 = (segment_command *)0xd000000000000010;
        if (uVar30 != 1) {
          psVar25 = (segment_command *)0x6573624f6c6c6163;
        }
        psVar13 = (segment_command *)0x80000000008bce20;
        if (uVar30 != 1) {
          psVar13 = (segment_command *)0xec00000072657672;
        }
      }
      else {
        __ss6HasherV8_combineyySuF(0x19);
        psVar34 = (segment_command *)0xed00007261657070;
        psVar31 = (segment_command *)0x4164694477656976;
        if (uVar30 != 3) {
          psVar34 = (segment_command *)0xee00686374656665;
          psVar31 = (segment_command *)0x725064616f6c7075;
        }
        psVar13 = (segment_command *)0x80000000008bcc80;
        psVar36 = (segment_command *)0xd000000000000011;
        if (uVar30 != 2) {
          psVar13 = psVar34;
          psVar36 = psVar31;
        }
        psVar34 = (segment_command *)0xed000074696e4972;
        psVar31 = (segment_command *)0x65746c69466f6567;
        if (((ulong)psVar25 & 0x1f) != 0) {
          psVar34 = (segment_command *)0x80000000008bcca0;
          psVar31 = (segment_command *)0xd000000000000017;
        }
        psVar25 = psVar36;
        if (uVar30 == 1 || uVar40 == 0) {
          psVar25 = psVar31;
        }
        if (uVar30 == 1 || uVar6 == 0) {
          psVar13 = psVar34;
        }
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
    }
    goto code_r0x0077b234;
  case 6:
    __ss6HasherV8_combineyySuF(8);
    puVar9 = (undefined1 *)register0x00000008;
    psVar33 = unaff_x19;
    psVar13 = unaff_x20;
    puStack_40 = unaff_x29;
  case 0x52:
    *(segment_command **)(puVar9 + -0x20) = psVar13;
    *(segment_command **)(puVar9 + -0x18) = psVar33;
    *(undefined1 **)(puVar9 + -0x10) = puStack_40;
    *(undefined8 *)(puVar9 + -8) = unaff_x30;
    if ((uVar30 & 0xff) == 4) {
      __ss6HasherV8_combineyySuF(1);
      psVar25 = (segment_command *)0x4c63696d616e7964;
      unaff_x21 = (segment_command *)0xed0000656c61636f;
      goto code_r0x00778468;
    }
    if ((uVar30 & 0xff) == 5) {
      __ss6HasherV8_combineyySuF(2);
      psVar25 = (segment_command *)0x49726f74696e6f6d;
      unaff_x21 = (segment_command *)0xeb0000000074696e;
      goto code_r0x00778468;
    }
    __ss6HasherV8_combineyySuF(0);
    uVar40 = (ulong)psVar25 & 0xff;
    uVar6 = (ulong)psVar25 & 0xff;
    uVar30 = uVar30 & 0xff;
    psVar34 = (segment_command *)0x6e49726567676f6c;
    psVar13 = (segment_command *)0xea00000000007469;
    if (uVar30 != 2) {
      psVar34 = (segment_command *)0xd000000000000013;
      psVar13 = (segment_command *)0x80000000008bd050;
    }
    psVar31 = (segment_command *)0xd000000000000010;
    pcVar32 = "backgroundExecution";
    if (((ulong)psVar25 & 0xff) != 0) {
      psVar31 = (segment_command *)0xd000000000000013;
      pcVar32 = "loggerDebugViewInit";
    }
    psVar25 = psVar34;
    if (uVar30 == 1 || uVar40 == 0) {
      psVar25 = psVar31;
    }
    if (uVar30 == 1 || uVar6 == 0) {
      psVar13 = (segment_command *)((ulong)pcVar32 | 0x8000000000000000);
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
    goto code_r0x0077b234;
  case 7:
    __ss6HasherV8_combineyySuF(9);
    uVar38 = uVar30 & 0xff;
    if (uVar38 < 5) {
      if (uVar38 != 3) {
        if (uVar38 != 4) goto code_r0x001de934;
        goto code_r0x001deab4;
      }
      goto code_r0x001dec90;
    }
    if (uVar38 == 5) goto code_r0x001dead0;
    if (uVar38 != 6) {
code_r0x001de934:
      __ss6HasherV8_combineyySuF(2);
      if (((ulong)psVar25 & 0xff) != 0) {
        psVar33 = (segment_command *)0xeb000000006e6967;
        psVar25 = (segment_command *)0x6f4c6e4f74696e69;
        pcVar32 = "initOnForeground";
        lVar15 = -5;
        goto code_r0x001de97c;
      }
      psVar25 = (segment_command *)&UNK_00007573;
      goto code_r0x001dec50;
    }
    goto code_r0x001deaf8;
  case 8:
    param_1 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 2);
  case 0x49:
    break;
  case 9:
    __ss6HasherV8_combineyySuF(0xb);
    uVar38 = uVar30 >> 6 & 3;
    if (uVar38 == 0) {
      __ss6HasherV8_combineyySuF(3);
      uVar30 = uVar30 & 0xff;
      if (uVar30 < 4) {
        psVar13 = (segment_command *)0xec00000070756d72;
        psVar34 = (segment_command *)0x615779636167656c;
        if (uVar30 != 2) {
          psVar13 = (segment_command *)0x80000000008bbd40;
          psVar34 = (segment_command *)0xd000000000000016;
        }
        psVar31 = (segment_command *)0xd000000000000013;
        pcVar32 = "warmupCustomStories";
        if (((ulong)psVar25 & 0xff) != 0) {
          pcVar32 = "snapReadReceiptCleanup";
        }
        psVar36 = (segment_command *)((ulong)pcVar32 | 0x8000000000000000);
        bVar11 = SBORROW4(uVar30,1);
        iVar37 = uVar30 - 1;
        bVar12 = uVar30 == 1;
      }
      else {
        psVar25 = (segment_command *)0xee00676e69676461;
        psVar31 = (segment_command *)0x42736569726f7473;
        if (uVar30 != 7) {
          psVar25 = (segment_command *)0x80000000008bbce0;
          psVar31 = (segment_command *)0xd00000000000001a;
        }
        psVar13 = (segment_command *)0x80000000008bbd00;
        psVar34 = (segment_command *)0xd000000000000010;
        if (uVar30 != 6) {
          psVar13 = psVar25;
          psVar34 = psVar31;
        }
        psVar36 = (segment_command *)0x80000000008bbd20;
        psVar31 = (segment_command *)0xd00000000000001c;
        if (uVar30 != 4) {
          psVar36 = (segment_command *)0xec00000073656972;
          psVar31 = (segment_command *)0x6f74536863746566;
        }
        bVar11 = SBORROW4(uVar30,5);
        iVar37 = uVar30 - 5;
        bVar12 = uVar30 == 5;
      }
      psVar25 = psVar34;
      if (bVar12 || iVar37 < 0 != bVar11) {
        psVar13 = psVar36;
        psVar25 = psVar31;
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
      goto code_r0x0077b234;
    }
    if (uVar38 == 1) {
      __ss6HasherV8_combineyySuF(5);
      psVar31 = (segment_command *)0x80000000008bcb40;
      in_ZR = (uVar30 & 0x3f) == 1;
      psVar25 = (segment_command *)0xd000000000000012;
      if (!in_ZR) {
        psVar25 = (segment_command *)0x6163696669746f6e;
      }
      pcVar32 = (char *)0xec0000006e6f6974;
      goto code_r0x001de49c;
    }
    uVar30 = uVar30 & 0xff;
    if (0x81 < uVar30) {
      if (uVar30 != 0x82) goto code_r0x001deaf8;
      goto code_r0x001deaf0;
    }
    if (uVar30 != 0x80) goto code_r0x001deab4;
    goto code_r0x001dec90;
  case 10:
    param_1 = (segment_command *)&MACH_HEADER.filetype;
    break;
  case 0xb:
    __ss6HasherV8_combineyySuF(0xd);
    uVar28 = uVar28 & 0xff;
    if (uVar28 == 1 || ((ulong)psVar35 & 0xff) == 0) {
      if (((ulong)psVar35 & 0xff) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 2;
      }
LAB_001e604c:
      psVar34 = psVar25;
      __ss6HasherV8_combineyySuF(uVar14);
      __ss6HasherV8_combineyySuF(psVar25);
      auVar54._8_8_ = psVar34;
      auVar54._0_8_ = psVar25;
      return auVar54;
    }
    if (uVar28 == 2) {
      __ss6HasherV8_combineyySuF(3);
      uVar40 = (ulong)psVar25 & 0xff;
      uVar6 = (ulong)psVar25 & 0xff;
      uVar30 = uVar30 & 0xff;
      psVar34 = (segment_command *)0xe900000000000072;
      psVar31 = (segment_command *)0x65766f6563696f76;
      if (uVar30 != 3) {
        psVar34 = (segment_command *)0xeb00000000726573;
        psVar31 = (segment_command *)0x617245636967616d;
      }
      psVar36 = (segment_command *)0x7372656b63697473;
      if (uVar30 != 2) {
        psVar36 = psVar31;
      }
      psVar13 = (segment_command *)0xe800000000000000;
      if (uVar30 != 2) {
        psVar13 = psVar34;
      }
      bVar12 = ((ulong)psVar25 & 0xff) != 0;
      psVar34 = (segment_command *)0x65646f4d6961;
      if (bVar12) {
        psVar34 = (segment_command *)0x736e6f6974706163;
      }
      psVar31 = (segment_command *)0xe600000000000000;
      if (bVar12) {
        psVar31 = (segment_command *)0xe800000000000000;
      }
      psVar25 = psVar36;
      if (uVar30 == 1 || uVar40 == 0) {
        psVar25 = psVar34;
      }
      if (uVar30 == 1 || uVar6 == 0) {
        psVar13 = psVar31;
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
      goto code_r0x0077b234;
    }
    if (uVar28 == 3) {
      uVar14 = 4;
      goto LAB_001e604c;
    }
    __ss6HasherV8_combineyySuF(1);
    unaff_x21 = (segment_command *)0x80000000008bd3c0;
    psVar25 = (segment_command *)0xd000000000000013;
    goto code_r0x00778468;
  case 0xc:
    param_1 = (segment_command *)((long)&MACH_HEADER.filetype + 2);
    break;
  case 0xd:
  case 0x3a:
    __ss6HasherV8_combineyySuF(0x10);
    unaff_x21 = psVar35;
  case 0x50:
    if (((ulong)unaff_x21 & 0xff) != 0) {
      if (((uint)unaff_x21 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001e7984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)&psVar25[0x1c17b].vmaddr + 4) * 4 + 0x1e7988))();
        auVar58._8_8_ = psVar25;
        auVar58._0_8_ = param_1;
        return auVar58;
      }
      psVar34 = psVar25;
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyySuF(psVar25);
      auVar57._8_8_ = psVar34;
      auVar57._0_8_ = psVar25;
      return auVar57;
    }
    __ss6HasherV8_combineyySuF(1);
    uVar40 = (ulong)psVar25 & 0xff;
    uVar6 = (ulong)psVar25 & 0xff;
    uVar30 = uVar30 & 0xff;
    psVar34 = (segment_command *)0x6863746566657270;
    if (uVar30 != 2) {
      psVar34 = (segment_command *)0x656e656870617267;
    }
    psVar13 = (segment_command *)0xe800000000000000;
    if (uVar30 != 2) {
      psVar13 = (segment_command *)0xee00726567676f4c;
    }
    psVar31 = (segment_command *)0xe900000000000061;
    psVar36 = (segment_command *)0x7461446775626564;
    if (((ulong)psVar25 & 0xff) != 0) {
      psVar31 = (segment_command *)0xec00000072656c64;
      psVar36 = (segment_command *)0x6e6148726f727265;
    }
    psVar25 = psVar34;
    if (uVar30 == 1 || uVar40 == 0) {
      psVar25 = psVar36;
    }
    if (uVar30 == 1 || uVar6 == 0) {
      psVar13 = psVar31;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
    goto code_r0x0077b234;
  case 0xe:
    __ss6HasherV8_combineyySuF(0x12);
  case 0x4b:
    uVar28 = uVar28 & 0xff;
    if (uVar28 == 1 || ((ulong)psVar35 & 0xff) == 0) {
      if (((ulong)psVar35 & 0xff) != 0) {
        __ss6HasherV8_combineyySuF(9);
        if (((ulong)psVar25 & 0xff) == 0) {
          psVar25 = (segment_command *)0xd000000000000012;
          pcVar32 = "replyActivationWorkflow";
        }
        else {
          psVar25 = (segment_command *)0xd000000000000017;
          pcVar32 = "miniCameraLensIconWorkflow";
          if ((uVar30 & 0xff) != 1) {
            psVar25 = (segment_command *)0xd00000000000001a;
            pcVar32 = "LensCarouselPreview";
          }
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,(ulong)pcVar32 | 0x8000000000000000);
        psVar13 = (segment_command *)((ulong)pcVar32 | 0x8000000000000000);
        goto code_r0x0077b234;
      }
      __ss6HasherV8_combineyySuF(3);
      uVar40 = (ulong)psVar25 & 0xff;
      uVar6 = (ulong)psVar25 & 0xff;
      uVar30 = uVar30 & 0xff;
      psVar13 = (segment_command *)0xe900000000000073;
      psVar34 = (segment_command *)0x65736e654c746567;
      if (uVar30 != 2) {
        psVar13 = (segment_command *)0xef74736575716552;
        psVar34 = (segment_command *)0x70747448736e656c;
      }
      psVar31 = (segment_command *)0x80000000008bd890;
      psVar36 = (segment_command *)0xd000000000000010;
      if (((ulong)psVar25 & 0xff) != 0) {
        psVar31 = (segment_command *)0xea0000000000736e;
        psVar36 = (segment_command *)0x654c657461657263;
      }
      psVar25 = psVar34;
      if (uVar30 == 1 || uVar40 == 0) {
        psVar25 = psVar36;
      }
      if (uVar30 == 1 || uVar6 == 0) {
        psVar13 = psVar31;
      }
    }
    else {
      if (uVar28 == 2) {
        psVar34 = psVar25;
        __ss6HasherV8_combineyySuF(10);
        __ss6HasherV8_combineyySuF(psVar25);
        auVar59._8_8_ = psVar34;
        auVar59._0_8_ = psVar25;
        return auVar59;
      }
      if (uVar28 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e930c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)&psVar25[0x1c184].cmd + 2) * 4 + 0x1e9310))();
        auVar60._8_8_ = psVar25;
        auVar60._0_8_ = param_1;
        return auVar60;
      }
      __ss6HasherV8_combineyySuF(0xb);
      bVar12 = ((ulong)psVar25 & 0xff) != 1;
      psVar25 = (segment_command *)0x74754265736f6c63;
      if (bVar12) {
        psVar25 = (segment_command *)0x766f72506e6f6369;
      }
      psVar13 = (segment_command *)0xeb000000006e6f74;
      if (bVar12) {
        psVar13 = (segment_command *)0xec00000072656469;
      }
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
    goto code_r0x0077b234;
  case 0xf:
    __ss6HasherV8_combineyySuF(0x13);
  case 0x33:
    uVar38 = uVar30 >> 4 & 0xf;
    if (3 < uVar38) {
      if (5 < uVar38) {
        if (uVar38 == 6) {
          uVar30 = uVar30 & 0xff;
          if (uVar30 < 0x62) {
            if (uVar30 == 0x60) {
              uVar14 = 0x10;
            }
            else {
              uVar14 = 0x11;
            }
          }
          else if (uVar30 == 0x62) {
            uVar14 = 0x13;
          }
          else {
            uVar14 = 0x14;
          }
        }
        else if (uVar38 == 7) {
          uVar30 = uVar30 & 0xff;
          if (uVar30 < 0x72) {
            if (uVar30 == 0x70) {
              uVar14 = 0x15;
            }
            else {
              uVar14 = 0x16;
            }
          }
          else if (uVar30 == 0x72) {
            uVar14 = 0x17;
          }
          else {
            uVar14 = 0x18;
          }
        }
        else if ((uVar30 & 0xff) == 0x80) {
          uVar14 = 0x1a;
        }
        else if ((uVar30 & 0xff) == 0x81) {
          uVar14 = 0x1b;
        }
        else {
          uVar14 = 0x1c;
        }
LAB_001eaf30:
        __ss6HasherV8_combineyySuF(uVar14);
        auVar62._8_8_ = psVar25;
        auVar62._0_8_ = uVar14;
        return auVar62;
      }
      if (uVar38 == 4) {
        uVar30 = uVar30 & 0xff;
        if (uVar30 < 0x42) {
          if (uVar30 == 0x40) {
            uVar14 = 8;
          }
          else {
            uVar14 = 9;
          }
        }
        else if (uVar30 == 0x42) {
          uVar14 = 10;
        }
        else {
          uVar14 = 0xb;
        }
        goto LAB_001eaf30;
      }
      uVar30 = uVar30 & 0xff;
      if (0x51 < uVar30) {
        if (uVar30 == 0x52) {
          uVar14 = 0xe;
        }
        else {
          uVar14 = 0xf;
        }
        goto LAB_001eaf30;
      }
      if (uVar30 == 0x50) {
        uVar14 = 0xc;
        goto LAB_001eaf30;
      }
      __ss6HasherV8_combineyySuF(0xd);
      psVar25 = (segment_command *)0x6e6f697461636f6c;
      unaff_x21 = (segment_command *)0xef676e6972616853;
      goto code_r0x00778468;
    }
    if (1 < uVar38) {
      if (uVar38 == 2) {
        uVar30 = uVar30 & 0xff;
        if (uVar30 < 0x22) {
          if (uVar30 == 0x20) {
            uVar14 = 0;
          }
          else {
            uVar14 = 1;
          }
        }
        else if (uVar30 == 0x22) {
          uVar14 = 2;
        }
        else {
          uVar14 = 3;
        }
      }
      else {
        uVar38 = uVar30 & 0xff;
code_r0x001eadb4:
        if (uVar38 < 0x32) {
          if (uVar38 == 0x30) {
            uVar14 = 4;
          }
          else {
            uVar14 = 5;
          }
        }
        else if (uVar38 == 0x32) {
          uVar14 = 6;
        }
        else {
          uVar14 = 7;
        }
      }
      goto LAB_001eaf30;
    }
    if (uVar38 == 0) {
      __ss6HasherV8_combineyySuF(0x12);
      bVar12 = (uVar30 & 0xff) != 1;
      psVar25 = (segment_command *)0x4264657469736976;
      if (bVar12) {
        psVar25 = (segment_command *)0xd000000000000010;
      }
      psVar13 = (segment_command *)0xe900000000000079;
      if (bVar12) {
        psVar13 = (segment_command *)0x80000000008bda20;
      }
    }
    else {
      __ss6HasherV8_combineyySuF(0x19);
      if (((ulong)psVar25 & 0xf) == 0) {
        psVar25 = (segment_command *)0x6c6172656e6567;
        psVar13 = (segment_command *)0xe700000000000000;
      }
      else {
        psVar25 = (segment_command *)0x6d6f72684370616d;
        psVar13 = (segment_command *)0xeb00000000325665;
        if ((uVar30 & 0xf) != 1) {
          psVar25 = (segment_command *)0xd000000000000010;
          psVar13 = (segment_command *)0x80000000008bd9c0;
        }
      }
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
    goto code_r0x0077b234;
  case 0x10:
    __ss6HasherV8_combineyySuF(0x14);
    unaff_x21 = psVar35;
  case 0x42:
    uVar38 = (uint)unaff_x21 & 0xff;
    if (uVar38 != 1 && ((ulong)unaff_x21 & 0xff) != 0) {
      if (uVar38 != 2) {
        in_ZR = uVar38 == 3;
code_r0x001de34c:
        if (in_ZR) {
          unaff_x21 = (segment_command *)0xe90000000000006c;
          __ss6HasherV8_combineyySuF(4);
          uVar38 = uVar30 & 0xff;
code_r0x001de364:
          if (uVar38 < 2) {
            pcVar32 = (char *)0x65646f4d64616f6c;
code_r0x001dec08:
            psVar34 = (segment_command *)0xeb000000006c6564;
            psVar36 = (segment_command *)0x64616f6c6e75;
code_r0x001dec20:
            psVar25 = (segment_command *)pcVar32;
            psVar33 = unaff_x21;
            if (uVar38 != 0) {
              psVar25 = (segment_command *)((ulong)psVar36 | 0x6f4d000000000000);
              psVar33 = psVar34;
            }
          }
          else {
code_r0x001de36c:
            pcVar32 = "DiscoverFeedNotificationProcessors";
code_r0x001de370:
            pcVar32 = (char *)((long)pcVar32 + 0xb40);
code_r0x001de374:
            pcVar32 = (char *)((ulong)&((segment_command *)((long)pcVar32 + -0x48))->fileoff |
                              0x8000000000000000);
            psVar34 = (segment_command *)0xd000000000000013;
            psVar36 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 1);
code_r0x001de38c:
            psVar36 = (segment_command *)((ulong)psVar36 | 0xd000000000000000);
            in_x12 = "NotificationCenterBadgeUpdate";
code_r0x001de39c:
            in_x12 = (char *)((ulong)in_x12 | 0x8000000000000000);
            in_x13 = (segment_command *)((long)unaff_x21->segname + 3);
            in_x14 = (segment_command *)0x75626564;
code_r0x001de3ac:
            if (uVar38 != 3) {
              in_x12 = (char *)in_x13;
              psVar36 = (segment_command *)((ulong)in_x14 & 0xffffffff | 0x6569566700000000);
            }
            psVar25 = psVar34;
            psVar33 = (segment_command *)pcVar32;
            if (uVar38 != 2) {
              psVar25 = psVar36;
              psVar33 = (segment_command *)in_x12;
            }
          }
          goto code_r0x001dec68;
        }
        if (psVar25 != (segment_command *)0x0) {
          if (psVar25 == (segment_command *)((long)&MACH_HEADER.magic + 1)) {
code_r0x001deac8:
            param_1 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
          }
          else {
code_r0x001deb10:
            param_1 = (segment_command *)((long)&MACH_HEADER.cputype + 2);
          }
          goto code_r0x001de7a0;
        }
        goto code_r0x001dead0;
      }
      goto code_r0x001de838;
    }
    if (((ulong)unaff_x21 & 0xff) == 0) {
code_r0x001dea1c:
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    goto code_r0x001deadc;
  case 0x11:
    psVar39 = (segment_command *)(ulong)(uVar30 & 0xff);
    __ss6HasherV8_combineyySuF(0x15);
    psVar33 = psVar25;
  case 0x37:
    iVar37 = (int)psVar39;
    if (4 < iVar37) {
      if (iVar37 != 5) {
        if (iVar37 != 6) {
          if (iVar37 != 7) goto code_r0x001de9a4;
          goto code_r0x001deb10;
        }
        goto code_r0x001deac8;
      }
      goto code_r0x001deaf8;
    }
    if (iVar37 == 2) goto code_r0x001dec90;
    in_ZR = iVar37 == 3;
code_r0x001de5c8:
    iVar37 = (int)psVar39;
    if (!in_ZR) {
      if (iVar37 != 4) {
code_r0x001de9a4:
        __ss6HasherV8_combineyySuF(2);
        psVar25 = (segment_command *)0x6d6f7250776f6873;
        if (iVar37 != 1) {
          psVar25 = (segment_command *)0x635365736f707865;
        }
        psVar33 = (segment_command *)0xea00000000007470;
        if (iVar37 != 1) {
          psVar33 = (segment_command *)0xeb0000000065706f;
        }
        goto code_r0x001dec68;
      }
      goto code_r0x001dead0;
    }
    goto code_r0x001deab4;
  case 0x12:
    __ss6HasherV8_combineyySuF(0x16);
  case 0x48:
    puVar10 = (undefined1 *)register0x00000008;
    psVar33 = unaff_x19;
    psVar13 = unaff_x20;
    puVar42 = unaff_x29;
code_r0x001de68c:
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(segment_command **)(puVar10 + -0x28) = unaff_x21;
    *(segment_command **)(puVar10 + -0x20) = psVar13;
    *(segment_command **)(puVar10 + -0x18) = psVar33;
    *(undefined1 **)(puVar10 + -0x10) = puVar42;
    *(undefined8 *)(puVar10 + -8) = unaff_x30;
    uVar38 = uVar30 & 0xff;
    uVar28 = uVar30 >> 5 & 7;
    if (2 < uVar28) {
      if (uVar28 < 5) {
        if (uVar28 == 3) {
          if (uVar38 < 0x62) {
            if (uVar38 == 0x60) {
              uVar14 = 2;
            }
            else {
              uVar14 = 3;
            }
          }
          else if (uVar38 == 0x62) {
            uVar14 = 4;
          }
          else {
            uVar14 = 5;
          }
        }
        else if (uVar38 < 0x82) {
          if (uVar38 == 0x80) {
            uVar14 = 6;
          }
          else {
            uVar14 = 7;
          }
        }
        else if (uVar38 == 0x82) {
          uVar14 = 8;
        }
        else {
          uVar14 = 9;
        }
      }
      else if (uVar28 == 5) {
        if (uVar38 < 0xa2) {
          if (uVar38 == 0xa0) {
            uVar14 = 10;
          }
          else {
            uVar14 = 0xb;
          }
        }
        else if (uVar38 == 0xa2) {
          uVar14 = 0xc;
        }
        else {
          uVar14 = 0xd;
        }
      }
      else if (uVar38 == 0xc0) {
        uVar14 = 0xe;
      }
      else {
        uVar14 = 0x10;
      }
      __ss6HasherV8_combineyySuF(uVar14);
      auVar75._8_8_ = psVar25;
      auVar75._0_8_ = uVar14;
      return auVar75;
    }
    if (uVar28 == 0) {
      __ss6HasherV8_combineyySuF(0);
      pcVar1 = "doubleEncryptionResolver";
      pcVar32 = "doubleEncryptionInvoker";
      pcVar2 = "encryptionInfoProvider";
      bVar12 = uVar38 == 1;
      psVar34 = (segment_command *)0xd000000000000017;
      if (!bVar12) {
        psVar34 = (segment_command *)0xd000000000000016;
      }
    }
    else {
      if (uVar28 != 1) {
        __ss6HasherV8_combineyySuF(0xf);
        bVar12 = (uVar30 & 0x1f) != 1;
        psVar25 = (segment_command *)0x7475436b63697571;
        if (bVar12) {
          psVar25 = (segment_command *)0x6c6172656e6567;
        }
        psVar13 = (segment_command *)0xe800000000000000;
        if (bVar12) {
          psVar13 = (segment_command *)0xe700000000000000;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
        goto code_r0x0077b234;
      }
      uVar38 = uVar30 & 0x1f;
      __ss6HasherV8_combineyySuF(1);
      pcVar1 = "opportunisticRetranscode";
      pcVar32 = "snapDocTranscode";
      psVar34 = (segment_command *)0xd000000000000010;
      pcVar2 = "snapDocTranscodeForExport";
      bVar12 = uVar38 == 1;
      if (!bVar12) {
        psVar34 = (segment_command *)0xd000000000000019;
      }
    }
    if (!bVar12) {
      pcVar32 = pcVar2;
    }
    psVar25 = (segment_command *)0xd000000000000018;
    if (uVar38 != 0) {
      psVar25 = psVar34;
      pcVar1 = pcVar32;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    psVar13 = (segment_command *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    goto code_r0x0077b234;
  case 0x13:
    param_1 = (segment_command *)((long)&MACH_HEADER.sizeofcmds + 3);
    break;
  case 0x14:
  case 0x3f:
    __ss6HasherV8_combineyySuF(0x18);
  case 0x38:
    if ((uVar28 & 0xff) == 1 || ((ulong)psVar35 & 0xff) == 0) {
      if (((ulong)psVar35 & 0xff) == 0) {
        psVar34 = psVar25;
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF(psVar25);
        auVar76._8_8_ = psVar34;
        auVar76._0_8_ = psVar25;
        return auVar76;
      }
      __ss6HasherV8_combineyySuF(5);
      uVar38 = uVar30 & 0xff;
      psVar36 = (segment_command *)0xeb00000000646565;
      psVar35 = (segment_command *)0x4673646e65697266;
      psVar34 = (segment_command *)0xed00006465654674;
      psVar31 = (segment_command *)0x6867696c746f7073;
      if (uVar38 != 3) {
        psVar34 = (segment_command *)0xe700000000000000;
        psVar31 = (segment_command *)0x6e776f6e6b6e75;
      }
      psVar33 = (segment_command *)0x79726f7473;
      if (uVar38 != 2) {
        psVar33 = psVar31;
      }
      psVar13 = (segment_command *)0xe500000000000000;
      if (uVar38 != 2) {
        psVar13 = psVar34;
      }
      psVar34 = (segment_command *)0xe300000000000000;
      psVar31 = (segment_command *)0x70616d;
    }
    else {
      if ((uVar28 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x001f0968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)psVar25[0x1c1b0].maxprot * 4 + 0x1f096c))();
        auVar77._8_8_ = psVar25;
        auVar77._0_8_ = param_1;
        return auVar77;
      }
      __ss6HasherV8_combineyySuF(10);
      uVar38 = uVar30 & 0xff;
      psVar36 = (segment_command *)0xe900000000000064;
      psVar35 = (segment_command *)0x6565466f54646461;
      psVar34 = (segment_command *)0x6574496863746566;
      psVar31 = (segment_command *)0xea0000000000736d;
      if (uVar38 != 3) {
        psVar34 = (segment_command *)0xd000000000000013;
        psVar31 = (segment_command *)0x80000000008bdf20;
      }
      psVar33 = (segment_command *)0x646565466e497369;
      if (uVar38 != 2) {
        psVar33 = psVar34;
      }
      psVar13 = (segment_command *)0xe800000000000000;
      if (uVar38 != 2) {
        psVar13 = psVar31;
      }
      psVar34 = (segment_command *)0xee00646565466d6f;
      psVar31 = (segment_command *)0x724665766f6d6572;
    }
    if (((ulong)psVar25 & 0xff) != 0) {
      psVar36 = psVar34;
      psVar35 = psVar31;
    }
    psVar25 = psVar33;
    if ((uVar30 & 0xff) < 2) {
      psVar13 = psVar36;
      psVar25 = psVar35;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
    goto code_r0x0077b234;
  case 0x15:
    param_1 = (segment_command *)((long)&MACH_HEADER.flags + 1);
    break;
  case 0x16:
    param_1 = (segment_command *)((long)&MACH_HEADER.flags + 2);
    break;
  case 0x17:
    param_1 = (segment_command *)((long)&MACH_HEADER.flags + 3);
    break;
  case 0x18:
    __ss6HasherV8_combineyySuF(0x1c);
    unaff_x21 = (segment_command *)((ulong)psVar35 & 0xff);
    if (((ulong)psVar35 & 0xff00) != 0x100) {
      __ss6HasherV8_combineyySuF(0);
      if (unaff_x21 == (segment_command *)((long)&MACH_HEADER.magic + 1)) goto code_r0x001deab4;
      goto code_r0x001dea1c;
    }
    bVar12 = psVar25 < (segment_command *)((long)&MACH_HEADER.magic + 3);
    uVar40 = (long)(char)psVar35 + (ulong)!bVar12;
    if ((long)-uVar40 < 0 != SCARRY8(~uVar40,(ulong)bVar12)) goto code_r0x001de4fc;
    if (psVar25 != (segment_command *)0x0 || unaff_x21 != (segment_command *)0x0) {
      if (psVar25 == (segment_command *)((long)&MACH_HEADER.magic + 1) &&
          unaff_x21 == (segment_command *)0x0) goto code_r0x001deaf0;
      goto code_r0x001dead0;
    }
    goto code_r0x001deab4;
  case 0x19:
    __ss6HasherV8_combineyySuF(0x1e);
  case 0x41:
    uVar38 = uVar30 & 0xff;
    if (uVar38 < 10) {
      if (uVar38 != 8) {
code_r0x001de4c0:
        if (uVar38 == 9) {
code_r0x001deaf0:
          param_1 = (segment_command *)((long)&MACH_HEADER.magic + 2);
          goto code_r0x001de7a0;
        }
code_r0x001de850:
        __ss6HasherV8_combineyySuF(1);
        uVar38 = uVar30 & 0xff;
        if (uVar38 < 4) {
          pcVar32 = (char *)0x80000000008bbde0;
          psVar36 = (segment_command *)0xd000000000000022;
          if (uVar38 != 2) {
            pcVar32 = (char *)0xe700000000000000;
            psVar36 = (segment_command *)0x64616f6c657270;
          }
          pcVar2 = "featureSyncJobProcessor";
          in_x13 = (segment_command *)0xd000000000000015;
          if (((ulong)psVar25 & 0xff) != 0) {
            pcVar2 = "esSyncJobProcessor";
            in_x13 = (segment_command *)0xd000000000000017;
          }
          in_x12 = (char *)((ulong)pcVar2 | 0x8000000000000000);
          in_OV = SBORROW4(uVar38,1);
          iVar37 = uVar38 - 1;
          in_ZR = uVar38 == 1;
        }
        else {
          psVar34 = (segment_command *)0xd000000000000015;
          pcVar32 = (char *)(segment_command *)0x80000000008bbda0;
          psVar36 = (segment_command *)0xd000000000000010;
          if (uVar38 != 6) {
            pcVar32 = (char *)(segment_command *)0xef72656469766f72;
            psVar36 = (segment_command *)0x507463656a627573;
          }
          in_x12 = (char *)0xee0073746e656970;
          in_x13 = (segment_command *)0x6b6e6172;
code_r0x001debc0:
          in_x13 = (segment_command *)((ulong)in_x13 & 0xffffffff | 0x6963655200000000);
          in_x14 = (segment_command *)0x80000000008bbdc0;
code_r0x001debd8:
          if (uVar38 != 4) {
            in_x12 = (char *)in_x14;
            in_x13 = (segment_command *)&psVar34[-1].flags;
          }
          in_OV = SBORROW4(uVar38,5);
          iVar37 = uVar38 - 5;
          in_ZR = uVar38 == 5;
        }
        in_NG = iVar37 < 0;
        psVar25 = psVar36;
        if (in_ZR || in_NG != in_OV) {
          psVar25 = in_x13;
        }
code_r0x001debf0:
        psVar33 = (segment_command *)pcVar32;
        if (in_ZR || in_NG != in_OV) {
          psVar33 = (segment_command *)in_x12;
        }
        goto code_r0x001dec68;
      }
      goto code_r0x001dec90;
    }
    if (uVar38 == 10) goto code_r0x001dead0;
    if (uVar38 != 0xb) goto code_r0x001de850;
    goto code_r0x001deaf8;
  case 0x1a:
    __ss6HasherV8_combineyySuF(0x1f);
    if ((uVar30 & 0xff) == 3) goto code_r0x001deab4;
    if ((uVar30 & 0xff) != 4) {
      __ss6HasherV8_combineyySuF(0);
      if (((ulong)psVar25 & 0xff) == 0) {
        psVar25 = (segment_command *)0x614264616f6c6572;
        psVar33 = (segment_command *)0xeb00000000656764;
      }
      else {
        psVar33 = (segment_command *)0xe90000000000006e;
        psVar25 = (segment_command *)0x6f63496863746566;
        pcVar32 = "bitmojiBadgeReload";
        lVar15 = -3;
code_r0x001de97c:
        if ((uVar30 & 0xff) != 1) {
          psVar25 = (segment_command *)(lVar15 + -0x2fffffffffffffeb);
          psVar33 = (segment_command *)((ulong)(pcVar32 + -0x20) | 0x8000000000000000);
        }
      }
      goto code_r0x001dec68;
    }
    goto code_r0x001deaf0;
  case 0x1b:
  case 0x57:
    psVar13 = &segment_command_00000020;
    __ss6HasherV8_combineyySuF(0x20);
    unaff_x21 = psVar35;
    unaff_x22 = (ulong)bVar3;
  case 0x55:
    if ((unaff_x22 & 3) != 0) {
      if (((uint)unaff_x22 & 3) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001dea38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)&psVar25[0x1c137].initprot + 2) * 4 + 0x1dea3c))();
        auVar45._8_8_ = psVar33;
        auVar45._0_8_ = psVar13;
        return auVar45;
      }
code_r0x001de2fc:
      __ss6HasherV8_combineyySuF(1);
code_r0x001de308:
code_r0x001de30c:
      goto code_r0x00778468;
    }
    goto code_r0x001dea1c;
  case 0x1c:
    param_1 = (segment_command *)((long)&segment_command_00000020.cmd + 1);
    break;
  case 0x1d:
    param_1 = (segment_command *)((long)&segment_command_00000020.cmd + 2);
    break;
  case 0x1e:
    __ss6HasherV8_combineyySuF(0x23);
    uVar38 = uVar30 & 0xff;
    psVar33 = psVar25;
  case 0x4e:
    if (uVar38 == 5) goto code_r0x001dec90;
    if (uVar38 != 6) {
code_r0x001de6bc:
      __ss6HasherV8_combineyySuF(1);
      psVar31 = (segment_command *)0xea00000000007362;
      pcVar32 = (char *)(ulong)(uVar30 & 0xff);
      psVar34 = (segment_command *)0x6d627573;
code_r0x001de6d8:
      psVar34 = (segment_command *)((ulong)psVar34 | 0x6f4a746900000000);
      psVar36 = (segment_command *)0x80000000008bc7b0;
      in_x12 = (char *)0xd000000000000023;
      in_x14 = (segment_command *)0xd000000000000015;
      in_x13 = (segment_command *)0x80000000008bc790;
code_r0x001de714:
      uVar30 = (uint)pcVar32;
      if (uVar30 != 3) {
        psVar31 = in_x13;
        psVar34 = in_x14;
      }
      if (uVar30 != 2) {
        psVar36 = psVar31;
        in_x12 = (char *)psVar34;
      }
      pcVar32 = "registerSystemJobProviders";
      if (uVar30 != 0) {
        pcVar32 = "ticatedJobProviders";
      }
      psVar25 = (segment_command *)in_x12;
      psVar33 = psVar36;
      if (uVar30 < 2) {
        psVar25 = (segment_command *)((long)&in_x14->cmdsize + 1);
        psVar33 = (segment_command *)((ulong)pcVar32 | 0x8000000000000000);
      }
      goto code_r0x001dec68;
    }
    goto code_r0x001deaf0;
  case 0x1f:
    param_1 = (segment_command *)&segment_command_00000020.cmdsize;
    break;
  case 0x20:
    param_1 = (segment_command *)((long)&segment_command_00000020.cmdsize + 1);
    break;
  case 0x21:
    param_1 = (segment_command *)((long)&segment_command_00000020.cmdsize + 2);
    break;
  case 0x22:
    param_1 = (segment_command *)((long)&segment_command_00000020.cmdsize + 3);
  case 0x54:
    break;
  case 0x23:
    param_1 = (segment_command *)segment_command_00000020.segname;
    break;
  case 0x24:
    param_1 = (segment_command *)(segment_command_00000020.segname + 1);
    break;
  case 0x25:
    param_1 = (segment_command *)(segment_command_00000020.segname + 2);
    break;
  case 0x26:
    if ((psVar35 == (segment_command *)0x0 && psVar25 == (segment_command *)0x0) && (bVar3 == 0x98))
    {
      uVar14 = 2;
    }
    else if ((psVar25 == (segment_command *)((long)&MACH_HEADER.magic + 1)) &&
            ((psVar35 == (segment_command *)0x0 && (bVar3 == 0x98)))) {
      uVar14 = 3;
    }
    else if ((psVar25 == (segment_command *)((long)&MACH_HEADER.magic + 2)) &&
            ((psVar35 == (segment_command *)0x0 && (bVar3 == 0x98)))) {
      uVar14 = 0xf;
    }
    else if ((psVar25 == (segment_command *)((long)&MACH_HEADER.magic + 3)) &&
            ((psVar35 == (segment_command *)0x0 && (bVar3 == 0x98)))) {
      uVar14 = 0x11;
    }
    else {
      uVar14 = 0x1d;
    }
    __ss6HasherV8_combineyySuF(uVar14);
    psVar33 = psVar25;
code_r0x001dec90:
    param_1 = (segment_command *)0x0;
    goto code_r0x001de7a0;
  case 0x27:
    if (!in_ZR) {
      psVar36 = in_x13;
      in_x12 = (char *)((ulong)in_x14 & 0xffff | 0x656e656870610000);
    }
    if (uVar38 != 0) {
      pcVar32 = (char *)(segment_command *)0xec00000072656c64;
      psVar34 = (segment_command *)0x6e6148726f727265;
    }
    psVar13 = psVar36;
    psVar25 = (segment_command *)in_x12;
    if (uVar38 < 2) {
      psVar13 = (segment_command *)pcVar32;
      psVar25 = psVar34;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
    goto code_r0x0077b234;
  case 0x28:
    if (uVar38 != 2) {
      param_1->cmd = 0;
      auVar56._8_8_ = psVar25;
      auVar56._0_8_ = param_1;
      return auVar56;
    }
    *(undefined2 *)&param_1->cmd = 0;
    auVar55._8_8_ = psVar25;
    auVar55._0_8_ = param_1;
    return auVar55;
  case 0x29:
    __ss6HasherV8_combineyySuF();
    auVar74._8_8_ = psVar25;
    auVar74._0_8_ = param_1;
    return auVar74;
  case 0x2a:
    *(undefined8 *)((long)psVar31->segname + (long)param_1->segname + -0x10) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6ff8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7000 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7008 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7010 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7018 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7020 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7028 + -8) = 0;
    puVar26 = PTR_s_init_00abbf70;
    _objc_retain(psVar25);
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,puVar26);
    auVar88._8_8_ = puVar26;
    auVar88._0_8_ = puVar17;
    return auVar88;
  case 0x2b:
    _objc_retain();
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,param_1);
    auVar89._8_8_ = param_1;
    auVar89._0_8_ = puVar18;
    return auVar89;
  case 0x2c:
    if (!in_ZR) {
      in_x12 = (char *)((ulong)in_x14 & 0xffffffffffff | 0xeb00000000000000);
      in_x13 = (segment_command *)0x617245636967616d;
    }
    if (uVar30 != 2) {
      psVar34 = (segment_command *)in_x12;
      psVar36 = in_x13;
    }
    if (uVar30 != 0) {
      psVar31 = (segment_command *)0xe800000000000000;
      pcVar32 = (char *)(segment_command *)0x736e6f6974706163;
    }
    if ((int)uVar30 < 2) {
      psVar34 = psVar31;
      psVar36 = (segment_command *)pcVar32;
    }
    __sSS4hash4intoys6HasherVz_tF(&stack0xffffffffffffffd8,psVar36,psVar34);
    _swift_bridgeObjectRelease(psVar34);
    __ss6HasherV9_finalizeSiyF();
    auVar53._8_8_ = psVar36;
    auVar53._0_8_ = psVar34;
    return auVar53;
  case 0x2d:
    if (uVar38 == 0x40) {
      uVar14 = 0;
    }
    else {
      psVar25 = (segment_command *)0xaf4938;
      uVar14 = 0xaf4058;
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStaticObject();
      FUN_001da650();
    }
    auVar61._8_8_ = psVar25;
    auVar61._0_8_ = uVar14;
    return auVar61;
  case 0x2e:
    sVar4 = *(short *)((long)&param_1->cmd + 1);
    if (sVar4 != 0) {
      auVar72._4_4_ = 0;
      auVar72._0_4_ = CONCAT21(sVar4,(char)param_1->cmd) - 1;
      auVar72._8_8_ = psVar25;
      return auVar72;
    }
    uVar30 = (uint)(byte)param_1->cmd;
    iVar37 = uVar30 - 2;
    if (uVar30 < 2) {
      iVar37 = -1;
    }
    auVar73._4_4_ = 0;
    auVar73._0_4_ = iVar37 + 1;
    auVar73._8_8_ = psVar25;
    return auVar73;
  case 0x2f:
    goto code_r0x001de370;
  case 0x30:
    *(undefined8 *)((long)psVar31->segname + (long)param_1->segname + -0x10) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f28 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f30 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f38 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f40 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f48 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f50 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f58 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f60 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f68 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f70 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f78 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f80 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f88 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f90 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f98 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fa0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fa8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fb0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fb8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fc0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fc8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fd0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fd8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fe0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fe8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6ff0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6ff8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7000 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7008 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7010 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7018 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7020 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7028 + -8) = 0;
    puVar26 = PTR_s_init_00abbf70;
    _objc_retain(psVar25);
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,puVar26);
    auVar87._8_8_ = puVar26;
    auVar87._0_8_ = puVar16;
    return auVar87;
  case 0x31:
  case 0x34:
code_r0x001de49c:
    psVar33 = psVar31;
    if (!in_ZR) {
      psVar33 = (segment_command *)pcVar32;
    }
  case 0x5f:
code_r0x001dec68:
    psVar13 = psVar33;
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
code_r0x001dec80:
code_r0x0077b234:
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(psVar13);
    auVar102._8_8_ = psVar25;
    auVar102._0_8_ = psVar13;
    return auVar102;
  case 0x35:
    goto code_r0x001de4c0;
  case 0x36:
    goto code_r0x001de38c;
  case 0x39:
code_r0x001de4fc:
    bVar12 = psVar25 < (segment_command *)((long)&MACH_HEADER.cputype + 1);
    uVar40 = (long)(char)unaff_x21 + (ulong)!bVar12;
    if ((long)-uVar40 < 0 != SCARRY8(~uVar40,(ulong)bVar12)) {
      if (psVar25 != (segment_command *)((long)&MACH_HEADER.cputype + 1) ||
          unaff_x21 != (segment_command *)0x0) {
        param_1 = (segment_command *)((long)&MACH_HEADER.cputype + 3);
        goto code_r0x001de7a0;
      }
      goto code_r0x001deb10;
    }
    if (psVar25 == (segment_command *)((long)&MACH_HEADER.magic + 3) &&
        unaff_x21 == (segment_command *)0x0) goto code_r0x001deaf8;
    goto code_r0x001deac8;
  case 0x3b:
    goto code_r0x001de3ac;
  case 0x3c:
    goto code_r0x001de618;
  case 0x3d:
    goto code_r0x001de374;
  case 0x3e:
    goto code_r0x001de39c;
  case 0x40:
    goto code_r0x001de34c;
  case 0x45:
    goto code_r0x001de68c;
  case 0x47:
    goto code_r0x001de5c8;
  case 0x4c:
    goto code_r0x001de714;
  case 0x4d:
    goto code_r0x001de30c;
  case 0x4f:
    goto code_r0x001de6bc;
  case 0x53:
    goto code_r0x001de364;
  case 0x56:
    goto code_r0x001de2fc;
  case 0x58:
    goto code_r0x001de6d8;
  case 0x5a:
    goto code_r0x001de7a0;
  case 0x5b:
    goto code_r0x001debf0;
  case 0x5c:
    goto code_r0x001dec08;
  case 0x5d:
    goto code_r0x001debc0;
  case 0x5e:
code_r0x001dec50:
    uVar40 = (ulong)psVar25 & 0xffff0000ffff;
    psVar25 = (segment_command *)0x65526e4f74696e69;
    psVar33 = (segment_command *)(uVar40 | 0xec000000656d0000);
    goto code_r0x001dec68;
  case 0x60:
    goto code_r0x001dec20;
  case 0x61:
    uVar24._0_4_ = param_1->cmd;
    uVar24._4_4_ = param_1->cmdsize;
    uVar14 = *(undefined8 *)param_1->segname;
    dVar7 = *(dword *)((long)param_1->segname + 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
    puVar10 = auStack_a8;
    FUN_001de260(puVar10,uVar24,uVar14,(char)dVar7);
    __ss6HasherV9_finalizeSiyF();
    auVar46._8_8_ = uVar24;
    auVar46._0_8_ = puVar10;
    return auVar46;
  case 0x62:
    goto code_r0x001debd8;
  case 99:
    goto code_r0x001dec80;
  case 0x68:
    auVar64._8_8_ = psVar25;
    auVar64._0_8_ = 1;
    return auVar64;
  case 0x69:
  case 0x73:
  case 0x77:
  case 0x7b:
  case 0x7f:
  case 0x89:
  case 0x93:
  case 0xbd:
  case 199:
  case 0xd1:
  case 0xdb:
  case 0xdf:
  case 0xe3:
  case 0xe7:
  case 0xf1:
  case 0xf5:
    goto code_r0x001de308;
  case 0x6a:
    uVar30 = (uint)(byte)param_1->cmd;
    iVar37 = uVar30 - 4;
    if (uVar30 < 4) {
      iVar37 = -1;
    }
    auVar52._4_4_ = 0;
    auVar52._0_4_ = iVar37 + 1;
    auVar52._8_8_ = psVar25;
    return auVar52;
  case 0x6b:
  case 0x8b:
  case 0xbf:
  case 0xd3:
  case 0xf3:
    goto code_r0x001de2ac;
  case 0x6f:
  case 0x8f:
  case 0xc3:
  case 0xd7:
    goto code_r0x001de2a0;
  case 0x70:
  case 0xd8:
  case 0xf8:
    goto code_r0x001de2a4;
  case 0x72:
  case 0x76:
  case 0x7a:
  case 0x7e:
    if (uVar38 == 0x82) {
      auVar68._8_8_ = psVar25;
      auVar68._0_8_ = 1;
      return auVar68;
    }
    goto LAB_001eb2b0;
  case 0x74:
    *(undefined8 *)((long)psVar31->segname + (long)param_1->segname + -0x10) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f78 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f80 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f88 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f90 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f98 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fa0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fa8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fb0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fb8 + -8) = 0;
  case 0xdc:
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fc0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fc8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fd0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fd8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fe0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fe8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6ff0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6ff8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7000 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7008 + -8) = 0;
    *(segment_command **)((long)param_1->segname + _DAT_00af7010 + -8) = psVar25;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7018 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7020 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7028 + -8) = 0;
    puVar26 = PTR_s_init_00abbf70;
    _objc_retain(psVar25);
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,puVar26);
    auVar90._8_8_ = puVar26;
    auVar90._0_8_ = puVar19;
    return auVar90;
  case 0x75:
  case 0xdd:
    auVar99._8_8_ = (ulong)psVar25 | 0x4000000000000000;
    auVar99._0_8_ = param_1;
    return auVar99;
  case 0x78:
    *(undefined8 *)((long)psVar31->segname + (long)param_1->segname + -0x10) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fc8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fd0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fd8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fe0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fe8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6ff0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6ff8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7000 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7008 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7010 + -8) = 0;
    *(segment_command **)((long)param_1->segname + _DAT_00af7018 + -8) = psVar25;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7020 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7028 + -8) = 0;
    puVar26 = PTR_s_init_00abbf70;
    _objc_retain(psVar25);
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,puVar26);
    auVar91._8_8_ = puVar26;
    auVar91._0_8_ = puVar20;
    return auVar91;
  case 0x79:
  case 0x7d:
  case 0x81:
  case 0x95:
  case 0xc9:
  case 0xe1:
  case 0xe5:
  case 0xe9:
  case 0xfb:
    param_1 = (segment_command *)0x0;
    goto _objc_autoreleaseReturnValue;
  case 0x7c:
    *(undefined8 *)((long)param_1->segname + (psVar31[0x35].vmaddr - 8)) = 0;
    psVar31 = _DAT_00af6f08;
  case 0x80:
    *(undefined8 *)((long)psVar31->segname + (long)param_1->segname + -0x10) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f10 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f18 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f20 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f28 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f30 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f38 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f40 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f48 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f50 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f58 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f60 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f68 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f70 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f78 + -8) = 0;
    psVar31 = (segment_command *)0xaf6000;
code_r0x00203594:
    *(undefined8 *)((long)param_1->segname + *(long *)psVar31[0x37].segname + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f88 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f90 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6f98 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fa0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fa8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fb0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fb8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fc0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fc8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fd0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fd8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fe0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6fe8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6ff0 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af6ff8 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7000 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7008 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7010 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7018 + -8) = 0;
    *(segment_command **)((long)param_1->segname + _DAT_00af7020 + -8) = psVar25;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7028 + -8) = 0;
    puVar26 = PTR_s_init_00abbf70;
    _objc_retain(psVar25);
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,puVar26);
    auVar92._8_8_ = puVar26;
    auVar92._0_8_ = puVar21;
    return auVar92;
  case 0x86:
    _objc_release();
    uVar14 = 0x86;
    goto code_r0x00205d98;
  case 0x87:
  case 0x9b:
  case 0xcf:
  case 0xef:
  case 0xfd:
    goto code_r0x001de36c;
  case 0x88:
    auVar63._1_7_ = 0;
    auVar63[0] = in_ZR;
    auVar63._8_8_ = psVar25;
    return auVar63;
  case 0x8a:
    *(segment_command **)psVar31[0x35].segname = param_1;
    auVar51._8_8_ = psVar25;
    auVar51._0_8_ = param_1;
    return auVar51;
  case 0x92:
    if (in_ZR || in_NG != in_OV) {
      if (uVar38 == 0x61) {
        auVar69._8_8_ = psVar25;
        auVar69._0_8_ = 1;
        return auVar69;
      }
    }
    else if (uVar38 == 99) goto code_r0x001eb208;
    goto LAB_001eb2b0;
  case 0x94:
    goto code_r0x00203594;
  case 0x9a:
    uVar14 = 0x81;
    goto code_r0x00205d98;
  case 0x9e:
  case 0xac:
    _objc_retain(psVar35);
    param_1 = psVar35;
    func_0x0020095c();
    _objc_release(psVar35);
    goto _objc_autoreleaseReturnValue;
  case 0x9f:
  case 0xad:
    lVar15._0_4_ = param_1[0x1c136].maxprot;
    lVar15._4_4_ = param_1[0x1c136].initprot;
    goto joined_r0x001fac2c;
  case 0xa0:
  case 0xae:
    if (uVar38 != 3) {
      pcVar32 = (char *)((ulong)in_x14 | 0x8000000000000000);
      psVar34 = (segment_command *)((long)&((segment_command *)((long)in_x12 + -0x48))->nsects + 3);
    }
    psVar25 = in_x13;
    if (uVar38 != 2) {
      psVar36 = (segment_command *)pcVar32;
      psVar25 = psVar34;
    }
    pcVar32 = "registerSystemJobProviders";
    if (uVar38 != 0) {
      pcVar32 = "ticatedJobProviders";
    }
    psVar13 = psVar36;
    if (uVar38 < 2) {
      psVar25 = (segment_command *)0xd00000000000001a;
      psVar13 = (segment_command *)((ulong)pcVar32 | 0x8000000000000000);
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,psVar25,psVar13);
    goto code_r0x0077b234;
  case 0xa1:
  case 0xaf:
    goto _objc_autoreleaseReturnValue;
  case 0xa2:
  case 0xb0:
    auVar82._8_8_ = psVar25;
    auVar82._0_8_ = param_1;
    return auVar82;
  case 0xa3:
  case 0xb1:
    auVar78._8_8_ = unaff_x21;
    auVar78._0_8_ = param_1;
    return auVar78;
  case 0xa4:
  case 0xb2:
    auVar84._8_8_ = psVar25;
    auVar84._0_8_ = param_1;
    return auVar84;
  case 0xb3:
    __ss6HasherV8_combineyySuF();
    auVar79._8_8_ = psVar25;
    auVar79._0_8_ = param_1;
    return auVar79;
  case 0xb4:
    sVar4 = *(short *)((long)&param_1->cmd + 1);
    if (sVar4 != 0) {
      auVar80._4_4_ = 0;
      auVar80._0_4_ = CONCAT21(sVar4,(char)param_1->cmd) - 4;
      auVar80._8_8_ = psVar25;
      return auVar80;
    }
    uVar30 = (uint)(byte)param_1->cmd;
    iVar37 = uVar30 - 5;
    if (uVar30 < 5) {
      iVar37 = -1;
    }
    auVar81._4_4_ = 0;
    auVar81._0_4_ = iVar37 + 1;
    auVar81._8_8_ = psVar25;
    return auVar81;
  case 0xb5:
    uVar14._0_4_ = param_1->cmd;
    uVar14._4_4_ = param_1->cmdsize;
    FUN_001f7d30();
    *(char *)&psVar31->cmd = (char)uVar14;
    auVar83._8_8_ = psVar25;
    auVar83._0_8_ = uVar14;
    return auVar83;
  case 0xb6:
    psVar34 = psVar25;
    __ss6HasherV8_combineyys5UInt8VF();
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6f80 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6f88 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6f90 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6f98 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fa0 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fa8 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fb0 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fb8 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fc0 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fc8 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fd0 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fd8 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fe0 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6fe8 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6ff0 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af6ff8 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af7000 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af7008 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af7010 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af7018 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af7020 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    lVar15 = *(long *)((long)psVar25->segname + _DAT_00af7028 + -8);
    if (lVar15 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar15);
    }
    puStack_40 = in_stack_00000010;
    __ss6HasherV8finalizeSiyF();
    auVar85._8_8_ = psVar34;
    auVar85._0_8_ = lVar15;
    return auVar85;
  case 0xb7:
    lVar15._0_4_ = param_1[0x1c136].maxprot;
    lVar15._4_4_ = param_1[0x1c136].initprot;
joined_r0x001fac2c:
    if (lVar15 == 0) {
      lVar41._0_4_ = param_1[0x1c136].maxprot;
      lVar41._4_4_ = param_1[0x1c136].initprot;
      lVar15 = lVar41;
      _objc_retain(lVar41);
      _objc_release(param_1);
      if (lVar41 == 0) {
        lVar15 = 1;
      }
      else {
        _objc_release(lVar15);
        lVar15 = 0;
      }
    }
    else {
      uVar29._0_4_ = param_1[0x1c136].maxprot;
      uVar29._4_4_ = param_1[0x1c136].initprot;
      func_0x007877e0(lVar15,psVar25,uVar29);
      _objc_release(param_1);
    }
    auVar86._8_8_ = psVar25;
    auVar86._0_8_ = lVar15;
    return auVar86;
  case 0xbc:
    auVar71._8_8_ = psVar25;
    auVar71._0_8_ = 1;
    return auVar71;
  case 0xbe:
    *(segment_command **)psVar31 = param_1;
    auVar50._8_8_ = psVar25;
    auVar50._0_8_ = param_1;
    return auVar50;
  case 0xc6:
code_r0x001eb208:
    auVar70._8_8_ = psVar25;
    auVar70._0_8_ = 1;
    return auVar70;
  case 200:
    auVar97._8_8_ = psVar25;
    auVar97._0_8_ = param_1;
    return auVar97;
  case 0xce:
    if (*(long *)((long)param_1->segname + (psVar31[4].fileoff - 8)) == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x205db4);
      (*pcVar8)();
    }
    _objc_release();
    uVar14 = 0xa7;
code_r0x00205d98:
    auVar93._8_8_ = psVar25;
    auVar93._0_8_ = uVar14;
    return auVar93;
  case 0xd0:
    auVar67._8_8_ = psVar25;
    auVar67._0_8_ = 1;
    return auVar67;
  case 0xd2:
    _swift_bridgeObjectRelease(psVar25);
    if ((segment_command *)((long)&MACH_HEADER.magic + 3) < param_1) {
      param_1 = (segment_command *)&MACH_HEADER.cputype;
    }
    auVar49._8_8_ = psVar25;
    auVar49._0_8_ = param_1;
    return auVar49;
  case 0xda:
  case 0xde:
  case 0xe2:
  case 0xe6:
    if (uVar38 == 0x42) {
      auVar66._8_8_ = psVar25;
      auVar66._0_8_ = 1;
      return auVar66;
    }
    goto LAB_001eb2b0;
  case 0xe0:
    uVar40 = (ulong)(byte)param_1->cmd;
    __ss6HasherV5_seedABSi_tcfC(&stack0xffffffffffffffd8,0);
    __ss6HasherV8_combineyySuF(uVar40);
    __ss6HasherV9_finalizeSiyF();
    auVar96._8_8_ = psVar25;
    auVar96._0_8_ = uVar40;
    return auVar96;
  case 0xe4:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x206fe8);
    (*pcVar8)();
  case 0xe8:
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
    auVar101._8_8_ = psVar25;
    auVar101._0_8_ = param_1;
    return auVar101;
  case 0xee:
    *(segment_command **)((long)param_1->segname + _DAT_00af7130 + -8) = psVar25;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7138 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7140 + -8) = 0;
    *(undefined8 *)((long)param_1->segname + _DAT_00af7148 + -8) = 0;
    puVar26 = PTR_s_init_00abbf70;
    _objc_retain(psVar25);
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,puVar26);
    auVar94._8_8_ = puVar26;
    auVar94._0_8_ = puVar22;
    return auVar94;
  case 0xf0:
    if (uVar38 == 0x32) {
      auVar65._8_8_ = psVar25;
      auVar65._0_8_ = 1;
      return auVar65;
    }
LAB_001eb2b0:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = psVar25;
    return auVar5 << 0x40;
  case 0xf2:
    __ss6HasherV9_finalizeSiyF();
    auVar48._8_8_ = psVar25;
    auVar48._0_8_ = param_1;
    return auVar48;
  case 0xf4:
    goto code_r0x001eadb4;
  case 0xf7:
    goto code_r0x001de29c;
  case 0xfa:
    ppuVar27 = &puStack_40;
    func_0x00207170(0x207920,ppuVar27,0x2078c0,&stack0xfffffffffffffff0,0x207924,
                    &stack0xffffffffffffffd0);
    _objc_release(param_1);
    auVar98._8_8_ = ppuVar27;
    auVar98._0_8_ = param_1;
    return auVar98;
  case 0xfc:
    psVar25 = param_1;
    func_0x00206114();
    _objc_allocWithZone();
    *(undefined1 *)((long)psVar25->segname + _DAT_00af7128 + -8) = 0x1a;
    *(undefined8 *)((long)psVar25->segname + _DAT_00af7130 + -8) = 0;
    *(undefined8 *)((long)psVar25->segname + _DAT_00af7138 + -8) = 0;
    *(undefined8 *)((long)psVar25->segname + _DAT_00af7140 + -8) = 0;
    *(segment_command **)((long)psVar25->segname + _DAT_00af7148 + -8) = param_1;
    puVar26 = PTR_s_init_00abbf70;
    _objc_retain(param_1);
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,puVar26);
    auVar95._8_8_ = puVar26;
    auVar95._0_8_ = puVar23;
    return auVar95;
  }
  __ss6HasherV8_combineyySuF(param_1);
  param_1 = (segment_command *)((ulong)psVar25 & 0xff);
code_r0x001de7a0:
  __ss6HasherV8_combineyySuF(param_1);
  auVar44._8_8_ = psVar33;
  auVar44._0_8_ = param_1;
  return auVar44;
}



/* Entry: 001decfc; end: 001ded4f;  */

void FUN_001decfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_001de260(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ded50; end: 001ded6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_001ded50(undefined1 (*param_1) [16],ulong *param_2)

{
  byte bVar1;
  code cVar2;
  char cVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uVar16;
  code *UNRECOVERED_JUMPTABLE;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  code *pcVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  uint uVar26;
  code *pcVar27;
  undefined *puVar28;
  code *pcVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  code *pcVar34;
  long extraout_x8;
  int iVar35;
  code *in_x12;
  long extraout_x12;
  ulong in_x13;
  code *in_x16;
  code *unaff_x19;
  code **unaff_x20;
  ulong uVar36;
  code *unaff_x21;
  long lVar37;
  long unaff_x29;
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
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  code *in_stack_00000000;
  code *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined1 auStack_68 [40];
  code *pcStack_40;
  code *pcStack_38;
  
  lVar37 = _DAT_00af6ed0;
  pcVar25 = *(code **)*param_1;
  pcVar27 = *(code **)(*param_1 + 8);
  auVar193 = *param_1;
  auVar203 = *param_1;
  auVar168 = *param_1;
  auVar167 = *param_1;
  auVar166 = *param_1;
  auVar208 = *param_1;
  pcVar24 = (code *)*param_2;
  pcVar22 = (code *)param_2[1];
  bVar1 = (byte)param_2[2];
  cVar2 = (code)param_1[1][0];
  pcVar29 = (code *)(ulong)(byte)cVar2;
  bVar4 = (byte)cVar2 >> 2;
  uVar32 = (uint)bVar4;
  pcVar34 = (code *)(ulong)uVar32;
  UNRECOVERED_JUMPTABLE = (code *)&UNK_007e57cc;
  lVar21 = (ulong)*(ushort *)(&UNK_007e57cc + (long)pcVar34 * 2) * 4;
  uVar31 = (uint)pcVar22;
  uVar33 = (uint)pcVar25;
  uVar30 = (uint)pcVar24;
  uVar26 = (uint)pcVar27;
  cVar3 = (char)pcVar27;
  switch(bVar4) {
  default:
    uVar32 = (uint)bVar1;
  case 0x51:
  case 0x5e:
  case 0x65:
  case 0x92:
  case 0x99:
  case 0xb9:
  case 199:
  case 0xea:
  case 0xf1:
    in_CY = 3 < uVar32;
code_r0x001deef8:
    if (!in_CY) {
code_r0x001deefc:
      uVar32 = uVar31 & 0xff;
      goto code_r0x001def00;
    }
    break;
  case 1:
    if ((bVar1 & 0xfc) != 4) break;
    goto code_r0x001df324;
  case 2:
    if ((bVar1 & 0xfc) == 8) goto code_r0x001df324;
    break;
  case 3:
    if ((bVar1 & 0xfc) == 0xc) {
      uVar32 = uVar30 & 0xff;
      uVar26 = uVar33 & 0xff;
      if (uVar26 < 0xb) {
        if (uVar26 == 9) {
          if (uVar32 == 9) {
            auVar68._8_8_ = pcVar27;
            auVar68._0_8_ = 1;
            return auVar68;
          }
          break;
        }
        if (uVar26 == 10) {
          if (uVar32 == 10) {
            auVar43._8_8_ = pcVar27;
            auVar43._0_8_ = 1;
            return auVar43;
          }
          break;
        }
      }
      else {
        if (uVar26 == 0xb) {
          if (uVar32 == 0xb) {
            auVar69._8_8_ = pcVar27;
            auVar69._0_8_ = 1;
            return auVar69;
          }
          break;
        }
        if (uVar26 == 0xc) {
          if (uVar32 == 0xc) {
            auVar52._8_8_ = pcVar27;
            auVar52._0_8_ = 1;
            return auVar52;
          }
          break;
        }
      }
      if ((3 < uVar32 - 9) && (((uVar30 ^ uVar33) & 0xff) == 0)) {
        auVar64._8_8_ = pcVar27;
        auVar64._0_8_ = 1;
        return auVar64;
      }
    }
    break;
  case 4:
    if ((bVar1 & 0xfc) == 0x10) goto code_r0x001df324;
    break;
  case 5:
    if ((bVar1 & 0xfc) == 0x14) {
      uVar32 = uVar33 & 0xff;
      uVar26 = uVar30 & 0xff;
      uVar33 = uVar33 >> 5 & 7;
      if (uVar33 < 3) {
        if (uVar33 == 0) {
          if (uVar26 < 0x20) {
            auVar89._1_7_ = 0;
            auVar89[0] = uVar32 == uVar26;
            auVar89._8_8_ = pcVar24;
            return auVar89;
          }
        }
        else if (uVar33 == 1) {
          if ((uVar30 & 0xe0) == 0x20) {
LAB_001e20dc:
            auVar90._1_7_ = 0;
            auVar90[0] = ((uVar26 ^ uVar32) & 0x1f) == 0;
            auVar90._8_8_ = pcVar24;
            return auVar90;
          }
        }
        else if ((uVar30 & 0xe0) == 0x40) goto LAB_001e20dc;
      }
      else if (uVar33 < 5) {
        if (uVar33 == 3) {
          if (uVar32 < 100) {
            if (uVar32 < 0x62) {
              if (uVar32 == 0x60) {
                if (uVar26 == 0x60) {
                  auVar87._8_8_ = pcVar24;
                  auVar87._0_8_ = 1;
                  return auVar87;
                }
              }
              else if (uVar26 == 0x61) {
                auVar106._8_8_ = pcVar24;
                auVar106._0_8_ = 1;
                return auVar106;
              }
            }
            else if (uVar32 == 0x62) {
              if (uVar26 == 0x62) {
                auVar97._8_8_ = pcVar24;
                auVar97._0_8_ = 1;
                return auVar97;
              }
            }
            else if (uVar26 == 99) {
              auVar112._8_8_ = pcVar24;
              auVar112._0_8_ = 1;
              return auVar112;
            }
          }
          else if (uVar32 < 0x66) {
            if (uVar32 == 100) {
              if (uVar26 == 100) {
                auVar93._8_8_ = pcVar24;
                auVar93._0_8_ = 1;
                return auVar93;
              }
            }
            else if (uVar26 == 0x65) {
              auVar109._8_8_ = pcVar24;
              auVar109._0_8_ = 1;
              return auVar109;
            }
          }
          else if (uVar32 == 0x66) {
            if (uVar26 == 0x66) {
              auVar100._8_8_ = pcVar24;
              auVar100._0_8_ = 1;
              return auVar100;
            }
          }
          else if (uVar26 == 0x67) {
            auVar115._8_8_ = pcVar24;
            auVar115._0_8_ = 1;
            return auVar115;
          }
        }
        else if (uVar32 < 0x84) {
          if (uVar32 < 0x82) {
            if (uVar32 == 0x80) {
              if (uVar26 == 0x80) {
                auVar91._8_8_ = pcVar24;
                auVar91._0_8_ = 1;
                return auVar91;
              }
            }
            else if (uVar26 == 0x81) {
              auVar108._8_8_ = pcVar24;
              auVar108._0_8_ = 1;
              return auVar108;
            }
          }
          else if (uVar32 == 0x82) {
            if (uVar26 == 0x82) {
              auVar99._8_8_ = pcVar24;
              auVar99._0_8_ = 1;
              return auVar99;
            }
          }
          else if (uVar26 == 0x83) {
            auVar114._8_8_ = pcVar24;
            auVar114._0_8_ = 1;
            return auVar114;
          }
        }
        else if (uVar32 < 0x86) {
          if (uVar32 == 0x84) {
            if (uVar26 == 0x84) {
              auVar95._8_8_ = pcVar24;
              auVar95._0_8_ = 1;
              return auVar95;
            }
          }
          else if (uVar26 == 0x85) {
            auVar111._8_8_ = pcVar24;
            auVar111._0_8_ = 1;
            return auVar111;
          }
        }
        else if (uVar32 == 0x86) {
          if (uVar26 == 0x86) {
            auVar102._8_8_ = pcVar24;
            auVar102._0_8_ = 1;
            return auVar102;
          }
        }
        else if (uVar26 == 0x87) {
          auVar117._8_8_ = pcVar24;
          auVar117._0_8_ = 1;
          return auVar117;
        }
      }
      else if (uVar33 == 5) {
        if (uVar32 < 0xa4) {
          if (uVar32 < 0xa2) {
            if (uVar32 == 0xa0) {
              if (uVar26 == 0xa0) {
                auVar88._8_8_ = pcVar24;
                auVar88._0_8_ = 1;
                return auVar88;
              }
            }
            else if (uVar26 == 0xa1) {
              auVar107._8_8_ = pcVar24;
              auVar107._0_8_ = 1;
              return auVar107;
            }
          }
          else if (uVar32 == 0xa2) {
            if (uVar26 == 0xa2) {
              auVar98._8_8_ = pcVar24;
              auVar98._0_8_ = 1;
              return auVar98;
            }
          }
          else if (uVar26 == 0xa3) {
            auVar113._8_8_ = pcVar24;
            auVar113._0_8_ = 1;
            return auVar113;
          }
        }
        else if (uVar32 < 0xa6) {
          if (uVar32 == 0xa4) {
            if (uVar26 == 0xa4) {
              auVar94._8_8_ = pcVar24;
              auVar94._0_8_ = 1;
              return auVar94;
            }
          }
          else if (uVar26 == 0xa5) {
            auVar110._8_8_ = pcVar24;
            auVar110._0_8_ = 1;
            return auVar110;
          }
        }
        else if (uVar32 == 0xa6) {
          if (uVar26 == 0xa6) {
            auVar101._8_8_ = pcVar24;
            auVar101._0_8_ = 1;
            return auVar101;
          }
        }
        else if (uVar26 == 0xa7) {
          auVar116._8_8_ = pcVar24;
          auVar116._0_8_ = 1;
          return auVar116;
        }
      }
      else if (uVar32 < 0xc2) {
        if (uVar32 == 0xc0) {
          if (uVar26 == 0xc0) {
            auVar96._8_8_ = pcVar24;
            auVar96._0_8_ = 1;
            return auVar96;
          }
        }
        else if (uVar26 == 0xc1) {
          auVar105._8_8_ = pcVar24;
          auVar105._0_8_ = 1;
          return auVar105;
        }
      }
      else if (uVar32 == 0xc2) {
        if (uVar26 == 0xc2) {
          auVar103._8_8_ = pcVar24;
          auVar103._0_8_ = 1;
          return auVar103;
        }
      }
      else if (uVar32 == 0xc3) {
        if (uVar26 == 0xc3) {
          auVar92._8_8_ = pcVar24;
          auVar92._0_8_ = 1;
          return auVar92;
        }
      }
      else if (uVar26 == 0xc4) {
        auVar104._8_8_ = pcVar24;
        auVar104._0_8_ = 1;
        return auVar104;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = pcVar24;
      return auVar6 << 0x40;
    }
    break;
  case 6:
    if ((bVar1 & 0xfc) == 0x18) {
      uVar33 = uVar33 & 0xff;
      uVar32 = uVar30 & 0xff;
      if (uVar33 == 4) {
        if (uVar32 == 4) {
          auVar119._8_8_ = pcVar24;
          auVar119._0_8_ = 1;
          return auVar119;
        }
      }
      else if (uVar33 == 5) {
        if (uVar32 == 5) {
          auVar118._8_8_ = pcVar24;
          auVar118._0_8_ = 1;
          return auVar118;
        }
      }
      else if ((uVar30 & 0xfe) != 4) {
        auVar120._1_7_ = 0;
        auVar120[0] = uVar33 == uVar32;
        auVar120._8_8_ = pcVar24;
        return auVar120;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = pcVar24;
      return auVar7 << 0x40;
    }
    break;
  case 7:
    if ((bVar1 & 0xfc) == 0x1c) {
      uVar32 = uVar30 & 0xff;
      uVar26 = uVar33 & 0xff;
      if (uVar26 < 5) {
        if (uVar26 == 3) {
          if (uVar32 == 3) {
            auVar70._8_8_ = pcVar27;
            auVar70._0_8_ = 1;
            return auVar70;
          }
          break;
        }
        if (uVar26 == 4) {
          if (uVar32 == 4) {
            auVar44._8_8_ = pcVar27;
            auVar44._0_8_ = 1;
            return auVar44;
          }
          break;
        }
      }
      else {
        if (uVar26 == 5) {
          if (uVar32 == 5) {
            auVar71._8_8_ = pcVar27;
            auVar71._0_8_ = 1;
            return auVar71;
          }
          break;
        }
        if (uVar26 == 6) {
          if (uVar32 == 6) {
            auVar53._8_8_ = pcVar27;
            auVar53._0_8_ = 1;
            return auVar53;
          }
          break;
        }
      }
      if ((3 < uVar32 - 3) && (((uVar30 ^ uVar33) & 0xff) == 0)) {
        auVar65._8_8_ = pcVar27;
        auVar65._0_8_ = 1;
        return auVar65;
      }
    }
    break;
  case 8:
    if ((bVar1 & 0xfc) == 0x20) goto code_r0x001df324;
    break;
  case 9:
    if ((bVar1 & 0xfc) == 0x24) {
      uVar32 = uVar33 & 0xff;
      uVar26 = uVar30 & 0xff;
      if (uVar32 >> 6 == 0) {
        if ((uVar26 < 0x40) && ((uVar30 & 0x3f) == (uVar33 & 0xff))) {
          auVar56._8_8_ = pcVar27;
          auVar56._0_8_ = 1;
          return auVar56;
        }
      }
      else if (uVar32 >> 6 == 1) {
        if (((uVar30 & 0xc0) == 0x40) && (((uVar26 ^ uVar32) & 0x3f) == 0)) {
          auVar40._8_8_ = pcVar27;
          auVar40._0_8_ = 1;
          return auVar40;
        }
      }
      else if (uVar32 < 0x82) {
        if (uVar32 == 0x80) {
          if (uVar26 == 0x80) {
            auVar57._8_8_ = pcVar27;
            auVar57._0_8_ = 1;
            return auVar57;
          }
        }
        else if (uVar26 == 0x81) {
          auVar81._8_8_ = pcVar27;
          auVar81._0_8_ = 1;
          return auVar81;
        }
      }
      else if (uVar32 == 0x82) {
        if (uVar26 == 0x82) {
          auVar72._8_8_ = pcVar27;
          auVar72._0_8_ = 1;
          return auVar72;
        }
      }
      else if (uVar26 == 0x83) {
        auVar82._8_8_ = pcVar27;
        auVar82._0_8_ = 1;
        return auVar82;
      }
    }
    break;
  case 10:
    if ((bVar1 & 0xfc) == 0x28) goto code_r0x001df324;
    break;
  case 0xb:
    if ((bVar1 & 0xfc) == 0x2c) {
      uVar26 = uVar26 & 0xff;
      if (uVar26 == 1 || ((ulong)pcVar27 & 0xff) == 0) {
        if (((ulong)pcVar27 & 0xff) == 0) {
          if (((ulong)pcVar22 & 0xff) == 0) {
LAB_001e61b0:
            auVar126._1_7_ = 0;
            auVar126[0] = uVar33 == uVar30;
            auVar126._8_8_ = pcVar27;
            return auVar126;
          }
        }
        else if ((uVar31 & 0xff) == 1) goto LAB_001e61b0;
      }
      else if (uVar26 == 2) {
        if ((uVar31 & 0xff) == 2) {
          auVar124._1_7_ = 0;
          auVar124[0] = ((uVar30 ^ uVar33) & 0xff) == 0;
          auVar124._8_8_ = pcVar27;
          return auVar124;
        }
      }
      else if (uVar26 == 3) {
        if ((uVar31 & 0xff) == 3) goto LAB_001e61b0;
      }
      else if (((uVar31 & 0xff) == 4) && (pcVar24 == (code *)0x0)) {
        auVar125._8_8_ = pcVar27;
        auVar125._0_8_ = 1;
        return auVar125;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = pcVar27;
      return auVar8 << 0x40;
    }
    break;
  case 0xc:
    if ((bVar1 & 0xfc) == 0x30) goto code_r0x001df324;
    break;
  case 0xd:
    if ((bVar1 & 0xfc) == 0x34) {
      if (((ulong)pcVar27 & 0xff) == 0) {
        if (((ulong)pcVar22 & 0xff) == 0) {
          auVar129._1_7_ = 0;
          auVar129[0] = ((uVar30 ^ uVar33) & 0xff) == 0;
          auVar129._8_8_ = pcVar27;
          return auVar129;
        }
      }
      else {
        if ((uVar26 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001e7b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)pcVar25[0x7e6ac8] * 4 + 0x1e7b48))();
          auVar128._8_8_ = pcVar27;
          auVar128._0_8_ = pcVar25;
          return auVar128;
        }
        if ((uVar31 & 0xff) == 1) {
          auVar127._1_7_ = 0;
          auVar127[0] = uVar33 == uVar30;
          auVar127._8_8_ = pcVar27;
          return auVar127;
        }
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = pcVar27;
      return auVar9 << 0x40;
    }
    break;
  case 0xe:
    if ((bVar1 & 0xfc) == 0x38) {
      uVar26 = uVar26 & 0xff;
      if (uVar26 == 1 || ((ulong)pcVar27 & 0xff) == 0) {
        if (((ulong)pcVar27 & 0xff) == 0) {
          if (((ulong)pcVar22 & 0xff) == 0) {
LAB_001e9570:
            auVar132._1_7_ = 0;
            auVar132[0] = ((uVar30 ^ uVar33) & 0xff) == 0;
            auVar132._8_8_ = pcVar27;
            return auVar132;
          }
        }
        else if ((uVar31 & 0xff) == 1) goto LAB_001e9570;
      }
      else if (uVar26 == 2) {
        if ((uVar31 & 0xff) == 2) {
          auVar130._1_7_ = 0;
          auVar130[0] = uVar33 == uVar30;
          auVar130._8_8_ = pcVar27;
          return auVar130;
        }
      }
      else {
        if (uVar26 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e9548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)pcVar25[0x7e6d33] * 4 + 0x1e954c))();
          auVar131._8_8_ = pcVar27;
          auVar131._0_8_ = pcVar25;
          return auVar131;
        }
        if ((uVar31 & 0xff) == 3) goto LAB_001e9570;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = pcVar27;
      return auVar10 << 0x40;
    }
    break;
  case 0xf:
    if ((bVar1 & 0xfc) == 0x3c) {
      uVar32 = uVar33 & 0xff;
      uVar26 = uVar30 & 0xff;
      uVar33 = uVar33 >> 4 & 0xf;
      if (uVar33 < 4) {
        if (uVar33 < 2) {
          if (uVar33 == 0) {
            if (uVar26 < 0x10) {
              auVar135._1_7_ = 0;
              auVar135[0] = uVar32 == uVar26;
              auVar135._8_8_ = pcVar24;
              return auVar135;
            }
          }
          else if ((uVar30 & 0xf0) == 0x10) {
            auVar139._1_7_ = 0;
            auVar139[0] = ((uVar26 ^ uVar32) & 0xf) == 0;
            auVar139._8_8_ = pcVar24;
            return auVar139;
          }
        }
        else if (uVar33 == 2) {
          if (uVar32 < 0x22) {
            if (uVar32 == 0x20) {
              if (uVar26 == 0x20) {
                auVar136._8_8_ = pcVar24;
                auVar136._0_8_ = 1;
                return auVar136;
              }
            }
            else if (uVar26 == 0x21) {
              auVar153._8_8_ = pcVar24;
              auVar153._0_8_ = 1;
              return auVar153;
            }
          }
          else if (uVar32 == 0x22) {
            if (uVar26 == 0x22) {
              auVar144._8_8_ = pcVar24;
              auVar144._0_8_ = 1;
              return auVar144;
            }
          }
          else if (uVar26 == 0x23) {
            auVar155._8_8_ = pcVar24;
            auVar155._0_8_ = 1;
            return auVar155;
          }
        }
        else if (uVar32 < 0x32) {
          if (uVar32 == 0x30) {
            if (uVar26 == 0x30) {
              auVar140._8_8_ = pcVar24;
              auVar140._0_8_ = 1;
              return auVar140;
            }
          }
          else if (uVar26 == 0x31) {
            auVar154._8_8_ = pcVar24;
            auVar154._0_8_ = 1;
            return auVar154;
          }
        }
        else if (uVar32 == 0x32) {
          if (uVar26 == 0x32) {
            auVar145._8_8_ = pcVar24;
            auVar145._0_8_ = 1;
            return auVar145;
          }
        }
        else if (uVar26 == 0x33) {
          auVar156._8_8_ = pcVar24;
          auVar156._0_8_ = 1;
          return auVar156;
        }
      }
      else if (uVar33 < 6) {
        if (uVar33 == 4) {
          if (uVar32 < 0x42) {
            if (uVar32 == 0x40) {
              if (uVar26 == 0x40) {
                auVar137._8_8_ = pcVar24;
                auVar137._0_8_ = 1;
                return auVar137;
              }
            }
            else if (uVar26 == 0x41) {
              auVar159._8_8_ = pcVar24;
              auVar159._0_8_ = 1;
              return auVar159;
            }
          }
          else if (uVar32 == 0x42) {
            if (uVar26 == 0x42) {
              auVar147._8_8_ = pcVar24;
              auVar147._0_8_ = 1;
              return auVar147;
            }
          }
          else if (uVar26 == 0x43) {
            auVar161._8_8_ = pcVar24;
            auVar161._0_8_ = 1;
            return auVar161;
          }
        }
        else if (uVar32 < 0x52) {
          if (uVar32 == 0x50) {
            if (uVar26 == 0x50) {
              auVar142._8_8_ = pcVar24;
              auVar142._0_8_ = 1;
              return auVar142;
            }
          }
          else if (uVar26 == 0x51) {
            auVar160._8_8_ = pcVar24;
            auVar160._0_8_ = 1;
            return auVar160;
          }
        }
        else if (uVar32 == 0x52) {
          if (uVar26 == 0x52) {
            auVar148._8_8_ = pcVar24;
            auVar148._0_8_ = 1;
            return auVar148;
          }
        }
        else if (uVar26 == 0x53) {
          auVar162._8_8_ = pcVar24;
          auVar162._0_8_ = 1;
          return auVar162;
        }
      }
      else if (uVar33 == 6) {
        if (uVar32 < 0x62) {
          if (uVar32 == 0x60) {
            if (uVar26 == 0x60) {
              auVar138._8_8_ = pcVar24;
              auVar138._0_8_ = 1;
              return auVar138;
            }
          }
          else if (uVar26 == 0x61) {
            auVar151._8_8_ = pcVar24;
            auVar151._0_8_ = 1;
            return auVar151;
          }
        }
        else if (uVar32 == 0x62) {
          if (uVar26 == 0x62) {
            auVar143._8_8_ = pcVar24;
            auVar143._0_8_ = 1;
            return auVar143;
          }
        }
        else if (uVar26 == 99) {
          auVar152._8_8_ = pcVar24;
          auVar152._0_8_ = 1;
          return auVar152;
        }
      }
      else if (uVar33 == 7) {
        if (uVar32 < 0x72) {
          if (uVar32 == 0x70) {
            if (uVar26 == 0x70) {
              auVar134._8_8_ = pcVar24;
              auVar134._0_8_ = 1;
              return auVar134;
            }
          }
          else if (uVar26 == 0x71) {
            auVar157._8_8_ = pcVar24;
            auVar157._0_8_ = 1;
            return auVar157;
          }
        }
        else if (uVar32 == 0x72) {
          if (uVar26 == 0x72) {
            auVar146._8_8_ = pcVar24;
            auVar146._0_8_ = 1;
            return auVar146;
          }
        }
        else if (uVar26 == 0x73) {
          auVar158._8_8_ = pcVar24;
          auVar158._0_8_ = 1;
          return auVar158;
        }
      }
      else if (uVar32 == 0x80) {
        if (uVar26 == 0x80) {
          auVar149._8_8_ = pcVar24;
          auVar149._0_8_ = 1;
          return auVar149;
        }
      }
      else if (uVar32 == 0x81) {
        if (uVar26 == 0x81) {
          auVar141._8_8_ = pcVar24;
          auVar141._0_8_ = 1;
          return auVar141;
        }
      }
      else if (uVar26 == 0x82) {
        auVar150._8_8_ = pcVar24;
        auVar150._0_8_ = 1;
        return auVar150;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = pcVar24;
      return auVar11 << 0x40;
    }
    break;
  case 0x10:
    if ((bVar1 & 0xfc) == 0x40) {
      uVar26 = uVar26 & 0xff;
      if (uVar26 == 1 || ((ulong)pcVar27 & 0xff) == 0) {
        if (((ulong)pcVar27 & 0xff) == 0) {
          if (((ulong)pcVar22 & 0xff) == 0) {
LAB_001ecdc0:
            auVar171._1_7_ = 0;
            auVar171[0] = uVar33 == uVar30;
            auVar171._8_8_ = pcVar27;
            return auVar171;
          }
        }
        else if ((uVar31 & 0xff) == 1) goto LAB_001ecdc0;
      }
      else if (uVar26 == 2) {
        if ((uVar31 & 0xff) == 2) goto LAB_001ecdc0;
      }
      else if (uVar26 == 3) {
        if ((uVar31 & 0xff) == 3) {
          auVar169._1_7_ = 0;
          auVar169[0] = ((uVar30 ^ uVar33) & 0xff) == 0;
          auVar169._8_8_ = pcVar27;
          return auVar169;
        }
      }
      else {
        uVar31 = uVar31 & 0xff;
        if (pcVar25 == (code *)0x0) {
          if ((uVar31 == 4) && (pcVar24 == (code *)0x0)) {
            auVar172._8_8_ = pcVar27;
            auVar172._0_8_ = 1;
            return auVar172;
          }
        }
        else if (pcVar25 == (code *)((long)&MACH_HEADER.magic + 1U)) {
          if ((uVar31 == 4) && (pcVar24 == (code *)((long)&MACH_HEADER.magic + 1U))) {
            auVar170._8_8_ = pcVar27;
            auVar170._0_8_ = 1;
            return auVar170;
          }
        }
        else if ((uVar31 == 4) && (pcVar24 == (code *)((long)&MACH_HEADER.magic + 2U))) {
          auVar173._8_8_ = pcVar27;
          auVar173._0_8_ = 1;
          return auVar173;
        }
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = pcVar27;
      return auVar12 << 0x40;
    }
    break;
  case 0x11:
    if ((bVar1 & 0xfc) == 0x44) {
      uVar32 = uVar30 & 0xff;
      uVar26 = uVar33 & 0xff;
      if (uVar26 < 5) {
        if (uVar26 == 2) {
          if (uVar32 == 2) {
            auVar74._8_8_ = pcVar27;
            auVar74._0_8_ = 1;
            return auVar74;
          }
          break;
        }
        if (uVar26 == 3) {
          if (uVar32 == 3) {
            auVar77._8_8_ = pcVar27;
            auVar77._0_8_ = 1;
            return auVar77;
          }
          break;
        }
        if (uVar26 == 4) {
          if (uVar32 == 4) {
            auVar45._8_8_ = pcVar27;
            auVar45._0_8_ = 1;
            return auVar45;
          }
          break;
        }
      }
      else {
        if (uVar26 == 5) {
          if (uVar32 == 5) {
            auVar75._8_8_ = pcVar27;
            auVar75._0_8_ = 1;
            return auVar75;
          }
          break;
        }
        if (uVar26 == 6) {
          if (uVar32 == 6) {
            auVar78._8_8_ = pcVar27;
            auVar78._0_8_ = 1;
            return auVar78;
          }
          break;
        }
        if (uVar26 == 7) {
          if (uVar32 == 7) {
            auVar55._8_8_ = pcVar27;
            auVar55._0_8_ = 1;
            return auVar55;
          }
          break;
        }
      }
      if ((5 < uVar32 - 2) && (((uVar30 ^ uVar33) & 0xff) == 0)) {
        auVar76._8_8_ = pcVar27;
        auVar76._0_8_ = 1;
        return auVar76;
      }
    }
    break;
  case 0x12:
    if ((bVar1 & 0xfc) == 0x48) {
      uVar32 = uVar33 & 0xff;
      uVar26 = uVar30 & 0xff;
      uVar33 = uVar33 >> 5 & 7;
      if (uVar33 < 3) {
        if (uVar33 == 0) {
          if (uVar26 < 0x20) {
            auVar176._1_7_ = 0;
            auVar176[0] = uVar32 == uVar26;
            auVar176._8_8_ = pcVar24;
            return auVar176;
          }
        }
        else if (uVar33 == 1) {
          if ((uVar30 & 0xe0) == 0x20) {
LAB_001ee998:
            auVar177._1_7_ = 0;
            auVar177[0] = ((uVar26 ^ uVar32) & 0x1f) == 0;
            auVar177._8_8_ = pcVar24;
            return auVar177;
          }
        }
        else if ((uVar30 & 0xe0) == 0x40) goto LAB_001ee998;
      }
      else if (uVar33 < 5) {
        if (uVar33 == 3) {
          if (uVar32 < 0x62) {
            if (uVar32 == 0x60) {
              if (uVar26 == 0x60) {
                auVar174._8_8_ = pcVar24;
                auVar174._0_8_ = 1;
                return auVar174;
              }
            }
            else if (uVar26 == 0x61) {
              auVar184._8_8_ = pcVar24;
              auVar184._0_8_ = 1;
              return auVar184;
            }
          }
          else if (uVar32 == 0x62) {
            if (uVar26 == 0x62) {
              auVar180._8_8_ = pcVar24;
              auVar180._0_8_ = 1;
              return auVar180;
            }
          }
          else if (uVar26 == 99) {
            auVar187._8_8_ = pcVar24;
            auVar187._0_8_ = 1;
            return auVar187;
          }
        }
        else if (uVar32 < 0x82) {
          if (uVar32 == 0x80) {
            if (uVar26 == 0x80) {
              auVar178._8_8_ = pcVar24;
              auVar178._0_8_ = 1;
              return auVar178;
            }
          }
          else if (uVar26 == 0x81) {
            auVar186._8_8_ = pcVar24;
            auVar186._0_8_ = 1;
            return auVar186;
          }
        }
        else if (uVar32 == 0x82) {
          if (uVar26 == 0x82) {
            auVar182._8_8_ = pcVar24;
            auVar182._0_8_ = 1;
            return auVar182;
          }
        }
        else if (uVar26 == 0x83) {
          auVar189._8_8_ = pcVar24;
          auVar189._0_8_ = 1;
          return auVar189;
        }
      }
      else if (uVar33 == 5) {
        if (uVar32 < 0xa2) {
          if (uVar32 == 0xa0) {
            if (uVar26 == 0xa0) {
              auVar175._8_8_ = pcVar24;
              auVar175._0_8_ = 1;
              return auVar175;
            }
          }
          else if (uVar26 == 0xa1) {
            auVar185._8_8_ = pcVar24;
            auVar185._0_8_ = 1;
            return auVar185;
          }
        }
        else if (uVar32 == 0xa2) {
          if (uVar26 == 0xa2) {
            auVar181._8_8_ = pcVar24;
            auVar181._0_8_ = 1;
            return auVar181;
          }
        }
        else if (uVar26 == 0xa3) {
          auVar188._8_8_ = pcVar24;
          auVar188._0_8_ = 1;
          return auVar188;
        }
      }
      else if (uVar32 == 0xc0) {
        if (uVar26 == 0xc0) {
          auVar179._8_8_ = pcVar24;
          auVar179._0_8_ = 1;
          return auVar179;
        }
      }
      else if (uVar26 == 0xc1) {
        auVar183._8_8_ = pcVar24;
        auVar183._0_8_ = 1;
        return auVar183;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = pcVar24;
      return auVar13 << 0x40;
    }
    break;
  case 0x13:
    if ((bVar1 & 0xfc) == 0x4c) goto code_r0x001df324;
    break;
  case 0x14:
    if ((bVar1 & 0xfc) == 0x50) {
      if ((uVar26 & 0xff) == 1 || ((ulong)pcVar27 & 0xff) == 0) {
        if (((ulong)pcVar27 & 0xff) == 0) {
          if (((ulong)pcVar22 & 0xff) == 0) {
            auVar190._1_7_ = 0;
            auVar190[0] = uVar33 == uVar30;
            auVar190._8_8_ = pcVar27;
            return auVar190;
          }
        }
        else if ((uVar31 & 0xff) == 1) goto LAB_001f0b7c;
      }
      else {
        if ((uVar26 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x001f0ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)pcVar25[0x7e79c6] * 4 + 0x1f0ba4))();
          auVar192._8_8_ = pcVar27;
          auVar192._0_8_ = pcVar25;
          return auVar192;
        }
        if ((uVar31 & 0xff) == 2) {
LAB_001f0b7c:
          auVar191._1_7_ = 0;
          auVar191[0] = ((uVar30 ^ uVar33) & 0xff) == 0;
          auVar191._8_8_ = pcVar27;
          return auVar191;
        }
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = pcVar27;
      return auVar14 << 0x40;
    }
    break;
  case 0x15:
    if ((bVar1 & 0xfc) == 0x54) goto code_r0x001df324;
    break;
  case 0x16:
    if ((bVar1 & 0xfc) == 0x58) goto code_r0x001df324;
    break;
  case 0x17:
    if ((bVar1 & 0xfc) == 0x5c) goto code_r0x001df324;
    break;
  case 0x18:
    if ((bVar1 & 0xfc) != 0x60) break;
    uVar32 = uVar31 >> 8 & 0xff;
    UNRECOVERED_JUMPTABLE = (code *)((ulong)pcVar27 & 0xff00);
  case 0xdc:
    if (UNRECOVERED_JUMPTABLE == (code *)&section_000000b8.reserved2) {
      bVar17 = pcVar25 < (code *)((long)&MACH_HEADER.magic + 3);
      uVar36 = (long)cVar3 + (ulong)!bVar17;
      if ((long)-uVar36 < 0 == SCARRY8(~uVar36,(ulong)bVar17)) {
        if (pcVar25 == (code *)0x0 && ((ulong)pcVar27 & 0xff) == 0) {
          if ((uVar32 == 1) && (((ulong)pcVar22 & 0xff) == 0 && pcVar24 == (code *)0x0)) {
            auVar83._8_8_ = pcVar27;
            auVar83._0_8_ = 1;
            return auVar83;
          }
        }
        else if (pcVar25 == (code *)((long)&MACH_HEADER.magic + 1U) && ((ulong)pcVar27 & 0xff) == 0)
        {
          if ((uVar32 == 1) &&
             (pcVar24 == (code *)((long)&MACH_HEADER.magic + 1U) && ((ulong)pcVar22 & 0xff) == 0)) {
            auVar62._8_8_ = pcVar27;
            auVar62._0_8_ = 1;
            return auVar62;
          }
        }
        else if ((uVar32 == 1) &&
                (pcVar24 == (code *)((long)&MACH_HEADER.magic + 2U) && ((ulong)pcVar22 & 0xff) == 0)
                ) {
          auVar84._8_8_ = pcVar27;
          auVar84._0_8_ = 1;
          return auVar84;
        }
      }
      else {
        bVar17 = pcVar25 < (code *)((long)&MACH_HEADER.cputype + 1);
        uVar36 = (long)cVar3 + (ulong)!bVar17;
        if ((long)-uVar36 < 0 == SCARRY8(~uVar36,(ulong)bVar17)) {
          if (pcVar25 == (code *)((long)&MACH_HEADER.magic + 3U) && ((ulong)pcVar27 & 0xff) == 0) {
            if ((uVar32 == 1) &&
               (pcVar24 == (code *)((long)&MACH_HEADER.magic + 3U) && ((ulong)pcVar22 & 0xff) == 0))
            {
              auVar42._8_8_ = pcVar27;
              auVar42._0_8_ = 1;
              return auVar42;
            }
          }
          else if (uVar32 == 1) {
code_r0x001df81c:
            if (pcVar24 == (code *)&MACH_HEADER.cputype && ((ulong)pcVar22 & 0xff) == 0) {
              auVar85._8_8_ = pcVar27;
              auVar85._0_8_ = 1;
              return auVar85;
            }
          }
        }
        else {
          in_ZR = uVar32 == 1;
          if (pcVar25 == (code *)((long)&MACH_HEADER.cputype + 1U) && ((ulong)pcVar27 & 0xff) == 0)
          {
            if ((in_ZR) &&
               (pcVar24 == (code *)((long)&MACH_HEADER.cputype + 1U) && ((ulong)pcVar22 & 0xff) == 0
               )) {
              auVar73._8_8_ = pcVar27;
              auVar73._0_8_ = 1;
              return auVar73;
            }
          }
          else {
code_r0x001df834:
            if ((in_ZR) &&
               (((ulong)pcVar22 & 0xff) != 0 ||
                CARRY8(((ulong)pcVar22 & 0xff) - 1,
                       (ulong)((code *)((long)&MACH_HEADER.cputype + 1) < pcVar24)))) {
              pcVar25 = (code *)((long)&MACH_HEADER.magic + 1);
code_r0x001df84c:
              auVar86._8_8_ = pcVar27;
              auVar86._0_8_ = pcVar25;
              return auVar86;
            }
          }
        }
      }
    }
    else if (uVar32 != 1) {
      if (((ulong)pcVar27 & 0xff) == 1) {
        if ((uVar31 & 0xff) == 1) {
          auVar51._8_8_ = pcVar27;
          auVar51._0_8_ = 1;
          return auVar51;
        }
      }
      else if (((uVar31 & 0xff) != 1) && (uVar33 == uVar30)) {
        auVar79._8_8_ = pcVar27;
        auVar79._0_8_ = 1;
        return auVar79;
      }
    }
    break;
  case 0x19:
    if ((bVar1 & 0xfc) == 100) {
      uVar32 = uVar30 & 0xff;
      uVar26 = uVar33 & 0xff;
      if (uVar26 < 10) {
        if (uVar26 == 8) {
          if (uVar32 == 8) {
            auVar66._8_8_ = pcVar27;
            auVar66._0_8_ = 1;
            return auVar66;
          }
          break;
        }
        if (uVar26 == 9) {
          if (uVar32 == 9) {
            auVar41._8_8_ = pcVar27;
            auVar41._0_8_ = 1;
            return auVar41;
          }
          break;
        }
      }
      else {
        if (uVar26 == 10) {
          if (uVar32 == 10) {
            auVar67._8_8_ = pcVar27;
            auVar67._0_8_ = 1;
            return auVar67;
          }
          break;
        }
        if (uVar26 == 0xb) {
          if (uVar32 == 0xb) {
            auVar50._8_8_ = pcVar27;
            auVar50._0_8_ = 1;
            return auVar50;
          }
          break;
        }
      }
      if (((uVar30 & 0xfc) != 8) && (((uVar30 ^ uVar33) & 0xff) == 0)) {
        auVar63._8_8_ = pcVar27;
        auVar63._0_8_ = 1;
        return auVar63;
      }
    }
    break;
  case 0x1a:
    if ((bVar1 & 0xfc) == 0x68) {
      uVar32 = uVar30 & 0xff;
      if ((uVar33 & 0xff) == 3) {
        if (uVar32 == 3) {
          auVar60._8_8_ = pcVar27;
          auVar60._0_8_ = 1;
          return auVar60;
        }
      }
      else if ((uVar33 & 0xff) == 4) {
        if (uVar32 == 4) {
          auVar49._8_8_ = pcVar27;
          auVar49._0_8_ = 1;
          return auVar49;
        }
      }
      else if ((1 < uVar32 - 3) && (((uVar30 ^ uVar33) & 0xff) == 0)) {
        auVar61._8_8_ = pcVar27;
        auVar61._0_8_ = 1;
        return auVar61;
      }
    }
    break;
  case 0x1b:
    if ((bVar1 & 0xfc) == 0x6c) {
      if (((byte)cVar2 & 3) == 0) {
        if ((bVar1 & 3) == 0) {
          auVar197._1_7_ = 0;
          auVar197[0] = uVar33 == uVar30;
          auVar197._8_8_ = pcVar27;
          return auVar197;
        }
      }
      else {
        if (((byte)cVar2 & 3) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001f5a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)pcVar25[0x7e89b4] * 4 + 0x1f5a5c))();
          auVar196._8_8_ = pcVar27;
          auVar196._0_8_ = pcVar25;
          return auVar196;
        }
        if ((bVar1 & 3) == 1) {
          if ((pcVar25 == pcVar24) && (pcVar27 == pcVar22)) {
            auVar195._8_8_ = pcVar27;
            auVar195._0_8_ = 1;
            return auVar195;
          }
                    /* WARNING: Could not recover jumptable at 0x00778f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_0099b6b8
          )(pcVar25,pcVar27,pcVar24,pcVar22,0);
          auVar214._8_8_ = pcVar27;
          auVar214._0_8_ = pcVar25;
          return auVar214;
        }
      }
      auVar15._8_8_ = 0;
      auVar15._0_8_ = pcVar27;
      return auVar15 << 0x40;
    }
    break;
  case 0x1c:
    if ((bVar1 & 0xfc) == 0x70) goto code_r0x001df324;
    break;
  case 0x1d:
    if ((bVar1 & 0xfc) == 0x74) goto code_r0x001df324;
    break;
  case 0x1e:
    if ((bVar1 & 0xfc) == 0x78) {
      uVar32 = uVar30 & 0xff;
      if ((uVar33 & 0xff) == 6) {
        if (uVar32 == 6) {
          auVar58._8_8_ = pcVar27;
          auVar58._0_8_ = 1;
          return auVar58;
        }
      }
      else if ((uVar33 & 0xff) == 5) {
        if (uVar32 == 5) {
          auVar46._8_8_ = pcVar27;
          auVar46._0_8_ = 1;
          return auVar46;
        }
      }
      else if ((1 < uVar32 - 5) && (((uVar30 ^ uVar33) & 0xff) == 0)) {
        auVar59._8_8_ = pcVar27;
        auVar59._0_8_ = 1;
        return auVar59;
      }
    }
    break;
  case 0x1f:
    if ((bVar1 & 0xfc) == 0x7c) goto code_r0x001df324;
    break;
  case 0x20:
    if ((char)bVar1 < -0x7c) goto code_r0x001df324;
    break;
  case 0x21:
    in_ZR = (bVar1 & 0xfc) == 0x84;
  case 0x55:
  case 0x69:
  case 0x9d:
  case 0xbd:
  case 0xcb:
  case 0xf5:
    if (in_ZR) {
code_r0x001df324:
      auVar47._1_7_ = 0;
      auVar47[0] = ((uVar30 ^ uVar33) & 0xff) == 0;
      auVar47._8_8_ = pcVar27;
      return auVar47;
    }
    break;
  case 0x22:
    if ((bVar1 & 0xfc) == 0x88) goto code_r0x001df324;
    break;
  case 0x23:
    if ((bVar1 & 0xfc) == 0x8c) goto code_r0x001df324;
    break;
  case 0x24:
    if ((bVar1 & 0xfc) == 0x90) goto code_r0x001df324;
  case 0x37:
  case 0x41:
  case 0x45:
  case 0x49:
  case 0x4d:
  case 0x57:
  case 0x61:
  case 0x8b:
  case 0x95:
  case 0x9f:
  case 0xa9:
  case 0xad:
  case 0xb1:
  case 0xb5:
  case 0xbf:
  case 0xc3:
  case 0xe3:
  case 0xed:
  case 0xf7:
    break;
  case 0x25:
    if ((bVar1 & 0xfc) == 0x94) goto code_r0x001df324;
    break;
  case 0x26:
    if ((pcVar27 == (code *)0x0 && pcVar25 == (code *)0x0) && (cVar2 == (code)0x98)) {
      if ((((bVar1 & 0xfc) == 0x98) && (pcVar22 == (code *)0x0 && pcVar24 == (code *)0x0)) &&
         (bVar1 == 0x98)) {
        auVar48._8_8_ = pcVar27;
        auVar48._0_8_ = 1;
        return auVar48;
      }
    }
    else if ((pcVar25 == (code *)((long)&MACH_HEADER.magic + 1U)) &&
            ((pcVar27 == (code *)0x0 && (cVar2 == (code)0x98)))) {
      if (((((bVar1 & 0xfc) == 0x98) && (pcVar24 == (code *)((long)&MACH_HEADER.magic + 1U))) &&
          (pcVar22 == (code *)0x0)) && (bVar1 == 0x98)) {
        return ZEXT816(1);
      }
    }
    else if ((pcVar25 == (code *)((long)&MACH_HEADER.magic + 2U)) &&
            ((pcVar27 == (code *)0x0 && (cVar2 == (code)0x98)))) {
      if ((((bVar1 & 0xfc) == 0x98) && (pcVar24 == (code *)((long)&MACH_HEADER.magic + 2U))) &&
         ((pcVar22 == (code *)0x0 && (bVar1 == 0x98)))) {
        return ZEXT816(1);
      }
    }
    else if ((pcVar25 == (code *)((long)&MACH_HEADER.magic + 3U)) &&
            ((pcVar27 == (code *)0x0 && (cVar2 == (code)0x98)))) {
      if ((((bVar1 & 0xfc) == 0x98) && (pcVar24 == (code *)((long)&MACH_HEADER.magic + 3U))) &&
         ((pcVar22 == (code *)0x0 && (bVar1 == 0x98)))) {
        return ZEXT816(1);
      }
    }
    else if (((bVar1 & 0xfc) == 0x98) &&
            (((pcVar24 == (code *)&MACH_HEADER.cputype && (pcVar22 == (code *)0x0)) &&
             (bVar1 == 0x98)))) {
      auVar80._8_8_ = pcVar27;
      auVar80._0_8_ = 1;
      return auVar80;
    }
    break;
  case 0x28:
    return *param_1;
  case 0x29:
    goto code_r0x001df84c;
  case 0x2a:
    return *param_1;
  case 0x2b:
    goto code_r0x001df81c;
  case 0x2c:
    return *param_1;
  case 0x2d:
    return *param_1;
  case 0x2e:
    return *param_1;
  case 0x2f:
    return *param_1;
  case 0x30:
    goto code_r0x001df834;
  case 0x31:
    return *param_1;
  case 0x36:
    in_ZR = *(code *)unaff_x20 == (code)0x1;
    pcVar27 = (code *)0x6d6f7250776f6873;
    if (!in_ZR) {
      pcVar27 = (code *)0x635365736f707865;
    }
    pcVar34 = (code *)0x65706f;
  case 0xbe:
    uVar36 = 0xea00000000007470;
    if (!in_ZR) {
      uVar36 = (ulong)pcVar34 | 0xeb00000000000000;
    }
    __sSS4hash4intoys6HasherVz_tF(pcVar25,pcVar27,uVar36);
code_r0x0077b234:
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar36);
    auVar216._8_8_ = pcVar27;
    auVar216._0_8_ = uVar36;
    return auVar216;
  case 0x38:
    uVar23 = *(undefined8 *)pcVar25;
    uVar18 = *(undefined8 *)(pcVar25 + 8);
    FUN_001e471c(uVar23,uVar18);
    *unaff_x19 = SUB81(uVar23,0);
    auVar123._8_8_ = uVar18;
    auVar123._0_8_ = uVar23;
    return auVar123;
  case 0x39:
  case 0x59:
  case 0x8d:
  case 0xa1:
  case 0xc1:
  case 0xe5:
  case 0xf9:
    goto code_r0x001def08;
  case 0x3d:
  case 0x5d:
  case 0x91:
  case 0xa5:
  case 0xe9:
  case 0xfd:
  case 0xfe:
    goto code_r0x001deefc;
  case 0x3e:
  case 0xa6:
  case 0xc6:
    goto code_r0x001def00;
  case 0x40:
  case 0x44:
  case 0x48:
  case 0x4c:
    goto code_r0x001ebd64;
  case 0x42:
    unaff_x20 = (code **)&stack0xffffffffffffffd0;
    _swift_getObjCClassMetadata();
    _objc_allocWithZone();
    pcVar25[_DAT_00af7060] = cVar2;
    pcVar27 = (code *)PTR_s_init_00abbf70;
    _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_00abbf70);
    goto _objc_autoreleaseReturnValue;
  case 0x43:
  case 0xab:
    (*in_x16)();
    UNRECOVERED_JUMPTABLE =
         (code *)((long)&stack0x00000000 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (*(code *)PTR____chkstk_darwin_00999f48)();
    lVar21 = (long)UNRECOVERED_JUMPTABLE - extraout_x12;
    pcVar34 = *(code **)((long)unaff_x20 + _DAT_00af83a0);
    if (pcVar34 == (code *)0x0) {
      lVar37 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar37 + -8) + 0x38))(lVar21,1,1,lVar37);
    }
    else {
      uVar23 = *(undefined8 *)((code *)((long)unaff_x20 + _DAT_00af83a0) + 8);
      _swift_retain(uVar23);
      (*pcVar34)(unaff_x29 + -0x58);
      FUN_0021f05c(pcVar34,uVar23);
      uVar23 = *(undefined8 *)(unaff_x29 + -0x40);
      lVar37 = *(long *)(unaff_x29 + -0x38);
      FUN_0001393c(unaff_x29 + -0x58,uVar23);
      (**(code **)(lVar37 + 8))(lVar21,uVar23,lVar37);
      FUN_00011670(unaff_x29 + -0x58);
    }
    func_0x000addd8(lVar21,UNRECOVERED_JUMPTABLE);
    lVar21 = 0;
    __s10Foundation3URLVMa();
    lVar37 = *(long *)(lVar21 + -8);
    pcVar27 = *(code **)(lVar37 + 0x30);
    pcVar34 = UNRECOVERED_JUMPTABLE;
    (*pcVar27)(UNRECOVERED_JUMPTABLE,1,lVar21);
    if ((int)pcVar34 == 1) {
      (**(code **)(lVar37 + 0x38))();
      uVar23 = 1;
      unaff_x19 = UNRECOVERED_JUMPTABLE;
      (*pcVar27)(UNRECOVERED_JUMPTABLE,1,lVar21);
      if ((int)unaff_x19 != 1) {
        func_0x0002f32c(UNRECOVERED_JUMPTABLE);
        unaff_x19 = UNRECOVERED_JUMPTABLE;
      }
    }
    else {
      (**(code **)(lVar37 + 0x20))();
      uVar23 = 0;
      (**(code **)(lVar37 + 0x38))();
    }
    auVar213._8_8_ = uVar23;
    auVar213._0_8_ = unaff_x19;
    return auVar213;
  case 0x46:
    unaff_x20 = (code **)pcVar25;
    goto _objc_autoreleaseReturnValue;
  case 0x47:
  case 0x4b:
  case 0x4f:
  case 99:
  case 0x97:
  case 0xaf:
  case 0xb3:
  case 0xb7:
  case 0xc9:
  case 0xef:
    return *param_1;
  case 0x4a:
    unaff_x19 = pcVar29;
    unaff_x20 = (code **)pcVar25;
    if (pcVar29 == (code *)0x0) {
      in_stack_00000008 = (code *)0x0;
      in_stack_00000000 = (code *)0x0;
      _objc_retain(pcVar25);
      goto LAB_00204174;
    }
  case 0x4e:
    pcVar25 = (code *)unaff_x20;
    _objc_retain(pcVar25);
    _swift_unknownObjectRetain(unaff_x19);
    __ss018_bridgeAnyObjectToB0yypyXlSgF();
    _swift_unknownObjectRelease(unaff_x19);
LAB_00204174:
    FUN_00204084();
    _objc_release(pcVar25);
    FUN_00027748();
    auVar206._4_4_ = 0;
    auVar206._0_4_ = (uint)register0x00000008 & 1;
    auVar206._8_8_ = pcVar27;
    return auVar206;
  case 0x54:
    lVar21 = *(long *)((long)unaff_x20 + 0x10);
    goto FUN_00059b80;
  case 0x56:
    pcVar27 = (code *)0x6d6f7250776f6873;
    if (!in_ZR) {
      pcVar27 = (code *)((ulong)pcVar34 | 0x6353657300000000);
    }
    pcVar34 = (code *)0xeb0000000065706f;
    UNRECOVERED_JUMPTABLE = (code *)0xea00000000007470;
    goto code_r0x001ebd64;
  case 0x58:
    goto code_r0x001e41c0;
  case 0x60:
    return *param_1;
  case 0x62:
    pcVar27 = *(code **)(pcVar34 + 0xf70);
    _objc_msgSendSuper2();
    unaff_x20 = (code **)register0x00000008;
    goto _objc_autoreleaseReturnValue;
  case 0x68:
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              (pcVar25,0xb,2,0,0xe000000000000000,
               "SnapAttribution/AttributedClientResourcesTaskWrapper.swift",0x3a,2);
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x2069a8);
    (*UNRECOVERED_JUMPTABLE)();
  case 0x6c:
  case 0x7a:
  case 0xd2:
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0x32c,0x1fbff4);
    (*UNRECOVERED_JUMPTABLE)();
  case 0x6d:
  case 0x7b:
  case 0xd3:
    goto code_r0x001fb8c0;
  case 0x6e:
  case 0x7c:
  case 0xd4:
    pcVar34 = pcVar25;
    _objc_allocWithZone();
    pcVar34[_DAT_00af6d38] = (code)0x2;
    UNRECOVERED_JUMPTABLE = pcVar34 + _DAT_00af6d40;
    *(code **)UNRECOVERED_JUMPTABLE = unaff_x19;
    UNRECOVERED_JUMPTABLE[8] = (code)0x0;
    pcVar27 = (code *)PTR_s_init_00abbf70;
    in_stack_00000000 = pcVar34;
    in_stack_00000008 = pcVar25;
    _objc_msgSendSuper2();
    unaff_x20 = (code **)register0x00000008;
    goto _objc_autoreleaseReturnValue;
  case 0x6f:
  case 0x7d:
  case 0xd5:
    _objc_retain();
    in_stack_00000008 = (code *)(unaff_x29 + -0xb0);
    lVar21 = unaff_x29 + -0x30;
    in_stack_00000000 = (code *)0x203b18;
    FUN_001fb7ec(0x203b10,lVar21,0x203b04,unaff_x29 + -0x50,0x203b08,unaff_x29 + -0x70,0x203b0c,
                 unaff_x29 + -0x90);
    _objc_release(pcVar25);
    auVar204._8_8_ = lVar21;
    auVar204._0_8_ = pcVar25;
    return auVar204;
  case 0x70:
  case 0x7e:
  case 0xd6:
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF();
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1f8098);
    (*UNRECOVERED_JUMPTABLE)();
  case 0x71:
  case 0x7f:
    __ss6HasherVABycfC(&stack0x00000008);
    uVar23 = *(undefined8 *)(pcVar25 + _DAT_00af6d00);
    uVar18 = *(undefined8 *)(pcVar25 + _DAT_00af6d00 + 8);
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar23,uVar18);
    uVar20 = uVar23;
    func_0x007843a0();
    _objc_release(uVar23);
    __ss6HasherV8_combineyySuF(uVar20);
    uVar23 = *(undefined8 *)(pcVar25 + _DAT_00af6d08);
    __ss6HasherV8_combineyySuF(uVar23);
    __ss6HasherV8finalizeSiyF();
    _objc_release(pcVar25);
    auVar198._8_8_ = uVar18;
    auVar198._0_8_ = uVar23;
    return auVar198;
  case 0x72:
  case 0x80:
    lVar21 = *(long *)((long)unaff_x20 + 0x10);
FUN_00059b80:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00059b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar38._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar38._0_8_ = lVar21;
    return auVar38;
  case 0x81:
    in_stack_00000008 = (code *)((ulong)in_stack_00000008 & 0xffffffff00000000);
    in_stack_00000000 = (code *)0x5d;
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0,0xe000000000000000,
               "SnapAttribution/AttributedActivationTaskWrapper.swift",0x35,2);
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1f7868);
    (*UNRECOVERED_JUMPTABLE)();
  case 0x82:
    if ((pcVar25 + *(long *)(pcVar34 + 0xd40))[8] != (code)0x1) {
      uVar36 = *(ulong *)(pcVar25 + *(long *)(pcVar34 + 0xd40));
      _objc_release();
      auVar199._8_8_ = 0;
      auVar199._0_8_ = uVar36;
      return auVar199;
    }
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1f7d00);
    (*UNRECOVERED_JUMPTABLE)();
  case 0x83:
    auVar200._8_8_ = pcVar27;
    auVar200._0_8_ = 1;
    return auVar200;
  case 0x84:
    _objc_release();
    goto _objc_autoreleaseReturnValue;
  case 0x85:
    *(code ***)(unaff_x29 + -0x60) = unaff_x20;
    pcVar25 = (code *)(ulong)(byte)*(code *)((long)unaff_x20 + lVar37);
    goto code_r0x001fb8c0;
  case 0x8a:
    uVar32 = uVar26 & 0xff;
    if (uVar32 < 5) {
      if (uVar32 == 2) {
        uVar23 = 0;
LAB_001ebf68:
        __ss6HasherV8_combineyySuF(uVar23);
        auVar165._8_8_ = pcVar27;
        auVar165._0_8_ = uVar23;
        return auVar165;
      }
      if (uVar32 == 3) {
        uVar23 = 1;
        goto LAB_001ebf68;
      }
      if (uVar32 == 4) {
        uVar23 = 3;
        goto LAB_001ebf68;
      }
    }
    else {
      if (uVar32 == 5) {
        uVar23 = 4;
        goto LAB_001ebf68;
      }
      if (uVar32 == 6) {
        uVar23 = 5;
        goto LAB_001ebf68;
      }
      if (uVar32 == 7) {
        uVar23 = 6;
        goto LAB_001ebf68;
      }
    }
    __ss6HasherV8_combineyySuF(2);
    bVar17 = (uVar26 & 0xff) != 1;
    pcVar27 = (code *)0x6d6f7250776f6873;
    if (bVar17) {
      pcVar27 = (code *)0x635365736f707865;
    }
    uVar36 = 0xea00000000007470;
    if (bVar17) {
      uVar36 = 0xeb0000000065706f;
    }
    __sSS4hash4intoys6HasherVz_tF();
    goto code_r0x0077b234;
  case 0x8c:
    in_x12 = (code *)((ulong)in_x12 & 0xffff | 0xee00676e69670000);
    in_x13 = 0x42736569726f7473;
    if (uVar32 != 7) {
      in_x12 = (code *)0x80000000008bbce0;
      in_x13 = lVar21 + 0x1deef7;
    }
    in_ZR = uVar32 == 6;
    goto code_r0x001e41c0;
  case 0x94:
    goto code_r0x001ebe64;
  case 0x96:
    iVar35 = 2;
    if (0xfffeff < uVar26 + 1) {
      iVar35 = 4;
    }
    if (uVar26 + 1 >> 8 < 0xff) {
      iVar35 = 1;
    }
    if (iVar35 == 4) {
      uVar32 = *(uint *)(pcVar25 + 1);
joined_r0x00207c10:
      if (uVar32 != 0) {
LAB_00207c14:
        auVar211._4_4_ = 0;
        auVar211._0_4_ = ((uint)(byte)*pcVar25 | uVar32 << 8) - 1;
        auVar211._8_8_ = pcVar27;
        return auVar211;
      }
    }
    else {
      if (iVar35 != 2) {
        uVar32 = (uint)(byte)pcVar25[1];
        goto joined_r0x00207c10;
      }
      uVar32 = (uint)*(ushort *)(pcVar25 + 1);
      if (*(ushort *)(pcVar25 + 1) != 0) goto LAB_00207c14;
    }
    iVar35 = (byte)*pcVar25 - 2;
    if ((byte)*pcVar25 < 2) {
      iVar35 = -1;
    }
    pcVar25 = (code *)(ulong)(iVar35 + 1);
code_r0x00207c40:
    auVar212._8_8_ = pcVar27;
    auVar212._0_8_ = pcVar25;
    return auVar212;
  case 0x9c:
    return *param_1;
  case 0x9e:
    goto code_r0x001ebe34;
  case 0xa0:
    uVar23 = 0x6f745368637457cc;
    goto LAB_001e40ec;
  case 0xa8:
  case 0xac:
  case 0xb0:
  case 0xb4:
    cVar2 = *(code *)unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(&stack0x00000008);
    in_ZR = cVar2 == (code)0x1;
    pcVar34 = (code *)0x635365736f707865;
    UNRECOVERED_JUMPTABLE = (code *)0x776f6873;
    goto code_r0x001ebe34;
  case 0xaa:
    if (uVar32 < 2) {
      pcVar22 = pcVar29;
      if (uVar32 != 0) {
        pcVar22 = pcVar24;
      }
    }
    else if (uVar32 != 2) {
      pcVar22 = (code *)(ulong)bVar1;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(pcVar22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00203db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pcVar22);
    auVar205._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar205._0_8_ = pcVar22;
    return auVar205;
  case 0xae:
    if (uVar32 != 1) {
      pcVar24 = pcVar29;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(pcVar24 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00207b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar210._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar210._0_8_ = pcVar24;
    return auVar210;
  case 0xb2:
    goto code_r0x00207c40;
  case 0xb6:
    if (uVar26 != 0) {
      *pcVar25 = (code)(cVar3 + 1);
      return auVar208;
    }
    return *param_1;
  case 0xbc:
    FUN_002069f0();
    _objc_release();
    FUN_00027748();
    auVar207._4_4_ = 0;
    auVar207._0_4_ = (uint)register0x00000008 & 1;
    auVar207._8_8_ = pcVar27;
    return auVar207;
  case 0xc0:
    pcVar27 = (code *)(lVar21 + 0x1deef0);
    if (in_ZR || in_NG != in_OV) {
      in_x12 = UNRECOVERED_JUMPTABLE;
      pcVar27 = pcVar34;
    }
    goto LAB_001e4138;
  case 0xc2:
    auVar133._1_7_ = 0;
    auVar133[0] = *pcVar25 == *pcVar27;
    auVar133._8_8_ = pcVar27;
    return auVar133;
  case 0xc5:
    goto code_r0x001deef8;
  case 200:
    unaff_x20 = &pcStack_40;
    _swift_getObjCClassMetadata();
    UNRECOVERED_JUMPTABLE = pcVar25;
    _objc_allocWithZone();
    UNRECOVERED_JUMPTABLE[*(long *)pcVar29] = SUB81(pcVar24,0);
    pcVar27 = (code *)PTR_s_init_00abbf70;
    pcStack_40 = UNRECOVERED_JUMPTABLE;
    pcStack_38 = pcVar25;
    _objc_msgSendSuper2(&pcStack_40,PTR_s_init_00abbf70);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
    auVar215._8_8_ = pcVar27;
    auVar215._0_8_ = unaff_x20;
    return auVar215;
  case 0xca:
    __ss6HasherVABycfC(auStack_68);
    uVar23 = 0;
    __ss6HasherV8_combineyySuF(0);
    __ss6HasherV8finalizeSiyF();
    auVar209._8_8_ = pcVar27;
    auVar209._0_8_ = uVar23;
    return auVar209;
  case 0xd7:
    return *param_1;
  case 0xd8:
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6f90);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6f98);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fa0);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fa8);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fb0);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fb8);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fc0);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fc8);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fd0);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fd8);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fe0);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6fe8);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6ff0);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af6ff8);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af7000);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af7008);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af7010);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af7018);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af7020);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    lVar21 = *(long *)(unaff_x19 + _DAT_00af7028);
    if (lVar21 == 0) {
      __ss6HasherV8_combineyys5UInt8VF();
    }
    else {
      func_0x007843a0();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(lVar21);
    }
    *(undefined8 *)(unaff_x29 + -0x48) = in_stack_00000028;
    *(undefined8 *)(unaff_x29 + -0x50) = in_stack_00000020;
    *(undefined8 *)(unaff_x29 + -0x38) = in_stack_00000038;
    *(undefined8 *)(unaff_x29 + -0x40) = in_stack_00000030;
    *(undefined8 *)(unaff_x29 + -0x30) = in_stack_00000040;
    *(code **)(unaff_x29 + -0x68) = in_stack_00000008;
    *(code **)(unaff_x29 + -0x70) = in_stack_00000000;
    *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000018;
    *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000010;
    __ss6HasherV8finalizeSiyF();
    auVar201._8_8_ = pcVar27;
    auVar201._0_8_ = lVar21;
    return auVar201;
  case 0xd9:
    return *param_1;
  case 0xda:
    if (uVar32 == 0) {
      uVar33 = (uint)(byte)*pcVar25;
      uVar32 = 0;
      if (3 < uVar33 - 7) {
        uVar32 = uVar33 - 0xb;
      }
      uVar26 = 0;
      if (7 < uVar33) {
        uVar26 = uVar32;
      }
      auVar194._4_4_ = 0;
      auVar194._0_4_ = uVar26;
      auVar194._8_8_ = pcVar27;
      return auVar194;
    }
    auVar193._4_4_ = 0;
    auVar193._0_4_ = CONCAT11(bVar4,*pcVar25) - 0xb;
    auVar193._8_8_ = pcVar27;
    return auVar193;
  case 0xdb:
    (*pcVar34)();
    auVar203._8_8_ = pcVar27;
    auVar203._0_8_ = pcVar25;
    return auVar203;
  case 0xe2:
    if (in_CY) {
      iVar35 = 2;
      if (0xfffeff < uVar26 + 1) {
        iVar35 = 4;
      }
      if (uVar26 + 1 >> 8 < 0xff) {
        iVar35 = 1;
      }
      if (iVar35 == 4) {
        uVar32 = *(uint *)(pcVar25 + 1);
      }
      else {
        if (iVar35 == 2) {
          uVar32 = (uint)*(ushort *)(pcVar25 + 1);
          if (*(ushort *)(pcVar25 + 1) == 0) goto LAB_001ec248;
          goto LAB_001ec22c;
        }
        uVar32 = (uint)(byte)pcVar25[1];
      }
      if (uVar32 != 0) {
LAB_001ec22c:
        auVar167._4_4_ = 0;
        auVar167._0_4_ = ((uint)(byte)*pcVar25 | uVar32 << 8) - 1;
        auVar167._8_8_ = pcVar27;
        return auVar167;
      }
    }
LAB_001ec248:
    iVar35 = (byte)*pcVar25 - 2;
    if ((byte)*pcVar25 < 2) {
      iVar35 = -1;
    }
    auVar168._4_4_ = 0;
    auVar168._0_4_ = iVar35 + 1;
    auVar168._8_8_ = pcVar27;
    return auVar168;
  case 0xe4:
    pcVar34 = (code *)0xee00676e69676461;
    uVar23 = 0x42736569726f7473;
LAB_001e40ec:
    *(undefined8 *)(unaff_x21 + 0x30) = uVar23;
    *(code **)(unaff_x21 + 0x38) = pcVar34;
    in_stack_00000008 = unaff_x21;
LAB_001e40f4:
    uVar23 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar18 = uVar23;
    func_0x0002f390();
    in_x12 = (code *)((long)&segment_command_00000020.cmd + 3);
    pcVar27 = (code *)0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar23,uVar18);
    _swift_release();
LAB_001e4138:
    auVar121._8_8_ = pcVar27;
    auVar121._0_8_ = in_x12;
    return auVar121;
  case 0xec:
    puVar19 = &UNK_007e7424;
    puVar28 = &UNK_009ba7f8;
    _swift_getWitnessTable(&UNK_007e7424,&UNK_009ba7f8);
    puRam0000000000af5b20 = puVar19;
    auVar166._8_8_ = puVar28;
    auVar166._0_8_ = puVar19;
    return auVar166;
  case 0xee:
    if (uVar26 < 0xf8) {
      if (uVar32 < 2) {
        if (uVar32 != 0) {
          pcVar25[1] = (code)0x0;
          if (uVar26 == 0) {
            return auVar203;
          }
          goto code_r0x00208c54;
        }
      }
      else if (uVar32 == 2) {
        *(undefined2 *)(pcVar25 + 1) = 0;
      }
      else {
        *(undefined4 *)(pcVar25 + 1) = 0;
      }
      if (uVar26 != 0) {
code_r0x00208c54:
        *pcVar25 = (code)(cVar3 + 8);
        return auVar167;
      }
    }
    else {
      iVar35 = (uVar26 - 0xf8 >> 8) + 1;
      *pcVar25 = SUB41(uVar26 - 0xf8,0);
      if (1 < uVar32) {
        if (uVar32 == 2) {
          *(short *)(pcVar25 + 1) = (short)iVar35;
          return auVar168;
        }
        *(int *)(pcVar25 + 1) = iVar35;
        return auVar193;
      }
      if (uVar32 != 0) {
        pcVar25[1] = SUB41(iVar35,0);
        return auVar166;
      }
    }
    return auVar203;
  case 0xf4:
    __ss6HasherV5_seedABSi_tcfC(&stack0x00000008,0);
    uVar23 = 0;
    __ss6HasherV8_combineyySuF(0);
    __ss6HasherV9_finalizeSiyF();
    auVar208._8_8_ = pcVar27;
    auVar208._0_8_ = uVar23;
    return auVar208;
  case 0xf6:
    pcRam0000000000af5b18 = pcVar25;
    return *param_1;
  case 0xf8:
    bVar17 = (int)unaff_x19 != 1;
    puVar19 = &UNK_007e57cb;
    if (bVar17) {
      puVar19 = (undefined *)0x6163696669746f6e;
    }
    if (bVar17) {
      pcVar34 = (code *)0xec0000006e6f6974;
    }
    *(undefined **)(pcVar25 + 0x30) = puVar19;
    *(code **)(pcVar25 + 0x38) = pcVar34;
    in_stack_00000008 = pcVar25;
    goto LAB_001e40f4;
  }
code_r0x001df940:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = pcVar27;
  return auVar5 << 0x40;
code_r0x001def00:
  in_ZR = ((ulong)pcVar27 & 0xff) == 1;
code_r0x001def08:
  if (in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x001def20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_007e581a + (long)pcVar25 * 2) * 4 + 0x1def24))();
    auVar39._8_8_ = pcVar27;
    auVar39._0_8_ = pcVar25;
    return auVar39;
  }
  if ((uVar32 != 1) && (uVar33 == uVar30)) {
    auVar54._8_8_ = pcVar27;
    auVar54._0_8_ = 1;
    return auVar54;
  }
  goto code_r0x001df940;
code_r0x001fb8c0:
  in_stack_00000008 = *(code **)(unaff_x29 + 0xd0);
  uVar23 = *(undefined8 *)(unaff_x29 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x001fba04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(FUN_001fbfc0 + (long)pcVar25 * 4) + 0x1fb9f8))
            (*(undefined8 *)(unaff_x29 + 0x38),pcVar25,uVar23,*(undefined8 *)(unaff_x29 + 0x10),
             (code *)((long)*(int *)(FUN_001fbfc0 + (long)pcVar25 * 4) + 0x1fb9f8),
             *(undefined8 *)(unaff_x29 + 0x50),*(undefined8 *)(unaff_x29 + 0x30),
             *(undefined8 *)(unaff_x29 + 0x90),*(undefined8 *)(unaff_x29 + 0x70));
  auVar202._8_8_ = uVar23;
  auVar202._0_8_ = pcVar25;
  return auVar202;
code_r0x001ebd64:
  if (!in_ZR) {
    UNRECOVERED_JUMPTABLE = pcVar34;
  }
  __sSS4hash4intoys6HasherVz_tF(&stack0x00000008,pcVar27,UNRECOVERED_JUMPTABLE);
  _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE);
  __ss6HasherV9_finalizeSiyF();
  auVar163._8_8_ = pcVar27;
  auVar163._0_8_ = UNRECOVERED_JUMPTABLE;
  return auVar163;
code_r0x001e41c0:
  uVar36 = (ulong)*(ushort *)(&UNK_007e57cc + (long)pcVar34 * 2);
  if (!in_ZR) {
    UNRECOVERED_JUMPTABLE = in_x12;
    uVar36 = in_x13;
  }
  pcVar34 = (code *)0x80000000008bbd20;
  uVar16 = lVar21 + 0x1deef9;
  if (uVar32 != 4) {
    pcVar34 = (code *)0xec00000073656972;
    uVar16 = 0x6f74536863746566;
  }
  if (uVar32 < 6) {
    UNRECOVERED_JUMPTABLE = pcVar34;
    uVar36 = uVar16;
  }
  auVar122._8_8_ = UNRECOVERED_JUMPTABLE;
  auVar122._0_8_ = uVar36;
  return auVar122;
code_r0x001ebe34:
  pcVar27 = (code *)((ulong)UNRECOVERED_JUMPTABLE | 0x6d6f725000000000);
  if (!in_ZR) {
    pcVar27 = pcVar34;
  }
  unaff_x19 = (code *)0xea00000000007470;
  if (!in_ZR) {
    unaff_x19 = (code *)0xeb0000000065706f;
  }
  __sSS4hash4intoys6HasherVz_tF(&stack0x00000008,pcVar27,unaff_x19);
code_r0x001ebe64:
  _swift_bridgeObjectRelease(unaff_x19);
  __ss6HasherV9_finalizeSiyF();
  auVar164._8_8_ = pcVar27;
  auVar164._0_8_ = unaff_x19;
  return auVar164;
}



/* Entry: 001ded6c; end: 001dede3;  */

undefined1  [16] FUN_001ded6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain();
  uVar1 = param_1;
  FUN_001fc794();
  _objc_release(param_1);
  uVar2 = uVar1;
  uVar3 = param_2;
  FUN_001dca4c(uVar1,param_2,param_3);
  FUN_00089cec(uVar1,param_2,param_3);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 001dede4; end: 001dee67; +[_TtC15SnapAttribution24AttributedTaskObjcHelper getFeatureNameFrom:] */

void FUN_001dede4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_3;
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_001fc794();
  uVar2 = uVar1;
  uVar3 = param_2;
  FUN_001dca4c();
  FUN_00089cec(uVar1,param_2,uVar4);
  _objc_release(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 001dee68; end: 001deea3; -[_TtC15SnapAttribution24AttributedTaskObjcHelper init] */

void FUN_001dee68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_001df948();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 001deea4; end: 001deed3;  */

void FUN_001deea4(void)

{
  FUN_001df948();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 001deed4; end: 001df947;  */

undefined8 *
FUN_001deed4(undefined8 *param_1,ulong param_2,uint param_3,undefined8 *param_4,ulong param_5,
            byte param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *unaff_x19;
  char *unaff_x20;
  
  uVar9 = param_3 >> 2 & 0x3f;
  uVar4 = (uint)param_1;
  uVar7 = (uint)param_4;
  uVar8 = (uint)param_5;
  uVar6 = (uint)param_2;
  switch(uVar9) {
  default:
    if (3 < param_6) {
      return (undefined8 *)0x0;
    }
  case 0x3d:
    uVar9 = uVar8 & 0xff;
  case 0x3e:
    in_ZR = (param_2 & 0xff) == 1;
  case 0x39:
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x001def20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_007e581a + (long)param_1 * 2) * 4 + 0x1def24))();
      return param_1;
    }
    if ((uVar9 != 1) && (uVar4 == uVar7)) {
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    break;
  case 1:
    if ((param_6 & 0xfc) == 4) {
code_r0x001df324:
      return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
    }
    break;
  case 2:
    if ((param_6 & 0xfc) == 8) goto code_r0x001df324;
    break;
  case 3:
    if ((param_6 & 0xfc) == 0xc) {
      uVar9 = uVar7 & 0xff;
      uVar6 = uVar4 & 0xff;
      if (uVar6 < 0xb) {
        if (uVar6 == 9) {
          if (uVar9 != 9) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 10) {
          if (uVar9 != 10) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        if (uVar6 == 0xb) {
          if (uVar9 != 0xb) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 0xc) {
          if (uVar9 != 0xc) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      if ((3 < uVar9 - 9) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 4:
    if ((param_6 & 0xfc) == 0x10) goto code_r0x001df324;
    break;
  case 5:
    if ((param_6 & 0xfc) == 0x14) {
      uVar9 = uVar4 & 0xff;
      uVar6 = uVar7 & 0xff;
      uVar4 = uVar4 >> 5 & 7;
      if (uVar4 < 3) {
        if (uVar4 == 0) {
          if (uVar6 < 0x20) {
            return (undefined8 *)(ulong)(uVar9 == uVar6);
          }
        }
        else if (uVar4 == 1) {
          if ((uVar7 & 0xe0) == 0x20) {
LAB_001e20dc:
            return (undefined8 *)(ulong)(((uVar6 ^ uVar9) & 0x1f) == 0);
          }
        }
        else if ((uVar7 & 0xe0) == 0x40) goto LAB_001e20dc;
      }
      else if (uVar4 < 5) {
        if (uVar4 == 3) {
          if (uVar9 < 100) {
            if (uVar9 < 0x62) {
              if (uVar9 == 0x60) {
                if (uVar6 == 0x60) {
                  return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                }
              }
              else if (uVar6 == 0x61) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar9 == 0x62) {
              if (uVar6 == 0x62) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 99) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 < 0x66) {
            if (uVar9 == 100) {
              if (uVar6 == 100) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x65) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x66) {
            if (uVar6 == 0x66) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x67) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x84) {
          if (uVar9 < 0x82) {
            if (uVar9 == 0x80) {
              if (uVar6 == 0x80) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x81) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x82) {
            if (uVar6 == 0x82) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x83) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x86) {
          if (uVar9 == 0x84) {
            if (uVar6 == 0x84) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x85) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x86) {
          if (uVar6 == 0x86) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x87) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 5) {
        if (uVar9 < 0xa4) {
          if (uVar9 < 0xa2) {
            if (uVar9 == 0xa0) {
              if (uVar6 == 0xa0) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0xa1) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0xa2) {
            if (uVar6 == 0xa2) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0xa3) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0xa6) {
          if (uVar9 == 0xa4) {
            if (uVar6 == 0xa4) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0xa5) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0xa6) {
          if (uVar6 == 0xa6) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0xa7) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 < 0xc2) {
        if (uVar9 == 0xc0) {
          if (uVar6 == 0xc0) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0xc1) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0xc2) {
        if (uVar6 == 0xc2) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0xc3) {
        if (uVar6 == 0xc3) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar6 == 0xc4) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 6:
    if ((param_6 & 0xfc) == 0x18) {
      uVar4 = uVar4 & 0xff;
      uVar9 = uVar7 & 0xff;
      if (uVar4 == 4) {
        if (uVar9 == 4) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 5) {
        if (uVar9 == 5) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((uVar7 & 0xfe) != 4) {
        return (undefined8 *)(ulong)(uVar4 == uVar9);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 7:
    if ((param_6 & 0xfc) == 0x1c) {
      uVar9 = uVar7 & 0xff;
      uVar6 = uVar4 & 0xff;
      if (uVar6 < 5) {
        if (uVar6 == 3) {
          if (uVar9 != 3) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 4) {
          if (uVar9 != 4) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        if (uVar6 == 5) {
          if (uVar9 != 5) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 6) {
          if (uVar9 != 6) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      if ((3 < uVar9 - 3) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 8:
    if ((param_6 & 0xfc) == 0x20) goto code_r0x001df324;
    break;
  case 9:
    if ((param_6 & 0xfc) == 0x24) {
      uVar9 = uVar4 & 0xff;
      uVar6 = uVar7 & 0xff;
      if (uVar9 >> 6 == 0) {
        if ((uVar6 < 0x40) && ((uVar7 & 0x3f) == (uVar4 & 0xff))) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 >> 6 == 1) {
        if (((uVar7 & 0xc0) == 0x40) && (((uVar6 ^ uVar9) & 0x3f) == 0)) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 < 0x82) {
        if (uVar9 == 0x80) {
          if (uVar6 == 0x80) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x81) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0x82) {
        if (uVar6 == 0x82) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar6 == 0x83) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 10:
    if ((param_6 & 0xfc) == 0x28) goto code_r0x001df324;
    break;
  case 0xb:
    if ((param_6 & 0xfc) == 0x2c) {
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          if ((param_5 & 0xff) == 0) {
LAB_001e61b0:
            return (undefined8 *)(ulong)(uVar4 == uVar7);
          }
        }
        else if ((uVar8 & 0xff) == 1) goto LAB_001e61b0;
      }
      else if (uVar6 == 2) {
        if ((uVar8 & 0xff) == 2) {
          return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
        }
      }
      else if (uVar6 == 3) {
        if ((uVar8 & 0xff) == 3) goto LAB_001e61b0;
      }
      else if (((uVar8 & 0xff) == 4) && (param_4 == (undefined8 *)0x0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0xc:
    if ((param_6 & 0xfc) == 0x30) goto code_r0x001df324;
    break;
  case 0xd:
    if ((param_6 & 0xfc) == 0x34) {
      if ((param_2 & 0xff) == 0) {
        if ((param_5 & 0xff) == 0) {
          return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
        }
      }
      else {
        if ((uVar6 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001e7b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)(param_1 + 0xfcd59) * 4 + 0x1e7b48))();
          return param_1;
        }
        if ((uVar8 & 0xff) == 1) {
          return (undefined8 *)(ulong)(uVar4 == uVar7);
        }
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0xe:
    if ((param_6 & 0xfc) == 0x38) {
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          if ((param_5 & 0xff) == 0) {
LAB_001e9570:
            return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
          }
        }
        else if ((uVar8 & 0xff) == 1) goto LAB_001e9570;
      }
      else if (uVar6 == 2) {
        if ((uVar8 & 0xff) == 2) {
          return (undefined8 *)(ulong)(uVar4 == uVar7);
        }
      }
      else {
        if (uVar6 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e9548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)((long)param_1 + 0x7e6d33) * 4 + 0x1e954c))();
          return param_1;
        }
        if ((uVar8 & 0xff) == 3) goto LAB_001e9570;
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0xf:
    if ((param_6 & 0xfc) == 0x3c) {
      uVar9 = uVar4 & 0xff;
      uVar6 = uVar7 & 0xff;
      uVar4 = uVar4 >> 4 & 0xf;
      if (uVar4 < 4) {
        if (uVar4 < 2) {
          if (uVar4 == 0) {
            if (uVar6 < 0x10) {
              return (undefined8 *)(ulong)(uVar9 == uVar6);
            }
          }
          else if ((uVar7 & 0xf0) == 0x10) {
            return (undefined8 *)(ulong)(((uVar6 ^ uVar9) & 0xf) == 0);
          }
        }
        else if (uVar4 == 2) {
          if (uVar9 < 0x22) {
            if (uVar9 == 0x20) {
              if (uVar6 == 0x20) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x21) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x22) {
            if (uVar6 == 0x22) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x23) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x32) {
          if (uVar9 == 0x30) {
            if (uVar6 == 0x30) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x31) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x32) {
          if (uVar6 == 0x32) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x33) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 < 6) {
        if (uVar4 == 4) {
          if (uVar9 < 0x42) {
            if (uVar9 == 0x40) {
              if (uVar6 == 0x40) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x41) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x42) {
            if (uVar6 == 0x42) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x43) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x52) {
          if (uVar9 == 0x50) {
            if (uVar6 == 0x50) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x51) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x52) {
          if (uVar6 == 0x52) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x53) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 6) {
        if (uVar9 < 0x62) {
          if (uVar9 == 0x60) {
            if (uVar6 == 0x60) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x61) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x62) {
          if (uVar6 == 0x62) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 99) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 7) {
        if (uVar9 < 0x72) {
          if (uVar9 == 0x70) {
            if (uVar6 == 0x70) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x71) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x72) {
          if (uVar6 == 0x72) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x73) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0x80) {
        if (uVar6 == 0x80) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0x81) {
        if (uVar6 == 0x81) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar6 == 0x82) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x10:
    if ((param_6 & 0xfc) == 0x40) {
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          if ((param_5 & 0xff) == 0) {
LAB_001ecdc0:
            return (undefined8 *)(ulong)(uVar4 == uVar7);
          }
        }
        else if ((uVar8 & 0xff) == 1) goto LAB_001ecdc0;
      }
      else if (uVar6 == 2) {
        if ((uVar8 & 0xff) == 2) goto LAB_001ecdc0;
      }
      else if (uVar6 == 3) {
        if ((uVar8 & 0xff) == 3) {
          return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
        }
      }
      else {
        uVar8 = uVar8 & 0xff;
        if (param_1 == (undefined8 *)0x0) {
          if ((uVar8 == 4) && (param_4 == (undefined8 *)0x0)) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
          if ((uVar8 == 4) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 1))) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if ((uVar8 == 4) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 2))) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x11:
    if ((param_6 & 0xfc) == 0x44) {
      uVar9 = uVar7 & 0xff;
      uVar6 = uVar4 & 0xff;
      if (uVar6 < 5) {
        if (uVar6 == 2) {
          if (uVar9 != 2) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 3) {
          if (uVar9 != 3) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 4) {
          if (uVar9 != 4) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        if (uVar6 == 5) {
          if (uVar9 != 5) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 6) {
          if (uVar9 != 6) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 7) {
          if (uVar9 != 7) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      if ((5 < uVar9 - 2) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 0x12:
    if ((param_6 & 0xfc) == 0x48) {
      uVar9 = uVar4 & 0xff;
      uVar6 = uVar7 & 0xff;
      uVar4 = uVar4 >> 5 & 7;
      if (uVar4 < 3) {
        if (uVar4 == 0) {
          if (uVar6 < 0x20) {
            return (undefined8 *)(ulong)(uVar9 == uVar6);
          }
        }
        else if (uVar4 == 1) {
          if ((uVar7 & 0xe0) == 0x20) {
LAB_001ee998:
            return (undefined8 *)(ulong)(((uVar6 ^ uVar9) & 0x1f) == 0);
          }
        }
        else if ((uVar7 & 0xe0) == 0x40) goto LAB_001ee998;
      }
      else if (uVar4 < 5) {
        if (uVar4 == 3) {
          if (uVar9 < 0x62) {
            if (uVar9 == 0x60) {
              if (uVar6 == 0x60) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else if (uVar6 == 0x61) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar9 == 0x62) {
            if (uVar6 == 0x62) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 99) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 < 0x82) {
          if (uVar9 == 0x80) {
            if (uVar6 == 0x80) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0x81) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0x82) {
          if (uVar6 == 0x82) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0x83) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar4 == 5) {
        if (uVar9 < 0xa2) {
          if (uVar9 == 0xa0) {
            if (uVar6 == 0xa0) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else if (uVar6 == 0xa1) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar9 == 0xa2) {
          if (uVar6 == 0xa2) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else if (uVar6 == 0xa3) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar9 == 0xc0) {
        if (uVar6 == 0xc0) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if (uVar6 == 0xc1) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x13:
    if ((param_6 & 0xfc) == 0x4c) goto code_r0x001df324;
    break;
  case 0x14:
    if ((param_6 & 0xfc) == 0x50) {
      if ((uVar6 & 0xff) == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          if ((param_5 & 0xff) == 0) {
            return (undefined8 *)(ulong)(uVar4 == uVar7);
          }
        }
        else if ((uVar8 & 0xff) == 1) goto LAB_001f0b7c;
      }
      else {
        if ((uVar6 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x001f0ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)((long)param_1 + 0x7e79c6) * 4 + 0x1f0ba4))();
          return param_1;
        }
        if ((uVar8 & 0xff) == 2) {
LAB_001f0b7c:
          return (undefined8 *)(ulong)(((uVar7 ^ uVar4) & 0xff) == 0);
        }
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x15:
    if ((param_6 & 0xfc) == 0x54) goto code_r0x001df324;
    break;
  case 0x16:
    if ((param_6 & 0xfc) == 0x58) goto code_r0x001df324;
    break;
  case 0x17:
    if ((param_6 & 0xfc) == 0x5c) goto code_r0x001df324;
    break;
  case 0x18:
    if ((param_6 & 0xfc) != 0x60) {
      return (undefined8 *)0x0;
    }
    uVar9 = uVar8 >> 8 & 0xff;
    if ((param_2 & 0xff00) != 0x100) {
      if (uVar9 == 1) {
        return (undefined8 *)0x0;
      }
      if ((param_2 & 0xff) == 1) {
        if ((uVar8 & 0xff) != 1) {
          return (undefined8 *)0x0;
        }
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      if ((uVar8 & 0xff) == 1) {
        return (undefined8 *)0x0;
      }
      if (uVar4 != uVar7) {
        return (undefined8 *)0x0;
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    bVar3 = param_1 < (undefined8 *)((long)&MACH_HEADER.magic + 3);
    uVar2 = (long)(char)param_2 + (ulong)!bVar3;
    if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)bVar3)) {
      if (param_1 == (undefined8 *)0x0 && (param_2 & 0xff) == 0) {
        if (uVar9 != 1) {
          return (undefined8 *)0x0;
        }
        if ((param_5 & 0xff) != 0 || param_4 != (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      if (param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 1) && (param_2 & 0xff) == 0) {
        if (uVar9 != 1) {
          return (undefined8 *)0x0;
        }
        if (param_4 != (undefined8 *)((long)&MACH_HEADER.magic + 1) || (param_5 & 0xff) != 0) {
          return (undefined8 *)0x0;
        }
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      if (uVar9 != 1) {
        return (undefined8 *)0x0;
      }
      if (param_4 != (undefined8 *)((long)&MACH_HEADER.magic + 2) || (param_5 & 0xff) != 0) {
        return (undefined8 *)0x0;
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    bVar3 = param_1 < (undefined8 *)((long)&MACH_HEADER.cputype + 1);
    uVar2 = (long)(char)param_2 + (ulong)!bVar3;
    if ((long)-uVar2 < 0 != SCARRY8(~uVar2,(ulong)bVar3)) {
      in_ZR = uVar9 == 1;
      if (param_1 == (undefined8 *)((long)&MACH_HEADER.cputype + 1) && (param_2 & 0xff) == 0) {
        if (!(bool)in_ZR) {
          return (undefined8 *)0x0;
        }
        if (param_4 != (undefined8 *)((long)&MACH_HEADER.cputype + 1) || (param_5 & 0xff) != 0) {
          return (undefined8 *)0x0;
        }
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      goto code_r0x001df834;
    }
    if (param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 3) && (param_2 & 0xff) == 0) {
      if (uVar9 != 1) {
        return (undefined8 *)0x0;
      }
      if (param_4 != (undefined8 *)((long)&MACH_HEADER.magic + 3) || (param_5 & 0xff) != 0) {
        return (undefined8 *)0x0;
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    if (uVar9 != 1) {
      return (undefined8 *)0x0;
    }
  case 0x2b:
    if ((dword *)param_4 == &MACH_HEADER.cputype && (param_5 & 0xff) == 0) {
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    break;
  case 0x19:
    if ((param_6 & 0xfc) == 100) {
      uVar9 = uVar7 & 0xff;
      uVar6 = uVar4 & 0xff;
      if (uVar6 < 10) {
        if (uVar6 == 8) {
          if (uVar9 != 8) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 9) {
          if (uVar9 != 9) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        if (uVar6 == 10) {
          if (uVar9 != 10) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        if (uVar6 == 0xb) {
          if (uVar9 != 0xb) {
            return (undefined8 *)0x0;
          }
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      if (((uVar7 & 0xfc) != 8) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 0x1a:
    if ((param_6 & 0xfc) == 0x68) {
      uVar9 = uVar7 & 0xff;
      if ((uVar4 & 0xff) == 3) {
        if (uVar9 == 3) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((uVar4 & 0xff) == 4) {
        if (uVar9 == 4) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((1 < uVar9 - 3) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 0x1b:
    if ((param_6 & 0xfc) == 0x6c) {
      if ((param_3 & 3) == 0) {
        if ((param_6 & 3) == 0) {
          return (undefined8 *)(ulong)(uVar4 == uVar7);
        }
      }
      else {
        if ((param_3 & 3) != 1) {
                    /* WARNING: Could not recover jumptable at 0x001f5a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)((long)param_1 + 0x7e89b4) * 4 + 0x1f5a5c))();
          return param_1;
        }
        if ((param_6 & 3) == 1) {
          if ((param_1 == param_4) && (param_2 == param_5)) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
                    /* WARNING: Could not recover jumptable at 0x00778f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_0099b6b8
          )(param_1,param_2,param_4,param_5,0);
          return param_1;
        }
      }
      return (undefined8 *)0x0;
    }
    break;
  case 0x1c:
    if ((param_6 & 0xfc) == 0x70) goto code_r0x001df324;
    break;
  case 0x1d:
    if ((param_6 & 0xfc) == 0x74) goto code_r0x001df324;
    break;
  case 0x1e:
    if ((param_6 & 0xfc) == 0x78) {
      uVar9 = uVar7 & 0xff;
      if ((uVar4 & 0xff) == 6) {
        if (uVar9 == 6) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((uVar4 & 0xff) == 5) {
        if (uVar9 == 5) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else if ((1 < uVar9 - 5) && (((uVar7 ^ uVar4) & 0xff) == 0)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    break;
  case 0x1f:
    if ((param_6 & 0xfc) == 0x7c) goto code_r0x001df324;
    break;
  case 0x20:
    if ((char)param_6 < -0x7c) goto code_r0x001df324;
    break;
  case 0x21:
    if ((param_6 & 0xfc) == 0x84) goto code_r0x001df324;
    break;
  case 0x22:
    if ((param_6 & 0xfc) == 0x88) goto code_r0x001df324;
    break;
  case 0x23:
    if ((param_6 & 0xfc) == 0x8c) goto code_r0x001df324;
    break;
  case 0x24:
    if ((param_6 & 0xfc) == 0x90) goto code_r0x001df324;
  case 0x37:
    break;
  case 0x25:
    if ((param_6 & 0xfc) == 0x94) goto code_r0x001df324;
    break;
  case 0x26:
    if ((param_2 == 0 && param_1 == (undefined8 *)0x0) && ((param_3 & 0xff) == 0x98)) {
      if ((((param_6 & 0xfc) == 0x98) && (param_5 == 0 && param_4 == (undefined8 *)0x0)) &&
         (param_6 == 0x98)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else if ((param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) &&
            ((param_2 == 0 && ((param_3 & 0xff) == 0x98)))) {
      if (((((param_6 & 0xfc) == 0x98) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 1)))
          && (param_5 == 0)) && (param_6 == 0x98)) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else if ((param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 2)) &&
            ((param_2 == 0 && ((param_3 & 0xff) == 0x98)))) {
      if ((((param_6 & 0xfc) == 0x98) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 2)))
         && ((param_5 == 0 && (param_6 == 0x98)))) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else if ((param_1 == (undefined8 *)((long)&MACH_HEADER.magic + 3)) &&
            ((param_2 == 0 && ((param_3 & 0xff) == 0x98)))) {
      if ((((param_6 & 0xfc) == 0x98) && (param_4 == (undefined8 *)((long)&MACH_HEADER.magic + 3)))
         && ((param_5 == 0 && (param_6 == 0x98)))) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else if (((param_6 & 0xfc) == 0x98) &&
            ((((dword *)param_4 == &MACH_HEADER.cputype && (param_5 == 0)) && (param_6 == 0x98)))) {
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    break;
  case 0x28:
    return param_1;
  case 0x29:
    goto code_r0x001df84c;
  case 0x2a:
    return param_1;
  case 0x2c:
    return param_1;
  case 0x2d:
    return param_1;
  case 0x2e:
    return param_1;
  case 0x2f:
    return param_1;
  case 0x30:
code_r0x001df834:
    if (((bool)in_ZR) &&
       ((param_5 & 0xff) != 0 ||
        CARRY8((param_5 & 0xff) - 1,
               (ulong)((undefined8 *)((long)&MACH_HEADER.cputype + 1) < param_4)))) {
      param_1 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
code_r0x001df84c:
      return param_1;
    }
    break;
  case 0x31:
    return param_1;
  case 0x36:
    uVar1 = 0x6d6f7250776f6873;
    if (*unaff_x20 != '\x01') {
      uVar1 = 0x635365736f707865;
    }
    puVar5 = (undefined8 *)0xea00000000007470;
    if (*unaff_x20 != '\x01') {
      puVar5 = (undefined8 *)0xeb0000000065706f;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,puVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(puVar5);
    return puVar5;
  case 0x38:
    puVar5 = (undefined8 *)*param_1;
    FUN_001e471c(puVar5,param_1[1]);
    *unaff_x19 = (char)puVar5;
    return puVar5;
  }
  return (undefined8 *)0x0;
}



/* Entry: 001df948; end: 001df967;  */

void FUN_001df948(void)

{
  _objc_opt_self(&PTR_PTR_00acb400);
  return;
}



/* Entry: 001df968; end: 001df96b;  */

void FUN_001df968(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5878;
  _swift_getWitnessTable(&UNK_007e5878,&UNK_009b8bd0);
  puRam0000000000af4af0 = puVar1;
  return;
}



/* Entry: 001df96c; end: 001df9ab;  */

void FUN_001df96c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5878;
  _swift_getWitnessTable(&UNK_007e5878,&UNK_009b8bd0);
  puRam0000000000af4af0 = puVar1;
  return;
}



/* Entry: 001df9ac; end: 001df9bf;  */

undefined8 * FUN_001df9ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00089a2c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 001df9c0; end: 001dfa5b;  */

undefined8 * FUN_001df9c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00089a2c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 001dfa5c; end: 001dfa9f;  */

undefined8 * FUN_001dfa5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_00089cec(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 001dfaa0; end: 001dfc3f;  */

int FUN_001dfaa0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x19 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x1a;
  }
  uVar1 = (*(byte *)(param_1 + 4) ^ 0xfc) >> 2;
  if (*(byte *)(param_1 + 4) < 0x9c) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 001dfc40; end: 001dfceb;  */

void FUN_001dfc40(void)

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



/* Entry: 001dfcec; end: 001dfcef;  */

void FUN_001dfcec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e58e0;
  _swift_getWitnessTable(&UNK_007e58e0,&UNK_009b8cb8);
  puRam0000000000af4b20 = puVar1;
  return;
}



/* Entry: 001dfcf0; end: 001dfd2f;  */

void FUN_001dfcf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e58e0;
  _swift_getWitnessTable(&UNK_007e58e0,&UNK_009b8cb8);
  puRam0000000000af4b20 = puVar1;
  return;
}



/* Entry: 001dfd30; end: 001dfd3f;  */

undefined8 FUN_001dfd30(void)

{
  return 0;
}



/* Entry: 001dfd40; end: 001dfd63;  */

void FUN_001dfd40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001dfd64();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001dfd64; end: 001dfda3;  */

void FUN_001dfd64(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5908;
  _swift_getWitnessTable(&UNK_007e5908,&UNK_009b8cb8);
  puRam0000000000af4b28 = puVar1;
  return;
}



/* Entry: 001dfda4; end: 001dff07;  */

int FUN_001dfda4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001dfe20;
        goto LAB_001dfe04;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001dfe04:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_001dfe20:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001dff08; end: 001e00eb;  */

undefined1  [16] FUN_001dff08(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 < 5) {
    if (param_1 == 3) {
      auVar8._8_8_ = 0x80000000008bca60;
      auVar8._0_8_ = 0xd000000000000018;
      return auVar8;
    }
    if (param_1 == 4) {
      auVar6._8_8_ = 0xeb00000000796475;
      auVar6._0_8_ = 0x74537972616e6143;
      return auVar6;
    }
  }
  else {
    if (param_1 == 5) {
      auVar9._8_8_ = 0xee00797265766f63;
      auVar9._0_8_ = 0x65526769666e6f43;
      return auVar9;
    }
    if (param_1 == 6) {
      auVar7._8_8_ = 0x80000000008bca00;
      auVar7._0_8_ = 0xd000000000000013;
      return auVar7;
    }
  }
  lVar1 = 0xae6940;
  func_0x000115a8(0xae6940,&UNK_007da060);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar5 = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x28) = 0x80000000008bca20;
  if (param_1 == 0) {
    uVar4 = 0xec000000656d7573;
    uVar5 = 0x65526e4f74696e69;
  }
  else if (param_1 == 1) {
    uVar4 = 0xeb000000006e6967;
    uVar5 = 0x6f4c6e4f74696e69;
  }
  else {
    uVar4 = 0x80000000008bca40;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x38) = uVar4;
  uVar5 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar4 = uVar5;
  func_0x0002f390();
  uVar2 = 0x23;
  uVar3 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar5,uVar4);
  _swift_release(lVar1);
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = uVar2;
  return auVar10;
}



/* Entry: 001e00ec; end: 001e00ff;  */

bool FUN_001e00ec(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001e0100; end: 001e012b;  */

void FUN_001e0100(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001e0618(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001e012c; end: 001e019f;  */

void FUN_001e012c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0x6f4c6e4f74696e69;
  uVar1 = 0xeb000000006e6967;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xd000000000000010;
    uVar1 = 0x80000000008bca40;
  }
  uVar2 = 0xec000000656d7573;
  uVar3 = 0x65526e4f74696e69;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001e01a0; end: 001e05ab;  */

void FUN_001e01a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x6f4c6e4f74696e69;
  uVar1 = 0xeb000000006e6967;
  if (cVar3 != '\x01') {
    uVar5 = 0xd000000000000010;
    uVar1 = 0x80000000008bca40;
  }
  uVar2 = 0xec000000656d7573;
  uVar4 = 0x65526e4f74696e69;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e05ac; end: 001e05cb;  */

undefined8 FUN_001e05ac(void)

{
  return 0;
}



/* Entry: 001e05cc; end: 001e060b;  */

void FUN_001e05cc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001e0394(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e060c; end: 001e0617;  */

bool FUN_001e060c(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  uVar1 = (uint)*param_2;
  if (*param_1 < 5) {
    if (uVar2 == 3) {
      if (uVar1 != 3) {
        return false;
      }
      return true;
    }
    if (uVar2 == 4) {
      if (uVar1 != 4) {
        return false;
      }
      return true;
    }
  }
  else {
    if (uVar2 == 5) {
      if (uVar1 != 5) {
        return false;
      }
      return true;
    }
    if (uVar2 == 6) {
      if (uVar1 != 6) {
        return false;
      }
      return true;
    }
  }
  if (uVar1 - 3 < 4) {
    return false;
  }
  return uVar2 == uVar1;
}



/* Entry: 001e0618; end: 001e067b;  */

ulong FUN_001e0618(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 001e067c; end: 001e070f;  */

bool FUN_001e067c(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_1 < 5) {
    if (param_1 == 3) {
      if (param_2 != 3) {
        return false;
      }
      return true;
    }
    if (param_1 == 4) {
      if (param_2 != 4) {
        return false;
      }
      return true;
    }
  }
  else {
    if (param_1 == 5) {
      if (param_2 != 5) {
        return false;
      }
      return true;
    }
    if (param_1 == 6) {
      if (param_2 != 6) {
        return false;
      }
      return true;
    }
  }
  if (param_2 - 3 < 4) {
    return false;
  }
  return param_1 == param_2;
}



/* Entry: 001e0710; end: 001e074f;  */

void FUN_001e0710(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5990;
  _swift_getWitnessTable(&UNK_007e5990,&UNK_009b8da8);
  puRam0000000000af4b30 = puVar1;
  return;
}



/* Entry: 001e0750; end: 001e0773;  */

void FUN_001e0750(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e0774();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e0774; end: 001e07b3;  */

void FUN_001e0774(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5a4c;
  _swift_getWitnessTable(&UNK_007e5a4c,&UNK_009b8e38);
  puRam0000000000af4b38 = puVar1;
  return;
}



/* Entry: 001e07b4; end: 001e07b7;  */

void FUN_001e07b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5a8c;
  _swift_getWitnessTable(&UNK_007e5a8c,&UNK_009b8e38);
  puRam0000000000af4b40 = puVar1;
  return;
}



/* Entry: 001e07b8; end: 001e07f7;  */

void FUN_001e07b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5a8c;
  _swift_getWitnessTable(&UNK_007e5a8c,&UNK_009b8e38);
  puRam0000000000af4b40 = puVar1;
  return;
}



/* Entry: 001e07f8; end: 001e0ae7;  */

int FUN_001e07f8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e0874;
        goto LAB_001e0858;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e0858:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_001e0874:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e0ae8; end: 001e11f3;  */

void FUN_001e0ae8(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1 & 0xff;
  uVar3 = param_1 >> 5 & 7;
  if (uVar3 < 3) {
    if (uVar3 == 0) {
      lVar5 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000013;
      *(undefined8 *)(lVar5 + 0x28) = 0x80000000008bcfc0;
      pcVar2 = "LockedCameraCapture";
      uVar6 = 0xd000000000000019;
      if (uVar1 != 1) {
        pcVar2 = "invalidateSessionContents";
        uVar6 = 0xd000000000000012;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *(ulong *)(lVar5 + 0x38) = (ulong)pcVar2 | 0x8000000000000000;
    }
    else if (uVar3 == 1) {
      lVar5 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0x6669746f4e63694d;
      *(undefined8 *)(lVar5 + 0x28) = 0xef6e6f6974616369;
      bVar4 = (param_1 & 0x1f) != 1;
      uVar6 = 0xd000000000000010;
      if (bVar4) {
        uVar6 = 0x6573624f6c6c6163;
      }
      uVar7 = 0x80000000008bce20;
      if (bVar4) {
        uVar7 = 0xec00000072657672;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *(undefined8 *)(lVar5 + 0x38) = uVar7;
    }
    else {
      param_1 = param_1 & 0x1f;
      lVar5 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      uVar6 = 0xd000000000000011;
      *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000011;
      *(undefined8 *)(lVar5 + 0x28) = 0x80000000008bcc60;
      if (param_1 < 2) {
        if (param_1 == 0) {
          uVar7 = 0xed000074696e4972;
          uVar6 = 0x65746c69466f6567;
        }
        else {
          uVar7 = 0x80000000008bcca0;
          uVar6 = 0xd000000000000017;
        }
      }
      else if (param_1 == 2) {
        uVar7 = 0x80000000008bcc80;
      }
      else if (param_1 == 3) {
        uVar7 = 0xed00007261657070;
        uVar6 = 0x4164694477656976;
      }
      else {
        uVar7 = 0xee00686374656665;
        uVar6 = 0x725064616f6c7075;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *(undefined8 *)(lVar5 + 0x38) = uVar7;
    }
    uVar7 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar6 = uVar7;
    func_0x0002f390();
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar7,uVar6);
    _swift_release(lVar5);
  }
  else if ((((4 < uVar3) && (uVar3 == 5)) && (0xa3 < uVar1)) && ((0xa5 < uVar1 && (uVar1 != 0xa6))))
  {
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_initStaticObject();
    uVar6 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar7 = uVar6;
    func_0x0002f390();
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar6,uVar7);
  }
  return;
}



/* Entry: 001e11f4; end: 001e123f;  */

void FUN_001e11f4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 001e1240; end: 001e138b;  */

void FUN_001e1240(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xd000000000000019;
  pcVar2 = "LockedCameraCapture";
  if (cVar3 != '\x01') {
    uVar1 = 0xd000000000000012;
    pcVar2 = "invalidateSessionContents";
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e138c; end: 001e13ab;  */

bool FUN_001e138c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001e13ac; end: 001e1423;  */

void FUN_001e13ac(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 001e1424; end: 001e146f;  */

void FUN_001e1424(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0xd000000000000010;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6573624f6c6c6163;
  }
  uVar2 = 0x80000000008bce20;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xec00000072657672;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001e1470; end: 001e1617;  */

void FUN_001e1470(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xd000000000000010;
  if (cVar3 != '\x01') {
    uVar1 = 0x6573624f6c6c6163;
  }
  uVar2 = 0x80000000008bce20;
  if (cVar3 != '\x01') {
    uVar2 = 0xec00000072657672;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e1618; end: 001e16df;  */

void FUN_001e1618(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar1 = 0xed00007261657070;
  uVar4 = 0x4164694477656976;
  if (bVar3 != 3) {
    uVar1 = 0xee00686374656665;
    uVar4 = 0x725064616f6c7075;
  }
  uVar2 = 0x80000000008bcc80;
  uVar5 = 0xd000000000000011;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xed000074696e4972;
  uVar4 = 0x65746c69466f6567;
  if (bVar3 != 0) {
    uVar1 = 0x80000000008bcca0;
    uVar4 = 0xd000000000000017;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001e16e0; end: 001e19cf;  */

void FUN_001e16e0(void)

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
  uVar1 = 0xed00007261657070;
  uVar4 = 0x4164694477656976;
  if (bVar3 != 3) {
    uVar1 = 0xee00686374656665;
    uVar4 = 0x725064616f6c7075;
  }
  uVar2 = 0x80000000008bcc80;
  uVar5 = 0xd000000000000011;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xed000074696e4972;
  uVar4 = 0x65746c69466f6567;
  if (bVar3 != 0) {
    uVar1 = 0x80000000008bcca0;
    uVar4 = 0xd000000000000017;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e19d0; end: 001e19d7;  */

undefined8 FUN_001e19d0(void)

{
  return 1;
}



/* Entry: 001e19d8; end: 001e1a43;  */

void FUN_001e19d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 001e1a44; end: 001e1a63;  */

void FUN_001e1a44(undefined8 *param_1)

{
  *param_1 = 0xd000000000000012;
  param_1[1] = 0x80000000008bcc40;
  return;
}



/* Entry: 001e1a64; end: 001e1ab7;  */

void FUN_001e1a64(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000012,0x80000000008bcc40);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e1ab8; end: 001e1ad3;  */

void FUN_001e1ab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)
            (param_1,0xd000000000000012,0x80000000008bcc40);
  return;
}



/* Entry: 001e1ad4; end: 001e1f83;  */

void FUN_001e1ad4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000012,0x80000000008bcc40);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e1f84; end: 001e1f8b;  */

void FUN_001e1f84(void)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  bVar3 = bVar2 >> 5;
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      lVar5 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000013;
      *(undefined8 *)(lVar5 + 0x28) = 0x80000000008bcfc0;
      pcVar1 = "LockedCameraCapture";
      uVar6 = 0xd000000000000019;
      if (bVar2 != 1) {
        pcVar1 = "invalidateSessionContents";
        uVar6 = 0xd000000000000012;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *(ulong *)(lVar5 + 0x38) = (ulong)pcVar1 | 0x8000000000000000;
    }
    else if (bVar3 == 1) {
      lVar5 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0x6669746f4e63694d;
      *(undefined8 *)(lVar5 + 0x28) = 0xef6e6f6974616369;
      bVar4 = (bVar2 & 0x1f) != 1;
      uVar6 = 0xd000000000000010;
      if (bVar4) {
        uVar6 = 0x6573624f6c6c6163;
      }
      uVar7 = 0x80000000008bce20;
      if (bVar4) {
        uVar7 = 0xec00000072657672;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *(undefined8 *)(lVar5 + 0x38) = uVar7;
    }
    else {
      bVar3 = bVar2 & 0x1f;
      lVar5 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      uVar6 = 0xd000000000000011;
      *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000011;
      *(undefined8 *)(lVar5 + 0x28) = 0x80000000008bcc60;
      if (bVar3 < 2) {
        if ((bVar2 & 0x1f) == 0) {
          uVar7 = 0xed000074696e4972;
          uVar6 = 0x65746c69466f6567;
        }
        else {
          uVar7 = 0x80000000008bcca0;
          uVar6 = 0xd000000000000017;
        }
      }
      else if (bVar3 == 2) {
        uVar7 = 0x80000000008bcc80;
      }
      else if (bVar3 == 3) {
        uVar7 = 0xed00007261657070;
        uVar6 = 0x4164694477656976;
      }
      else {
        uVar7 = 0xee00686374656665;
        uVar6 = 0x725064616f6c7075;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *(undefined8 *)(lVar5 + 0x38) = uVar7;
    }
    uVar7 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar6 = uVar7;
    func_0x0002f390();
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar7,uVar6);
    _swift_release(lVar5);
  }
  else if ((((4 < bVar3) && (bVar3 == 5)) && (0xa3 < bVar2)) && ((0xa5 < bVar2 && (bVar2 != 0xa6))))
  {
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_initStaticObject();
    uVar6 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar7 = uVar6;
    func_0x0002f390();
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar6,uVar7);
  }
  return;
}



/* Entry: 001e1f8c; end: 001e1fcf;  */

void FUN_001e1f8c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x001e1b24(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e1fd0; end: 001e1fd7;  */

void FUN_001e1fd0(undefined8 param_1)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  bVar5 = bVar4 >> 5;
  if (bVar5 < 3) {
    if (bVar5 == 0) {
      __ss6HasherV8_combineyySuF(5);
      uVar6 = 0xd000000000000019;
      pcVar2 = "LockedCameraCapture";
      if (bVar4 != 1) {
        uVar6 = 0xd000000000000012;
        pcVar2 = "invalidateSessionContents";
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,(ulong)pcVar2 | 0x8000000000000000);
      uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    }
    else {
      bVar1 = bVar4 & 0x1f;
      if (bVar5 == 1) {
        __ss6HasherV8_combineyySuF(0xc);
        uVar8 = 0xd000000000000010;
        if (bVar1 != 1) {
          uVar8 = 0x6573624f6c6c6163;
        }
        uVar7 = 0x80000000008bce20;
        if (bVar1 != 1) {
          uVar7 = 0xec00000072657672;
        }
      }
      else {
        __ss6HasherV8_combineyySuF(0x19);
        uVar3 = 0xed00007261657070;
        uVar6 = 0x4164694477656976;
        if (bVar1 != 3) {
          uVar3 = 0xee00686374656665;
          uVar6 = 0x725064616f6c7075;
        }
        uVar7 = 0x80000000008bcc80;
        uVar8 = 0xd000000000000011;
        if (bVar1 != 2) {
          uVar7 = uVar3;
          uVar8 = uVar6;
        }
        uVar3 = 0xed000074696e4972;
        uVar6 = 0x65746c69466f6567;
        if ((bVar4 & 0x1f) != 0) {
          uVar3 = 0x80000000008bcca0;
          uVar6 = 0xd000000000000017;
        }
        if (bVar1 < 2) {
          uVar8 = uVar6;
          uVar7 = uVar3;
        }
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,uVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar7);
    return;
  }
  if (bVar5 < 5) {
    if (bVar5 == 3) {
      if (bVar4 < 100) {
        if (bVar4 < 0x62) {
          if (bVar4 == 0x60) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
        }
        else if (bVar4 == 0x62) {
          uVar6 = 2;
        }
        else {
          uVar6 = 3;
        }
      }
      else if (bVar4 < 0x66) {
        if (bVar4 == 100) {
          uVar6 = 4;
        }
        else {
          uVar6 = 6;
        }
      }
      else if (bVar4 == 0x66) {
        uVar6 = 7;
      }
      else {
        uVar6 = 8;
      }
    }
    else if (bVar4 < 0x84) {
      if (bVar4 < 0x82) {
        if (bVar4 == 0x80) {
          uVar6 = 9;
        }
        else {
          uVar6 = 10;
        }
      }
      else if (bVar4 == 0x82) {
        uVar6 = 0xb;
      }
      else {
        uVar6 = 0xd;
      }
    }
    else if (bVar4 < 0x86) {
      if (bVar4 == 0x84) {
        uVar6 = 0xe;
      }
      else {
        uVar6 = 0xf;
      }
    }
    else if (bVar4 == 0x86) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x11;
    }
  }
  else if (bVar5 == 5) {
    if (bVar4 < 0xa4) {
      if (bVar4 < 0xa2) {
        if (bVar4 == 0xa0) {
          uVar6 = 0x12;
        }
        else {
          uVar6 = 0x13;
        }
      }
      else if (bVar4 == 0xa2) {
        uVar6 = 0x14;
      }
      else {
        uVar6 = 0x15;
      }
    }
    else if (bVar4 < 0xa6) {
      if (bVar4 == 0xa4) {
        uVar6 = 0x16;
      }
      else {
        uVar6 = 0x17;
      }
    }
    else {
      if (bVar4 != 0xa6) {
        __ss6HasherV8_combineyySuF(0x1a);
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)
                  (param_1,0xd000000000000012,0x80000000008bcc40);
        return;
      }
      uVar6 = 0x18;
    }
  }
  else if (bVar4 < 0xc2) {
    if (bVar4 == 0xc0) {
      uVar6 = 0x1b;
    }
    else {
      uVar6 = 0x1c;
    }
  }
  else if (bVar4 == 0xc2) {
    uVar6 = 0x1d;
  }
  else if (bVar4 == 0xc3) {
    uVar6 = 0x1e;
  }
  else {
    uVar6 = 0x1f;
  }
  __ss6HasherV8_combineyySuF(uVar6);
  return;
}



/* Entry: 001e1fd8; end: 001e2017;  */

void FUN_001e1fd8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001e1b24(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e2018; end: 001e233b;  */

bool FUN_001e2018(byte *param_1,byte *param_2)

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
LAB_001e20dc:
        return ((bVar1 ^ bVar2) & 0x1f) == 0;
      }
    }
    else if ((bVar1 & 0xe0) == 0x40) goto LAB_001e20dc;
  }
  else if (bVar3 < 5) {
    if (bVar3 == 3) {
      if (bVar2 < 100) {
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
      else if (bVar2 < 0x66) {
        if (bVar2 == 100) {
          if (bVar1 == 100) {
            return true;
          }
        }
        else if (bVar1 == 0x65) {
          return true;
        }
      }
      else if (bVar2 == 0x66) {
        if (bVar1 == 0x66) {
          return true;
        }
      }
      else if (bVar1 == 0x67) {
        return true;
      }
    }
    else if (bVar2 < 0x84) {
      if (bVar2 < 0x82) {
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
    else if (bVar2 < 0x86) {
      if (bVar2 == 0x84) {
        if (bVar1 == 0x84) {
          return true;
        }
      }
      else if (bVar1 == 0x85) {
        return true;
      }
    }
    else if (bVar2 == 0x86) {
      if (bVar1 == 0x86) {
        return true;
      }
    }
    else if (bVar1 == 0x87) {
      return true;
    }
  }
  else if (bVar3 == 5) {
    if (bVar2 < 0xa4) {
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
    else if (bVar2 < 0xa6) {
      if (bVar2 == 0xa4) {
        if (bVar1 == 0xa4) {
          return true;
        }
      }
      else if (bVar1 == 0xa5) {
        return true;
      }
    }
    else if (bVar2 == 0xa6) {
      if (bVar1 == 0xa6) {
        return true;
      }
    }
    else if (bVar1 == 0xa7) {
      return true;
    }
  }
  else if (bVar2 < 0xc2) {
    if (bVar2 == 0xc0) {
      if (bVar1 == 0xc0) {
        return true;
      }
    }
    else if (bVar1 == 0xc1) {
      return true;
    }
  }
  else if (bVar2 == 0xc2) {
    if (bVar1 == 0xc2) {
      return true;
    }
  }
  else if (bVar2 == 0xc3) {
    if (bVar1 == 0xc3) {
      return true;
    }
  }
  else if (bVar1 == 0xc4) {
    return true;
  }
  return false;
}



/* Entry: 001e233c; end: 001e239f;  */

ulong FUN_001e233c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 001e23a0; end: 001e23a3;  */

void FUN_001e23a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5b10;
  _swift_getWitnessTable(&UNK_007e5b10,&UNK_009b8f48);
  puRam0000000000af4d40 = puVar1;
  return;
}



/* Entry: 001e23a4; end: 001e23e3;  */

void FUN_001e23a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5b10;
  _swift_getWitnessTable(&UNK_007e5b10,&UNK_009b8f48);
  puRam0000000000af4d40 = puVar1;
  return;
}



/* Entry: 001e23e4; end: 001e23e7;  */

void FUN_001e23e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5bb0;
  _swift_getWitnessTable(&UNK_007e5bb0,&UNK_009b8fd8);
  puRam0000000000af4d48 = puVar1;
  return;
}



/* Entry: 001e23e8; end: 001e2427;  */

void FUN_001e23e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5bb0;
  _swift_getWitnessTable(&UNK_007e5bb0,&UNK_009b8fd8);
  puRam0000000000af4d48 = puVar1;
  return;
}



/* Entry: 001e2428; end: 001e242b;  */

void FUN_001e2428(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5c50;
  _swift_getWitnessTable(&UNK_007e5c50,&UNK_009b9068);
  puRam0000000000af4d50 = puVar1;
  return;
}



/* Entry: 001e242c; end: 001e246b;  */

void FUN_001e242c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5c50;
  _swift_getWitnessTable(&UNK_007e5c50,&UNK_009b9068);
  puRam0000000000af4d50 = puVar1;
  return;
}



/* Entry: 001e246c; end: 001e246f;  */

void FUN_001e246c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5cf0;
  _swift_getWitnessTable(&UNK_007e5cf0,&UNK_009b90f8);
  puRam0000000000af4d58 = puVar1;
  return;
}



/* Entry: 001e2470; end: 001e24af;  */

void FUN_001e2470(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5cf0;
  _swift_getWitnessTable(&UNK_007e5cf0,&UNK_009b90f8);
  puRam0000000000af4d58 = puVar1;
  return;
}



/* Entry: 001e24b0; end: 001e24d3;  */

void FUN_001e24b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e24d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e24d4; end: 001e2513;  */

void FUN_001e24d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5dac;
  _swift_getWitnessTable(&UNK_007e5dac,&UNK_009b9188);
  puRam0000000000af4d60 = puVar1;
  return;
}



/* Entry: 001e2514; end: 001e2517;  */

void FUN_001e2514(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5dec;
  _swift_getWitnessTable(&UNK_007e5dec,&UNK_009b9188);
  puRam0000000000af4d68 = puVar1;
  return;
}



/* Entry: 001e2518; end: 001e2557;  */

void FUN_001e2518(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5dec;
  _swift_getWitnessTable(&UNK_007e5dec,&UNK_009b9188);
  puRam0000000000af4d68 = puVar1;
  return;
}



/* Entry: 001e2558; end: 001e2b17;  */

void FUN_001e2558(void)

{
  return;
}



/* Entry: 001e2b18; end: 001e2ccb;  */

void FUN_001e2b18(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  
  lVar1 = 0xae6940;
  func_0x000115a8(0xae6940,&UNK_007da060);
  if ((param_1 == 4) || (param_1 == 5)) {
    _swift_initStaticObject();
    uVar3 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar2 = uVar3;
    func_0x0002f390();
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar3,uVar2);
    return;
  }
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0x79726574746142;
  *(undefined8 *)(lVar1 + 0x28) = 0xe700000000000000;
  if (param_1 < 2) {
    if (param_1 == 0) {
      uVar4 = 0x80000000008bd090;
      uVar3 = 0xd000000000000010;
      goto LAB_001e2c5c;
    }
    pcVar5 = "backgroundExecution";
  }
  else {
    if (param_1 == 2) {
      uVar4 = 0xea00000000007469;
      uVar3 = 0x6e49726567676f6c;
      goto LAB_001e2c5c;
    }
    pcVar5 = "loggerDebugViewInit";
  }
  uVar3 = 0xd000000000000013;
  uVar4 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
LAB_001e2c5c:
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  *(ulong *)(lVar1 + 0x38) = uVar4;
  uVar3 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar2 = uVar3;
  func_0x0002f390();
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar3,uVar2);
  _swift_release(lVar1);
  return;
}



/* Entry: 001e2ccc; end: 001e2cdf;  */

bool FUN_001e2ccc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}


