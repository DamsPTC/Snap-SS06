/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048af89c; end: 1048af8db;  */

void FUN_1048af89c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41900;
  _swift_getWitnessTable(&UNK_10dd41900,&UNK_1107b19a8);
  puRam000000011309a988 = puVar1;
  return;
}



/* Entry: 1048af8dc; end: 1048afb8f;  */

int FUN_1048af8dc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048af958;
        goto LAB_1048af93c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048af93c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048af958:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048afb90; end: 1048afc3b;  */

void FUN_1048afb90(void)

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



/* Entry: 1048afc3c; end: 1048afc93;  */

undefined8 FUN_1048afc3c(void)

{
  undefined8 uVar1;
  byte *unaff_x20;
  
  if ((1 << (ulong)(*unaff_x20 & 0x1f) & 0x1a5U) != 0) {
    return 0;
  }
  uVar1 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  func_0x000100c8a830();
  return uVar1;
}



/* Entry: 1048afc94; end: 1048afc9f;  */

undefined1  [16] FUN_1048afc94(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  bVar4 = *unaff_x20;
  if (bVar4 < 4) {
    uVar1 = 0xd000000000000018;
    pcVar5 = "TalkCallCameraServices";
    if (bVar4 != 2) {
      uVar1 = 0xd000000000000016;
      pcVar5 = "TalkCallKitCallManager";
    }
    pcVar6 = "CallCameraController";
    uVar7 = 0xd000000000000019;
    if (bVar4 != 0) {
      pcVar6 = "TalkSoundServiceProvider";
      uVar7 = 0xd000000000000014;
    }
    if (bVar4 < 2) {
      pcVar5 = pcVar6;
      uVar1 = uVar7;
    }
    auVar9._8_8_ = (ulong)pcVar5 | 0x8000000000000000;
    auVar9._0_8_ = uVar1;
    return auVar9;
  }
  pcVar5 = "TalkContactsAlert";
  uVar1 = 0xd000000000000017;
  if (bVar4 != 7) {
    pcVar5 = "ConvoSafetyPrompt";
    uVar1 = 0xd000000000000011;
  }
  pcVar6 = "TalkActiveConversations";
  uVar7 = 0xd000000000000013;
  if (bVar4 != 6) {
    pcVar6 = pcVar5;
    uVar7 = uVar1;
  }
  uVar2 = 0x800000010f215950;
  uVar1 = 0xd000000000000016;
  if (bVar4 != 4) {
    uVar2 = 0xeb00000000676f4c;
    uVar1 = 0x6c6c61436b6c6154;
  }
  uVar3 = (ulong)pcVar6 | 0x8000000000000000;
  if (bVar4 < 6) {
    uVar3 = uVar2;
    uVar7 = uVar1;
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 1048afca0; end: 1048afcdf;  */

void FUN_1048afca0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41978;
  _swift_getWitnessTable(&UNK_10dd41978,&UNK_1107b1a98);
  puRam000000011309a990 = puVar1;
  return;
}



/* Entry: 1048afce0; end: 1048afd03;  */

void FUN_1048afce0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048afd04();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048afd04; end: 1048afd43;  */

void FUN_1048afd04(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd419a0;
  _swift_getWitnessTable(&UNK_10dd419a0,&UNK_1107b1a98);
  puRam000000011309a998 = puVar1;
  return;
}



/* Entry: 1048afd44; end: 1048afea7;  */

int FUN_1048afd44(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048afdc0;
        goto LAB_1048afda4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048afda4:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_1048afdc0:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048afea8; end: 1048b0047;  */

undefined1  [16] FUN_1048afea8(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_1 == 6) {
    pcVar6 = "DelayedEntryPoint";
  }
  else {
    if (param_1 != 5) {
      lVar1 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      _swift_allocObject();
      *(undefined8 *)(lVar1 + 0x18) = 4;
      *(undefined8 *)(lVar1 + 0x10) = 2;
      *(undefined8 *)(lVar1 + 0x20) = 0x534a;
      *(undefined8 *)(lVar1 + 0x28) = 0xe200000000000000;
      if (param_1 < 2) {
        uVar7 = 0xd00000000000001a;
        if (param_1 == 0) {
          pcVar6 = "exposeUserJobProviderScope";
        }
        else {
          pcVar6 = "registerSystemJobProviders";
        }
        uVar5 = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
      }
      else if (param_1 == 2) {
        uVar5 = 0x800000010f215e10;
        uVar7 = 0xd000000000000023;
      }
      else if (param_1 == 3) {
        uVar5 = 0xea00000000007362;
        uVar7 = 0x6f4a74696d627573;
      }
      else {
        uVar5 = 0x800000010f215df0;
        uVar7 = 0xd000000000000015;
      }
      *(undefined8 *)(lVar1 + 0x30) = uVar7;
      *(ulong *)(lVar1 + 0x38) = uVar5;
      uVar7 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar2 = uVar7;
      func_0x00010011d734();
      uVar3 = 0x23;
      uVar4 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar7,uVar2);
      _swift_release(lVar1);
      auVar9._8_8_ = uVar4;
      auVar9._0_8_ = uVar3;
      return auVar9;
    }
    pcVar6 = "BackgroundCleanUp";
  }
  auVar8._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
  auVar8._0_8_ = 0xd000000000000011;
  return auVar8;
}



/* Entry: 1048b0048; end: 1048b005b;  */

bool FUN_1048b0048(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048b005c; end: 1048b0087;  */

void FUN_1048b005c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1048b069c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048b0088; end: 1048b013b;  */

void FUN_1048b0088(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0xea00000000007362;
  uVar6 = 0x6f4a74696d627573;
  if (bVar4 != 3) {
    uVar1 = 0x800000010f215df0;
    uVar6 = 0xd000000000000015;
  }
  uVar3 = 0x800000010f215e10;
  uVar2 = 0xd000000000000023;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar2 = uVar6;
  }
  pcVar5 = "registerSystemJobProviders";
  if (bVar4 != 0) {
    pcVar5 = "ticatedJobProviders";
  }
  if (bVar4 < 2) {
    uVar2 = 0xd00000000000001a;
    uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1048b013c; end: 1048b062f;  */

void FUN_1048b013c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xea00000000007362;
  uVar6 = 0x6f4a74696d627573;
  if (bVar4 != 3) {
    uVar1 = 0x800000010f215df0;
    uVar6 = 0xd000000000000015;
  }
  uVar3 = 0x800000010f215e10;
  uVar2 = 0xd000000000000023;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar2 = uVar6;
  }
  pcVar5 = "registerSystemJobProviders";
  if (bVar4 != 0) {
    pcVar5 = "ticatedJobProviders";
  }
  if (bVar4 < 2) {
    uVar2 = 0xd00000000000001a;
    uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048b0630; end: 1048b064f;  */

undefined8 FUN_1048b0630(void)

{
  return 0;
}



/* Entry: 1048b0650; end: 1048b068f;  */

void FUN_1048b0650(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x0001048b03f0(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048b0690; end: 1048b069b;  */

bool FUN_1048b0690(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = (uint)*param_2;
  if (bVar1 == 6) {
    if (uVar2 == 6) {
      return true;
    }
  }
  else if (bVar1 == 5) {
    if (uVar2 == 5) {
      return true;
    }
  }
  else if (1 < uVar2 - 5) {
    return bVar1 == uVar2;
  }
  return false;
}



/* Entry: 1048b069c; end: 1048b06ff;  */

ulong FUN_1048b069c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1048b0700; end: 1048b075b;  */

bool FUN_1048b0700(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_1 == 6) {
    if (param_2 == 6) {
      return true;
    }
  }
  else if (param_1 == 5) {
    if (param_2 == 5) {
      return true;
    }
  }
  else if (1 < param_2 - 5) {
    return param_1 == param_2;
  }
  return false;
}



/* Entry: 1048b075c; end: 1048b079b;  */

void FUN_1048b075c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41a20;
  _swift_getWitnessTable(&UNK_10dd41a20,&UNK_1107b1b88);
  puRam000000011309a9d0 = puVar1;
  return;
}



/* Entry: 1048b079c; end: 1048b07bf;  */

void FUN_1048b079c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048b07c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048b07c0; end: 1048b07ff;  */

void FUN_1048b07c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41adc;
  _swift_getWitnessTable(&UNK_10dd41adc,&UNK_1107b1c18);
  puRam000000011309a9d8 = puVar1;
  return;
}



/* Entry: 1048b0800; end: 1048b0803;  */

void FUN_1048b0800(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41b1c;
  _swift_getWitnessTable(&UNK_10dd41b1c,&UNK_1107b1c18);
  puRam000000011309a9e0 = puVar1;
  return;
}



/* Entry: 1048b0804; end: 1048b0843;  */

void FUN_1048b0804(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41b1c;
  _swift_getWitnessTable(&UNK_10dd41b1c,&UNK_1107b1c18);
  puRam000000011309a9e0 = puVar1;
  return;
}



/* Entry: 1048b0844; end: 1048b0b33;  */

int FUN_1048b0844(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048b08c0;
        goto LAB_1048b08a4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048b08a4:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048b08c0:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048b0b34; end: 1048b0b4b; -[SCAttributedFeature jiraProject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048b0b34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11309aa90);
}



/* Entry: 1048b0b4c; end: 1048b0c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b0b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309aa88);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11309aa90) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048b0c24; end: 1048b0dab; -[SCAttributedFeature hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048b0c24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309aa88);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309aa88))[1];
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309aa90);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1048b0dac; end: 1048b0e2b; -[SCAttributedFeature isEqual:] */

uint FUN_1048b0dac(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001048b0ccc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048b0e2c; end: 1048b0e2f; -[SCAttributedFeature copyWithZone:] */

void FUN_1048b0e2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048b0e30; end: 1048b0e4b; -[SCAttributedFeature description] */

void FUN_1048b0e30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b0e4c; end: 1048b0ee7; -[SCAttributedFeature init] */

void FUN_1048b0e4c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedFeatureWrapper.swift",0x2e,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048b0e94);
  (*pcVar1)();
}



/* Entry: 1048b0ee8; end: 1048b0eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b0ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309aa88);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11309aa90) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048b0ef0; end: 1048b0fc3;  */

void FUN_1048b0ef0(void)

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



/* Entry: 1048b0fc4; end: 1048b0fe3;  */

void FUN_1048b0fc4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048b0fe4; end: 1048b1007; -[SCAttributedActivationTask description] */

void FUN_1048b0fe4(void)

{
  _objc_retain();
  func_0x0001009323c0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1008; end: 1048b104f; -[SCAttributedActivationTask init] */

void FUN_1048b1008(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedActivationTaskWrapper.swift",0x35,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048b1050);
  (*pcVar1)();
}



/* Entry: 1048b1050; end: 1048b1053; -[SCAttributedActivationTask copyWithZone:] */

void FUN_1048b1050(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048b1054; end: 1048b105b; +[SCAttributedActivationTask changeLanguageInSettingsPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1054(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b105c; end: 1048b1063; +[SCAttributedActivationTask badgeRanker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b105c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1064; end: 1048b106b; +[SCAttributedActivationTask billboardCampaignDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1064(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b106c; end: 1048b1073; +[SCAttributedActivationTask accountLinking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b106c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1074; end: 1048b107b; +[SCAttributedActivationTask declaredAge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1074(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 7;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b107c; end: 1048b1083; +[SCAttributedActivationTask osPermissionRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b107c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 8;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1084; end: 1048b11ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1084(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                  undefined4 param_22,undefined4 param_23,code *param_24,undefined4 param_25,
                  undefined4 param_26,code *param_27,undefined4 param_28,undefined4 param_29,
                  code *param_30,undefined8 param_31)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_11309aac0)) {
  case 0:
    (*param_1)();
    break;
  case 1:
    (*param_3)();
    break;
  case 2:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11309aac8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048b11ac);
      (*pcVar1)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11309aac8));
    break;
  case 3:
    (*param_7)();
    break;
  case 4:
    (*param_9)();
    break;
  case 5:
    (*param_12)();
    break;
  case 6:
    (*param_15)();
    break;
  case 7:
    (*param_18)();
    break;
  case 8:
    (*param_21)();
    break;
  case 9:
    (*param_24)();
    break;
  case 10:
    (*param_27)();
    break;
  case 0xb:
    (*param_30)(param_31);
  }
  return;
}



/* Entry: 1048b11ac; end: 1048b12cb; -[SCAttributedActivationTask matchChangeLanguageInSettingsPrompt:inAppRatingPrompt:inAppTakeOver:badgeRanker:billboardCampaignDataProvider:accountLinking:userActivityInfoProvider:declaredAge:osPermissionRequest:atlasTimeZoneSyncer:authenticationSessionAuthenticatedServices:loginSessionInfoUpdate:] */

void FUN_1048b11ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1048b1084(FUN_1048b1620,auStack_40,0x1048b1630,auStack_60,0x1048b1628,auStack_80,0x1048b1634,
                auStack_a0,0x1048b1638,auStack_c0,0x1048b163c,auStack_e0,0x1048b1640,auStack_100,
                0x1048b1644,auStack_120,0x1048b1648,auStack_140,0x1048b164c,auStack_160,0x1048b1650,
                auStack_180,0x1048b1654,auStack_1a0);
  _objc_release(param_1);
  return;
}



/* Entry: 1048b12cc; end: 1048b12ff;  */

void FUN_1048b12cc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048b1300; end: 1048b130f;  */

ulong FUN_1048b1300(ulong param_1)

{
  if (0xb < param_1) {
    param_1 = 0xc;
  }
  return param_1;
}



/* Entry: 1048b1310; end: 1048b1457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1310(long param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_f0 [32];
  long lStack_d0;
  long lStack_c8;
  
  lVar2 = param_1;
  FUN_1048b1458();
  lVar3 = lVar2;
  _objc_allocWithZone();
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001048b1368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dd41bb0)[param_1] * 4 + 0x1048b136c))(auStack_f0);
    return;
  }
  *(undefined1 *)(lVar3 + _DAT_11309aac0) = 2;
  plVar1 = (long *)(lVar3 + _DAT_11309aac8);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  lStack_d0 = lVar3;
  lStack_c8 = lVar2;
  _objc_msgSendSuper2(&lStack_d0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048b1458; end: 1048b1477;  */

void FUN_1048b1458(void)

{
  _objc_opt_self(&PTR_PTR_1129dfb00);
  return;
}



/* Entry: 1048b1478; end: 1048b15df;  */

int FUN_1048b1478(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048b14f4;
        goto LAB_1048b14d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048b14d8:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_1048b14f4:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048b15e0; end: 1048b161f;  */

void FUN_1048b15e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309aaf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41c00;
  _swift_getWitnessTable(&UNK_10dd41c00,&UNK_1107b1d08);
  puRam000000011309aaf8 = puVar1;
  return;
}



/* Entry: 1048b1620; end: 1048b1657;  */

void FUN_1048b1620(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1048b1658; end: 1048b172b;  */

void FUN_1048b1658(void)

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



/* Entry: 1048b172c; end: 1048b174b;  */

void FUN_1048b172c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048b174c; end: 1048b1767; -[SCAttributedActivityCenterTask description] */

void FUN_1048b174c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1768; end: 1048b17af; -[SCAttributedActivityCenterTask init] */

void FUN_1048b1768(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedActivityCenterTaskWrapper.swift",0x39,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048b17b0);
  (*pcVar1)();
}



/* Entry: 1048b17b0; end: 1048b17b3; -[SCAttributedActivityCenterTask copyWithZone:] */

void FUN_1048b17b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048b17b4; end: 1048b17bb; +[SCAttributedActivityCenterTask countDownPagePresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b17b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309ab00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b17bc; end: 1048b17c3; +[SCAttributedActivityCenterTask warmupBillboardReporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b17bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309ab00) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b17c4; end: 1048b17cb; +[SCAttributedActivityCenterTask activityCenterFHPCampaigns] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b17c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309ab00) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b17cc; end: 1048b17d3; +[SCAttributedActivityCenterTask activityCenterFHPCampaignsOnFriendsFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b17cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309ab00) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b17d4; end: 1048b1823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b17d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309ab00) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1824; end: 1048b185f; -[SCAttributedActivityCenterTask matchCountDownPagePresent:warmupBillboardReporter:activityCenterFHPCampaigns:activityCenterFHPCampaignsOnFriendsFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1824(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309ab00);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048b185c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 1048b1860; end: 1048b1893;  */

void FUN_1048b1860(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048b1894; end: 1048b18a3;  */

ulong FUN_1048b1894(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1048b18a4; end: 1048b191f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b18a4(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_60 [8];
  
  uVar4 = param_1;
  FUN_1048b1920();
  uVar5 = uVar4;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar3 = auStack_60 + 4;
  if (uVar1 != 2) {
    puVar3 = auStack_60 + 6;
  }
  puVar2 = auStack_60;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_60 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  *(char *)(uVar5 + _DAT_11309ab00) = (char)param_1;
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048b1920; end: 1048b193f;  */

void FUN_1048b1920(void)

{
  _objc_opt_self(&PTR_PTR_1129dfbc8);
  return;
}



/* Entry: 1048b1940; end: 1048b1aa7;  */

int FUN_1048b1940(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048b19bc;
        goto LAB_1048b19a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048b19a0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1048b19bc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048b1aa8; end: 1048b1ae7;  */

void FUN_1048b1aa8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309ab30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41cf4;
  _swift_getWitnessTable(&UNK_10dd41cf4,&UNK_1107b1df0);
  puRam000000011309ab30 = puVar1;
  return;
}



/* Entry: 1048b1ae8; end: 1048b1b87;  */

void FUN_1048b1ae8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048b1b88; end: 1048b1bab;  */

void FUN_1048b1b88(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1048b1bac; end: 1048b1bc7; -[SCAttributedActivityFeedTask description] */

void FUN_1048b1bac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1bc8; end: 1048b1c0f; -[SCAttributedActivityFeedTask init] */

void FUN_1048b1bc8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedActivityFeedTaskWrapper.swift",0x37,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048b1c10);
  (*pcVar1)();
}



/* Entry: 1048b1c10; end: 1048b1c13; -[SCAttributedActivityFeedTask copyWithZone:] */

void FUN_1048b1c10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048b1c14; end: 1048b1c53; +[SCAttributedActivityFeedTask activityFeedOnCameraTierLoadingTask] */

void FUN_1048b1c14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1c54; end: 1048b1c5f; -[SCAttributedActivityFeedTask matchActivityFeedOnCameraTierLoadingTask:] */

void FUN_1048b1c54(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001048b1c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048b1c60; end: 1048b1cb3;  */

void FUN_1048b1c60(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048b1cb4; end: 1048b1da3;  */

uint FUN_1048b1cb4(uint *param_1,int param_2)

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



/* Entry: 1048b1da4; end: 1048b1de3;  */

void FUN_1048b1da4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309ab68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41de4;
  _swift_getWitnessTable(&UNK_10dd41de4,&UNK_1107b1ed8);
  puRam000000011309ab68 = puVar1;
  return;
}



/* Entry: 1048b1de4; end: 1048b1eb7;  */

void FUN_1048b1de4(void)

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



/* Entry: 1048b1eb8; end: 1048b1ed7;  */

void FUN_1048b1eb8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048b1ed8; end: 1048b1ef3; -[SCAttributedAdClientTask description] */

void FUN_1048b1ed8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1ef4; end: 1048b1f3b; -[SCAttributedAdClientTask init] */

void FUN_1048b1ef4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedAdClientTaskWrapper.swift",0x33,2,0x60,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048b1f3c);
  (*pcVar1)();
}



/* Entry: 1048b1f3c; end: 1048b1f3f; -[SCAttributedAdClientTask copyWithZone:] */

void FUN_1048b1f3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048b1f40; end: 1048b1f47; +[SCAttributedAdClientTask appImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1f48; end: 1048b1f4f; +[SCAttributedAdClientTask shakeToReportLogProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1f50; end: 1048b1f57; +[SCAttributedAdClientTask adProtoImpressionBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1f58; end: 1048b1f5f; +[SCAttributedAdClientTask ui] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f58(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1f60; end: 1048b1f6f; +[SCAttributedAdClientTask adServeRequestDeviceInfoPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1f70; end: 1048b1f7f; +[SCAttributedAdClientTask adServeResponseHandling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1f80; end: 1048b1f87; +[SCAttributedAdClientTask cachedUserAdIdPrewarm] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1f88; end: 1048b1f8f; +[SCAttributedAdClientTask prewarmAdsCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1f90; end: 1048b1f97; +[SCAttributedAdClientTask adAssert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f90(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 0xb;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1f98; end: 1048b1f9f; +[SCAttributedAdClientTask attachmentPreload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048b1f98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 0xc;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048b1fa0; end: 1048b20c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1048b1fa0(code *****param_1,byte *param_2,code *param_3,undefined8 param_4,code *****param_5,
             code *****param_6,code *****param_7,undefined8 param_8,code *param_9,
             undefined8 *param_10,code *param_11,undefined8 *param_12,code *param_13,
             undefined8 param_14,code *****param_15,undefined8 param_16,code *param_17,
             code *****param_18,code *****param_19,code *****param_20,code *param_21,
             code *****param_22,code *****param_23,code *****param_24,code *param_25,
             code *****param_26,code *****param_27)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  code *****pppppcVar7;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  code *****pppppcVar8;
  code ****ppppcVar9;
  code *****pppppcVar10;
  uint uVar11;
  code ***UNRECOVERED_JUMPTABLE;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  code *****pppppcVar17;
  code *****pppppcVar18;
  code *****pppppcVar19;
  code *****pppppcVar20;
  code *****pppppcVar21;
  code *****pppppcVar22;
  undefined **ppuVar23;
  code *****pppppcVar24;
  code *****pppppcVar25;
  long unaff_x20;
  code *****pppppcVar26;
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
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000d0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  code ***apppcStack_c0 [2];
  code *pcStack_b0;
  code ****ppppcStack_90;
  code ****ppppcStack_88;
  code ****ppppcStack_70;
  code ****ppppcStack_68;
  uint uVar5;
  uint uVar6;
  
  pppppcVar7 = &ppppcStack_70;
  pppppcVar17 = &ppppcStack_70;
  pppppcVar18 = &ppppcStack_70;
  pppppcVar19 = &ppppcStack_70;
  iVar4 = (int)&ppppcStack_70;
  uVar5 = (uint)&ppppcStack_70;
  iVar15 = (int)&ppppcStack_70;
  uVar6 = (uint)&ppppcStack_70;
  uVar14 = (uint)&ppppcStack_70;
  ppuVar23 = (undefined **)&ppppcStack_70;
  pppppcVar10 = &ppppcStack_70;
  bVar1 = (&UNK_10dd41e90)[*(byte *)((long)_DAT_11309ab70 + unaff_x20)];
  pppppcVar8 = param_1;
  pppppcVar22 = param_24;
  pppppcVar21 = param_24;
  pppppcVar20 = param_24;
  pppppcVar24 = param_22;
  pppppcVar25 = param_18;
  pppppcVar26 = param_26;
  ppppcStack_68 = (code ****)param_7;
  switch(*(byte *)((long)_DAT_11309ab70 + unaff_x20)) {
  default:
  case 0x70:
  case 0x7e:
  case 0xb6:
  case 0xf6:
    (*(code *)param_1)();
code_r0x0001048b2018:
    break;
  case 1:
    (*param_3)();
    break;
  case 2:
  case 0x14:
  case 0xd9:
    (*(code *)param_5)();
code_r0x0001048b2050:
    break;
  case 3:
  case 0x65:
  case 0x85:
  case 0x8d:
  case 0xbd:
  case 0xfd:
  case 0x13:
    (*(code *)param_7)();
code_r0x0001048b2060:
    break;
  case 4:
  case 0x19:
    (*param_9)();
  case 0x16:
    break;
  case 5:
    (*param_11)();
    break;
  case 6:
    (*param_13)();
    break;
  case 7:
  case 0x15:
    (*(code *)param_15)();
code_r0x0001048b206c:
    break;
  case 8:
    (*param_17)();
    break;
  case 9:
  case 0x10:
    (*(code *)param_19)();
    break;
  case 10:
    (*param_21)();
    break;
  case 0xb:
  case 0x6e:
  case 0x96:
  case 0x98:
  case 0xce:
  case 0x11:
  case 0xd0:
    (*(code *)param_23)();
code_r0x0001048b2024:
    break;
  case 0xc:
    (*param_25)();
  case 0xf:
    break;
  case 0xd:
    goto code_r0x0001048b206c;
  case 0x12:
  case 0xc5:
    goto code_r0x0001048b2050;
  case 0x17:
  case 0x8c:
    goto code_r0x0001048b2060;
  case 0x18:
  case 99:
  case 0x77:
  case 0x8b:
  case 0x9f:
  case 0xa7:
  case 0xaf:
  case 0xc3:
  case 0xd7:
  case 0xdf:
  case 0xe7:
  case 0xef:
    goto code_r0x0001048b2018;
  case 0x20:
  case 0x2a:
  case 0x40:
  case 0x4a:
    goto code_r0x0001048b2114;
  case 0x21:
  case 0x22:
  case 0x27:
  case 0x31:
  case 0x41:
  case 0x42:
  case 0x47:
  case 0x51:
  case 0x59:
  case 0xbc:
  case 0xe0:
    goto code_r0x0001048b21e0;
  case 0x23:
  case 0x43:
    goto code_r0x0001048b21d8;
  case 0x24:
  case 0x2e:
  case 0x44:
  case 0x4e:
    goto code_r0x0001048b21b4;
  case 0x25:
  case 0x37:
  case 0x45:
  case 0x58:
    goto code_r0x0001048b2198;
  case 0x26:
  case 0x46:
  case 0x57:
    goto code_r0x0001048b21e4;
  case 0x28:
  case 0x2f:
  case 0x48:
  case 0x4f:
  case 0x5c:
    goto code_r0x0001048b21a4;
  case 0x29:
  case 0x2b:
  case 0x49:
  case 0x4b:
    goto code_r0x0001048b21a0;
  case 0x2c:
  case 0x4c:
    goto code_r0x0001048b211c;
  case 0x2d:
  case 0x4d:
    goto code_r0x0001048b21c0;
  case 0x30:
  case 0x50:
    goto code_r0x0001048b21c8;
  case 0x32:
  case 0x52:
    goto code_r0x0001048b2160;
  case 0x33:
  case 0x53:
    goto code_r0x0001048b2194;
  case 0x34:
  case 0x54:
    goto code_r0x0001048b21dc;
  case 0x35:
  case 0x55:
    goto code_r0x0001048b21bc;
  case 0x36:
    goto code_r0x0001048b214c;
  case 0x38:
    goto code_r0x0001048b21b8;
  case 0x39:
    goto code_r0x0001048b219c;
  case 0x56:
    goto code_r0x0001048b215c;
  case 0x5a:
    goto code_r0x0001048b21f4;
  case 0x5b:
    goto code_r0x0001048b21d0;
  case 0x60:
    goto code_r0x0001048b2394;
  case 0x62:
  case 0x76:
  case 0x8a:
  case 0x9e:
  case 0xa6:
  case 0xae:
  case 0xc2:
  case 0xd6:
  case 0xde:
  case 0xe6:
  case 0xee:
code_r0x0001048b22ac:
    pppppcVar22 = (code *****)&stack0xffffffffffffffa0;
    goto code_r0x0001048b22e8;
  case 100:
    goto code_r0x0001048b2100;
  case 0x66:
  case 0x8e:
  case 0xa2:
  case 0xc6:
    goto code_r0x0001048b22c8;
  case 0x74:
code_r0x0001048b2364:
    auVar31._8_8_ = param_2;
    auVar31._0_8_ = param_1;
    return auVar31;
  case 0x78:
    goto code_r0x0001048b2300;
  case 0x79:
  case 0xa9:
  case 0xb1:
    goto code_r0x0001048b240c;
  case 0x7a:
  case 0xaa:
  case 0xb2:
  case 0xe2:
  case 0xea:
  case 0xf2:
    goto code_r0x0001048b22e8;
  case 0x7b:
  case 0xab:
  case 0xb3:
  case 0xe3:
  case 0xeb:
  case 0xf3:
    goto code_r0x0001048b23e8;
  case 0x84:
    break;
  case 0x86:
  case 0xbe:
  case 0xfe:
    uVar13 = (uint)&ppppcStack_70;
    uVar11 = (uint)param_2;
    pppppcVar22 = &ppppcStack_70;
    pppppcVar21 = &ppppcStack_70;
    pppppcVar20 = &ppppcStack_70;
    pppppcVar24 = _DAT_11309ab70;
    pppppcVar8 = param_23;
    uVar16 = (uint)&ppppcStack_70;
    uVar2 = (uint)&ppppcStack_70;
    switch((ulong)param_23 & 0xff) {
    case 0:
      break;
    default:
      pppppcVar17 = (code *****)&stack0xffffffffffffffa0;
    case 99:
    case 0x71:
    case 0xa9:
    case 0xe9:
      pppppcVar22 = pppppcVar17;
      break;
    case 2:
      pppppcVar22 = (code *****)&stack0xffffffffffffffb0;
      break;
    case 3:
      pppppcVar22 = (code *****)&stack0xffffffffffffffc0;
      break;
    case 4:
    case 0xc3:
      pppppcVar19 = (code *****)&stack0xffffffffffffffd0;
    case 0x7a:
    case 0xb2:
    case 0xf2:
      pppppcVar22 = pppppcVar19;
      break;
    case 5:
    case 0xb8:
      pppppcVar21 = (code *****)&stack0xffffffffffffffe0;
    case 0x58:
    case 0x78:
    case 0x80:
    case 0xb0:
    case 0xf0:
code_r0x0001048b22d0:
      pppppcVar22 = pppppcVar21;
      break;
    case 6:
      goto code_r0x0001048b22d4;
    case 7:
      pppppcVar20 = (code *****)register0x00000008;
    case 0xcc:
code_r0x0001048b22c8:
      pppppcVar22 = pppppcVar20;
      break;
    case 8:
      pppppcVar22 = &ppppcStack_70;
      break;
    case 9:
      goto code_r0x0001048b22ac;
    case 10:
    case 0x7f:
      pppppcVar22 = (code *****)&stack0xffffffffffffffb0;
      goto code_r0x0001048b22e0;
    case 0xb:
    case 0x56:
    case 0x6a:
    case 0x7e:
    case 0x92:
    case 0x9a:
    case 0xa2:
    case 0xb6:
    case 0xca:
    case 0xd2:
    case 0xda:
    case 0xe2:
      pppppcVar18 = (code *****)&stack0xffffffffffffffc0;
    case 0x61:
    case 0x89:
    case 0x8b:
    case 0xc1:
      pppppcVar22 = pppppcVar18;
      break;
    case 0xc:
      goto code_r0x0001048b22a4;
    case 0x13:
    case 0x1d:
    case 0x33:
    case 0x3d:
    case 0xf3:
    case 0xfd:
      goto code_r0x0001048b2390;
    case 0x14:
    case 0x15:
    case 0x1a:
    case 0x24:
    case 0x34:
    case 0x35:
    case 0x3a:
    case 0x44:
    case 0x4c:
    case 0xaf:
    case 0xd3:
    case 0xf4:
    case 0xf5:
    case 0xfa:
      *(char *)param_1 = (char)param_2;
    case 0x19:
    case 0x39:
    case 0x4a:
    case 0xf9:
      auVar41._8_8_ = param_2;
      auVar41._0_8_ = param_1;
      return auVar41;
    case 0x16:
    case 0x36:
    case 0xf6:
      auVar39._8_8_ = param_2;
      auVar39._0_8_ = param_1;
      return auVar39;
    case 0x18:
    case 0x2a:
    case 0x38:
    case 0x4b:
    case 0xf8:
      goto code_r0x0001048b2414;
    case 0x1b:
    case 0x22:
    case 0x3b:
    case 0x42:
    case 0x4f:
    case 0xfb:
      goto code_r0x0001048b2420;
    case 0x1c:
    case 0x1e:
    case 0x3c:
    case 0x3e:
    case 0xfc:
      goto code_r0x0001048b241c;
    case 0x1f:
    case 0x3f:
      goto code_r0x0001048b2398;
    case 0x20:
    case 0x40:
      goto code_r0x0001048b243c;
    case 0x23:
    case 0x43:
      goto code_r0x0001048b2444;
    case 0x25:
    case 0x45:
      goto code_r0x0001048b23dc;
    case 0x26:
    case 0x46:
      goto code_r0x0001048b2410;
    case 0x27:
    case 0x47:
      auVar40._8_8_ = param_2;
      auVar40._0_8_ = param_1;
      return auVar40;
    case 0x28:
    case 0x48:
      goto code_r0x0001048b2438;
    case 0x29:
      uVar14 = 0;
      if (in_CY) {
        uVar14 = uVar13;
      }
      if (0xf3 < uVar11) goto code_r0x0001048b23ec;
      in_OV = SBORROW4(uVar14,1);
      in_NG = (int)(uVar14 - 1) < 0;
      in_ZR = uVar14 == 1;
      uVar2 = uVar14;
    case 0x49:
      uVar6 = uVar2;
      uVar16 = uVar6;
      if ((bool)in_ZR || in_NG != in_OV) {
code_r0x0001048b23dc:
        if (uVar6 == 0) goto code_r0x0001048b241c;
        *(undefined1 *)((long)param_1 + 1) = 0;
        if (uVar11 == 0) {
code_r0x0001048b23e8:
          goto code_r0x0001048b2444;
        }
      }
      else {
code_r0x0001048b2410:
        in_ZR = uVar16 == 2;
code_r0x0001048b2414:
        if ((bool)in_ZR) {
code_r0x0001048b2418:
          *(undefined2 *)((long)param_1 + 1) = 0;
code_r0x0001048b241c:
        }
        else {
code_r0x0001048b243c:
          *(undefined4 *)((long)param_1 + 1) = 0;
        }
        if (uVar11 == 0) {
code_r0x0001048b2444:
          auVar37._8_8_ = param_2;
          auVar37._0_8_ = param_1;
          return auVar37;
        }
      }
code_r0x0001048b2420:
      *(char *)param_1 = (char)param_2 + '\f';
code_r0x0001048b2428:
      auVar35._8_8_ = param_2;
      auVar35._0_8_ = param_1;
      return auVar35;
    case 0x2b:
      goto code_r0x0001048b2434;
    case 0x2c:
      goto code_r0x0001048b2418;
    case 0x4d:
      goto code_r0x0001048b2470;
    case 0x4e:
    case 0xfe:
    case 0xff:
      goto code_r0x0001048b244c;
    case 0x53:
      goto code_r0x0001048b2610;
    case 0x55:
    case 0x69:
    case 0x7d:
    case 0x91:
    case 0x99:
    case 0xa1:
    case 0xb5:
    case 0xc9:
    case 0xd1:
    case 0xd9:
    case 0xe1:
      goto code_r0x0001048b2528;
    case 0x57:
      goto code_r0x0001048b237c;
    case 0x59:
    case 0x81:
    case 0x95:
    case 0xb9:
      param_1 = (code *****)(ulong)*(byte *)param_26;
    case 0xdb:
      __ss6HasherV8_combineyySuF(param_1);
code_r0x0001048b2550:
      auVar44._8_8_ = param_2;
      auVar44._0_8_ = param_1;
      return auVar44;
    case 0x67:
      pppppcVar10 = (code *****)0x0;
      puVar12 = (undefined *)0xe000000000000000;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
      goto _objc_autoreleaseReturnValue;
    case 0x6b:
      goto code_r0x0001048b257c;
    case 0x6c:
    case 0x9c:
    case 0xa4:
      goto code_r0x0001048b2688;
    case 0x6d:
    case 0x9d:
    case 0xa5:
    case 0xd5:
    case 0xdd:
    case 0xe5:
      goto code_r0x0001048b2564;
    case 0x6e:
    case 0x9e:
    case 0xa6:
    case 0xd6:
    case 0xde:
    case 0xe6:
      _swift_getObjCClassMetadata();
      pppppcVar24 = param_1;
      _objc_allocWithZone();
      *(char *)((long)pppppcVar24 + _DAT_11309aba8) = (char)param_3;
      ppppcStack_70 = (code ****)pppppcVar24;
      ppppcStack_68 = (code ****)param_1;
    case 0xd4:
    case 0xdc:
    case 0xe4:
      ppuVar23 = &PTR_s_info_1125d9000;
code_r0x0001048b2688:
      puVar12 = ppuVar23[0x49];
      _objc_msgSendSuper2(&ppppcStack_70,puVar12);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      auVar49._8_8_ = puVar12;
      auVar49._0_8_ = pppppcVar10;
      return auVar49;
    case 0x77:
      goto code_r0x0001048b233c;
    case 0x79:
    case 0xb1:
    case 0xf1:
      ppppcVar9 = param_26[2];
      UNRECOVERED_JUMPTABLE = ppppcVar9[2];
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)();
      auVar27._8_8_ = UNRECOVERED_JUMPTABLE;
      auVar27._0_8_ = ppppcVar9;
      return auVar27;
    case 0x7b:
      auVar46._8_8_ = param_2;
      auVar46._0_8_ = param_1;
      return auVar46;
    case 0x8f:
    case 0x97:
    case 0x9f:
      goto code_r0x0001048b2580;
    case 0x93:
      goto code_r0x0001048b2428;
    case 0x94:
      param_1 = (code *****)&UNK_1107b1fc0;
    case 0xa3:
      param_2 = (byte *)0x0;
code_r0x0001048b2470:
      auVar42._8_8_ = param_2;
      auVar42._0_8_ = param_1;
      return auVar42;
    case 0x9b:
code_r0x0001048b23ec:
      pppppcVar24 = (code *****)(ulong)((uVar11 - 0xf4 >> 8) + 1);
      *(char *)param_1 = (char)(uVar11 - 0xf4);
      if ((int)uVar14 < 2) {
        if (uVar14 == 0) goto code_r0x0001048b2444;
        goto code_r0x0001048b2408;
      }
      in_ZR = uVar14 == 2;
    case 0x17:
    case 0x21:
    case 0x37:
    case 0x41:
    case 0xf7:
      if (!(bool)in_ZR) {
        *(int *)((long)param_1 + 1) = (int)pppppcVar24;
code_r0x0001048b244c:
        auVar38._8_8_ = param_2;
        auVar38._0_8_ = param_1;
        return auVar38;
      }
code_r0x0001048b2434:
      *(short *)((long)param_1 + 1) = (short)pppppcVar24;
code_r0x0001048b2438:
      auVar36._8_8_ = param_2;
      auVar36._0_8_ = param_1;
      return auVar36;
    case 0xb3:
      goto code_r0x0001048b2550;
    case 0xb7:
      ppppcStack_68 = (code ****)((ulong)param_7 & 0xffffffff00000000);
      ppppcStack_70 = (code ****)0x29;
code_r0x0001048b2610:
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0,0xe000000000000000,
                 "SnapAttribution/AttributedAppClipTaskWrapper.swift",0x32,2);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1048b2640);
      (*pcVar3)();
    case 199:
    case 0xcf:
    case 0xd7:
    case 0xdf:
      __ss6HasherV9_finalizeSiyF();
code_r0x0001048b2528:
      auVar43._8_8_ = param_2;
      auVar43._0_8_ = param_1;
      return auVar43;
    case 0xcb:
      param_1 = (code *****)(ulong)(uVar13 + 1);
      goto code_r0x0001048b2364;
    case 0xcd:
      auVar47._8_8_ = param_2;
      auVar47._0_8_ = param_1;
      return auVar47;
    case 0xe3:
      auVar48._1_7_ = 0;
      auVar48[0] = uVar13 == *param_2;
      auVar48._8_8_ = param_2;
      return auVar48;
    case 0xef:
      pppppcVar7 = (code *****)auStack_e0;
      ppppcStack_90 = (code ****)param_26;
      ppppcStack_88 = (code ****)param_23;
code_r0x0001048b2564:
      *(undefined1 **)((long)pppppcVar7 + 0x60) = &stack0xfffffffffffffff0;
      *(ulong *)((long)pppppcVar7 + 0x68) = (ulong)bVar1 * 4 + 0x1048b2010;
      bVar1 = *(byte *)param_26;
      __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)pppppcVar7 + 8));
      pppppcVar8 = (code *****)(ulong)bVar1;
code_r0x0001048b257c:
      param_1 = pppppcVar8;
code_r0x0001048b2580:
      __ss6HasherV8_combineyySuF(param_1);
      __ss6HasherV9_finalizeSiyF();
      auVar45._8_8_ = param_2;
      auVar45._0_8_ = param_1;
      return auVar45;
    }
    goto code_r0x0001048b22e8;
  case 0x87:
  case 0xbf:
  case 0xff:
    goto code_r0x0001048b2024;
  case 0x88:
    in_CY = 0xfe < ((uint)((ulong)param_24 >> 8) & 0xffffff);
    pppppcVar24 = param_22;
code_r0x0001048b233c:
    uVar14 = (uint)pppppcVar24;
    if (!in_CY) {
      uVar14 = 1;
    }
    param_24 = (code *****)(ulong)uVar14;
    in_ZR = uVar14 == 4;
  case 0xda:
    if ((bool)in_ZR) {
      uVar14 = *(uint *)((long)param_1 + 1);
joined_r0x0001048b236c:
      if (uVar14 != 0) {
LAB_1048b2370:
        iVar4 = ((uint)*(byte *)param_1 | uVar14 << 8) - 0xd;
code_r0x0001048b237c:
        param_1 = (code *****)(ulong)(iVar4 + 1);
code_r0x0001048b2380:
        auVar32._8_8_ = param_2;
        auVar32._0_8_ = param_1;
        return auVar32;
      }
    }
    else {
      if ((int)param_24 != 2) {
        uVar14 = (uint)*(byte *)((long)param_1 + 1);
        goto joined_r0x0001048b236c;
      }
code_r0x0001048b2350:
      uVar14 = (uint)*(ushort *)((long)param_1 + 1);
      if (*(ushort *)((long)param_1 + 1) != 0) goto LAB_1048b2370;
    }
    uVar5 = (uint)*(byte *)param_1;
code_r0x0001048b2390:
    in_CY = 0xc < uVar5;
    param_24 = (code *****)(ulong)(uVar5 - 0xd);
code_r0x0001048b2394:
    iVar15 = (int)param_24;
    if (!in_CY) {
      iVar15 = -1;
    }
code_r0x0001048b2398:
    auVar33._4_4_ = 0;
    auVar33._0_4_ = iVar15 + 1;
    auVar33._8_8_ = param_2;
    return auVar33;
  case 0x9c:
  case 0xa4:
  case 0xac:
    goto code_r0x0001048b2304;
  case 0xa0:
    goto code_r0x0001048b21ac;
  case 0xa1:
    goto code_r0x0001048b21e8;
  case 0xa8:
    goto code_r0x0001048b2170;
  case 0xb0:
    goto code_r0x0001048b21f0;
  case 0xc0:
code_r0x0001048b22d4:
    pppppcVar22 = (code *****)&stack0xfffffffffffffff0;
    goto code_r0x0001048b22e8;
  case 0xc4:
    goto code_r0x0001048b2380;
  case 0xd4:
  case 0xdc:
  case 0xe4:
  case 0xec:
code_r0x0001048b22a4:
    pppppcVar22 = (code *****)&stack0xffffffffffffffd0;
    goto code_r0x0001048b22e8;
  case 0xd8:
    pcStack_b0 = param_25;
    uStack_d0 = param_8;
    ppppcStack_90 = (code ****)param_6;
    ppppcStack_70 = (code ****)param_5;
code_r0x0001048b2100:
    in_stack_000000d0 = param_14;
    in_stack_000000b0 = param_16;
    param_27 = param_18;
    param_23 = param_20;
code_r0x0001048b2114:
    param_19 = param_22;
    param_15 = param_24;
code_r0x0001048b211c:
    _objc_retain();
    param_12 = &param_13;
    param_11 = (code *)0x1048b24ec;
    param_10 = &param_17;
    param_9 = (code *)0x1048b24e8;
    pppppcVar26 = param_1;
code_r0x0001048b214c:
code_r0x0001048b215c:
code_r0x0001048b2160:
code_r0x0001048b2170:
code_r0x0001048b2194:
code_r0x0001048b2198:
code_r0x0001048b219c:
    pppppcVar24 = (code *****)0x1048b2000;
code_r0x0001048b21a0:
    pppppcVar24 = (code *****)((long)pppppcVar24 + 0x4cc);
code_r0x0001048b21a4:
code_r0x0001048b21ac:
code_r0x0001048b21b4:
code_r0x0001048b21b8:
    pppppcVar25 = (code *****)apppcStack_c0;
code_r0x0001048b21bc:
code_r0x0001048b21c0:
    param_2 = &stack0xffffffffffffffc0;
code_r0x0001048b21c8:
code_r0x0001048b21d0:
    ppppcStack_70 = (code ****)pppppcVar24;
    ppppcStack_68 = (code ****)pppppcVar25;
code_r0x0001048b21d8:
code_r0x0001048b21dc:
code_r0x0001048b21e0:
code_r0x0001048b21e4:
    FUN_1048b1fa0();
code_r0x0001048b21e8:
    param_1 = pppppcVar26;
    _objc_release(param_1);
code_r0x0001048b21f0:
code_r0x0001048b21f4:
    auVar29._8_8_ = param_2;
    auVar29._0_8_ = param_1;
    return auVar29;
  case 0xe1:
  case 0xe9:
  case 0xf1:
code_r0x0001048b2408:
    *(char *)((long)param_1 + 1) = (char)pppppcVar24;
code_r0x0001048b240c:
    auVar34._8_8_ = param_2;
    auVar34._0_8_ = param_1;
    return auVar34;
  case 0xe8:
    goto code_r0x0001048b22d0;
  case 0xf0:
    goto code_r0x0001048b2350;
  case 0xfc:
code_r0x0001048b22e0:
code_r0x0001048b22e8:
    pppppcVar8 = pppppcVar22;
    *(char *)((long)param_1 + (long)pppppcVar24) = (char)param_23;
    *pppppcVar8 = (code ****)param_1;
    pppppcVar8[1] = (code ****)param_26;
    param_2 = PTR_s_init_1125d9248;
    _objc_msgSendSuper2(pppppcVar8,PTR_s_init_1125d9248);
code_r0x0001048b2300:
code_r0x0001048b2304:
    auVar30._8_8_ = param_2;
    auVar30._0_8_ = pppppcVar8;
    return auVar30;
  }
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = param_1;
  return auVar28;
}



/* Entry: 1048b20c8; end: 1048b21ff; -[SCAttributedAdClientTask matchAppImpression:shakeToReportLogProvider:adTrackEventRepository:adProtoImpressionBuilder:sponsoredLensEncryptedUserDataUpdater:sponsoredLensMetadataLogger:ui:adServeRequestDeviceInfoPrefetch:adServeResponseHandling:cachedUserAdIdPrewarm:prewarmAdsCache:adAssert:attachmentPreload:] */

void FUN_1048b20c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_1b0 = param_15;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1048b1fa0(FUN_1048b24b8,auStack_40,0x1048b24c0,auStack_60,0x1048b24c4,auStack_80,0x1048b24c8,
                auStack_a0,0x1048b24cc,auStack_c0,0x1048b24d0,auStack_e0,0x1048b24d4,auStack_100,
                0x1048b24d8,auStack_120,0x1048b24dc,auStack_140,0x1048b24e0,auStack_160,0x1048b24e4,
                auStack_180,0x1048b24e8,auStack_1a0,0x1048b24ec,auStack_1c0);
  _objc_release(param_1);
  return;
}



/* Entry: 1048b2200; end: 1048b2233;  */

void FUN_1048b2200(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048b2234; end: 1048b2243;  */

ulong FUN_1048b2234(ulong param_1)

{
  if (0xc < param_1) {
    param_1 = 0xd;
  }
  return param_1;
}



/* Entry: 1048b2244; end: 1048b230f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 ** FUN_1048b2244(undefined1 **param_1,byte *param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 ***pppuVar3;
  undefined1 ***pppuVar4;
  undefined1 ***pppuVar5;
  undefined1 ***pppuVar6;
  undefined1 ***pppuVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  undefined1 ***pppuVar13;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 **ppuVar14;
  undefined1 ***pppuVar15;
  undefined1 **ppuVar16;
  undefined1 ***pppuVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined **ppuVar22;
  int iVar23;
  ulong uVar24;
  undefined1 auStack_160 [80];
  undefined1 **ppuStack_110;
  undefined1 **ppuStack_108;
  undefined1 **ppuStack_f0;
  undefined1 **ppuStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *apuStack_d0 [2];
  undefined1 *apuStack_c0 [2];
  undefined1 *apuStack_b0 [2];
  undefined1 *apuStack_a0 [2];
  undefined1 *apuStack_90 [2];
  undefined1 *apuStack_80 [2];
  undefined1 *apuStack_70 [2];
  undefined1 *apuStack_60 [2];
  undefined1 *apuStack_50 [2];
  undefined1 *apuStack_40 [2];
  undefined1 *apuStack_30 [2];
  uint uVar11;
  uint uVar12;
  
  pppuVar13 = &ppuStack_f0;
  pppuVar15 = &ppuStack_f0;
  iVar10 = (int)&ppuStack_f0;
  uVar11 = (uint)&ppuStack_f0;
  iVar23 = (int)&ppuStack_f0;
  uVar12 = (uint)&ppuStack_f0;
  uVar20 = (uint)&ppuStack_f0;
  ppuVar22 = (undefined **)&ppuStack_f0;
  pppuVar17 = &ppuStack_f0;
  ppuVar14 = param_1;
  func_0x00010099a028();
  ppuVar16 = ppuVar14;
  _objc_allocWithZone();
  uVar19 = (uint)&ppuStack_f0;
  uVar18 = (uint)param_2;
  pppuVar3 = &ppuStack_f0;
  pppuVar4 = &ppuStack_f0;
  pppuVar5 = &ppuStack_f0;
  pppuVar6 = &ppuStack_f0;
  pppuVar7 = &ppuStack_f0;
  uVar24 = _DAT_11309ab70;
  uVar21 = (uint)&ppuStack_f0;
  uVar8 = (uint)&ppuStack_f0;
  switch((ulong)param_1 & 0xff) {
  case 0:
    break;
  default:
    pppuVar7 = (undefined1 ***)&puStack_e0;
  case 99:
  case 0x71:
  case 0xa9:
  case 0xe9:
    pppuVar15 = pppuVar7;
    break;
  case 2:
    pppuVar15 = (undefined1 ***)apuStack_d0;
    break;
  case 3:
    pppuVar15 = (undefined1 ***)apuStack_c0;
    break;
  case 4:
  case 0xc3:
    pppuVar5 = (undefined1 ***)apuStack_b0;
  case 0x7a:
  case 0xb2:
  case 0xf2:
    pppuVar15 = pppuVar5;
    break;
  case 5:
  case 0xb8:
    pppuVar3 = (undefined1 ***)apuStack_a0;
  case 0x58:
  case 0x78:
  case 0x80:
  case 0xb0:
  case 0xf0:
    pppuVar15 = pppuVar3;
    break;
  case 6:
    pppuVar15 = (undefined1 ***)apuStack_90;
    break;
  case 7:
    pppuVar4 = (undefined1 ***)apuStack_80;
  case 0xcc:
    pppuVar15 = pppuVar4;
    break;
  case 8:
    pppuVar15 = (undefined1 ***)apuStack_70;
    break;
  case 9:
    pppuVar15 = (undefined1 ***)apuStack_60;
    break;
  case 10:
  case 0x7f:
    pppuVar15 = (undefined1 ***)apuStack_50;
    break;
  case 0xb:
  case 0x56:
  case 0x6a:
  case 0x7e:
  case 0x92:
  case 0x9a:
  case 0xa2:
  case 0xb6:
  case 0xca:
  case 0xd2:
  case 0xda:
  case 0xe2:
    pppuVar6 = (undefined1 ***)apuStack_40;
  case 0x61:
  case 0x89:
  case 0x8b:
  case 0xc1:
    pppuVar15 = pppuVar6;
    break;
  case 0xc:
    pppuVar15 = (undefined1 ***)apuStack_30;
    break;
  case 0x14:
  case 0x15:
  case 0x1a:
  case 0x24:
  case 0x34:
  case 0x35:
  case 0x3a:
  case 0x44:
  case 0x4c:
  case 0xaf:
  case 0xd3:
  case 0xf4:
  case 0xf5:
  case 0xfa:
    *(byte *)ppuVar16 = (byte)param_2;
    return ppuVar16;
  case 0x16:
  case 0x36:
  case 0xf6:
    return ppuVar16;
  case 0x18:
  case 0x2a:
  case 0x38:
  case 0x4b:
  case 0xf8:
    goto code_r0x0001048b2414;
  case 0x19:
  case 0x39:
  case 0x4a:
  case 0xf9:
    return ppuVar16;
  case 0x1b:
  case 0x22:
  case 0x3b:
  case 0x42:
  case 0x4f:
  case 0xfb:
    goto code_r0x0001048b2420;
  case 0x1c:
  case 0x1e:
  case 0x3c:
  case 0x3e:
  case 0xfc:
    goto code_r0x0001048b241c;
  case 0x1f:
  case 0x3f:
    goto code_r0x0001048b2398;
  case 0x20:
  case 0x40:
    goto code_r0x0001048b243c;
  case 0x23:
  case 0x43:
    goto code_r0x0001048b2444;
  case 0x25:
  case 0x45:
    goto code_r0x0001048b23dc;
  case 0x26:
  case 0x46:
    goto code_r0x0001048b2410;
  case 0x27:
  case 0x47:
    return ppuVar16;
  case 0x28:
  case 0x48:
    goto code_r0x0001048b2438;
  case 0x29:
    uVar20 = 0;
    if ((bool)in_CY) {
      uVar20 = uVar19;
    }
    if (0xf3 < uVar18) goto code_r0x0001048b23ec;
    in_OV = SBORROW4(uVar20,1);
    in_NG = (int)(uVar20 - 1) < 0;
    in_ZR = uVar20 == 1;
    uVar8 = uVar20;
  case 0x49:
    uVar12 = uVar8;
    uVar21 = uVar12;
    if ((bool)in_ZR || in_NG != in_OV) {
code_r0x0001048b23dc:
      if (uVar12 == 0) goto code_r0x0001048b241c;
      *(byte *)((long)ppuVar16 + 1) = 0;
    }
    else {
code_r0x0001048b2410:
      in_ZR = uVar21 == 2;
code_r0x0001048b2414:
      if ((bool)in_ZR) {
code_r0x0001048b2418:
        ((byte *)((long)ppuVar16 + 1))[0] = 0;
        ((byte *)((long)ppuVar16 + 1))[1] = 0;
code_r0x0001048b241c:
      }
      else {
code_r0x0001048b243c:
        pbVar1 = (byte *)((long)ppuVar16 + 1);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
      }
    }
    if (uVar18 == 0) {
code_r0x0001048b2444:
      return ppuVar16;
    }
code_r0x0001048b2420:
    *(byte *)ppuVar16 = (byte)param_2 + 0xc;
code_r0x0001048b2428:
    return ppuVar16;
  case 0x2b:
    goto code_r0x0001048b2434;
  case 0x2c:
    goto code_r0x0001048b2418;
  case 0x4d:
    goto code_r0x0001048b2470;
  case 0x4e:
  case 0xfe:
  case 0xff:
    goto code_r0x0001048b244c;
  case 0x53:
    goto code_r0x0001048b2610;
  case 0x55:
  case 0x69:
  case 0x7d:
  case 0x91:
  case 0x99:
  case 0xa1:
  case 0xb5:
  case 0xc9:
  case 0xd1:
  case 0xd9:
  case 0xe1:
    goto code_r0x0001048b2528;
  case 0x57:
    goto code_r0x0001048b237c;
  case 0x59:
  case 0x81:
  case 0x95:
  case 0xb9:
    ppuVar16 = (undefined1 **)(ulong)*(byte *)ppuVar14;
  case 0xdb:
    __ss6HasherV8_combineyySuF();
code_r0x0001048b2550:
    return ppuVar16;
  case 0x67:
    pppuVar17 = (undefined1 ***)0x0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
    goto _objc_autoreleaseReturnValue;
  case 0x6b:
    goto code_r0x0001048b257c;
  case 0x6c:
  case 0x9c:
  case 0xa4:
    goto code_r0x0001048b2688;
  case 0x6d:
  case 0x9d:
  case 0xa5:
  case 0xd5:
  case 0xdd:
  case 0xe5:
    goto code_r0x0001048b2564;
  case 0x6e:
  case 0x9e:
  case 0xa6:
  case 0xd6:
  case 0xde:
  case 0xe6:
    _swift_getObjCClassMetadata();
    ppuVar14 = ppuVar16;
    _objc_allocWithZone();
    *(byte *)((long)ppuVar14 + _DAT_11309aba8) = param_3;
    ppuStack_f0 = ppuVar14;
    ppuStack_e8 = ppuVar16;
  case 0xd4:
  case 0xdc:
  case 0xe4:
    ppuVar22 = &PTR_s_info_1125d9000;
code_r0x0001048b2688:
    _objc_msgSendSuper2(&ppuStack_f0,ppuVar22[0x49]);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return (undefined1 **)pppuVar17;
  case 0x77:
    iVar23 = (int)_DAT_11309ab70;
    if (!(bool)in_CY) {
      iVar23 = 1;
    }
    if (iVar23 == 4) {
      uVar20 = *(uint *)((long)ppuVar16 + 1);
joined_r0x0001048b236c:
      if (uVar20 != 0) {
LAB_1048b2370:
        iVar10 = ((uint)*(byte *)ppuVar16 | uVar20 << 8) - 0xd;
code_r0x0001048b237c:
        return (undefined1 **)(ulong)(iVar10 + 1);
      }
    }
    else {
      if (iVar23 != 2) {
        uVar20 = (uint)*(byte *)((long)ppuVar16 + 1);
        goto joined_r0x0001048b236c;
      }
      uVar20 = (uint)*(ushort *)((long)ppuVar16 + 1);
      if (*(ushort *)((long)ppuVar16 + 1) != 0) goto LAB_1048b2370;
    }
    uVar11 = (uint)*(byte *)ppuVar16;
  case 0x13:
  case 0x1d:
  case 0x33:
  case 0x3d:
  case 0xf3:
  case 0xfd:
    iVar23 = uVar11 - 0xd;
    if (uVar11 < 0xd) {
      iVar23 = -1;
    }
code_r0x0001048b2398:
    return (undefined1 **)(ulong)(iVar23 + 1);
  case 0x79:
  case 0xb1:
  case 0xf1:
    ppuVar16 = (undefined1 **)ppuVar14[2];
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)ppuVar16[2])();
    return ppuVar16;
  case 0x7b:
    return ppuVar16;
  case 0x8f:
  case 0x97:
  case 0x9f:
    goto code_r0x0001048b2580;
  case 0x93:
    goto code_r0x0001048b2428;
  case 0x94:
    ppuVar16 = (undefined1 **)&UNK_1107b1fc0;
  case 0xa3:
code_r0x0001048b2470:
    return ppuVar16;
  case 0x9b:
code_r0x0001048b23ec:
    uVar21 = (uVar18 - 0xf4 >> 8) + 1;
    uVar24 = (ulong)uVar21;
    *(byte *)ppuVar16 = (byte)(uVar18 - 0xf4);
    if ((int)uVar20 < 2) {
      if (uVar20 == 0) {
        return ppuVar16;
      }
      *(byte *)((long)ppuVar16 + 1) = (byte)uVar21;
      return ppuVar16;
    }
    in_ZR = uVar20 == 2;
  case 0x17:
  case 0x21:
  case 0x37:
  case 0x41:
  case 0xf7:
    if (!(bool)in_ZR) {
      *(int *)((long)ppuVar16 + 1) = (int)uVar24;
code_r0x0001048b244c:
      return ppuVar16;
    }
code_r0x0001048b2434:
    *(short *)((long)ppuVar16 + 1) = (short)uVar24;
code_r0x0001048b2438:
    return ppuVar16;
  case 0xb3:
    goto code_r0x0001048b2550;
  case 0xb7:
    uStack_d8 = 0x1048b2264;
    ppuStack_e8 = (undefined1 **)((ulong)ppuStack_e8 & 0xffffffff00000000);
    ppuStack_f0 = (undefined1 **)0x29;
    puStack_e0 = &stack0xfffffffffffffff0;
code_r0x0001048b2610:
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0,0xe000000000000000,
               "SnapAttribution/AttributedAppClipTaskWrapper.swift",0x32,2);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1048b2640);
    (*pcVar9)();
  case 199:
  case 0xcf:
  case 0xd7:
  case 0xdf:
    __ss6HasherV9_finalizeSiyF();
code_r0x0001048b2528:
    return ppuVar16;
  case 0xcb:
    return (undefined1 **)(ulong)(uVar19 + 1);
  case 0xcd:
    return ppuVar16;
  case 0xe3:
    return (undefined1 **)(ulong)(uVar19 == *param_2);
  case 0xef:
    pppuVar13 = (undefined1 ***)auStack_160;
    ppuStack_110 = ppuVar14;
    ppuStack_108 = param_1;
code_r0x0001048b2564:
    *(undefined1 **)((long)pppuVar13 + 0x60) = &stack0xfffffffffffffff0;
    *(undefined8 *)((long)pppuVar13 + 0x68) = 0x1048b2264;
    bVar2 = *(byte *)ppuVar14;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)pppuVar13 + 8));
    param_1 = (undefined1 **)(ulong)bVar2;
code_r0x0001048b257c:
    ppuVar16 = param_1;
code_r0x0001048b2580:
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    return ppuVar16;
  }
  *(byte *)((long)ppuVar16 + _DAT_11309ab70) = (byte)param_1;
  *pppuVar15 = ppuVar16;
  pppuVar15[1] = ppuVar14;
  _objc_msgSendSuper2(pppuVar15,PTR_s_init_1125d9248);
  return (undefined1 **)pppuVar15;
}


