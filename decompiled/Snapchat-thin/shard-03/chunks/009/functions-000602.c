/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e9729c; end: 102e97303; +[SCAddSoundPillState pickedSoundWithTrack:loggingInfo:style:] */

void FUN_102e9729c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  FUN_102e97614(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e97304; end: 102e973eb; +[SCAddSoundPillState recommendedSoundWithRecommendation:] */

void FUN_102e97304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_102e976c4();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e973ec; end: 102e9744f; -[SCAddSoundPillState matchEmpty:pickedSound:recommendedSound:] */

void FUN_102e973ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000102e9733c(FUN_102e97928,auStack_40,0x102e97934,auStack_60,0x102e9794c,auStack_80);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e97450; end: 102e97483;  */

void FUN_102e97450(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e97484; end: 102e974cb; -[SCAddSoundPillState .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e974a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e974a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e97484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f24dd0));
  return;
}



/* Entry: 102e974cc; end: 102e97613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e974cc(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(char *)(param_2 + _DAT_112f24dc8) == '\0') {
    uVar8 = 0x8000000000000000;
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    if (*(char *)(param_2 + _DAT_112f24dc8) == '\x01') {
      lVar3 = *(long *)(param_2 + _DAT_112f24dd0);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e97608);
        (*pcVar1)();
      }
      lVar2 = *(long *)(param_2 + _DAT_112f24dd8);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e97610);
        (*pcVar1)();
      }
      if ((char)((long *)(param_2 + _DAT_112f24de0))[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e97614);
        (*pcVar1)();
      }
      lVar6 = *(long *)(param_2 + _DAT_112f24de0);
      lVar5 = *(long *)(lVar2 + _DAT_112f24e20);
      lVar7 = *(long *)(lVar2 + _DAT_112f24e38);
      lVar4 = ((long *)(lVar2 + _DAT_112f24e38))[1];
      uVar8 = 0x100;
      if (*(char *)(lVar2 + _DAT_112f24e30) == '\0') {
        uVar8 = 0;
      }
      uVar8 = uVar8 | *(byte *)(lVar2 + _DAT_112f24e28);
      func_0x000107c61434(lVar4);
    }
    else {
      lVar3 = *(long *)(param_2 + _DAT_112f24de8);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e9760c);
        (*pcVar1)();
      }
      lVar5 = 0;
      lVar7 = 0;
      lVar4 = 0;
      lVar6 = 0;
      uVar8 = 0x4000000000000000;
    }
    func_0x000107c61174(lVar3);
  }
  *param_1 = lVar3;
  param_1[1] = lVar5;
  param_1[2] = uVar8;
  param_1[3] = lVar7;
  param_1[4] = lVar4;
  param_1[5] = lVar6;
  return;
}



/* Entry: 102e97614; end: 102e976c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e97614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_102e97760();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112f24dc8) = 1;
  *(long *)(lVar4 + _DAT_112f24dd0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f24dd8) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f24de0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_112f24de8) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 102e976c4; end: 102e9775f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e976c4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_102e97760();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112f24dc8) = 2;
  *(undefined8 *)(lVar4 + _DAT_112f24dd0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112f24dd8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f24de0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_112f24de8) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 102e97760; end: 102e9777f;  */

void FUN_102e97760(void)

{
  func_0x000107c61168(&PTR_PTR_1128aa650);
  return;
}



/* Entry: 102e97780; end: 102e978e7;  */

int FUN_102e97780(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e977fc;
        goto LAB_102e977e0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e977e0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102e977fc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e978e8; end: 102e97927;  */

void FUN_102e978e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f24e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5fc1c;
  func_0x000107c61520(&UNK_10db5fc1c,&UNK_1105e1a90);
  puRam0000000112f24e18 = puVar1;
  return;
}



/* Entry: 102e97928; end: 102e9795b;  */

void FUN_102e97928(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102e97930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102e9795c; end: 102e979f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9795c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f24e20) = param_1;
  *(byte *)(unaff_x20 + _DAT_112f24e28) = (byte)param_2 & 1;
  *(byte *)(unaff_x20 + _DAT_112f24e30) = (byte)((ulong)param_2 >> 8) & 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f24e38);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e979f4; end: 102e97aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e979f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  func_0x000107c606ac(auStack_68);
  func_0x000107c60690(*(undefined8 *)(unaff_x20 + _DAT_112f24e20));
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112f24e28));
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112f24e30));
  if (((undefined8 *)(unaff_x20 + _DAT_112f24e38))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f24e38);
    func_0x000107c5fadc(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar2);
  func_0x000107c606a4();
  return;
}



/* Entry: 102e97aa8; end: 102e97c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102e97aa8(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar7 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
    return 0;
  }
  plVar5 = &lStack_78;
  func_0x000107c6147c(plVar5,auStack_70,PTR___sypN_11034f1a8 + 8,lVar7,6);
  if (((ulong)plVar5 & 1) == 0) {
    return 0;
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112f24e20);
  lVar11 = *(long *)(lStack_78 + _DAT_112f24e20);
  bVar1 = *(byte *)(unaff_x20 + _DAT_112f24e28);
  bVar2 = *(byte *)(lStack_78 + _DAT_112f24e28);
  bVar3 = *(byte *)(unaff_x20 + _DAT_112f24e30);
  bVar4 = *(byte *)(lStack_78 + _DAT_112f24e30);
  lVar7 = ((long *)(unaff_x20 + _DAT_112f24e38))[1];
  lVar9 = ((long *)(lStack_78 + _DAT_112f24e38))[1];
  if (lVar7 == 0) {
    func_0x000107c61434(lVar9);
    func_0x000107c61170(lStack_78);
    if (lVar9 != 0) {
      func_0x000107c6142c(lVar9);
      uVar8 = 0;
      goto LAB_102e97bd0;
    }
LAB_102e97bcc:
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    if (lVar9 != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112f24e38);
      if (lVar6 == *(long *)(lStack_78 + _DAT_112f24e38) && lVar7 == lVar9) {
        func_0x000107c61170(lStack_78);
        goto LAB_102e97bcc;
      }
      func_0x000107c605b8();
      uVar8 = (uint)lVar6;
    }
    func_0x000107c61170(lStack_78);
  }
LAB_102e97bd0:
  return (uint)(lVar10 == lVar11) & ((bVar1 ^ bVar2) ^ 1) & ((bVar3 ^ bVar4) ^ 1) & uVar8;
}



/* Entry: 102e97c10; end: 102e97c1f; -[SCAddSoundPillLoggingInfo sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e97c10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f24e20);
}



/* Entry: 102e97c20; end: 102e97c2f; -[SCAddSoundPillLoggingInfo isAutoApplied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e97c20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f24e28);
}



/* Entry: 102e97c30; end: 102e97c3f; -[SCAddSoundPillLoggingInfo isAutoPlayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e97c30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f24e30);
}



/* Entry: 102e97c40; end: 102e97c9b; -[SCAddSoundPillLoggingInfo contextId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e97c40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f24e38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f24e38);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102e97c9c; end: 102e97d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e97c9c(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f24e20) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f24e28) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f24e30) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f24e38);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e97d30; end: 102e97ddb; -[SCAddSoundPillLoggingInfo initWithSourcePageType:isAutoApplied:isAutoPlayed:contextId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e97d30(long param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,long param_6)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112f24e20) = param_3;
  *(undefined1 *)(param_1 + _DAT_112f24e28) = param_4;
  *(undefined1 *)(param_1 + _DAT_112f24e30) = param_5;
  plVar1 = (long *)(param_1 + _DAT_112f24e38);
  *plVar1 = param_6;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e97ddc; end: 102e97e0f; -[SCAddSoundPillLoggingInfo hash] */

undefined8 FUN_102e97ddc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102e979f4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102e97e10; end: 102e97e8f; -[SCAddSoundPillLoggingInfo isEqual:] */

uint FUN_102e97e10(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_102e97aa8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102e97e90; end: 102e97e93; -[SCAddSoundPillLoggingInfo copyWithZone:] */

void FUN_102e97e90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102e97e94; end: 102e97eaf; -[SCAddSoundPillLoggingInfo description] */

void FUN_102e97e94(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e97eb0; end: 102e97f2b; -[SCAddSoundPillLoggingInfo init] */

void FUN_102e97eb0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCAddSoundPillScope/AddSoundPillLoggingInfoWrapper.swift",0x38,2,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e97ef8);
  (*pcVar1)();
}



/* Entry: 102e97f2c; end: 102e97f3f; -[SCAddSoundPillLoggingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e97f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f24e38 + 8))
  ;
  return;
}



/* Entry: 102e97f40; end: 102e97f5f;  */

void FUN_102e97f40(void)

{
  func_0x000107c61168(&PTR_PTR_1128aa730);
  return;
}



/* Entry: 102e97f60; end: 102e98103;  */

void FUN_102e97f60(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001003875d4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_102e996d8(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000102e992d4();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_102e9931c();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar6);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 102e98104; end: 102e9824f;  */

long FUN_102e98104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_102e996d8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102e992d4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_102e9931c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 102e98250; end: 102e9829b;  */

void FUN_102e98250(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e9829c; end: 102e982eb;  */

void FUN_102e9829c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e982ec; end: 102e9832f;  */

undefined1  [16] FUN_102e982ec(void)

{
  return ZEXT816(0x1105e1be8);
}



/* Entry: 102e98330; end: 102e98383;  */

void FUN_102e98330(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e98384; end: 102e98427; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider prepareDataToUploadForMediaId:completionHandler:] */

void FUN_102e98384(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  if (param_3 != 0) {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar3 = &UNK_1105e1d20;
    func_0x000107c613fc(&UNK_1105e1d20,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    pcVar2 = FUN_102e987b0;
  }
  func_0x000107c61174(param_1);
  FUN_102e986e8(pcVar2,puVar3);
  func_0x00010130f8ec(pcVar2,puVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102e98428; end: 102e9842f; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider mediaContentType] */

undefined8 FUN_102e98428(void)

{
  return 0;
}



/* Entry: 102e98430; end: 102e98493; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102e98430(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = _DAT_112f24f68;
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f24f68);
  lVar2 = param_2;
  func_0x000107c61174();
  func_0x000107c5b078(uVar3);
  dVar4 = param_1;
  func_0x000107c51820(*(undefined8 *)(param_2 + lVar1));
  func_0x000107c61170(lVar2);
  return param_1 * dVar4;
}



/* Entry: 102e98494; end: 102e984f7; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102e98494(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112f24f68;
  uVar3 = *(undefined8 *)(param_3 + _DAT_112f24f68);
  lVar2 = param_3;
  func_0x000107c61174();
  func_0x000107c5b078(uVar3);
  func_0x000107c51820(*(undefined8 *)(param_3 + lVar1));
  func_0x000107c61170(lVar2);
  return param_2 * param_1;
}



/* Entry: 102e984f8; end: 102e9859b; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider snapMetadata] */

void FUN_102e984f8(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126c4918;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = 0x69615f796d;
  func_0x000107c5fadc(0x69615f796d,0xe500000000000000);
  puVar4 = puVar2;
  func_0x000107c5e4e0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e98598);
    (*pcVar1)();
  }
  puVar5 = puVar4;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e9859c);
  (*pcVar1)();
}



/* Entry: 102e9859c; end: 102e9859f; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider prepareChunkedTranscodeVideoFilterForMediaId:trackingId:conversationIds:completionHandler:] */

void FUN_102e9859c(void)

{
  return;
}



/* Entry: 102e985a0; end: 102e985a7; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider isZipped] */

undefined8 FUN_102e985a0(void)

{
  return 0;
}



/* Entry: 102e985a8; end: 102e985af; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider duration] */

undefined8 FUN_102e985a8(void)

{
  return 0;
}



/* Entry: 102e985b0; end: 102e985b7; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider isInfiniteDuration] */

undefined8 FUN_102e985b0(void)

{
  return 0;
}



/* Entry: 102e985b8; end: 102e985bf; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider isRotationLocked] */

undefined8 FUN_102e985b8(void)

{
  return 0;
}



/* Entry: 102e985c0; end: 102e98657; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider mediaOrigins] */

void FUN_102e985c0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x0001021912f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  puVar2 = PTR_PTR_1126c4548;
  func_0x000107c610f8();
  func_0x000107c47cbc();
  if (puVar2 != (undefined *)0x0) {
    *(undefined **)(param_1 + 0x20) = puVar2;
    uVar3 = 0;
    func_0x000102189278(0);
    lVar4 = param_1;
    func_0x000107c5fc48(param_1,uVar3);
    func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e98658);
  (*pcVar1)();
}



/* Entry: 102e98658; end: 102e986b7; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider init] */

void FUN_102e98658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyAICameraChatPresenterImplementation.MyAICameraChatContextProvider",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e98684);
  (*pcVar1)();
}



/* Entry: 102e986b8; end: 102e986c7; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e986b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f24f68));
  return;
}



/* Entry: 102e986c8; end: 102e986e7;  */

void FUN_102e986c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128aa810);
  return;
}



/* Entry: 102e986e8; end: 102e987af;  */

/* WARNING: Possible PIC construction at 0x000102e98768: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e986e8(code *param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  code *unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f24f68);
  uVar4 = param_2;
  func_0x000107c60bb4(0x3fe999999999999a);
  func_0x000107c61180();
  if (lVar2 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)(0,0xf000000000000000);
    }
    return;
  }
  lVar3 = lVar2;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar2);
  if (param_1 != (code *)0x0) {
    func_0x00010006c00c(lVar3,uVar4);
    (*param_1)(lVar3,uVar4);
    unaff_x30 = 0x102e9876c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  uVar5 = (uint)(uVar4 >> 0x3e);
  if (uVar5 != 1) {
    if (uVar5 != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102e987b0; end: 102e987b7;  */

void FUN_102e987b0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e987b8; end: 102e987bb; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider venueId] */

void FUN_102e987b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102e987bc; end: 102e987bf; -[_TtC37MyAICameraChatPresenterImplementation29MyAICameraChatContextProvider snapAttachmentUrl] */

void FUN_102e987bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102e987c0; end: 102e988db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e987c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  uVar4 = param_2;
  func_0x000107c610f8();
  lVar1 = _DAT_112f24f98;
  puVar2 = &UNK_10db5ff10;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f24fa0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f24fa8;
  func_0x000104522c9c(0);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e12b58;
  func_0x000107c5faec();
  func_0x00010452281c();
  func_0x000107c6142c(uVar4);
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f24fb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f24fb8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f24fc0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f24fc8) = param_4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e988dc; end: 102e98bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e988dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long *plVar10;
  long unaff_x20;
  long *plVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  ppuVar9 = &puStack_90;
  FUN_102e98bc0(param_2);
  lVar1 = 0;
  FUN_102e986c8();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f24f68) = param_1;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61174(param_1);
  plVar3 = &lStack_60;
  func_0x000107c61154(plVar3,puVar7);
  plVar4 = plVar3;
  func_0x000106e0c1a0();
  func_0x000107c61180();
  if (plVar4 != (long *)0x0) {
    func_0x000107c61174(plVar3);
    plVar11 = plVar3;
    func_0x00010011df08();
    func_0x000107c61180();
    plVar5 = plVar11;
    func_0x000107c5faec();
    func_0x000107c61170(plVar11);
    puVar6 = PTR_PTR_1126cfb00;
    func_0x000107c610f8();
    func_0x000107c61174(plVar4);
    func_0x000107c5fadc(plVar5,puVar7);
    func_0x000107c6142c(puVar7);
    func_0x000107c47638();
    func_0x000107c61170(plVar3);
    func_0x000107c61170(plVar4);
    func_0x000107c61170(plVar5);
    lVar2 = 0x112e5e778;
    FUN_102e9917c(0x112e5e778,&PTR_PTR_1126cfb00,0x112e5e780,&UNK_10dae5280);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined **)(lVar2 + 0x20) = puVar6;
    plVar11 = *(long **)(unaff_x20 + _DAT_112f24fc8);
    func_0x000107c61174(puVar6);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (plVar11 == (long *)0x0) {
      func_0x000107c61170(plVar3);
      func_0x000107c61170(plVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61574(lVar2);
      return;
    }
    plVar5 = plVar11;
    func_0x000107c40684();
    func_0x000107c61180();
    puVar7 = &UNK_1105e1d48;
    func_0x000107c613fc(&UNK_1105e1d48,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_1105e1d70;
    func_0x000107c613fc(&UNK_1105e1d70,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long *)(puVar8 + 0x18) = lVar2;
    pcStack_70 = FUN_102e991f4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100b6fe98;
    puStack_78 = &UNK_1105e1d88;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    plVar10 = plVar5;
    func_0x000107c5c320(plVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(plVar5);
    func_0x000107c3e924(plVar10);
    func_0x000107c61170(plVar3);
    func_0x000107c61170(plVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c615e8(plVar11);
    plVar3 = plVar10;
  }
  func_0x000107c61170(plVar3);
  return;
}



/* Entry: 102e98bc0; end: 102e98c7f;  */

/* WARNING: Possible PIC construction at 0x000102e98c60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e98c64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e98bc0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000104523254(0);
  func_0x000107c610f8();
  uVar1 = 1;
  func_0x000104522fdc(1,0,1);
  func_0x000107c610f8(PTR_PTR_1126b3530);
  func_0x000107c4807c();
  func_0x000104520f00(*(undefined8 *)(unaff_x20 + _DAT_112f24fa8),uVar1);
  func_0x000107c4ab34(*(undefined8 *)(unaff_x20 + _DAT_112f24fb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e98c80; end: 102e98fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e98c80(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  puVar11 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar11,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      puVar3 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      puVar4 = puVar3;
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(long *)(puVar4 + 0x20) = lVar2;
      *(undefined1 **)(puVar4 + 0x28) = puVar11;
      puVar5 = PTR_PTR_1126b5be8;
      func_0x000107c610f8(PTR_PTR_1126b5be8);
      func_0x000107c61434(puVar11);
      puVar6 = puVar4;
      puVar7 = PTR___sSSN_11034da80;
      func_0x000107c5fc48(puVar4,PTR___sSSN_11034da80);
      func_0x000107c61574(puVar4);
      func_0x000107c45794(puVar5);
      func_0x000107c61170(puVar6);
      puVar4 = PTR_PTR_1126b1a40;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5e7ec();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61174(puVar5);
      puVar6 = puVar4;
      func_0x000107c5e500();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170();
      func_0x00010011df08();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar7);
      }
      puVar7 = puVar4;
      func_0x000107c5e870(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      lVar8 = *(long *)(puVar1 + _DAT_112f24fc0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 == 0) {
        func_0x000107c6142c(puVar11);
        param_3 = puVar1;
        puVar1 = puVar5;
      }
      else {
        uVar9 = 0;
        FUN_102e99238(0,0x112e5e778,&PTR_PTR_1126cfb00);
        func_0x000107c5fc48(param_3,uVar9);
        func_0x000107c613fc(puVar3,0x30,7);
        *(undefined8 *)(puVar3 + 0x18) = 2;
        *(undefined8 *)(puVar3 + 0x10) = 1;
        *(long *)(puVar3 + 0x20) = lVar2;
        *(undefined1 **)(puVar3 + 0x28) = puVar11;
        puVar6 = puVar3;
        func_0x000107c5fc48();
        func_0x000107c61574(puVar3);
        puVar3 = puVar4;
        func_0x000107c3ecc8(puVar4);
        func_0x000107c61180();
        pcStack_88 = FUN_102e98fc4;
        uStack_80 = 0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f5c588;
        puStack_90 = &UNK_1105e1db0;
        ppuVar10 = &puStack_a8;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c51dd8(lVar8);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c615e8(lVar8);
        puVar4 = puVar6;
        puVar1 = puVar3;
      }
      func_0x000107c61170(param_3);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102e98fc4; end: 102e98fc7;  */

void FUN_102e98fc4(void)

{
  return;
}



/* Entry: 102e98fc8; end: 102e99033; -[_TtC37MyAICameraChatPresenterImplementation23MyAICameraChatPresenter sendImageAndOpenMyAIChatWith:on:] */

/* WARNING: Possible PIC construction at 0x000102e99014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e99018) */

void FUN_102e98fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102e988dc(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102e99034; end: 102e99083; -[_TtC37MyAICameraChatPresenterImplementation23MyAICameraChatPresenter openMyAIChatOn:] */

/* WARNING: Possible PIC construction at 0x000102e9906c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e99070) */

void FUN_102e99034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102e98bc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102e99084; end: 102e990e3; -[_TtC37MyAICameraChatPresenterImplementation23MyAICameraChatPresenter init] */

void FUN_102e99084(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyAICameraChatPresenterImplementation.MyAICameraChatPresenter",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e990b0);
  (*pcVar1)();
}



/* Entry: 102e990e4; end: 102e9916b; -[_TtC37MyAICameraChatPresenterImplementation23MyAICameraChatPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e99100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e99120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e99140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e99124) */
/* WARNING: Removing unreachable block (ram,0x000102e99104) */
/* WARNING: Removing unreachable block (ram,0x000102e99144) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e990e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f24fb0));
  return;
}



/* Entry: 102e9916c; end: 102e9917b; -[_TtC37MyAICameraChatPresenterImplementation23MyAICameraChatPresenter chatScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9916c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f24fb0),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 102e9917c; end: 102e991f3;  */

void FUN_102e9917c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102e99238(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102e991f4; end: 102e99217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e991f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar10 = *(undefined **)(unaff_x20 + 0x18);
  puVar12 = auStack_78;
  func_0x000107c61428(lVar2 + 0x10,puVar12,0,0);
  puVar1 = (undefined *)(lVar2 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      puVar3 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      puVar4 = puVar3;
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(long *)(puVar4 + 0x20) = lVar2;
      *(undefined1 **)(puVar4 + 0x28) = puVar12;
      puVar5 = PTR_PTR_1126b5be8;
      func_0x000107c610f8(PTR_PTR_1126b5be8);
      func_0x000107c61434(puVar12);
      puVar6 = puVar4;
      puVar7 = PTR___sSSN_11034da80;
      func_0x000107c5fc48(puVar4,PTR___sSSN_11034da80);
      func_0x000107c61574(puVar4);
      func_0x000107c45794(puVar5);
      func_0x000107c61170(puVar6);
      puVar4 = PTR_PTR_1126b1a40;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5e7ec();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61174(puVar5);
      puVar6 = puVar4;
      func_0x000107c5e500();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170();
      func_0x00010011df08();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar7);
      }
      puVar7 = puVar4;
      func_0x000107c5e870(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      lVar8 = *(long *)(puVar1 + _DAT_112f24fc0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 == 0) {
        func_0x000107c6142c(puVar12);
        puVar10 = puVar1;
        puVar1 = puVar5;
      }
      else {
        uVar9 = 0;
        FUN_102e99238(0,0x112e5e778,&PTR_PTR_1126cfb00);
        func_0x000107c5fc48(puVar10,uVar9);
        func_0x000107c613fc(puVar3,0x30,7);
        *(undefined8 *)(puVar3 + 0x18) = 2;
        *(undefined8 *)(puVar3 + 0x10) = 1;
        *(long *)(puVar3 + 0x20) = lVar2;
        *(undefined1 **)(puVar3 + 0x28) = puVar12;
        puVar6 = puVar3;
        func_0x000107c5fc48();
        func_0x000107c61574(puVar3);
        puVar3 = puVar4;
        func_0x000107c3ecc8(puVar4);
        func_0x000107c61180();
        pcStack_88 = FUN_102e98fc4;
        uStack_80 = 0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f5c588;
        puStack_90 = &UNK_1105e1db0;
        ppuVar11 = &puStack_a8;
        func_0x000107c60bc4(ppuVar11);
        func_0x000107c51dd8(lVar8);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c615e8(lVar8);
        puVar4 = puVar6;
        puVar1 = puVar3;
      }
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102e99218; end: 102e99237;  */

void FUN_102e99218(void)

{
  func_0x000107c61168(&PTR_PTR_1128aa8d0);
  return;
}



/* Entry: 102e99238; end: 102e99277;  */

void FUN_102e99238(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102e99278; end: 102e9927f;  */

void FUN_102e99278(long param_1,long param_2)

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



/* Entry: 102e99280; end: 102e9931b;  */

void FUN_102e99280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 102e9931c; end: 102e993fb;  */

void FUN_102e9931c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1105e1de8;
  func_0x000107c613fc(&UNK_1105e1de8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_102e995f4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102e995fc;
  puStack_48 = &UNK_1105e1e00;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000100387660(0);
  func_0x000107c610f8();
  func_0x000102e998a8(puVar1);
  return;
}



/* Entry: 102e993fc; end: 102e995f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102e993fc(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  puVar11 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar11,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3f934();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61174();
    func_0x000107c422dc();
    func_0x000107c61180();
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x000107c40688();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e995f4);
      (*pcVar2)();
    }
    lVar6 = 0;
    FUN_102e99218();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar1 = _DAT_112f24f98;
    pcVar8 = "MyAICameraChatPresenter";
    func_0x0001000c10c0();
    func_0x000107c61180();
    *(char **)(lVar7 + lVar1) = pcVar8;
    lVar1 = _DAT_112f24fa0;
    puVar9 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar7 + lVar1) = puVar9;
    lVar1 = _DAT_112f24fa8;
    func_0x000104522c9c(0);
    ppuVar10 = &PTR____CFConstantStringClassReference_110e12b58;
    func_0x000107c5faec();
    func_0x00010452281c();
    func_0x000107c6142c(puVar11);
    *(undefined ***)(lVar7 + lVar1) = ppuVar10;
    *(undefined8 *)(lVar7 + _DAT_112f24fb0) = uVar3;
    *(undefined8 *)(lVar7 + _DAT_112f24fb8) = uVar4;
    *(undefined8 *)(lVar7 + _DAT_112f24fc0) = uVar12;
    *(long *)(lVar7 + _DAT_112f24fc8) = lVar5;
    puVar9 = PTR_s_init_1125d9248;
    lStack_88 = lVar7;
    lStack_80 = lVar6;
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar12);
    func_0x000107c61174(lVar5);
    plVar13 = &lStack_88;
    func_0x000107c61154(plVar13,puVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar5);
    func_0x000107c61574(param_1);
  }
  return plVar13;
}



/* Entry: 102e995f4; end: 102e995fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102e995f4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  puVar12 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x10,puVar12,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    plVar14 = (long *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    func_0x000107c3f934();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    uVar13 = *(undefined8 *)(lVar3 + 0x18);
    func_0x000107c61174();
    func_0x000107c422dc();
    func_0x000107c61180();
    lVar6 = *(long *)(lVar3 + 0x10);
    func_0x000107c40688();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e995f4);
      (*pcVar2)();
    }
    lVar7 = 0;
    FUN_102e99218();
    lVar8 = lVar7;
    func_0x000107c610f8();
    lVar1 = _DAT_112f24f98;
    pcVar9 = "MyAICameraChatPresenter";
    func_0x0001000c10c0();
    func_0x000107c61180();
    *(char **)(lVar8 + lVar1) = pcVar9;
    lVar1 = _DAT_112f24fa0;
    puVar10 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar8 + lVar1) = puVar10;
    lVar1 = _DAT_112f24fa8;
    func_0x000104522c9c(0);
    ppuVar11 = &PTR____CFConstantStringClassReference_110e12b58;
    func_0x000107c5faec();
    func_0x00010452281c();
    func_0x000107c6142c(puVar12);
    *(undefined ***)(lVar8 + lVar1) = ppuVar11;
    *(undefined8 *)(lVar8 + _DAT_112f24fb0) = uVar4;
    *(undefined8 *)(lVar8 + _DAT_112f24fb8) = uVar5;
    *(undefined8 *)(lVar8 + _DAT_112f24fc0) = uVar13;
    *(long *)(lVar8 + _DAT_112f24fc8) = lVar6;
    puVar10 = PTR_s_init_1125d9248;
    lStack_88 = lVar8;
    lStack_80 = lVar7;
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar13);
    func_0x000107c61174(lVar6);
    plVar14 = &lStack_88;
    func_0x000107c61154(plVar14,puVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(lVar6);
    func_0x000107c61574(lVar3);
  }
  return plVar14;
}



/* Entry: 102e995fc; end: 102e99633;  */

void FUN_102e995fc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102e99634; end: 102e9964f;  */

void FUN_102e99634(long param_1,long param_2)

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



/* Entry: 102e99650; end: 102e9967b;  */

/* WARNING: Possible PIC construction at 0x000102e9965c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e9966c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e99660) */
/* WARNING: Removing unreachable block (ram,0x000102e99670) */

void FUN_102e99650(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e9967c; end: 102e996d7;  */

void FUN_102e9967c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e996d8; end: 102e99757;  */

void FUN_102e996d8(undefined8 param_1)

{
  if (lRam0000000112f25020 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e737668);
  return;
}



/* Entry: 102e99758; end: 102e9983f;  */

void FUN_102e99758(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1105e1de8;
  func_0x000107c613fc(&UNK_1105e1de8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x102e99848;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102e995fc;
  puStack_48 = &UNK_1105e1e28;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000100387660(0);
  func_0x000107c610f8();
  func_0x000102e998a8();
  *param_1 = puVar1;
  return;
}



/* Entry: 102e99840; end: 102e9984b;  */

void FUN_102e99840(long param_1,long param_2)

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



/* Entry: 102e9984c; end: 102e9985b; -[_TtC31MyAICameraChatPresenterServices31MyAICameraChatPresenterServices myAICameraChatPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9984c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f250e0));
  return;
}



/* Entry: 102e9985c; end: 102e998f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9985c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f250e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e998f4; end: 102e99953; -[_TtC31MyAICameraChatPresenterServices31MyAICameraChatPresenterServices init] */

void FUN_102e998f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyAICameraChatPresenterServices.MyAICameraChatPresenterServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e99920);
  (*pcVar1)();
}



/* Entry: 102e99954; end: 102e99963; -[_TtC31MyAICameraChatPresenterServices31MyAICameraChatPresenterServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e99954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f250e0));
  return;
}



/* Entry: 102e99964; end: 102e99adb;  */

long FUN_102e99964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  func_0x0001000285a8(0x112ed9688,&UNK_10db05e50);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar1 = param_8;
  func_0x000107c6157c(param_8);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x000100944768(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x000100944788(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar2);
  func_0x000107c61574(param_8);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102e99adc; end: 102e99b4f;  */

void FUN_102e99adc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102e99b50; end: 102e99b97;  */

undefined8 FUN_102e99b50(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102e9a21c();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102e99b98; end: 102e99bd3;  */

undefined1  [16] FUN_102e99b98(void)

{
  return ZEXT816(0x1105e2008);
}



/* Entry: 102e99bd4; end: 102e99c3f;  */

long FUN_102e99bd4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x000100944630();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x00010094469c();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 102e99c40; end: 102e99c6b;  */

void FUN_102e99c40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e99c6c; end: 102e99caf;  */

undefined1  [16] FUN_102e99c6c(void)

{
  return ZEXT816(0x1105e2088);
}



/* Entry: 102e99cb0; end: 102e99d03;  */

void FUN_102e99cb0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e99d04; end: 102e99ebf;  */

undefined8 FUN_102e99d04(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000102e99d50(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102e99ec0; end: 102e99ee3;  */

void FUN_102e99ec0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e99ee4; end: 102e99ee7;  */

void FUN_102e99ee4(void)

{
  return;
}



/* Entry: 102e99ee8; end: 102e99f0b;  */

undefined8 FUN_102e99ee8(void)

{
  func_0x000102e99e38();
  return 0;
}



/* Entry: 102e99f0c; end: 102e99f2b;  */

void FUN_102e99f0c(void)

{
  func_0x000107c61168(&PTR_PTR_112f25338);
  return;
}



/* Entry: 102e99f2c; end: 102e9a217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e99f2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_2;
  uVar12 = *(undefined8 *)(param_2 + _DAT_1130703c0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar4 = param_5;
  func_0x000107c4f1c8();
  func_0x000107c61180();
  puVar5 = &UNK_1105e2210;
  func_0x000107c613fc(&UNK_1105e2210,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_7;
  func_0x0001000285a8(0x112f1c950,&UNK_10db54f30);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar6 = FUN_102e9a218;
  func_0x0001000bdd8c(FUN_102e9a218,puVar5);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  lVar7 = 0;
  func_0x000100944a84();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar11 = lVar8 + _DAT_112f25828;
  *(undefined8 *)(lVar11 + 8) = 0;
  func_0x000107c61614(lVar11,0);
  *(undefined8 *)(lVar8 + _DAT_112f25868) = 0;
  lVar11 = _DAT_112f25870;
  lVar9 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar8 + lVar11,1,1,lVar9);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f25840);
  *puVar1 = uVar12;
  puVar1[1] = &PTR_DAT_11075d638;
  *(undefined8 *)(lVar8 + _DAT_112f25830) = param_8;
  *(undefined8 *)(lVar8 + _DAT_112f25848) = param_6;
  *(undefined8 *)(lVar8 + _DAT_112f25850) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112f25838) = param_4;
  *(undefined8 *)(lVar8 + _DAT_112f25858) = uVar4;
  *(code **)(lVar8 + _DAT_112f25820) = pcVar6;
  *(undefined **)(lVar8 + _DAT_112f25860) = puVar5;
  plVar10 = &lStack_70;
  lStack_70 = lVar8;
  lStack_68 = lVar7;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  *(long **)(unaff_x20 + 0x18) = plVar10;
  plVar2 = (long *)(param_2 + _DAT_1130703b8);
  func_0x000107c61428(plVar2,auStack_88,1,0);
  lVar11 = *plVar2;
  *plVar2 = (long)plVar10;
  plVar2[1] = (long)&PTR_DAT_1105e2668;
  func_0x000107c61174(plVar10);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(lVar11);
  return unaff_x20;
}



/* Entry: 102e9a218; end: 102e9a21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9a218(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fcab38);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e9a21c; end: 102e9a28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e9a21c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130703b8);
    func_0x000107c61428(puVar1,auStack_38,1,0);
    uVar2 = *puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c615e8(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar2);
  return 0;
}



/* Entry: 102e9a28c; end: 102e9a2b7;  */

void FUN_102e9a28c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e9a2b8; end: 102e9a2bb;  */

void FUN_102e9a2b8(void)

{
  return;
}


