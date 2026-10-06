/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023e7250; end: 1023e7a77;  */

void FUN_1023e7250(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,code *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  if (0xe < *(ulong *)(unaff_x20 + 0x48) >> 0x3c) {
    puVar1 = &UNK_1105009c0;
    func_0x000107c613fc(&UNK_1105009c0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    puVar2 = &UNK_110500bc8;
    func_0x000107c613fc(&UNK_110500bc8,0x44,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(code **)(puVar2 + 0x18) = param_7;
    *(undefined8 *)(puVar2 + 0x20) = param_8;
    *(undefined8 *)(puVar2 + 0x28) = param_3;
    *(int *)(puVar2 + 0x30) = (int)param_4;
    *(int *)(puVar2 + 0x34) = (int)((ulong)param_4 >> 0x20);
    *(undefined8 *)(puVar2 + 0x38) = param_5;
    *(undefined4 *)(puVar2 + 0x40) = param_6;
    lVar10 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c6157c(puVar1);
    func_0x0001013c2988(param_7,param_8);
    lVar3 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      puStack_98 = (undefined *)0x0;
      uStack_90 = 0xe000000000000000;
      func_0x000107c602fc(0x26);
      func_0x000107c6142c(uStack_90);
      puStack_98 = (undefined *)0xd000000000000024;
      uStack_90 = 0x800000010f097780;
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar5 = 0x112e94dc0;
      lStack_68 = lVar10;
      func_0x0001000285a8(0x112e94dc0,&UNK_10daa02a0);
      func_0x000107c5fb18(&lStack_68,uVar5);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar5);
      uVar5 = uStack_90;
      puVar7 = puStack_98;
      uVar6 = 0x737474;
      func_0x000107c5fadc(0x737474,0xe300000000000000);
      func_0x000107c5fadc(puVar7,uVar5);
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      param_1 = puVar8;
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c6142c(uVar5);
      func_0x000107c61428(puVar1 + 0x10,&puStack_98,0,0);
      puVar7 = puVar1 + 0x10;
      func_0x000107c61648();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = param_1;
        func_0x000107c61174(param_1);
        uVar6 = 0x737474;
        func_0x000107c5fadc(0x737474,0xe300000000000000);
        uVar5 = 0xd000000000000041;
        func_0x000107c5fadc(0xd000000000000041,0x800000010f0977b0);
        func_0x000107c42a5c(puVar8);
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
        if (param_7 == (code *)0x0) {
          func_0x000107c61170(puVar7);
          func_0x000107c61574(puVar2);
        }
        else {
          puVar9 = puVar8;
          func_0x000107c61174(puVar8);
          (*param_7)(puVar8);
          func_0x000107c61170(puVar7);
          func_0x000107c61574(puVar2);
          func_0x000107c61170(puVar9);
          puVar8 = puVar9;
        }
        func_0x000107c61170(puVar8);
      }
      else {
        if (param_7 != (code *)0x0) {
          puVar8 = param_1;
          func_0x000107c61174(param_1);
          (*param_7)(param_1);
          func_0x000107c61170(puVar8);
        }
        func_0x000107c61574(puVar2);
        func_0x000107c61574(puVar7);
      }
      func_0x000107c61574(puVar1);
    }
    else {
      func_0x000107c5fadc(param_1,param_2);
      puVar7 = &UNK_110500bf0;
      func_0x000107c613fc(&UNK_110500bf0,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x1023ed4a8;
      *(undefined **)(puVar7 + 0x18) = puVar2;
      pcStack_78 = FUN_1023ed4dc;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_10102dc58;
      puStack_80 = &UNK_110500c08;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar7;
      func_0x000107c60bc4(ppuVar4);
      puVar7 = puStack_70;
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar7);
      func_0x000107c50420(lVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(puVar1);
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1023e7a78; end: 1023e804f; -[_TtC24TextToSpeechServicesImpl23TextToSpeechCoordinator requestTextToSpeechPreviewForCaptionText:startTimeMs:captionPlaybackLayerId:completion:] */

void FUN_1023e7a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  if (param_6 == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar4 = &UNK_110500e48;
    func_0x000107c613fc(&UNK_110500e48,0x18,7);
    *(long *)(puVar4 + 0x10) = param_6;
    uVar5 = 0x1023ed834;
  }
  func_0x000107c6157c(param_1);
  FUN_1023e7250(param_3,param_2,uVar1,uVar2,uVar3,param_5,uVar5,puVar4);
  func_0x000100cf05d4(uVar5,puVar4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023e8050; end: 1023e80ff; -[_TtC24TextToSpeechServicesImpl23TextToSpeechCoordinator generateTextToSpeechPreviewForCaptionPlaybackLayerId:startOffset:completion:] */

void FUN_1023e8050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar4 = &UNK_110500e20;
    func_0x000107c613fc(&UNK_110500e20,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    uVar5 = 0x1023ed610;
  }
  func_0x000107c6157c(param_1);
  func_0x0001023e7b54(param_3,uVar1,uVar2,uVar3,uVar5,puVar4);
  func_0x000100cf05d4(uVar5,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1023e8100; end: 1023e8187; -[_TtC24TextToSpeechServicesImpl23TextToSpeechCoordinator removeTextToSpeechPreview] */

void FUN_1023e8100(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0xf000000000000000;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  func_0x000107c6157c();
  FUN_1023ed3a0(uVar4,uVar1,uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  func_0x000107c4d664(uVar4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1023e8188; end: 1023e85f3;  */

/* WARNING: Possible PIC construction at 0x0001023e8218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e8590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e841c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e8594) */
/* WARNING: Removing unreachable block (ram,0x0001023e821c) */
/* WARNING: Removing unreachable block (ram,0x0001023e8420) */

void FUN_1023e8188(ulong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined8 uVar12;
  ulong unaff_x21;
  ulong uVar13;
  ulong unaff_x22;
  int iVar14;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar8 = &puStack_80;
  puVar10 = &stack0xfffffffffffffff0;
  uVar13 = *(ulong *)(unaff_x20 + 0x48);
  if (0xe < uVar13 >> 0x3c) {
    FUN_1023ef9e0();
    if (param_1 != 0) {
      unaff_x19 = *(undefined **)(unaff_x20 + 0x28);
      func_0x000107c4e920();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d0();
      func_0x000107c41718();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(unaff_x19);
      unaff_x30 = 0x1023e821c;
      register0x00000008 = (BADSPACEBASE *)&puStack_80;
      unaff_x21 = param_1;
      unaff_x29 = puVar10;
    }
SUB_1023e8934:
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c426e0();
    if ((int)uVar9 != 0) {
      FUN_1023eb68c();
      func_0x0001023ea248();
      puVar6 = &UNK_1105009c0;
      func_0x000107c613fc(&UNK_1105009c0,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,unaff_x20);
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0x1023ed3bc;
      *(undefined **)((long)register0x00000008 + -0x38) = puVar6;
      *(undefined **)((long)register0x00000008 + -0x60) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0x42000000;
      *(undefined **)((long)register0x00000008 + -0x50) = &UNK_10141ff74;
      *(undefined **)((long)register0x00000008 + -0x48) = &UNK_110500a00;
      func_0x000107c60bc4((undefined1 *)((long)register0x00000008 + -0x60));
      func_0x000107c61574(*(undefined8 *)((long)register0x00000008 + -0x38));
      pcVar11 = "updateTextToSpeechFromSnapdoc()";
      func_0x0001000c10c0("updateTextToSpeechFromSnapdoc()");
      func_0x000107c61180();
      func_0x000107c5dc64(uVar9);
      func_0x000107c615e8(pcVar11);
      func_0x000107c60bd0(puVar10);
      func_0x000107c61170(uVar9);
    }
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(uint *)(unaff_x20 + 0x50);
  unaff_x22 = (ulong)uVar1;
  unaff_x19 = &UNK_1105009c0;
  func_0x000107c613fc(&UNK_1105009c0,0x18,7);
  func_0x000107c61644(unaff_x19 + 0x10);
  iVar14 = (int)*(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001023ed3c4(uVar9,uVar13,unaff_x22);
  func_0x000107c6157c(unaff_x19);
  func_0x0001023ed3c4(uVar9,uVar13,unaff_x22);
  func_0x000107c6157c(unaff_x19);
  iVar3 = iVar14;
  func_0x000107c426e0();
  unaff_x21 = uVar13;
  if (iVar3 == 0) {
    func_0x000107c61428(unaff_x19 + 0x10,&puStack_80,0,0);
    unaff_x20 = unaff_x19 + 0x10;
    func_0x000107c61648();
    if (unaff_x20 != (undefined *)0x0) {
      uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar2 = *(undefined4 *)(unaff_x20 + 0x50);
      *(undefined8 *)(unaff_x20 + 0x48) = 0xf000000000000000;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      *(undefined4 *)(unaff_x20 + 0x50) = 0;
      func_0x0001023ed3a0(uVar9,uVar12,uVar2);
      unaff_x30 = 0x1023e8420;
      register0x00000008 = (BADSPACEBASE *)&puStack_80;
      unaff_x29 = puVar10;
      goto SUB_1023e8934;
    }
  }
  else {
    uVar4 = unaff_x22;
    FUN_1023ef9e0();
    if (uVar4 != 0) {
      uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
      puVar6 = &UNK_1105009c0;
      func_0x000107c613fc(&UNK_1105009c0,0x18,7);
      func_0x000107c61644(puVar6 + 0x10);
      puVar7 = &UNK_110500a88;
      func_0x000107c613fc(&UNK_110500a88,0x40,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = 0x1023ed3d8;
      *(undefined **)(puVar7 + 0x20) = unaff_x19;
      *(ulong *)(puVar7 + 0x28) = uVar4;
      *(undefined8 *)(puVar7 + 0x30) = uVar9;
      *(ulong *)(puVar7 + 0x38) = uVar13;
      uStack_60 = 0x1023ed3ec;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110500aa0;
      puStack_58 = puVar7;
      func_0x000107c60bc4(&puStack_80);
      puVar6 = puStack_58;
      func_0x0001023ed3c4(uVar9,uVar13,unaff_x22);
      func_0x000107c6157c(unaff_x19);
      func_0x000107c61174(uVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c4e524(uVar12);
      func_0x000107c61578(unaff_x19,2);
      func_0x0001023ed3a0(uVar9,uVar13,unaff_x22);
      func_0x0001023ed3a0(uVar9,uVar13,unaff_x22);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(unaff_x19);
      func_0x000107c61170(uVar4);
      return;
    }
    func_0x000107c426e0();
    if (iVar14 == 0) {
      func_0x000107c61428(unaff_x19 + 0x10,&puStack_80,0,0);
      unaff_x20 = unaff_x19 + 0x10;
      func_0x000107c61648();
      if (unaff_x20 != (undefined *)0x0) {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
        uVar2 = *(undefined4 *)(unaff_x20 + 0x50);
        *(undefined8 *)(unaff_x20 + 0x48) = 0xf000000000000000;
        *(undefined8 *)(unaff_x20 + 0x40) = 0;
        *(undefined4 *)(unaff_x20 + 0x50) = 0;
        func_0x0001023ed3a0(uVar9,uVar12,uVar2);
        unaff_x30 = 0x1023e8594;
        register0x00000008 = (BADSPACEBASE *)&puStack_80;
        unaff_x29 = puVar10;
        goto SUB_1023e8934;
      }
      func_0x000107c61574(unaff_x19);
      func_0x000107c61574(unaff_x19);
      goto LAB_1023e85b0;
    }
    uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
    puVar6 = &UNK_1105009c0;
    func_0x000107c613fc(&UNK_1105009c0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar7 = &UNK_110500a38;
    func_0x000107c613fc(&UNK_110500a38,0x3c,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = 0x1023ed3d8;
    *(undefined **)(puVar7 + 0x20) = unaff_x19;
    *(undefined8 *)(puVar7 + 0x28) = uVar9;
    *(ulong *)(puVar7 + 0x30) = uVar13;
    *(uint *)(puVar7 + 0x38) = uVar1;
    uStack_60 = 0x1023ed3e0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110500a50;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x0001023ed3c4(uVar9,uVar13,unaff_x22);
    func_0x000107c6157c(unaff_x19);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(uVar12);
    func_0x000107c60bd0(ppuVar8);
  }
  func_0x000107c61578(unaff_x19,2);
LAB_1023e85b0:
  func_0x0001023ed3a0(uVar9,uVar13,unaff_x22);
  func_0x0001023ed3a0(uVar9,uVar13,unaff_x22);
  func_0x000107c61574(unaff_x19);
  return;
}



/* Entry: 1023e85f4; end: 1023e8667;  */

void FUN_1023e85f4(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = 0xf000000000000000;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_1023ed3a0(uVar2,uVar3,uVar1);
    func_0x0001023e8934();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1023e8668; end: 1023e8697; -[_TtC24TextToSpeechServicesImpl23TextToSpeechCoordinator commitTextToSpeechPreviewForCaptionPlaybackLayerId:] */

void FUN_1023e8668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_1023e8188(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1023e8698; end: 1023e879b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e871c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x0001023e8720) */

void FUN_1023e8698(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar4 = *(ulong *)(unaff_x20 + 0x40);
  uVar2 = *(ulong *)(unaff_x20 + 0x48);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x50);
  func_0x0001023ed3c4(uVar4,uVar2,uVar3);
  if (uVar2 >> 0x3c < 0xf) {
    func_0x00010006c00c(uVar4,uVar2);
    unaff_x30 = 0x1023e8720;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x19 = uVar4;
    unaff_x29 = puVar1;
  }
  if (uVar2 >> 0x3c < 0xf) {
    uVar5 = (uint)(uVar2 >> 0x3e);
    if (uVar5 == 1) {
      uVar4 = uVar2 & 0x3fffffffffffffff;
    }
    else {
      if (uVar5 != 2) {
        return;
      }
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4,uVar2,uVar3);
    return;
  }
  return;
}



/* Entry: 1023e879c; end: 1023e87df; -[_TtC24TextToSpeechServicesImpl23TextToSpeechCoordinator updateTextToSpeechPreviewWithStartOffset:] */

void FUN_1023e879c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  func_0x000107c6157c();
  FUN_1023e8698(uVar1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1023e87e0; end: 1023e88a7;  */

/* WARNING: Possible PIC construction at 0x0001023e8850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e8854) */
/* WARNING: Removing unreachable block (ram,0x0001023e8868) */
/* WARNING: Removing unreachable block (ram,0x0001023e8870) */

void FUN_1023e87e0(long param_1,code *param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  FUN_1023ef9e0();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c4e920();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d0();
    func_0x000107c41718(uVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 1023e88a8; end: 1023e8adf; -[_TtC24TextToSpeechServicesImpl23TextToSpeechCoordinator removeTextToSpeechForCaptionPlaybackLayerId:completion:] */

void FUN_1023e88a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_110500df8;
    func_0x000107c613fc(&UNK_110500df8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x1023ed604;
  }
  func_0x000107c6157c(param_1);
  FUN_1023e87e0(param_3,uVar2,puVar1);
  func_0x000100cf05d4(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1023e8ae0; end: 1023e8b07; -[_TtC24TextToSpeechServicesImpl23TextToSpeechCoordinator updateTextToSpeechFromSnapdoc] */

void FUN_1023e8ae0(undefined8 param_1)

{
  func_0x000107c6157c();
  func_0x0001023e8934();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1023e8b08; end: 1023e9097;  */

void FUN_1023e8b08(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  long extraout_x8;
  long lVar21;
  long unaff_x20;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_130;
  ulong uStack_108;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined8 auStack_a8 [3];
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar24 = (long)&uStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c426e0();
  if ((int)uVar5 != 0) {
    lVar22 = *(long *)(unaff_x20 + 0x30);
    func_0x0001023efda4();
    if (uVar5 >> 0x3e == 0) {
      uVar25 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar25 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar25 = uVar5;
      }
      func_0x000107c60480();
    }
    puVar2 = PTR___sypN_11034f1a8;
    uStack_108 = uVar5 & 0xffffffffffffff8;
    if (uVar25 == 0) {
      puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar26 = 0;
      puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_108 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1023e9064);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar5 + 0x20 + uVar26 * 8);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar26;
          func_0x00010121c1ac(uVar26,uVar5);
        }
        if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023e9060);
          (*pcVar3)();
        }
        uVar26 = uVar26 + 1;
        uVar7 = uVar6;
        func_0x000107c40c84();
        func_0x000107c61180();
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023e908c);
          (*pcVar3)();
        }
        uVar8 = uVar7;
        func_0x000107c42ebc();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        if (uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1023e9090);
          (*pcVar3)();
        }
        func_0x000107c600f4(lVar24);
        func_0x000100e15a08();
        while (func_0x000107c601c0(auStack_a8,lVar4,uVar7), lStack_90 != 0) {
          func_0x000100102924(auStack_a8,auStack_c8);
          func_0x0001000bb420(auStack_c8,auStack_e8);
          uVar9 = 0;
          FUN_1023ed42c(0,0x112e94db0,&PTR_PTR_1126bce90);
          puVar10 = &uStack_f0;
          func_0x000107c6147c(puVar10,auStack_e8,puVar2 + 8,uVar9,6);
          uVar16 = uStack_f0;
          if ((int)puVar10 != 0) {
            uVar11 = uStack_f0;
            func_0x000107c40c8c();
            func_0x000107c61170(uVar16);
            if ((int)uVar11 == 5) {
              func_0x000107c61170(uVar8);
              (**(code **)(lVar20 + 8))(lVar24,lVar4);
              func_0x000100102924(auStack_c8,auStack_88);
              puVar10 = auStack_a8;
              puVar17 = auStack_88;
              func_0x000107c6147c(puVar10,puVar17,puVar2 + 8,uVar9,6);
              uVar16 = auStack_a8[0];
              if (((ulong)puVar10 & 1) != 0) {
                lVar23 = *(long *)(lVar22 + 0x10);
                uVar9 = auStack_a8[0];
                func_0x000107c5c6ac(auStack_a8[0]);
                func_0x000107c606d4();
                func_0x000107c4e924();
                func_0x000107c61180();
                func_0x000107c61170(uVar16);
                func_0x000107c61170(uVar9);
                if (lVar23 != 0) {
                  lVar12 = lVar23;
                  func_0x000107c4e920();
                  lVar21 = *(long *)(lVar22 + 0x10);
                  func_0x000107c606d4();
                  lVar19 = lVar12;
                  func_0x000107c4e924();
                  func_0x000107c61180();
                  func_0x000107c61170(lVar12);
                  if (lVar21 != 0) {
                    lVar12 = lVar21;
                    func_0x000107c40dc8();
                    func_0x000107c61180();
                    if (lVar12 == 0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023e9098);
                      (*pcVar3)();
                    }
                    lVar13 = lVar12;
                    func_0x000107c4ce20();
                    func_0x000107c61180();
                    func_0x000107c61170(lVar12);
                    if (lVar13 == 0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023e9094);
                      (*pcVar3)();
                    }
                    lVar12 = lVar13;
                    func_0x000107c3f558();
                    func_0x000107c61180();
                    func_0x000107c61170(lVar13);
                    if (lVar12 != 0) {
                      lVar13 = lVar12;
                      func_0x000107c5c82c();
                      func_0x000107c61180();
                      if (lVar13 != 0) {
                        lVar14 = lVar13;
                        func_0x000107c5faec();
                        puVar18 = puVar17;
                        lStack_148 = lVar14;
                        func_0x000107c61170(lVar13);
                        func_0x000107c61170(lVar12);
                        func_0x000107c61170(lVar21);
                        lVar12 = lVar23;
                        func_0x000107c4e920();
                        FUN_1023ef1f4();
                        uVar7 = uVar6;
                        lStack_158 = lVar12;
                        lStack_150 = lVar19;
                        func_0x000107c4e920();
                        uStack_15c = (undefined4)uVar7;
                        lVar12 = lVar23;
                        func_0x000107c4e920();
                        uStack_160 = (undefined4)lVar12;
                        func_0x000107c61170(lVar23);
                        func_0x000107c61170(uVar6);
                        puVar15 = puStack_130;
                        func_0x000107c61558();
                        if (((ulong)puVar15 & 1) == 0) {
                          plVar1 = (long *)(puStack_130 + 0x10);
                          puStack_130 = (undefined *)0x0;
                          FUN_1023f0a94(0,*plVar1 + 1,1);
                        }
                        uVar6 = *(ulong *)(puStack_130 + 0x10);
                        if (*(ulong *)(puStack_130 + 0x18) >> 1 <= uVar6) {
                          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puStack_130 + 0x18));
                          FUN_1023f0a94(puVar15,uVar6 + 1,1,puStack_130);
                          puStack_130 = puVar15;
                        }
                        *(ulong *)(puStack_130 + 0x10) = uVar6 + 1;
                        *(long *)(puStack_130 + uVar6 * 0x30 + 0x20) = lStack_148;
                        *(undefined1 **)(puStack_130 + uVar6 * 0x30 + 0x28) = puVar17;
                        *(long *)(puStack_130 + uVar6 * 0x30 + 0x30) = lStack_158;
                        *(int *)(puStack_130 + uVar6 * 0x30 + 0x38) = (int)puVar18;
                        *(int *)(puStack_130 + uVar6 * 0x30 + 0x3c) = (int)((ulong)puVar18 >> 0x20);
                        *(long *)(puStack_130 + uVar6 * 0x30 + 0x40) = lStack_150;
                        *(undefined4 *)(puStack_130 + uVar6 * 0x30 + 0x48) = uStack_15c;
                        *(undefined4 *)(puStack_130 + uVar6 * 0x30 + 0x4c) = uStack_160;
                        goto LAB_1023e8e78;
                      }
                      func_0x000107c61170(lVar12);
                    }
                    func_0x000107c61170(lVar21);
                  }
                  func_0x000107c61170(lVar23);
                }
              }
              func_0x000107c61170(uVar6);
              goto LAB_1023e8e78;
            }
          }
          func_0x000100183ab8(auStack_c8);
        }
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar6);
        (**(code **)(lVar20 + 8))(lVar24,lVar4);
LAB_1023e8e78:
      } while (uVar26 != uVar25);
    }
    func_0x000107c6142c(uVar5);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined **)(unaff_x20 + 0x38) = puStack_130;
    func_0x000107c6142c(uVar16);
  }
  return;
}



/* Entry: 1023e9098; end: 1023e91ef;  */

/* WARNING: Possible PIC construction at 0x0001023e9168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e9194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e9198) */
/* WARNING: Removing unreachable block (ram,0x0001023e916c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1023e9098(ulong param_1,ulong param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    func_0x000107c614b0(param_3);
    (*param_4)(0,0xf000000000000000,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_3);
    return;
  }
  if (param_2 >> 0x3c < 0xf) {
    func_0x00010006c00c();
    (*param_4)(param_1,param_2,0);
    if (0xe < param_2 >> 0x3c) {
      return;
    }
    uVar2 = (uint)(param_2 >> 0x3e);
    if (uVar2 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar2 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  uVar1 = 0x737474;
  func_0x000107c5fadc(0x737474,0xe300000000000000);
  func_0x000107c5fadc(0xd000000000000041,0x800000010f097800);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1023e91f0; end: 1023e92d7;  */

void FUN_1023e91f0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c3f794(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_1105009c0;
  func_0x000107c613fc(&UNK_1105009c0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x1023ed3b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_10123fffc;
  puStack_48 = &UNK_1105009d8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1023e92d8; end: 1023e9333;  */

void FUN_1023e92d8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1023e9334(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1023e9334; end: 1023e94c3;  */

/* WARNING: Possible PIC construction at 0x0001023e9398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e93f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e9450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e93fc) */
/* WARNING: Removing unreachable block (ram,0x0001023e94b0) */
/* WARNING: Removing unreachable block (ram,0x0001023e94b4) */
/* WARNING: Removing unreachable block (ram,0x0001023e9408) */
/* WARNING: Removing unreachable block (ram,0x0001023e940c) */
/* WARNING: Removing unreachable block (ram,0x0001023ea188) */
/* WARNING: Removing unreachable block (ram,0x0001023ea194) */
/* WARNING: Removing unreachable block (ram,0x0001023ea178) */
/* WARNING: Removing unreachable block (ram,0x0001023e939c) */
/* WARNING: Removing unreachable block (ram,0x0001023ea0b0) */
/* WARNING: Removing unreachable block (ram,0x0001023ea1b0) */
/* WARNING: Removing unreachable block (ram,0x0001023ea0e0) */
/* WARNING: Removing unreachable block (ram,0x0001023ea1d4) */
/* WARNING: Removing unreachable block (ram,0x0001023ea1dc) */
/* WARNING: Removing unreachable block (ram,0x0001023ea0f8) */
/* WARNING: Removing unreachable block (ram,0x0001023ea1ec) */
/* WARNING: Removing unreachable block (ram,0x0001023ea104) */
/* WARNING: Removing unreachable block (ram,0x0001023ea110) */
/* WARNING: Removing unreachable block (ram,0x0001023ea198) */
/* WARNING: Removing unreachable block (ram,0x0001023ea114) */
/* WARNING: Removing unreachable block (ram,0x0001023ea1d0) */
/* WARNING: Removing unreachable block (ram,0x0001023ea120) */
/* WARNING: Removing unreachable block (ram,0x0001023ea1ac) */
/* WARNING: Removing unreachable block (ram,0x0001023ea134) */
/* WARNING: Removing unreachable block (ram,0x0001023e9454) */
/* WARNING: Removing unreachable block (ram,0x0001023e9414) */
/* WARNING: Removing unreachable block (ram,0x0001023e941c) */
/* WARNING: Removing unreachable block (ram,0x0001023e9460) */
/* WARNING: Removing unreachable block (ram,0x0001023e9420) */
/* WARNING: Removing unreachable block (ram,0x0001023e94ac) */
/* WARNING: Removing unreachable block (ram,0x0001023e942c) */
/* WARNING: Removing unreachable block (ram,0x0001023e9474) */
/* WARNING: Removing unreachable block (ram,0x0001023e9440) */
/* WARNING: Removing unreachable block (ram,0x0001023e945c) */
/* WARNING: Removing unreachable block (ram,0x0001023e9490) */

void FUN_1023e9334(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  if (((*(byte *)(unaff_x20 + 0x10) & 1) == 0) &&
     (*(long *)(*(long *)(unaff_x20 + 0x38) + 0x10) != 0)) {
    lVar3 = param_1;
    func_0x000107c41cd4();
    if ((int)lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar2 = *(undefined4 *)(unaff_x20 + 0x50);
      *(undefined8 *)(unaff_x20 + 0x48) = 0xf000000000000000;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      *(undefined4 *)(unaff_x20 + 0x50) = 0;
      FUN_1023ed3a0(uVar4,uVar1,uVar2);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined **)(unaff_x20 + 0x38) = PTR___swiftEmptyArrayStorage_11034f1c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
      return;
    }
    func_0x000107c4e910();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar4 = 0;
      FUN_1023ed42c(0,0x112d6ad10,&PTR_PTR_1126bce68);
      func_0x000107c5fc54(param_1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1023e94c4; end: 1023e9b13;  */

void FUN_1023e94c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_c0 [48];
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = param_1;
  func_0x000107c3f7bc();
  if (lVar3 == 2) {
    func_0x000107c4e90c();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c4e920();
    func_0x000107c61170(param_1);
    lVar5 = lVar3;
    FUN_1023ef9e0();
    if (lVar5 != 0) {
      lVar11 = *(long *)(unaff_x20 + 0x38);
      uVar12 = *(ulong *)(lVar11 + 0x10);
      if (uVar12 == 0) {
        func_0x000107c61170(lVar5);
      }
      else {
        func_0x000107c61434(lVar11);
        lVar13 = 0;
        uVar14 = 0;
        do {
          if (*(ulong *)(lVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023e97b4);
            (*pcVar2)();
          }
          if ((*(int *)(lVar11 + lVar13 + 0x4c) == (int)lVar3) &&
             (iVar1 = *(int *)(lVar11 + lVar13 + 0x48), lVar6 = lVar5, func_0x000107c4e920(),
             iVar1 == (int)lVar6)) {
            func_0x000107c6142c(lVar11);
            if (*(ulong *)(*(long *)(unaff_x20 + 0x38) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1023e97b8);
              (*pcVar2)();
            }
            lVar13 = *(long *)(unaff_x20 + 0x38) + lVar13;
            uStack_88 = *(undefined8 *)(lVar13 + 0x28);
            uStack_90 = *(undefined8 *)(lVar13 + 0x20);
            uStack_78 = *(undefined8 *)(lVar13 + 0x38);
            uStack_80 = *(ulong *)(lVar13 + 0x30);
            uStack_68 = *(undefined8 *)(lVar13 + 0x48);
            uStack_70 = *(undefined8 *)(lVar13 + 0x40);
            puVar8 = auStack_c0;
            FUN_1023ed330(&uStack_90);
            lVar11 = lVar3;
            FUN_1023ef8cc(lVar3);
            if (puVar8 == (undefined1 *)0x0) {
              func_0x000107c61170(lVar5);
              func_0x0001023ed378(&uStack_90);
              return;
            }
            lVar13 = lVar3;
            puVar9 = puVar8;
            FUN_1023ef1f4();
            uVar7 = uStack_88;
            uVar10 = uStack_90;
            FUN_1023ed330(&uStack_90,auStack_c0);
            func_0x000107c5fadc(uVar10,uVar7);
            func_0x0001023ed378(&uStack_90);
            lVar6 = lVar11;
            func_0x000107c5fadc(lVar11,puVar8);
            uVar7 = uVar10;
            func_0x000107c49cec();
            func_0x000107c61170(uVar10);
            func_0x000107c61170(lVar6);
            if ((int)uVar7 == 0) {
              func_0x0001023ed378(&uStack_90);
            }
            else {
              uVar12 = uStack_80;
              func_0x000107c600c4(uStack_80,uStack_78,uStack_70,lVar13,puVar9,param_3);
              func_0x0001023ed378(&uStack_90);
              if ((uVar12 & 1) != 0) {
                func_0x000107c6142c(puVar8);
                goto LAB_1023e9584;
              }
            }
            FUN_1023e65d4(lVar11,puVar8,lVar3,0,0);
            func_0x000107c6142c(puVar8);
            goto LAB_1023e958c;
          }
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x30;
        } while (uVar12 != uVar14);
        func_0x000107c61170(lVar5);
        func_0x000107c6142c(lVar11);
      }
    }
  }
  else if (lVar3 == 3) {
    func_0x000107c4e90c();
    func_0x000107c61180();
    lVar5 = param_1;
    func_0x000107c4e920();
    func_0x000107c61170(param_1);
    FUN_1023ef9e0();
    if (lVar5 != 0) {
      uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x000107c4e920();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d0();
      func_0x000107c41718(uVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar10);
LAB_1023e9584:
      func_0x0001023e8934();
LAB_1023e958c:
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 1023e9b14; end: 1023e9bfb;  */

/* WARNING: Possible PIC construction at 0x0001023e9bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e9bc0) */

void FUN_1023e9b14(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_1023f2e28();
  if (lVar1 != 0) {
    FUN_1023f27ac(param_4,param_5,param_6);
    func_0x000107c54358(lVar1);
    lVar2 = param_1;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c610f8(PTR_PTR_1126c7b90);
      func_0x000107c453e4();
    }
    func_0x000107c54ef4();
    func_0x000107c5799c(param_1);
    func_0x000107c563e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  (*param_2)();
  return;
}



/* Entry: 1023e9bfc; end: 1023e9f73;  */

void FUN_1023e9bfc(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    puVar2 = PTR_PTR_1126b25c8;
    func_0x000107c610f8(PTR_PTR_1126b25c8);
    func_0x000107c453e4();
    func_0x000107c5293c();
    puVar3 = PTR_PTR_1126b3080;
    func_0x000107c61168();
    uVar8 = param_4;
    func_0x000107c5ee20(param_4,param_5);
    func_0x000107c412fc();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c5c52c(uVar4);
    func_0x000107c61180();
    func_0x000107c56420(puVar2);
    puVar5 = PTR_PTR_1126bce90;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53ad0();
    func_0x000107c59bb0(puVar5);
    puVar6 = PTR_PTR_1126bce98;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar7 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    uVar8 = 0;
    FUN_1023ed42c(0,0x112e94db0,&PTR_PTR_1126bce90);
    *(undefined8 *)(lVar7 + 0x38) = uVar8;
    *(undefined **)(lVar7 + 0x20) = puVar5;
    uVar8 = 0x112d538a8;
    FUN_1023ed42c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x000107c61174();
    func_0x000107c600f0(lVar7);
    func_0x000107c54934(puVar6);
    func_0x000107c61170(lVar7);
    puVar9 = PTR_PTR_1126b25d0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c563e8();
    puVar11 = puVar6;
    func_0x000107c53acc(puVar9);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c6157c(uVar12);
    FUN_1023ef1f4();
    func_0x000107c61574(uVar12);
    uStack_a8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_88 = (undefined4)uVar8;
    uStack_84 = (undefined4)((ulong)uVar8 >> 0x20);
    uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    puVar10 = &uStack_90;
    uStack_90 = param_6;
    puStack_80 = puVar11;
    func_0x000107c60a38(puVar10,&uStack_a8);
    bVar1 = (int)puVar10 == 0;
    if (bVar1) {
      param_6 = 0;
    }
    else {
      FUN_1023f27ac(param_6,uVar8,puVar11);
    }
    uVar13 = (uint)bVar1;
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c6157c(uVar8);
    FUN_1023eed2c(param_6);
    func_0x000107c61574(uVar8);
    if ((uVar13 & 0xff) == 1) {
      (*param_2)();
    }
    else {
      puVar11 = &UNK_110500b50;
      func_0x000107c613fc(&UNK_110500b50,0x30,7);
      *(code **)(puVar11 + 0x10) = param_2;
      *(undefined8 *)(puVar11 + 0x18) = param_3;
      *(undefined **)(puVar11 + 0x20) = puVar9;
      *(long *)(puVar11 + 0x28) = param_1;
      func_0x000107c6157c(param_3);
      func_0x000107c61174(puVar9);
      func_0x000107c6157c(param_1);
      FUN_1023f2ec4(param_4,param_5,param_6,FUN_1023ed46c,puVar11);
      func_0x000107c61574(puVar11);
    }
    func_0x000107c61574(param_1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 1023e9f74; end: 1023ea0af;  */

/* WARNING: Possible PIC construction at 0x0001023e9fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea06c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ea064) */
/* WARNING: Removing unreachable block (ram,0x0001023ea04c) */
/* WARNING: Removing unreachable block (ram,0x0001023ea008) */
/* WARNING: Removing unreachable block (ram,0x0001023ea0ac) */
/* WARNING: Removing unreachable block (ram,0x0001023ea038) */
/* WARNING: Removing unreachable block (ram,0x0001023e9fe0) */
/* WARNING: Removing unreachable block (ram,0x0001023ea0a8) */
/* WARNING: Removing unreachable block (ram,0x0001023e9ff4) */
/* WARNING: Removing unreachable block (ram,0x0001023ea070) */

void FUN_1023e9f74(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126c7b90;
    func_0x000107c610f8(PTR_PTR_1126c7b90);
    func_0x000107c61174(param_1);
    func_0x000107c453e4(puVar1);
    func_0x000107c5799c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  (*param_2)();
  return;
}



/* Entry: 1023ea0b0; end: 1023ea797;  */

/* WARNING: Possible PIC construction at 0x0001023ea174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ea178) */
/* WARNING: Removing unreachable block (ram,0x0001023ea188) */
/* WARNING: Removing unreachable block (ram,0x0001023ea194) */
/* WARNING: Removing unreachable block (ram,0x0001023ea1ac) */

void FUN_1023ea0b0(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x28);
  uVar2 = uVar5;
  func_0x000107c426e0();
  if ((int)uVar2 == 0) {
    return;
  }
  func_0x0001023efda4();
  if (uVar2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar6 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    func_0x000107c6142c(uVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar3 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4d664(uVar4);
  }
  else {
    if ((uVar2 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ea1d4);
        (*pcVar1)();
      }
      puVar3 = *(undefined **)(uVar2 + 0x20);
      func_0x000107c61174(puVar3);
    }
    else {
      puVar3 = (undefined *)0x0;
      func_0x00010121c1ac(0,uVar2);
    }
    func_0x000107c4e920();
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d0();
    func_0x000107c41718(uVar5);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1023ea798; end: 1023ea86b;  */

bool FUN_1023ea798(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  uVar4 = *param_2;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ea860);
    (*pcVar1)();
  }
  uVar3 = uVar2;
  func_0x000107c44430();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ea864);
    (*pcVar1)();
  }
  uVar2 = uVar3;
  func_0x000107c5bbe8(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ea868);
    (*pcVar1)();
  }
  uVar3 = uVar4;
  func_0x000107c44430();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5bbe8(uVar3);
    func_0x000107c61170(uVar3);
    return uVar2 < uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ea86c);
  (*pcVar1)();
}



/* Entry: 1023ea86c; end: 1023eb68b;  */

/* WARNING: Possible PIC construction at 0x0001023ea8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eaaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eabc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ead84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ead94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eada4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eade0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eae48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eaf3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eaf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eaf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023eb084) */
/* WARNING: Removing unreachable block (ram,0x0001023eb05c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1c4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1b4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb184) */
/* WARNING: Removing unreachable block (ram,0x0001023eb118) */
/* WARNING: Removing unreachable block (ram,0x0001023eb324) */
/* WARNING: Removing unreachable block (ram,0x0001023eb314) */
/* WARNING: Removing unreachable block (ram,0x0001023eb304) */
/* WARNING: Removing unreachable block (ram,0x0001023eb2f4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb2c4) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf60) */
/* WARNING: Removing unreachable block (ram,0x0001023eb678) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf68) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf50) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf40) */
/* WARNING: Removing unreachable block (ram,0x0001023eae4c) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf9c) */
/* WARNING: Removing unreachable block (ram,0x0001023eafa4) */
/* WARNING: Removing unreachable block (ram,0x0001023eafb0) */
/* WARNING: Removing unreachable block (ram,0x0001023eae54) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1e0) */
/* WARNING: Removing unreachable block (ram,0x0001023eae60) */
/* WARNING: Removing unreachable block (ram,0x0001023eafcc) */
/* WARNING: Removing unreachable block (ram,0x0001023eae68) */
/* WARNING: Removing unreachable block (ram,0x0001023eb66c) */
/* WARNING: Removing unreachable block (ram,0x0001023eae74) */
/* WARNING: Removing unreachable block (ram,0x0001023eae7c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb478) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf28) */
/* WARNING: Removing unreachable block (ram,0x0001023eade4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1d4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1ec) */
/* WARNING: Removing unreachable block (ram,0x0001023eae04) */
/* WARNING: Removing unreachable block (ram,0x0001023eb470) */
/* WARNING: Removing unreachable block (ram,0x0001023eb460) */
/* WARNING: Removing unreachable block (ram,0x0001023eb46c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb450) */
/* WARNING: Removing unreachable block (ram,0x0001023eb440) */
/* WARNING: Removing unreachable block (ram,0x0001023eb410) */
/* WARNING: Removing unreachable block (ram,0x0001023eb508) */
/* WARNING: Removing unreachable block (ram,0x0001023eb4f8) */
/* WARNING: Removing unreachable block (ram,0x0001023eb4e8) */
/* WARNING: Removing unreachable block (ram,0x0001023eb4c0) */
/* WARNING: Removing unreachable block (ram,0x0001023eb4b0) */
/* WARNING: Removing unreachable block (ram,0x0001023eb0a4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb514) */
/* WARNING: Removing unreachable block (ram,0x0001023eb530) */
/* WARNING: Removing unreachable block (ram,0x0001023eada8) */
/* WARNING: Removing unreachable block (ram,0x0001023eaa64) */
/* WARNING: Removing unreachable block (ram,0x0001023eaa70) */
/* WARNING: Removing unreachable block (ram,0x0001023eadb0) */
/* WARNING: Removing unreachable block (ram,0x0001023eb67c) */
/* WARNING: Removing unreachable block (ram,0x0001023ead98) */
/* WARNING: Removing unreachable block (ram,0x0001023ead88) */
/* WARNING: Removing unreachable block (ram,0x0001023eac44) */
/* WARNING: Removing unreachable block (ram,0x0001023eafb4) */
/* WARNING: Removing unreachable block (ram,0x0001023eafbc) */
/* WARNING: Removing unreachable block (ram,0x0001023eac4c) */
/* WARNING: Removing unreachable block (ram,0x0001023eac54) */
/* WARNING: Removing unreachable block (ram,0x0001023eb32c) */
/* WARNING: Removing unreachable block (ram,0x0001023eac60) */
/* WARNING: Removing unreachable block (ram,0x0001023eafdc) */
/* WARNING: Removing unreachable block (ram,0x0001023eac68) */
/* WARNING: Removing unreachable block (ram,0x0001023eb674) */
/* WARNING: Removing unreachable block (ram,0x0001023eac74) */
/* WARNING: Removing unreachable block (ram,0x0001023eac7c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb670) */
/* WARNING: Removing unreachable block (ram,0x0001023eac9c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb488) */
/* WARNING: Removing unreachable block (ram,0x0001023ead7c) */
/* WARNING: Removing unreachable block (ram,0x0001023eabc8) */
/* WARNING: Removing unreachable block (ram,0x0001023eb338) */
/* WARNING: Removing unreachable block (ram,0x0001023eabf4) */
/* WARNING: Removing unreachable block (ram,0x0001023eaaf0) */
/* WARNING: Removing unreachable block (ram,0x0001023eb0ac) */
/* WARNING: Removing unreachable block (ram,0x0001023eaaf4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb558) */
/* WARNING: Removing unreachable block (ram,0x0001023eaaf8) */
/* WARNING: Removing unreachable block (ram,0x0001023eb55c) */
/* WARNING: Removing unreachable block (ram,0x0001023eab28) */
/* WARNING: Removing unreachable block (ram,0x0001023eadb4) */
/* WARNING: Removing unreachable block (ram,0x0001023eab60) */
/* WARNING: Removing unreachable block (ram,0x0001023eb664) */
/* WARNING: Removing unreachable block (ram,0x0001023eab70) */
/* WARNING: Removing unreachable block (ram,0x0001023eb668) */
/* WARNING: Removing unreachable block (ram,0x0001023eab80) */
/* WARNING: Removing unreachable block (ram,0x0001023ea8d0) */
/* WARNING: Removing unreachable block (ram,0x0001023ea8e8) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x0001023eb600) */
/* WARNING: Removing unreachable block (ram,0x0001023eb620) */
/* WARNING: Removing unreachable block (ram,0x0001023eb684) */
/* WARNING: Removing unreachable block (ram,0x0001023eb640) */

void FUN_1023ea86c(long param_1,undefined *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong auStack_b8 [9];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (undefined *)0x0) {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c3fef8(param_3);
    goto code_r0x000107c61170;
  }
  if (param_1 == 0) {
LAB_1023eaa08:
    param_2 = (undefined *)0x737474;
    func_0x000107c5fadc(0x737474,0xe300000000000000);
    func_0x000107c5fadc(0xd000000000000043,0x800000010f097560);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
  }
  else {
    auStack_b8[0] = 0;
    uVar3 = 0;
    FUN_1023ed42c(0,0x112d4e4a8,&PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c5fc50(param_1,auStack_b8,uVar3);
    uVar1 = auStack_b8[0];
    if (auStack_b8[0] == 0) goto LAB_1023eaa08;
    uVar6 = auStack_b8[0] & 0xffffffffffffff8;
    if (auStack_b8[0] >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar6 + 0x10);
      if (param_4 >> 0x3e == 0) goto LAB_1023ea964;
LAB_1023eb578:
      uVar5 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar5 = param_4;
      }
      func_0x000107c60480();
      if (uVar7 != uVar5) goto LAB_1023eb590;
LAB_1023ea974:
      param_2 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar4 = param_2;
      func_0x000107c3d780();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c6142c(uVar1);
        param_2 = (undefined *)0x737474;
        func_0x000107c5fadc(0x737474,0xe300000000000000);
        func_0x000107c5fadc(0xd00000000000002f,0x800000010f0975f0);
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
        func_0x000107c61180();
      }
      else {
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023eb684);
          (*pcVar2)();
        }
        if (uVar7 == 0) {
          func_0x000107c6142c(uVar1);
          func_0x000107c3fefc(param_3);
        }
        else {
          param_2 = (undefined *)0x0;
          if ((uVar1 & 0xc000000000000001) == 0) {
            if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1023eb554);
              (*pcVar2)();
            }
            func_0x000107c61174();
          }
          else {
            FUN_1023f0f28(0,uVar1);
          }
          if ((param_4 & 0xc000000000000001) == 0) {
            if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1023eb558);
              (*pcVar2)();
            }
            param_2 = *(undefined **)(param_4 + 0x20);
            func_0x000107c61174();
          }
          else {
            func_0x00010121c1ac(0,param_4);
          }
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023eb68c);
            (*pcVar2)();
          }
          func_0x000107c44430();
          func_0x000107c61180();
        }
      }
      goto code_r0x000107c61170;
    }
    uVar7 = auStack_b8[0];
    if (-1 < (long)auStack_b8[0]) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
    if (param_4 >> 0x3e != 0) goto LAB_1023eb578;
LAB_1023ea964:
    if (uVar7 == *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10)) goto LAB_1023ea974;
LAB_1023eb590:
    func_0x000107c6142c(uVar1);
    param_2 = (undefined *)0x737474;
    func_0x000107c5fadc(0x737474,0xe300000000000000);
    func_0x000107c5fadc(0xd00000000000003c,0x800000010f0975b0);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
  }
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1023eb68c; end: 1023ebfcb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1023eb68c(undefined8 param_1,undefined **param_2,undefined *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long extraout_x8;
  undefined **ppuVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  long unaff_x20;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined **ppuVar27;
  ulong uVar28;
  undefined1 *puVar29;
  undefined1 auStack_180 [8];
  undefined **ppuStack_160;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined *apuStack_98 [3];
  long lStack_80;
  
  ppuVar3 = (undefined **)0x0;
  func_0x000107c5ed50();
  puVar19 = ppuVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar19 + 0x40));
  puVar29 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar24 = *(long *)(unaff_x20 + 0x30);
  uVar4 = 0;
  func_0x0001023f01fc();
  ppuVar5 = (undefined **)0x1;
  func_0x0001023f01fc();
  ppuVar20 = (undefined **)((ulong)ppuVar5 & 0xffffffffffffff8);
  if ((ulong)ppuVar5 >> 0x3e == 0) {
    ppuVar27 = (undefined **)ppuVar20[2];
  }
  else {
    ppuVar27 = ppuVar20;
    if (((ulong)ppuVar5 & 0x8000000000000000) != 0) {
      ppuVar27 = ppuVar5;
    }
    func_0x000107c60480();
  }
  puVar16 = PTR___sypN_11034f1a8;
  if (ppuVar27 == (undefined **)0x0) {
    ppuStack_160 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuVar23 = (undefined **)0x0;
    ppuStack_160 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)ppuVar5 & 0xc000000000000001) == 0) {
        if (ppuVar20[2] <= ppuVar23) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebf50);
          (*pcVar1)();
        }
        ppuVar6 = (undefined **)ppuVar5[(long)((long)ppuVar23 + 4)];
        func_0x000107c61174();
      }
      else {
        ppuVar6 = ppuVar23;
        func_0x00010121c1ac(ppuVar23,ppuVar5);
      }
      if (SCARRY8((long)ppuVar23,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebf4c);
        (*pcVar1)();
      }
      ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      ppuVar7 = ppuVar6;
      func_0x000107c40c84();
      func_0x000107c61180();
      if (ppuVar7 == (undefined **)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebfc0);
        (*pcVar1)();
      }
      ppuVar8 = ppuVar7;
      func_0x000107c42ebc();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar7);
      if (ppuVar8 == (undefined **)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebfc4);
        (*pcVar1)();
      }
      func_0x000107c600f4(puVar29);
      func_0x000100e15a08();
      while (func_0x000107c601c0(apuStack_98,ppuVar3,ppuVar7), lStack_80 != 0) {
        func_0x000100102924(apuStack_98,auStack_b8);
        func_0x0001000bb420(auStack_b8,auStack_d8);
        uVar9 = 0;
        FUN_1023ed42c(0,0x112e94db0,&PTR_PTR_1126bce90);
        puVar10 = &uStack_e0;
        param_3 = puVar16 + 8;
        func_0x000107c6147c(puVar10,auStack_d8,param_3,uVar9,6);
        uVar22 = uStack_e0;
        if ((int)puVar10 != 0) {
          uVar11 = uStack_e0;
          func_0x000107c40c8c();
          func_0x000107c61170(uVar22);
          if ((int)uVar11 == 5) {
            func_0x000107c61170(ppuVar8);
            (**(code **)(puVar19 + 8))(puVar29,ppuVar3);
            func_0x000100102924(auStack_b8,&puStack_110);
            ppuVar7 = apuStack_98;
            param_2 = &puStack_110;
            param_3 = puVar16 + 8;
            func_0x000107c6147c(ppuVar7,param_2,param_3,uVar9,6);
            puVar17 = apuStack_98[0];
            if (((ulong)ppuVar7 & 1) == 0) {
              func_0x000107c61170(ppuVar6);
            }
            else {
              lVar25 = *(long *)(lVar24 + 0x10);
              puVar12 = apuStack_98[0];
              func_0x000107c5c6ac(apuStack_98[0]);
              func_0x000107c606d4();
              param_3 = puVar12;
              func_0x000107c4e924();
              func_0x000107c61180();
              func_0x000107c61170(puVar17);
              func_0x000107c61170(puVar12);
              func_0x000107c61170(ppuVar6);
              if (lVar25 != 0) {
                ppuVar6 = ppuStack_160;
                func_0x000107c61550();
                if ((((int)ppuVar6 == 0) || ((long)ppuStack_160 < 0)) ||
                   (ppuVar6 = ppuStack_160, ((ulong)ppuStack_160 >> 0x3e & 1) != 0)) {
                  if ((ulong)ppuStack_160 >> 0x3e == 0) {
                    param_2 = *(undefined ***)(((ulong)ppuStack_160 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    param_2 = (undefined **)((ulong)ppuStack_160 & 0xffffffffffffff8);
                    if ((undefined **)0x7fffffffffffffff < ppuStack_160) {
                      param_2 = ppuStack_160;
                    }
                    func_0x000107c60480(param_2);
                  }
                  param_2 = (undefined **)((long)param_2 + 1);
                  ppuVar6 = (undefined **)0x0;
                  param_3 = (undefined *)0x1;
                  func_0x000101a10584(0,param_2,1,ppuStack_160);
                }
                uVar21 = (ulong)ppuVar6 & 0xffffffffffffff8;
                uVar28 = *(ulong *)(uVar21 + 0x10);
                ppuVar7 = (undefined **)(uVar28 + 1);
                ppuStack_160 = ppuVar6;
                if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar28) {
                  ppuStack_160 = (undefined **)(ulong)(1 < *(ulong *)(uVar21 + 0x18));
                  param_3 = (undefined *)0x1;
                  param_2 = ppuVar7;
                  func_0x000101a10584(ppuStack_160,ppuVar7,1,ppuVar6);
                  uVar21 = (ulong)ppuStack_160 & 0xffffffffffffff8;
                }
                *(undefined ***)(uVar21 + 0x10) = ppuVar7;
                *(long *)(uVar21 + uVar28 * 8 + 0x20) = lVar25;
              }
            }
            goto LAB_1023eb7d0;
          }
        }
        func_0x000100183ab8(auStack_b8);
      }
      func_0x000107c61170(ppuVar8);
      func_0x000107c61170(ppuVar6);
      param_2 = ppuVar3;
      (**(code **)(puVar19 + 8))(puVar29,ppuVar3);
LAB_1023eb7d0:
    } while (ppuVar23 != ppuVar27);
  }
  if ((ulong)ppuStack_160 >> 0x3e == 0) {
    ppuVar3 = *(undefined ***)(((ulong)ppuStack_160 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppuVar3 = (undefined **)((ulong)ppuStack_160 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < ppuStack_160) {
      ppuVar3 = ppuStack_160;
    }
    func_0x000107c60480();
  }
  if ((ulong)ppuVar5 >> 0x3e == 0) {
    ppuVar27 = (undefined **)ppuVar20[2];
  }
  else {
    ppuVar27 = ppuVar20;
    if (((ulong)ppuVar5 & 0x8000000000000000) != 0) {
      ppuVar27 = ppuVar5;
    }
    func_0x000107c60480();
  }
  if (ppuVar3 == ppuVar27) {
    if (uVar4 >> 0x3e == 0) {
      uVar28 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar28 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar28 = uVar4;
      }
      func_0x000107c60480();
      if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebfb8);
        (*pcVar1)();
      }
    }
    uVar22 = *(undefined8 *)(unaff_x20 + 0x28);
    if (uVar28 == 0) {
      uVar21 = 0;
    }
    else {
      uVar26 = 0;
      uVar21 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebf54);
            (*pcVar1)();
          }
          uVar13 = *(ulong *)(uVar4 + uVar26 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar13 = uVar26;
          func_0x00010121c1ac(uVar26,uVar4);
        }
        uVar14 = uVar13;
        FUN_1023f2e28();
        if (uVar14 == 0) {
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(ppuVar5);
          func_0x000107c6142c(ppuStack_160);
          func_0x000107c61170(uVar13);
          return;
        }
        func_0x000107c597e0();
        uVar15 = uVar14;
        func_0x000107c42378();
        bVar2 = CARRY8(uVar21,uVar15);
        uVar21 = uVar21 + uVar15;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebf58);
          (*pcVar1)();
        }
        uVar26 = uVar26 + 1;
        func_0x000107c4e920(uVar13);
        puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c490d0();
        puVar19 = &UNK_1105008d0;
        param_2 = (undefined **)0x18;
        func_0x000107c613fc(&UNK_1105008d0,0x18,7);
        *(ulong *)(puVar19 + 0x10) = uVar14;
        pcStack_f0 = FUN_1023ec428;
        puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_108 = 0x42000000;
        puStack_100 = &UNK_101a283e8;
        puStack_f8 = &UNK_1105008e8;
        ppuVar27 = &puStack_110;
        puStack_e8 = puVar19;
        func_0x000107c60bc4(ppuVar27);
        puVar19 = puStack_e8;
        func_0x000107c61174(uVar14);
        func_0x000107c61574(puVar19);
        param_3 = puVar16;
        func_0x000107c5d5a8(uVar22);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c60bd0(ppuVar27);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar16);
      } while (uVar28 != uVar26);
    }
    func_0x000107c6142c(uVar4);
    if ((long)ppuVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebfbc);
      (*pcVar1)();
    }
    if (ppuVar3 != (undefined **)0x0) {
      lVar24 = 4;
      do {
        puVar19 = (undefined *)(lVar24 + -4);
        if (((ulong)ppuVar5 & 0xc000000000000001) == 0) {
          if (ppuVar20[2] <= puVar19) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebf5c);
            (*pcVar1)();
          }
          puVar16 = ppuVar5[lVar24];
          func_0x000107c61174();
        }
        else {
          puVar16 = puVar19;
          param_2 = ppuVar5;
          func_0x00010121c1ac(puVar19,ppuVar5);
        }
        if (((ulong)ppuStack_160 & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)ppuStack_160 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebf60);
            (*pcVar1)();
          }
          puVar19 = ppuStack_160[lVar24];
          func_0x000107c61174();
        }
        else {
          param_2 = ppuStack_160;
          func_0x00010121c1ac(puVar19,ppuStack_160);
        }
        puVar17 = puVar19;
        func_0x000107c4e920();
        FUN_1023ef1f4();
        puVar12 = puVar16;
        FUN_1023f2e28();
        if (puVar12 == (undefined *)0x0) {
          func_0x000107c6142c(ppuVar5);
          func_0x000107c6142c(ppuStack_160);
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar19);
          return;
        }
        FUN_1023f27ac(puVar17,param_2,param_3);
        func_0x000107c597e0(puVar12);
        puVar17 = puVar12;
        func_0x000107c42378();
        bVar2 = CARRY8(uVar21,(ulong)puVar17);
        uVar21 = uVar21 + (long)puVar17;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ebf64);
          (*pcVar1)();
        }
        func_0x000107c4e920(puVar16);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c490d0();
        puVar17 = &UNK_110500920;
        param_2 = (undefined **)0x18;
        func_0x000107c613fc(&UNK_110500920,0x18,7);
        *(undefined **)(puVar17 + 0x10) = puVar12;
        pcStack_f0 = (code *)0x1023ed830;
        puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_108 = 0x42000000;
        puStack_100 = &UNK_101a283e8;
        puStack_f8 = &UNK_110500938;
        ppuVar27 = &puStack_110;
        puStack_e8 = puVar17;
        func_0x000107c60bc4(ppuVar27);
        puVar17 = puStack_e8;
        func_0x000107c61174(puVar12);
        func_0x000107c61574(puVar17);
        param_3 = puVar18;
        func_0x000107c5d5a8(uVar22);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c60bd0(ppuVar27);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar19);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar18);
        lVar24 = lVar24 + 1;
        ppuVar3 = (undefined **)((long)ppuVar3 + -1);
      } while (ppuVar3 != (undefined **)0x0);
    }
    func_0x000107c6142c(ppuVar5);
  }
  else {
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(ppuVar5);
  }
  func_0x000107c6142c(ppuStack_160);
  return;
}



/* Entry: 1023ebfcc; end: 1023ec00b;  */

void FUN_1023ebfcc(long param_1)

{
  code *pcVar1;
  
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c54ef4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ec00c);
  (*pcVar1)();
}



/* Entry: 1023ec00c; end: 1023ec0a3;  */

void FUN_1023ec00c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1023ed3a0(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined4 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1023ec0a4; end: 1023ec0af;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1023ec0a4(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1023ec0b0; end: 1023ec147;  */

undefined8 * FUN_1023ec0b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1023ec148; end: 1023ec187;  */

undefined8 * FUN_1023ec148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1023ec188; end: 1023ec23b;  */

int FUN_1023ec188(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[5] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1023ec23c; end: 1023ec267;  */

long FUN_1023ec23c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1023ec268; end: 1023ec26f;  */

void FUN_1023ec268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1023ec270; end: 1023ec2b3;  */

undefined8 * FUN_1023ec270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1023ec2b4; end: 1023ec32f;  */

undefined8 * FUN_1023ec2b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  return param_1;
}



/* Entry: 1023ec330; end: 1023ec383;  */

undefined8 * FUN_1023ec330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1023ec384; end: 1023ec427;  */

int FUN_1023ec384(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1023ec428; end: 1023ec43f;  */

void FUN_1023ec428(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1023ebfcc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023ec440; end: 1023ec45b;  */

void FUN_1023ec440(long param_1,long param_2)

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



/* Entry: 1023ec45c; end: 1023ec56b;  */

void FUN_1023ec45c(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    func_0x0001010242e4();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0;
      FUN_1023ed42c(0,0x112d55598,&PTR_PTR_1126b25d0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1023ec56c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1023ecb28(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1023ec56c; end: 1023ecb27;  */

void FUN_1023ec56c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x21;
  long lVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar21 = param_3[1];
  if (0 < lVar21) {
    lVar13 = 0;
    do {
      lVar22 = lVar13 + 1;
      if (lVar22 < lVar21) {
        lVar16 = *param_3;
        uVar3 = *(undefined8 *)(lVar16 + lVar22 * 8);
        uVar19 = *(undefined8 *)(lVar16 + lVar13 * 8);
        uStack_70 = uVar19;
        uStack_68 = uVar3;
        func_0x000107c61174();
        func_0x000107c61174(uVar19);
        puVar4 = &uStack_68;
        FUN_1023ea798(puVar4,&uStack_70);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar19);
        if (unaff_x21 != 0) goto LAB_1023ecaa0;
        puVar17 = (ulong *)(lVar16 + lVar13 * 8 + 0x10);
        lVar16 = lVar13 + 2;
        do {
          lVar12 = lVar16;
          lVar22 = lVar21;
          if (lVar21 == lVar12) break;
          uVar8 = puVar17[-1];
          uVar5 = *puVar17;
          func_0x000107c61174();
          func_0x000107c61174();
          uVar20 = uVar5;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecb10);
            (*pcVar1)();
          }
          uVar6 = uVar20;
          func_0x000107c44430();
          func_0x000107c61180();
          func_0x000107c61170(uVar20);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecb14);
            (*pcVar1)();
          }
          uVar20 = uVar6;
          func_0x000107c5bbe8();
          func_0x000107c61170(uVar6);
          uVar6 = uVar8;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecb0c);
            (*pcVar1)();
          }
          uVar7 = uVar6;
          func_0x000107c44430();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecb18);
            (*pcVar1)();
          }
          uVar6 = uVar7;
          func_0x000107c5bbe8();
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar7);
          puVar17 = puVar17 + 1;
          lVar16 = lVar12 + 1;
          lVar22 = lVar12;
        } while ((((uint)puVar4 ^ (uint)(uVar6 <= uVar20)) & 1) != 0);
        if (((ulong)puVar4 & 1) != 0) {
          if (lVar22 < lVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecae4);
            (*pcVar1)();
          }
          if (lVar13 < lVar22) {
            lVar12 = *param_3;
            puVar14 = (undefined8 *)(lVar12 + lVar22 * 8);
            puVar4 = (undefined8 *)(lVar12 + lVar13 * 8);
            lVar16 = lVar22;
            lVar21 = lVar13;
            do {
              puVar14 = puVar14 + -1;
              lVar16 = lVar16 + -1;
              if (lVar21 != lVar16) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecb1c);
                  (*pcVar1)();
                }
                uVar3 = *puVar4;
                *puVar4 = *puVar14;
                *puVar14 = uVar3;
              }
              lVar21 = lVar21 + 1;
              puVar4 = puVar4 + 1;
            } while (lVar21 < lVar16);
          }
        }
      }
      lVar21 = param_3[1];
      lVar16 = lVar22;
      if (lVar22 < lVar21) {
        if (SBORROW8(lVar22,lVar13)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecad8);
          (*pcVar1)();
        }
        if (lVar22 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecadc);
            (*pcVar1)();
          }
          lVar12 = lVar13 + param_4;
          if (lVar21 <= lVar13 + param_4) {
            lVar12 = lVar21;
          }
          if (lVar12 < lVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecae0);
            (*pcVar1)();
          }
          if (lVar22 != lVar12) {
            lVar21 = *param_3;
            puVar17 = (ulong *)(lVar21 + lVar22 * 8 + -8);
            lVar15 = lVar13 - lVar22;
            do {
              uVar8 = *(ulong *)(lVar21 + lVar22 * 8);
              puVar18 = puVar17;
              lVar16 = lVar15;
              do {
                uVar20 = *puVar18;
                func_0x000107c61174();
                func_0x000107c61174();
                uVar5 = uVar8;
                func_0x000107c4f4ec();
                func_0x000107c61180();
                if (uVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecaf0);
                  (*pcVar1)();
                }
                uVar6 = uVar5;
                func_0x000107c44430();
                func_0x000107c61180();
                func_0x000107c61170(uVar5);
                if (uVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecae8);
                  (*pcVar1)();
                }
                uVar5 = uVar6;
                func_0x000107c5bbe8();
                func_0x000107c61170(uVar6);
                uVar6 = uVar20;
                func_0x000107c4f4ec();
                func_0x000107c61180();
                if (uVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecaec);
                  (*pcVar1)();
                }
                uVar7 = uVar6;
                func_0x000107c44430();
                func_0x000107c61180();
                func_0x000107c61170(uVar6);
                if (uVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecaf4);
                  (*pcVar1)();
                }
                uVar6 = uVar7;
                func_0x000107c5bbe8();
                func_0x000107c61170(uVar8);
                func_0x000107c61170(uVar20);
                func_0x000107c61170(uVar7);
                if (uVar6 <= uVar5) break;
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecaf8);
                  (*pcVar1)();
                }
                uVar5 = *puVar18;
                uVar8 = puVar18[1];
                *puVar18 = uVar8;
                puVar18[1] = uVar5;
                bVar2 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                puVar18 = puVar18 + -1;
              } while (bVar2);
              lVar22 = lVar22 + 1;
              puVar17 = puVar17 + 1;
              lVar15 = lVar15 + -1;
              lVar16 = lVar12;
            } while (lVar22 != lVar12);
          }
        }
      }
      puVar11 = puStack_58;
      if (lVar16 < lVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecacc);
        (*pcVar1)();
      }
      puVar9 = puStack_58;
      func_0x000107c61558();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar8 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar8) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        func_0x0001000a91e0(puVar11,uVar8 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar8 + 1;
      *(long *)(puVar11 + uVar8 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar11 + uVar8 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecb20);
        (*pcVar1)();
      }
      FUN_1023ecca4(&puStack_58,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_1023ecaa0;
      lVar21 = param_3[1];
      lVar13 = lVar16;
    } while (lVar16 < lVar21);
  }
  puVar11 = puStack_58;
  lVar21 = *param_1;
  if (lVar21 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecb28);
    (*pcVar1)();
  }
  puVar9 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar9 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar8 = *(ulong *)(puVar11 + 0x10);
  while (puStack_58 = puVar11, 1 < uVar8) {
    lVar13 = *param_3;
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecb24);
      (*pcVar1)();
    }
    lVar12 = uVar8 - 1;
    lVar16 = *(long *)(puVar11 + uVar8 * 0x10);
    lVar22 = *(long *)(puVar11 + lVar12 * 0x10 + 0x28);
    FUN_1023ecf0c(lVar13 + lVar16 * 8,lVar13 + *(long *)(puVar11 + lVar12 * 0x10 + 0x20) * 8,
                  lVar13 + lVar22 * 8,lVar21);
    if (unaff_x21 != 0) break;
    if (lVar22 < lVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecad0);
      (*pcVar1)();
    }
    puVar9 = puVar11;
    func_0x000107c61558();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar11 + 0x10) <= uVar8 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecad4);
      (*pcVar1)();
    }
    *(long *)(puVar11 + uVar8 * 0x10) = lVar16;
    *(long *)((long)(puVar11 + uVar8 * 0x10) + 8) = lVar22;
    puStack_58 = puVar11;
    func_0x0001000a97cc(lVar12);
    puVar11 = puStack_58;
    uVar8 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1023ecaa0:
  func_0x000107c6142c(puStack_58);
  return;
}



/* Entry: 1023ecb28; end: 1023ecca3;  */

void FUN_1023ecb28(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_3 != param_2) {
    lVar11 = *param_4;
    puVar7 = (ulong *)(lVar11 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      uVar3 = *(ulong *)(lVar11 + param_3 * 8);
      puVar8 = puVar7;
      lVar9 = param_1;
      do {
        uVar10 = *puVar8;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecc98);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c44430();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecca0);
          (*pcVar1)();
        }
        uVar4 = uVar5;
        func_0x000107c5bbe8();
        func_0x000107c61170(uVar5);
        uVar5 = uVar10;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecc9c);
          (*pcVar1)();
        }
        uVar6 = uVar5;
        func_0x000107c44430();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecc94);
          (*pcVar1)();
        }
        uVar5 = uVar6;
        func_0x000107c5bbe8();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar6);
        if (uVar5 <= uVar4) break;
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ecca4);
          (*pcVar1)();
        }
        uVar4 = *puVar8;
        uVar3 = puVar8[1];
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        bVar2 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1023ecca4; end: 1023ecf0b;  */

undefined8 FUN_1023ecca4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1023ecd78;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecef4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1023ecddc:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecee4);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023eceec);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ececc);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023eced0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023eced8);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecee0);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1023ecd78:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023eced4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecedc);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecee8);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecef0);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1023ecddc;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecef8);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecec0);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecf0c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1023ecf0c(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecec4);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ecec8);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1023ecf0c; end: 1023ed327;  */

undefined8 FUN_1023ecf0c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar7 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar7 = lVar10;
  }
  lVar7 = lVar7 >> 3;
  lVar14 = (long)param_3 - (long)param_2;
  lVar8 = lVar14 + 7;
  if (-1 < lVar14) {
    lVar8 = lVar14;
  }
  lVar8 = lVar8 >> 3;
  if (lVar7 < lVar8) {
    if (((param_4 < param_1) || (param_1 + lVar7 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar7 << 3);
    }
    puVar13 = param_4 + lVar7;
    puVar6 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        uVar2 = *param_2;
        uVar11 = *param_4;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ed314);
          (*pcVar1)();
        }
        uVar4 = uVar3;
        func_0x000107c44430();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ed318);
          (*pcVar1)();
        }
        uVar3 = uVar4;
        func_0x000107c5bbe8();
        func_0x000107c61170(uVar4);
        uVar4 = uVar11;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ed30c);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c44430();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ed310);
          (*pcVar1)();
        }
        uVar4 = uVar5;
        func_0x000107c5bbe8();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar5);
        if (uVar3 < uVar4) {
          puVar15 = param_4;
          puVar9 = param_2 + 1;
          puVar12 = param_2;
        }
        else {
          puVar15 = param_4 + 1;
          puVar9 = param_2;
          puVar12 = param_4;
        }
        param_2 = puVar9;
        param_4 = puVar15;
        if (puVar6 != puVar12) {
          *puVar6 = *puVar12;
        }
        puVar6 = puVar6 + 1;
      } while (param_4 < puVar13);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar8 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar8 << 3);
    }
    puVar12 = param_4 + lVar8;
    puVar6 = param_2;
    puVar13 = puVar12;
    if ((param_1 < param_2) && (7 < lVar14)) {
      do {
        puVar9 = param_2 + -1;
        puVar15 = param_3;
        while( true ) {
          param_3 = puVar15 + -1;
          puVar13 = puVar12 + -1;
          uVar2 = *puVar13;
          uVar11 = *puVar9;
          func_0x000107c61174();
          func_0x000107c61174();
          uVar3 = uVar2;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ed324);
            (*pcVar1)();
          }
          uVar4 = uVar3;
          func_0x000107c44430();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ed328);
            (*pcVar1)();
          }
          uVar3 = uVar4;
          func_0x000107c5bbe8();
          func_0x000107c61170(uVar4);
          uVar4 = uVar11;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ed31c);
            (*pcVar1)();
          }
          uVar5 = uVar4;
          func_0x000107c44430();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ed320);
            (*pcVar1)();
          }
          uVar4 = uVar5;
          func_0x000107c5bbe8();
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar5);
          if (uVar3 < uVar4) break;
          if (puVar15 != puVar12) {
            *param_3 = *puVar13;
          }
          puVar6 = param_2;
          puVar12 = puVar13;
          puVar15 = param_3;
          if (puVar13 <= param_4) goto LAB_1023ed2a4;
        }
        if (puVar15 != param_2) {
          *param_3 = *puVar9;
        }
        puVar6 = puVar9;
        puVar13 = puVar12;
      } while ((param_1 < puVar9) && (param_2 = puVar9, param_4 < puVar12));
    }
  }
LAB_1023ed2a4:
  uVar2 = (long)puVar13 - (long)param_4;
  uVar3 = uVar2 + 7;
  if (-1 < (long)uVar2) {
    uVar3 = uVar2;
  }
  if ((puVar6 != param_4) || ((ulong *)((long)param_4 + (uVar3 & 0xfffffffffffffff8)) <= puVar6)) {
    func_0x000107c610b8(puVar6,param_4,((long)uVar3 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1023ed328; end: 1023ed32f;  */

/* WARNING: Possible PIC construction at 0x0001023ea8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eaaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eabc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ead84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ead94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eada4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eade0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eae48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eaf3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eaf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eaf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023eb5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023eb084) */
/* WARNING: Removing unreachable block (ram,0x0001023eb05c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1c4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1b4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb184) */
/* WARNING: Removing unreachable block (ram,0x0001023eb118) */
/* WARNING: Removing unreachable block (ram,0x0001023eb324) */
/* WARNING: Removing unreachable block (ram,0x0001023eb314) */
/* WARNING: Removing unreachable block (ram,0x0001023eb304) */
/* WARNING: Removing unreachable block (ram,0x0001023eb2f4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb2c4) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf60) */
/* WARNING: Removing unreachable block (ram,0x0001023eb678) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf68) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf50) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf40) */
/* WARNING: Removing unreachable block (ram,0x0001023eae4c) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf9c) */
/* WARNING: Removing unreachable block (ram,0x0001023eafa4) */
/* WARNING: Removing unreachable block (ram,0x0001023eafb0) */
/* WARNING: Removing unreachable block (ram,0x0001023eae54) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1e0) */
/* WARNING: Removing unreachable block (ram,0x0001023eae60) */
/* WARNING: Removing unreachable block (ram,0x0001023eafcc) */
/* WARNING: Removing unreachable block (ram,0x0001023eae68) */
/* WARNING: Removing unreachable block (ram,0x0001023eb66c) */
/* WARNING: Removing unreachable block (ram,0x0001023eae74) */
/* WARNING: Removing unreachable block (ram,0x0001023eae7c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb478) */
/* WARNING: Removing unreachable block (ram,0x0001023eaf28) */
/* WARNING: Removing unreachable block (ram,0x0001023eade4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1d4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb1ec) */
/* WARNING: Removing unreachable block (ram,0x0001023eae04) */
/* WARNING: Removing unreachable block (ram,0x0001023eb470) */
/* WARNING: Removing unreachable block (ram,0x0001023eb460) */
/* WARNING: Removing unreachable block (ram,0x0001023eb46c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb450) */
/* WARNING: Removing unreachable block (ram,0x0001023eb440) */
/* WARNING: Removing unreachable block (ram,0x0001023eb410) */
/* WARNING: Removing unreachable block (ram,0x0001023eb508) */
/* WARNING: Removing unreachable block (ram,0x0001023eb4f8) */
/* WARNING: Removing unreachable block (ram,0x0001023eb4e8) */
/* WARNING: Removing unreachable block (ram,0x0001023eb4c0) */
/* WARNING: Removing unreachable block (ram,0x0001023eb4b0) */
/* WARNING: Removing unreachable block (ram,0x0001023eb0a4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb514) */
/* WARNING: Removing unreachable block (ram,0x0001023eb530) */
/* WARNING: Removing unreachable block (ram,0x0001023eada8) */
/* WARNING: Removing unreachable block (ram,0x0001023eaa64) */
/* WARNING: Removing unreachable block (ram,0x0001023eaa70) */
/* WARNING: Removing unreachable block (ram,0x0001023eadb0) */
/* WARNING: Removing unreachable block (ram,0x0001023eb67c) */
/* WARNING: Removing unreachable block (ram,0x0001023ead98) */
/* WARNING: Removing unreachable block (ram,0x0001023ead88) */
/* WARNING: Removing unreachable block (ram,0x0001023eac44) */
/* WARNING: Removing unreachable block (ram,0x0001023eafb4) */
/* WARNING: Removing unreachable block (ram,0x0001023eafbc) */
/* WARNING: Removing unreachable block (ram,0x0001023eac4c) */
/* WARNING: Removing unreachable block (ram,0x0001023eac54) */
/* WARNING: Removing unreachable block (ram,0x0001023eb32c) */
/* WARNING: Removing unreachable block (ram,0x0001023eac60) */
/* WARNING: Removing unreachable block (ram,0x0001023eafdc) */
/* WARNING: Removing unreachable block (ram,0x0001023eac68) */
/* WARNING: Removing unreachable block (ram,0x0001023eb674) */
/* WARNING: Removing unreachable block (ram,0x0001023eac74) */
/* WARNING: Removing unreachable block (ram,0x0001023eac7c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb670) */
/* WARNING: Removing unreachable block (ram,0x0001023eac9c) */
/* WARNING: Removing unreachable block (ram,0x0001023eb488) */
/* WARNING: Removing unreachable block (ram,0x0001023ead7c) */
/* WARNING: Removing unreachable block (ram,0x0001023eabc8) */
/* WARNING: Removing unreachable block (ram,0x0001023eb338) */
/* WARNING: Removing unreachable block (ram,0x0001023eabf4) */
/* WARNING: Removing unreachable block (ram,0x0001023eaaf0) */
/* WARNING: Removing unreachable block (ram,0x0001023eb0ac) */
/* WARNING: Removing unreachable block (ram,0x0001023eaaf4) */
/* WARNING: Removing unreachable block (ram,0x0001023eb558) */
/* WARNING: Removing unreachable block (ram,0x0001023eaaf8) */
/* WARNING: Removing unreachable block (ram,0x0001023eb55c) */
/* WARNING: Removing unreachable block (ram,0x0001023eab28) */
/* WARNING: Removing unreachable block (ram,0x0001023eadb4) */
/* WARNING: Removing unreachable block (ram,0x0001023eab60) */
/* WARNING: Removing unreachable block (ram,0x0001023eb664) */
/* WARNING: Removing unreachable block (ram,0x0001023eab70) */
/* WARNING: Removing unreachable block (ram,0x0001023eb668) */
/* WARNING: Removing unreachable block (ram,0x0001023eab80) */
/* WARNING: Removing unreachable block (ram,0x0001023ea8d0) */
/* WARNING: Removing unreachable block (ram,0x0001023ea8e8) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x0001023eb600) */
/* WARNING: Removing unreachable block (ram,0x0001023eb620) */
/* WARNING: Removing unreachable block (ram,0x0001023eb684) */
/* WARNING: Removing unreachable block (ram,0x0001023eb640) */

void FUN_1023ed328(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong auStack_b8 [9];
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (undefined *)0x0) {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c3fef8(uVar1);
    goto code_r0x000107c61170;
  }
  if (param_1 == 0) {
LAB_1023eaa08:
    param_2 = (undefined *)0x737474;
    func_0x000107c5fadc(0x737474,0xe300000000000000);
    func_0x000107c5fadc(0xd000000000000043,0x800000010f097560);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
  }
  else {
    auStack_b8[0] = 0;
    uVar5 = 0;
    FUN_1023ed42c(0,0x112d4e4a8,&PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c5fc50(param_1,auStack_b8,uVar5);
    uVar3 = auStack_b8[0];
    if (auStack_b8[0] == 0) goto LAB_1023eaa08;
    uVar8 = auStack_b8[0] & 0xffffffffffffff8;
    if (auStack_b8[0] >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar8 + 0x10);
      if (uVar2 >> 0x3e == 0) goto LAB_1023ea964;
LAB_1023eb578:
      uVar7 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar7 = uVar2;
      }
      func_0x000107c60480();
      if (uVar9 != uVar7) goto LAB_1023eb590;
LAB_1023ea974:
      param_2 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = param_2;
      func_0x000107c3d780();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c6142c(uVar3);
        param_2 = (undefined *)0x737474;
        func_0x000107c5fadc(0x737474,0xe300000000000000);
        func_0x000107c5fadc(0xd00000000000002f,0x800000010f0975f0);
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
        func_0x000107c61180();
      }
      else {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023eb684);
          (*pcVar4)();
        }
        if (uVar9 == 0) {
          func_0x000107c6142c(uVar3);
          func_0x000107c3fefc(uVar1);
        }
        else {
          param_2 = (undefined *)0x0;
          if ((uVar3 & 0xc000000000000001) == 0) {
            if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1023eb554);
              (*pcVar4)();
            }
            func_0x000107c61174();
          }
          else {
            FUN_1023f0f28(0,uVar3);
          }
          if ((uVar2 & 0xc000000000000001) == 0) {
            if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1023eb558);
              (*pcVar4)();
            }
            param_2 = *(undefined **)(uVar2 + 0x20);
            func_0x000107c61174();
          }
          else {
            func_0x00010121c1ac(0,uVar2);
          }
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023eb68c);
            (*pcVar4)();
          }
          func_0x000107c44430();
          func_0x000107c61180();
        }
      }
      goto code_r0x000107c61170;
    }
    uVar9 = auStack_b8[0];
    if (-1 < (long)auStack_b8[0]) {
      uVar9 = uVar8;
    }
    func_0x000107c60480();
    if (uVar2 >> 0x3e != 0) goto LAB_1023eb578;
LAB_1023ea964:
    if (uVar9 == *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10)) goto LAB_1023ea974;
LAB_1023eb590:
    func_0x000107c6142c(uVar3);
    param_2 = (undefined *)0x737474;
    func_0x000107c5fadc(0x737474,0xe300000000000000);
    func_0x000107c5fadc(0xd00000000000003c,0x800000010f0975b0);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
  }
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1023ed330; end: 1023ed39f;  */

undefined8 * FUN_1023ed330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[4] = param_1[4];
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[5] = param_1[5];
  func_0x000107c61434(uVar1);
  return param_2;
}



/* Entry: 1023ed3a0; end: 1023ed3ef;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1023ed3a0(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1023ed3f0; end: 1023ed41b;  */

void FUN_1023ed3f0(void)

{
  func_0x0001023e99a0();
  return;
}



/* Entry: 1023ed41c; end: 1023ed42b;  */

/* WARNING: Possible PIC construction at 0x0001023e9bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e9bc0) */

void FUN_1023ed41c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = param_1;
  FUN_1023f2e28(param_1,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  if (lVar5 != 0) {
    FUN_1023f27ac(uVar2,uVar4,uVar3);
    func_0x000107c54358(lVar5);
    lVar6 = param_1;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c610f8(PTR_PTR_1126c7b90);
      func_0x000107c453e4();
    }
    func_0x000107c54ef4();
    func_0x000107c5799c(param_1);
    func_0x000107c563e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  (*pcVar1)();
  return;
}



/* Entry: 1023ed42c; end: 1023ed46b;  */

void FUN_1023ed42c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023ed46c; end: 1023ed477;  */

/* WARNING: Possible PIC construction at 0x0001023e9fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ea06c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ea064) */
/* WARNING: Removing unreachable block (ram,0x0001023ea04c) */
/* WARNING: Removing unreachable block (ram,0x0001023ea008) */
/* WARNING: Removing unreachable block (ram,0x0001023ea0ac) */
/* WARNING: Removing unreachable block (ram,0x0001023ea038) */
/* WARNING: Removing unreachable block (ram,0x0001023e9fe0) */
/* WARNING: Removing unreachable block (ram,0x0001023ea0a8) */
/* WARNING: Removing unreachable block (ram,0x0001023e9ff4) */
/* WARNING: Removing unreachable block (ram,0x0001023ea070) */

void FUN_1023ed46c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126c7b90;
    func_0x000107c610f8(PTR_PTR_1126c7b90);
    func_0x000107c61174(param_1);
    func_0x000107c453e4(puVar2);
    func_0x000107c5799c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  (**(code **)(unaff_x20 + 0x10))
            (0,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),uVar1,
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1023ed478; end: 1023ed4db;  */

void FUN_1023ed478(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001023e7cec(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined4 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1023ed4dc; end: 1023ed4ef;  */

/* WARNING: Possible PIC construction at 0x0001023e9168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023e9194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023e9198) */
/* WARNING: Removing unreachable block (ram,0x0001023e916c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1023ed4dc(ulong param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_3 != 0) {
    func_0x000107c614b0(param_3);
    (*pcVar1)(0,0xf000000000000000,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_3);
    return;
  }
  if (param_2 >> 0x3c < 0xf) {
    func_0x00010006c00c();
    (*pcVar1)(param_1,param_2,0);
    if (0xe < param_2 >> 0x3c) {
      return;
    }
    uVar3 = (uint)(param_2 >> 0x3e);
    if (uVar3 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar3 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  uVar2 = 0x737474;
  func_0x000107c5fadc(0x737474,0xe300000000000000);
  func_0x000107c5fadc(0xd000000000000041,0x800000010f097800);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1023ed4f0; end: 1023ed51f;  */

void FUN_1023ed4f0(void)

{
  func_0x0001023e6b64();
  return;
}



/* Entry: 1023ed520; end: 1023ed55f;  */

void FUN_1023ed520(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023ed560; end: 1023ed56b;  */

void FUN_1023ed560(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  func_0x000107c426e0(uVar3,pcVar2,*(undefined8 *)(unaff_x20 + 0x20));
  if ((int)uVar3 != 0) {
    FUN_1023eb68c();
    func_0x0001023ea248();
    puVar4 = &UNK_1105009c0;
    func_0x000107c613fc(&UNK_1105009c0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar1);
    uStack_50 = 0x1023ed824;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10141ff74;
    puStack_58 = &UNK_110500dc0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    pcVar6 = "updateTextToSpeechFromSnapdoc()";
    func_0x0001000c10c0("updateTextToSpeechFromSnapdoc()");
    func_0x000107c61180();
    func_0x000107c5dc64(uVar3);
    func_0x000107c615e8(pcVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(0);
  }
  return;
}



/* Entry: 1023ed56c; end: 1023ed59f;  */

void FUN_1023ed56c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023ed5a0; end: 1023ed5b7;  */

void FUN_1023ed5a0(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001023ed5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined4 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1023ed5b8; end: 1023ed5f3;  */

void FUN_1023ed5b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023ed5f4; end: 1023ed617;  */

void FUN_1023ed5f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  pcVar5 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 == 0) {
    (*pcVar5)();
  }
  else {
    lVar7 = lVar3;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1023e99a0);
      (*pcVar5)();
    }
    lVar8 = lVar7;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar9 = PTR_PTR_1126b25c8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5293c();
    puVar10 = PTR_PTR_1126b3080;
    func_0x000107c61168(PTR_PTR_1126b3080);
    uVar11 = uVar2;
    func_0x000107c5ee20(uVar2,uVar4);
    func_0x000107c412fc(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    uVar11 = *(undefined8 *)(lVar6 + 0x28);
    func_0x000107c5c52c(uVar11);
    func_0x000107c61180();
    func_0x000107c56420(puVar9);
    puVar12 = &UNK_110500ad8;
    func_0x000107c613fc(&UNK_110500ad8,0x40,7);
    *(code **)(puVar12 + 0x10) = pcVar5;
    *(undefined8 *)(puVar12 + 0x18) = uVar1;
    *(long *)(puVar12 + 0x20) = lVar6;
    *(long *)(puVar12 + 0x28) = lVar3;
    *(undefined **)(puVar12 + 0x30) = puVar9;
    *(long *)(puVar12 + 0x38) = lVar8;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(lVar6);
    func_0x000107c61174(lVar3);
    func_0x000107c61174(puVar9);
    func_0x000107c61174(lVar8);
    FUN_1023f22cc(uVar2,uVar4,FUN_1023ed3f0,puVar12);
    func_0x000107c61574(lVar6);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(puVar12);
  }
  return;
}



/* Entry: 1023ed618; end: 1023ed7a7;  */

void FUN_1023ed618(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x48) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined4 *)(unaff_x20 + 0x50) = 0;
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f097980);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + 0x58) = puVar2;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x60) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  lVar1 = 0;
  FUN_1023f20a0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long *)(unaff_x20 + 0x30) = lVar1;
  *(undefined **)(unaff_x20 + 0x38) = puVar2;
  func_0x000107c615f4(param_2,2);
  FUN_1023e91f0();
  return;
}



/* Entry: 1023ed7a8; end: 1023ed83b;  */

void FUN_1023ed7a8(long param_1,long param_2)

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



/* Entry: 1023ed83c; end: 1023ed86b;  */

void FUN_1023ed83c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023ed86c; end: 1023ed8cf;  */

void FUN_1023ed86c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x736568746e79532f;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xeb00000000657a69;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  return;
}



/* Entry: 1023ed8d0; end: 1023edccb;  */

/* WARNING: Possible PIC construction at 0x0001023ed93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ed978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ed9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023edaa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023edbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023edbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023edbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023edc58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023edc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023edca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023edc8c) */
/* WARNING: Removing unreachable block (ram,0x0001023edc5c) */
/* WARNING: Removing unreachable block (ram,0x0001023edc9c) */
/* WARNING: Removing unreachable block (ram,0x0001023edc68) */
/* WARNING: Removing unreachable block (ram,0x0001023edbd4) */
/* WARNING: Removing unreachable block (ram,0x0001023edbc0) */
/* WARNING: Removing unreachable block (ram,0x0001023edbb0) */
/* WARNING: Removing unreachable block (ram,0x0001023edaa4) */
/* WARNING: Removing unreachable block (ram,0x0001023ed9ac) */
/* WARNING: Removing unreachable block (ram,0x0001023ed97c) */
/* WARNING: Removing unreachable block (ram,0x0001023ed940) */
/* WARNING: Removing unreachable block (ram,0x0001023edbf8) */
/* WARNING: Removing unreachable block (ram,0x0001023ed960) */
/* WARNING: Removing unreachable block (ram,0x0001023edca4) */
/* WARNING: Removing unreachable block (ram,0x0001023edca8) */

void FUN_1023ed8d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4d90;
  func_0x000107c610f8(PTR_PTR_1126c4d90);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c59c6c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023edccc; end: 1023edebb;  */

void FUN_1023edccc(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(lVar1 + 0x30);
    func_0x000107c61174(uVar6);
    func_0x000107c61574(lVar1);
    func_0x000107c3f474(uVar6);
    func_0x000107c61170(uVar6);
  }
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x37);
  uStack_68 = uStack_80;
  uStack_60 = uStack_78;
  func_0x000107c5fb78(0xd00000000000002d,0x800000010f097a40);
  func_0x000107c61428(param_2 + 0x10,&uStack_80,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  uStack_88 = param_2 == 0;
  if ((bool)uStack_88) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    func_0x000107c61574();
  }
  uVar2 = 0x112dc10e8;
  uStack_90 = uVar6;
  func_0x0001000285a8(0x112dc10e8,&UNK_10d97dc20);
  func_0x000107c5fb18(&uStack_90,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x73646e6f63657320,0xe800000000000000);
  uVar2 = uStack_60;
  uVar6 = uStack_68;
  uVar3 = 0x737474;
  func_0x000107c5fadc(0x737474,0xe300000000000000);
  func_0x000107c5fadc(uVar6,uVar2);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar2);
  if (param_3 != (code *)0x0) {
    puVar5 = puVar4;
    func_0x000107c61174(puVar4);
    (*param_3)(0,0xf000000000000000,puVar4);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1023edebc; end: 1023edef3;  */

void FUN_1023edebc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    func_0x000107c61174(uVar8);
    func_0x000107c61574(lVar2);
    func_0x000107c3f474(uVar8);
    func_0x000107c61170(uVar8);
  }
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x37);
  uStack_68 = uStack_80;
  uStack_60 = uStack_78;
  func_0x000107c5fb78(0xd00000000000002d,0x800000010f097a40);
  func_0x000107c61428(lVar3 + 0x10,&uStack_80,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  uStack_88 = lVar3 == 0;
  if ((bool)uStack_88) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar3 + 0x38);
    func_0x000107c61574();
  }
  uVar4 = 0x112dc10e8;
  uStack_90 = uVar8;
  func_0x0001000285a8(0x112dc10e8,&UNK_10d97dc20);
  func_0x000107c5fb18(&uStack_90,uVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x73646e6f63657320,0xe800000000000000);
  uVar4 = uStack_60;
  uVar8 = uStack_68;
  uVar5 = 0x737474;
  func_0x000107c5fadc(0x737474,0xe300000000000000);
  func_0x000107c5fadc(uVar8,uVar4);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c6142c(uVar4);
  if (pcVar1 != (code *)0x0) {
    puVar7 = puVar6;
    func_0x000107c61174(puVar6);
    (*pcVar1)(0,0xf000000000000000,puVar6);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1023edef4; end: 1023ee27b;  */

/* WARNING: Removing unreachable block (ram,0x0001023ee1b8) */
/* WARNING: Removing unreachable block (ram,0x0001023ee1bc) */
/* WARNING: Removing unreachable block (ram,0x0001023ee1e0) */

void FUN_1023edef4(undefined *param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  puVar6 = auStack_78;
  func_0x000107c61428(param_4 + 0x10,puVar6,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    uVar8 = *(ulong *)(param_4 + 0x30);
    uVar9 = uVar8;
    func_0x000107c61174();
    func_0x000107c61574(param_4);
    if (uVar8 != 0) {
      uVar8 = uVar9;
      func_0x000107c49b28();
      func_0x000107c61170(uVar9);
      if ((uVar8 & 1) != 0) {
        return;
      }
    }
  }
  if (param_3 == 0) {
    if (param_2 >> 0x3c < 0xf) {
      func_0x000107c610f8(PTR_PTR_1126aa770);
      func_0x000100de78a0(param_1,param_2);
      puVar4 = param_1;
      uVar9 = param_2;
      FUN_1023ee3cc(param_1,param_2);
      if (param_7 != (code *)0x0) {
        puVar5 = puVar4;
        func_0x000107c3e3a8();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
          puVar7 = (undefined *)0x0;
          uVar9 = 0xf000000000000000;
        }
        else {
          puVar7 = puVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar5);
        }
        (*param_7)(puVar7,uVar9,0);
        func_0x0001000b44c0(puVar7,uVar9);
      }
      func_0x000107c498f8(param_9);
      func_0x0001000b44c0(param_1,param_2);
      goto LAB_1023ee0e0;
    }
    uVar2 = 0x737474;
    func_0x000107c5fadc(0x737474,0xe300000000000000);
    uVar3 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f0979d0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c602fc(0x32);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c4cd90(param_3);
    func_0x000107c61180();
    lVar1 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
    func_0x000107c5fb78(lVar1,puVar6);
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0xd000000000000011,0x800000010f097a20);
    func_0x000107c5fb78(param_5,param_6);
    uVar3 = 0xd00000000000001d;
    uVar2 = 0x737474;
    func_0x000107c5fadc(0x737474,0xe300000000000000);
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f097a00);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(0x800000010f097a00);
  }
  if (param_7 != (code *)0x0) {
    puVar5 = puVar4;
    func_0x000107c61174(puVar4);
    (*param_7)(0,0xf000000000000000,puVar4);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c498f8(param_9);
LAB_1023ee0e0:
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1023ee27c; end: 1023ee2a7;  */

void FUN_1023ee27c(void)

{
  FUN_1023edef4();
  return;
}



/* Entry: 1023ee2a8; end: 1023ee357; -[_TtC24TextToSpeechServicesImpl28TextToSpeechNetworkRequester requestSynthesizedTextToSpeechWithText:completion:] */

void FUN_1023ee2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_110500f60;
    func_0x000107c613fc(&UNK_110500f60,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x1023ee3c4;
  }
  func_0x000107c6157c(param_1);
  FUN_1023ed8d0(param_3,param_2,uVar2,puVar1);
  FUN_1023ee3b4(uVar2,puVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023ee358; end: 1023ee3b3;  */

void FUN_1023ee358(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023ee3b4; end: 1023ee3cb;  */

void FUN_1023ee3b4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1023ee3cc; end: 1023ee48b;  */

long FUN_1023ee3cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar2 = *(long *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar2);
  return lVar2;
}



/* Entry: 1023ee48c; end: 1023ee493;  */

void FUN_1023ee48c(long param_1,long param_2)

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



/* Entry: 1023ee494; end: 1023ee533;  */

long FUN_1023ee494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = 0xd000000000000018;
  *(undefined8 *)(unaff_x20 + 0x38) = 0x800000010ef11a10;
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x40) = 0xd000000000000016;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x800000010f0974f0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return unaff_x20;
}



/* Entry: 1023ee534; end: 1023ee5af;  */

void FUN_1023ee534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x30) = 0xd000000000000018;
  *(undefined8 *)(unaff_x20 + 0x38) = 0x800000010ef11a10;
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x40) = 0xd000000000000016;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x800000010f0974f0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1023ee5b0; end: 1023ee8c7;  */

undefined * FUN_1023ee5b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_110500f88;
  func_0x000107c613fc(&UNK_110500f88,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1023ee8c8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x1023eed24;
  puStack_68 = &UNK_110500fa0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_110500fd8;
  func_0x000107c613fc(&UNK_110500fd8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  pcStack_60 = FUN_1023eeb84;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  uStack_70 = 0x1023eed28;
  puStack_68 = &UNK_110500ff0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c6157c();
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar3 = PTR_PTR_1126aa778;
  func_0x000107c610f8(PTR_PTR_1126aa778);
  func_0x000107c48cd4();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 1023ee8c8; end: 1023ee8cf;  */

void FUN_1023ee8c8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    lVar2 = lVar5;
    FUN_1023ee8d0();
    func_0x000107c61574(lVar5);
    if (lVar2 != 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
      lVar5 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar5 == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        lVar6 = *(long *)(lVar5 + 0x20);
        func_0x000107c61174();
        func_0x000107c61574(lVar5);
        lVar5 = lVar6;
        func_0x000107c3fa04();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ee8c8);
          (*pcVar1)();
        }
        uVar3 = 0xd000000000000015;
        func_0x000107c5fadc(0xd000000000000015,0x800000010f097ab0);
        lVar4 = lVar5;
        func_0x000107c4980c();
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(uVar3);
        lVar5 = 0;
        func_0x0001023ee394();
        func_0x000107c613fc();
        func_0x000107c61170(lVar6);
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0x736568746e79532f;
        *(undefined8 *)(lVar5 + 0x20) = 0xeb00000000657a69;
        *(long *)(lVar5 + 0x10) = lVar2;
        *(double *)(lVar5 + 0x38) = (double)(int)lVar4;
      }
    }
  }
  return;
}



/* Entry: 1023ee8d0; end: 1023eeaeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ee8d0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f097ad0);
    lVar4 = lVar2;
    func_0x000107c4e60c(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    puVar5 = PTR_PTR_1126ae728;
    func_0x000107c61168(PTR_PTR_1126ae728);
    func_0x000107c3edf4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x20 + 0x38));
    puVar6 = puVar5;
    func_0x000107c545b8(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar6);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar7 = uVar3;
    func_0x000107c5fadc(uVar3,uVar1);
    puVar6 = puVar5;
    func_0x000107c57df8(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c57f3c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c59d5c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5343c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    lVar8 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c44588();
    func_0x000107c61180();
    lVar2 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar5);
    }
    else {
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000107c4c1b4(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1023eeaec; end: 1023eeb07;  */

void FUN_1023eeaec(long param_1,long param_2)

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



/* Entry: 1023eeb08; end: 1023eeb83;  */

undefined8 FUN_1023eeb08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c5b1b8(uVar1);
  func_0x000107c61180();
  func_0x0001023ec084(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  uVar2 = param_1;
  FUN_1023ed618();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar1);
  return uVar2;
}



/* Entry: 1023eeb84; end: 1023eeb8b;  */

undefined8 FUN_1023eeb84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x28);
  func_0x000107c5b1b8(uVar1);
  func_0x000107c61180();
  func_0x0001023ec084(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  uVar3 = uVar2;
  FUN_1023ed618();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  return uVar3;
}



/* Entry: 1023eeb8c; end: 1023eebc3;  */

void FUN_1023eeb8c(long param_1)

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



/* Entry: 1023eebc4; end: 1023eebff;  */

/* WARNING: Possible PIC construction at 0x0001023eebf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023eebf4) */

void FUN_1023eebc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1023eec00; end: 1023eec6b;  */

void FUN_1023eec00(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61574();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023eec6c; end: 1023eecf7;  */

void FUN_1023eec6c(undefined8 param_1)

{
  if (lRam0000000112e94f80 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d499c);
  return;
}



/* Entry: 1023eecf8; end: 1023eed1b;  */

void FUN_1023eecf8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1023ee5b0();
  *param_1 = param_2;
  return;
}



/* Entry: 1023eed1c; end: 1023eed2b;  */

void FUN_1023eed1c(long param_1,long param_2)

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



/* Entry: 1023eed2c; end: 1023ef1f3;  */

undefined1  [16] FUN_1023eed2c(ulong param_1,char param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  uVar3 = 0;
  func_0x0001023f01fc();
  if (uVar3 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    if (uVar8 != 0) goto LAB_1023eed70;
LAB_1023eee78:
    func_0x000107c6142c();
    uVar3 = 0;
  }
  else {
    uVar8 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar8 = uVar3;
    }
    func_0x000107c60480();
    if (uVar8 == 0) goto LAB_1023eee78;
LAB_1023eed70:
    uVar4 = uVar8 - 1;
    if (SBORROW8(uVar8,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef138);
      (*pcVar2)();
    }
    if ((uVar3 & 0xc000000000000001) == 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef160);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef164);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(uVar3 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x0001023f0bb0(uVar4,uVar3,&PTR_PTR_1126b25d0,0x112d55598);
    }
    func_0x000107c6142c(uVar3);
    uVar3 = uVar4;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef1e8);
      (*pcVar2)();
    }
    uVar8 = uVar3;
    func_0x000107c44430();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef1ec);
      (*pcVar2)();
    }
    uVar11 = uVar8;
    func_0x000107c5bbe8();
    func_0x000107c61170(uVar8);
    uVar3 = uVar4;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef1f0);
      (*pcVar2)();
    }
    uVar8 = uVar3;
    func_0x000107c44430();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef1f4);
      (*pcVar2)();
    }
    uVar12 = uVar8;
    func_0x000107c42378();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    uVar3 = uVar11 + uVar12;
    if (CARRY8(uVar11,uVar12)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023eee54);
      (*pcVar2)();
    }
  }
  if (param_2 == '\x01') {
    uVar7 = 0;
    uVar8 = uVar3;
    goto LAB_1023ef1b4;
  }
  uVar8 = 1;
  func_0x0001023f01fc();
  if (uVar8 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    if (uVar4 != 0) goto LAB_1023eeebc;
LAB_1023ef180:
    func_0x000107c6142c(uVar8);
    uVar4 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar4 = uVar8;
    }
    func_0x000107c60480();
    if (uVar4 == 0) goto LAB_1023ef180;
LAB_1023eeebc:
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001023f1df4(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef1dc);
      (*pcVar2)();
    }
    uVar11 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        uVar12 = *(ulong *)(uVar8 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar12 = uVar11;
        func_0x0001023f0bb0(uVar11,uVar8,&PTR_PTR_1126b25d0,0x112d55598);
      }
      uVar5 = uVar12;
      FUN_1023ef4a8();
      uVar9 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar9) {
        func_0x0001023f1df4(1 < *(ulong *)(puVar1 + 0x18),uVar9 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar9 + 1;
      *(ulong *)(puVar1 + uVar9 * 0x10 + 0x20) = uVar12;
      *(ulong *)(puVar1 + uVar9 * 0x10 + 0x28) = uVar5;
    } while (uVar4 != uVar11);
    func_0x000107c6142c(uVar8);
    uVar4 = *(ulong *)(puVar1 + 0x10);
  }
  uVar11 = uVar3;
  if (uVar4 != 0) {
    uVar12 = 0;
    puVar10 = (ulong *)(puVar1 + 0x28);
    do {
      if (*(ulong *)(puVar1 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef134);
        (*pcVar2)();
      }
      uVar9 = *puVar10;
      if (uVar9 != 0) {
        uVar11 = puVar10[-1];
        func_0x000107c61174();
        func_0x000107c61174();
        uVar8 = uVar9;
        func_0x000107c4e920();
        FUN_1023ef1f4();
        FUN_1023f27ac();
        if (uVar8 < param_1) {
          if (uVar12 == 0) {
            func_0x000107c6142c(puVar1);
            func_0x000107c61170(uVar11);
            func_0x000107c61170(uVar9);
            uVar7 = 0;
            if (uVar8 <= uVar3) {
              uVar8 = uVar3;
            }
            goto LAB_1023ef1b4;
          }
          if (*(ulong *)(puVar1 + 0x10) <= uVar12 - 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef1e0);
            (*pcVar2)();
          }
          uVar4 = puVar10[-3];
          func_0x000107c61174();
          func_0x000107c6142c(puVar1);
          uVar3 = uVar4;
          FUN_1023f2e28();
          if (uVar3 != 0) {
            uVar12 = uVar3;
            func_0x000107c5bbe8();
            uVar5 = uVar3;
            func_0x000107c42378();
            func_0x000107c61170(uVar11);
            func_0x000107c61170(uVar9);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar3);
            if (CARRY8(uVar12,uVar5)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef1e4);
              (*pcVar2)();
            }
            uVar7 = 0;
            if (uVar8 <= uVar12 + uVar5) {
              uVar8 = uVar12 + uVar5;
            }
            goto LAB_1023ef1b4;
          }
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar9);
        }
        else {
          uVar8 = uVar11;
          FUN_1023f2e28();
          if (uVar8 != 0) {
            uVar5 = uVar8;
            func_0x000107c5bbe8();
            uVar6 = uVar8;
            func_0x000107c42378();
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar11);
            func_0x000107c61170(uVar9);
            uVar11 = uVar5 + uVar6;
            if (CARRY8(uVar5,uVar6)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef03c);
              (*pcVar2)();
            }
            goto LAB_1023eef9c;
          }
          func_0x000107c6142c(puVar1);
          func_0x000107c61170(uVar11);
          uVar4 = uVar9;
        }
        func_0x000107c61170(uVar4);
        uVar7 = 1;
        uVar8 = 0;
        goto LAB_1023ef1b4;
      }
LAB_1023eef9c:
      uVar12 = uVar12 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar4 != uVar12);
  }
  func_0x000107c6142c(puVar1);
  uVar7 = 0;
  uVar8 = param_1;
  if (param_1 <= uVar11) {
    uVar8 = uVar11;
  }
LAB_1023ef1b4:
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = uVar8;
  return auVar13;
}



/* Entry: 1023ef1f4; end: 1023ef4a7;  */

undefined8 FUN_1023ef1f4(double param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  undefined8 auStack_88 [3];
  
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c606d4();
  uVar3 = uVar8;
  func_0x000107c4e924();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (uVar3 == 0) {
    uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c44a6c();
    if ((int)uVar4 != 0) {
      uVar4 = uVar3;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef4a0);
        (*pcVar2)();
      }
      uVar9 = uVar4;
      func_0x000107c44bd0();
      func_0x000107c61170(uVar4);
      if ((int)uVar9 != 0) {
        uVar4 = uVar3;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef4a4);
          (*pcVar2)();
        }
        uVar9 = uVar4;
        func_0x000107c5cf30();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef4a8);
          (*pcVar2)();
        }
        func_0x000107c41480();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        if (uVar8 != 0) {
          uVar5 = 0;
          FUN_1023f20c0(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
          uVar4 = uVar8;
          func_0x000107c5fc54(uVar8,uVar5);
          func_0x000107c61170(uVar8);
          if (uVar4 >> 0x3e == 0) {
            uVar8 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar8 = uVar4 & 0xffffffffffffff8;
            if ((uVar4 & 0x8000000000000000) != 0) {
              uVar8 = uVar4;
            }
            func_0x000107c60480();
          }
          if ((uVar8 & 0xfffffffffffffffe) == 2) {
            if (uVar4 >> 0x3e == 0) {
              uVar8 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar8 = uVar4 & 0xffffffffffffff8;
              if ((uVar4 & 0x8000000000000000) != 0) {
                uVar8 = uVar4;
              }
              func_0x000107c60480();
            }
            if (uVar8 != 0) {
              uVar9 = 0;
              do {
                if ((uVar4 & 0xc000000000000001) == 0) {
                  if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef48c);
                    (*pcVar2)();
                  }
                  uVar6 = *(ulong *)(uVar4 + uVar9 * 8 + 0x20);
                  func_0x000107c61174(uVar6);
                  dVar10 = param_1;
                }
                else {
                  uVar6 = uVar9;
                  func_0x0001023f0d6c(uVar9,uVar4,&PTR_PTR_1126bb2a8,0x112d74ac8);
                  dVar10 = param_1;
                }
                uVar1 = uVar9 + 1;
                if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef488);
                  (*pcVar2)();
                }
                uVar7 = uVar6;
                func_0x000107c5cf28(uVar6);
                func_0x000107c61180();
                func_0x000107c51820();
                param_1 = dVar10;
                func_0x000107c61170(uVar7);
                if (0.0 < dVar10) {
                  func_0x000107c6142c(uVar4);
                  func_0x000107c5c9c0(auStack_88,uVar6);
                  func_0x000107c61170(uVar3);
                  uVar5 = auStack_88[0];
                  goto LAB_1023ef41c;
                }
                func_0x000107c61170(uVar6);
                uVar9 = uVar9 + 1;
              } while (uVar1 != uVar8);
            }
          }
          func_0x000107c6142c(uVar4);
        }
      }
    }
    uVar6 = uVar3;
    uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
LAB_1023ef41c:
    func_0x000107c61170(uVar6);
  }
  return uVar5;
}



/* Entry: 1023ef4a8; end: 1023ef6ef;  */

undefined8 FUN_1023ef4a8(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined8 auStack_a8 [3];
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_e8 + (-0x18 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c40c84();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef6ec);
    (*pcVar2)();
  }
  lVar4 = param_1;
  func_0x000107c42ebc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar4 != 0) {
    func_0x000107c600f4(puVar9);
    func_0x000100e15a08();
    func_0x000107c601c0(auStack_a8,lVar3,param_1);
    puVar1 = PTR___sypN_11034f1a8;
    do {
      if (lStack_90 == 0) {
        func_0x000107c61170(lVar4);
        (**(code **)(lVar10 + 8))(puVar9,lVar3);
        return 0;
      }
      func_0x000100102924(auStack_a8,auStack_c8);
      func_0x0001000bb420(auStack_c8,auStack_e8);
      uVar5 = 0;
      FUN_1023f20c0(0,0x112e94db0,&PTR_PTR_1126bce90);
      puVar6 = &uStack_f0;
      func_0x000107c6147c(puVar6,auStack_e8,puVar1 + 8,uVar5,6);
      uVar8 = uStack_f0;
      if ((int)puVar6 != 0) {
        uVar7 = uStack_f0;
        func_0x000107c40c8c();
        func_0x000107c61170(uVar8);
        if ((int)uVar7 == 5) {
          func_0x000107c61170(lVar4);
          (**(code **)(lVar10 + 8))(puVar9,lVar3);
          func_0x000100102924(auStack_c8,auStack_88);
          puVar6 = auStack_a8;
          func_0x000107c6147c(puVar6,auStack_88,puVar1 + 8,uVar5,6);
          if (((ulong)puVar6 & 1) == 0) {
            return 0;
          }
          uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
          uVar8 = auStack_a8[0];
          func_0x000107c5c6ac(auStack_a8[0]);
          func_0x000107c606d4();
          func_0x000107c4e924(uVar5);
          func_0x000107c61180();
          func_0x000107c61170(auStack_a8[0]);
          func_0x000107c61170(uVar8);
          return uVar5;
        }
      }
      func_0x000100183ab8(auStack_c8);
      func_0x000107c601c0(auStack_a8,lVar3,param_1);
    } while( true );
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ef6f0);
  (*pcVar2)();
}



/* Entry: 1023ef6f0; end: 1023ef8cb;  */

undefined * FUN_1023ef6f0(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puVar6;
  
  puVar6 = *(undefined **)(unaff_x20 + 0x10);
  puVar2 = puVar6;
  func_0x000107c426e0();
  if ((int)puVar2 != 0) {
    func_0x000107c4c930();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ef8cc);
      (*pcVar1)();
    }
    puVar2 = param_1;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c4ca84(puVar6);
      func_0x000107c61180();
      goto LAB_1023ef8ac;
    }
  }
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0xd000000000000027,0x800000010f097510);
  func_0x000107c4e920();
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
  func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                      PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f097540);
  uVar4 = 0;
  uVar3 = 0x737474;
  func_0x000107c5fadc(0x737474,0xe300000000000000);
  func_0x000107c5fadc(0,0xe000000000000000);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(0xe000000000000000);
  puVar6 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar2 = puVar5;
  func_0x000107c5ed2c(puVar5);
  func_0x000107c451ac(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
LAB_1023ef8ac:
  func_0x000107c61170(puVar2);
  return puVar6;
}



/* Entry: 1023ef8cc; end: 1023ef9df;  */

undefined1  [16] FUN_1023ef8cc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c606d4();
  func_0x000107c4e924();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c40dc8();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ef9dc);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c4ce20();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ef9e0);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c3f558();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5c82c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar5);
        goto LAB_1023ef9c4;
      }
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar5);
  }
  lVar4 = 0;
  param_2 = 0;
LAB_1023ef9c4:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 1023ef9e0; end: 1023efb7b;  */

ulong FUN_1023ef9e0(undefined4 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar7 = *(ulong *)(unaff_x20 + 0x10);
  uVar6 = uVar7;
  func_0x000107c426e0();
  if ((int)uVar6 != 0) {
    puVar2 = &UNK_110501040;
    func_0x000107c613fc(&UNK_110501040,0x14,7);
    *(undefined4 *)(puVar2 + 0x10) = param_1;
    pcStack_40 = FUN_1023f1e10;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ff0b04;
    puStack_48 = &UNK_110501058;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    uVar6 = uVar7;
    func_0x000107c4e91c();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    if (uVar6 != 0) {
      uVar4 = 0;
      FUN_1023f20c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar6;
      func_0x000107c5fc54(uVar6,uVar4);
      func_0x000107c61170(uVar6);
      if (uVar5 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar6 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar6 != 0) {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023efb7c);
            (*pcVar1)();
          }
          uVar4 = *(undefined8 *)(uVar5 + 0x20);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = 0;
          func_0x0001023f0bb0(0,uVar5,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
        }
        func_0x000107c6142c(uVar5);
        func_0x000107c4e924(uVar7);
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        return uVar7;
      }
      func_0x000107c6142c(uVar5);
    }
  }
  return 0;
}



/* Entry: 1023efb7c; end: 1023f09a7;  */

bool FUN_1023efb7c(long param_1,int param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_100 [4];
  int iStack_fc;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined8 auStack_a8 [3];
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c40c84();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023efda0);
    (*pcVar2)();
  }
  lVar4 = param_1;
  lStack_f8 = lVar10;
  func_0x000107c42ebc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar4 != 0) {
    iStack_fc = param_2;
    func_0x000107c600f4(puVar9);
    func_0x000100e15a08();
    func_0x000107c601c0(auStack_a8,lVar3,param_1);
    puVar1 = PTR___sypN_11034f1a8;
    do {
      if (lStack_90 == 0) {
        func_0x000107c61170(lVar4);
        (**(code **)(lStack_f8 + 8))(puVar9,lVar3);
        return false;
      }
      func_0x000100102924(auStack_a8,auStack_c8);
      func_0x0001000bb420(auStack_c8,auStack_e8);
      uVar5 = 0;
      FUN_1023f20c0(0,0x112e94db0,&PTR_PTR_1126bce90);
      puVar6 = &uStack_f0;
      func_0x000107c6147c(puVar6,auStack_e8,puVar1 + 8,uVar5,6);
      uVar8 = uStack_f0;
      if ((int)puVar6 != 0) {
        uVar7 = uStack_f0;
        func_0x000107c40c8c();
        func_0x000107c61170(uVar8);
        if ((int)uVar7 == 5) {
          func_0x000107c61170(lVar4);
          (**(code **)(lStack_f8 + 8))(puVar9,lVar3);
          func_0x000100102924(auStack_c8,auStack_88);
          puVar6 = auStack_a8;
          func_0x000107c6147c(puVar6,auStack_88,puVar1 + 8,uVar5,6);
          if (((ulong)puVar6 & 1) == 0) {
            return false;
          }
          uVar8 = auStack_a8[0];
          func_0x000107c5c6ac(auStack_a8[0]);
          func_0x000107c61170(auStack_a8[0]);
          return (int)uVar8 == iStack_fc;
        }
      }
      func_0x000100183ab8(auStack_c8);
      func_0x000107c601c0(auStack_a8,lVar3,param_1);
    } while( true );
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023efda4);
  (*pcVar2)();
}



/* Entry: 1023f09a8; end: 1023f0a6f;  */

bool FUN_1023f09a8(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f0a64);
    (*pcVar1)();
  }
  uVar2 = param_1;
  func_0x000107c44430();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f0a68);
    (*pcVar1)();
  }
  uVar3 = uVar2;
  func_0x000107c5bbe8(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c4f4ec();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f0a6c);
    (*pcVar1)();
  }
  uVar2 = param_2;
  func_0x000107c44430();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c5bbe8(uVar2);
    func_0x000107c61170(uVar2);
    return uVar3 < uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f0a70);
  (*pcVar1)();
}



/* Entry: 1023f0a70; end: 1023f0a93;  */

void FUN_1023f0a70(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023f0a94; end: 1023f0f27;  */

undefined * FUN_1023f0a94(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023f0bb0);
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
    puVar3 = (undefined *)0x112e95130;
    func_0x0001000285a8(0x112e95130,&UNK_10daa03c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1105008a0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1023f0f28; end: 1023f0f3b;  */

ulong FUN_1023f0f28(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023f0e50);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023f0e54);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61168(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61168(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1023f20c0(0,0x112d4e4a8,&PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023f0f28);
  (*pcVar2)();
}



/* Entry: 1023f0f3c; end: 1023f104b;  */

void FUN_1023f0f3c(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    func_0x0001010242e4();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0;
      FUN_1023f20c0(0,0x112d55598,&PTR_PTR_1126b25d0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1023f104c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1023f15d0(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}


