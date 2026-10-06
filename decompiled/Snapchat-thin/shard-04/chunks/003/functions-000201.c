/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032e6bd4; end: 1032e6c5b;  */

void FUN_1032e6bd4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c615e8(uVar1);
  if ((param_1 & 1) != 0) {
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_48 = param_2;
    uStack_40 = param_3;
    func_0x000107c61434(param_3);
    func_0x000100087c34(&uStack_60);
    func_0x000107c6142c(param_3);
  }
  return;
}



/* Entry: 1032e6c5c; end: 1032e6c97;  */

void FUN_1032e6c5c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032e6c98; end: 1032e6ca3;  */

void FUN_1032e6c98(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x38));
  return;
}



/* Entry: 1032e6ca4; end: 1032e6d03;  */

void FUN_1032e6ca4(void)

{
  FUN_1032e64c0();
  return;
}



/* Entry: 1032e6d04; end: 1032e6d5b;  */

/* WARNING: Possible PIC construction at 0x0001032e6d34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e6d38) */

void FUN_1032e6d04(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1032e6d5c; end: 1032e6ef7;  */

void FUN_1032e6d5c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x0001032e6e48(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1032e6ef8(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e6e44);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e6e48);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e6e40);
  (*pcVar1)();
}



/* Entry: 1032e6ef8; end: 1032e705b;  */

ulong FUN_1032e6ef8(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e705c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e7050);
        (*pcVar1)();
      }
      uVar3 = 0x112e94530;
      func_0x0001000285a8(0x112e94530,&UNK_10da9fc20);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e7054);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e7058);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c615f0(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c615f0(uVar3);
      }
      else {
        uVar7 = 0;
        do {
          uVar2 = uVar7;
          func_0x0001023df5e4(uVar7,param_3);
          param_1[uVar7] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1032e705c; end: 1032e7123;  */

undefined8 FUN_1032e705c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f569d8;
  func_0x0001000285a8(0x112f569d8,&UNK_10dbae338);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1032e7124; end: 1032e75eb;  */

void FUN_1032e7124(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9,
                  undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar5 = param_1;
  func_0x000107c614f0();
  FUN_1032e75ec();
  func_0x000104875e28(&puStack_90);
  if (puStack_90 == (undefined *)0x0) {
    lVar14 = lVar5;
    func_0x000107c452a4();
    func_0x000107c61180();
    if (lVar14 != 0) {
      func_0x000107c61170();
      goto LAB_1032e71b8;
    }
  }
  else {
    func_0x000107c61574();
LAB_1032e71b8:
    func_0x0001000d224c(&puStack_90);
    puVar4 = puStack_90;
    lVar14 = lVar5;
    func_0x000107c452a4();
    func_0x000107c61180();
    FUN_1032e7ed8(param_1,param_8,param_9 & 1,param_2,param_3,param_4,param_5,param_6,param_7,lVar14
                 );
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar14);
  }
  func_0x000104875e28(&puStack_90);
  puVar4 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    FUN_1032e9fcc(param_1,param_2,param_3,param_4,param_5,param_8,param_9 & 1);
    func_0x000107c61574(puVar4);
  }
  func_0x000104875e28(&puStack_90);
  puVar4 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    FUN_1032e60d0(param_8,param_2,param_3,param_4,param_5,param_11);
    func_0x000107c61574(puVar4);
  }
  lVar14 = param_1;
  func_0x000107c4a328();
  if ((int)lVar14 == 0) {
    uVar12 = 0;
  }
  else {
    lVar14 = param_1;
    func_0x000107c4a63c();
    uVar12 = (uint)lVar14 ^ 1;
  }
  func_0x000104875e28(&puStack_90);
  if (puStack_90 == (undefined *)0x0) {
    if ((uVar12 & 1) != 0) goto LAB_1032e72c4;
  }
  else {
    func_0x000107c61574();
LAB_1032e72c4:
    func_0x0001000d224c(&puStack_90);
    puVar4 = puStack_90;
    lVar14 = lVar5;
    func_0x000107c4f4a8(lVar5);
    func_0x000107c61180();
    func_0x0001032edd5c(param_1,param_8,param_9 & 1,param_2,param_3,param_4,param_5,lVar14);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar14);
  }
  func_0x000104875e28(&puStack_90);
  puVar4 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    lVar14 = *(long *)(puStack_90 + 0x18);
    if (lVar14 != 0) {
      uVar15 = *(ulong *)(puStack_90 + 0x10);
      uVar11 = *(ulong *)(puStack_90 + 0x20);
      lVar1 = *(long *)(puStack_90 + 0x28);
      uVar2 = *(undefined8 *)(puStack_90 + 0x30);
      uVar13 = *(undefined8 *)(puStack_90 + 0x38);
      uVar3 = puStack_90[0x40];
      func_0x000107c61434(lVar14);
      func_0x000107c61434(lVar1);
      func_0x000107c61434(uVar13);
      uVar6 = param_2;
      func_0x000107c5fb5c(param_2,param_3);
      if ((long)uVar6 < 1) {
        func_0x000107c61574(puStack_90);
        func_0x000107c61170(lVar5);
      }
      else {
        if (((uVar15 == param_2) && (lVar14 == param_3)) ||
           (uVar6 = uVar15, func_0x000107c605b8(uVar15,lVar14,param_2,param_3,0), (uVar6 & 1) != 0))
        {
          if (((uVar11 != param_4) || (lVar1 != param_5)) &&
             (uVar6 = uVar11, func_0x000107c605b8(uVar11,lVar1,param_4,param_5,0), (uVar6 & 1) == 0)
             ) {
            func_0x000107c61170(lVar5);
            FUN_1032e7e10(uVar15,lVar14,uVar11,lVar1,uVar2,uVar13,uVar3);
            func_0x000107c61574(puStack_90);
            return;
          }
          puVar7 = PTR_PTR_1126e0600;
          func_0x000107c610f8();
          func_0x000107c453e4();
          uVar8 = uVar2;
          func_0x000107c5fadc(uVar2,uVar13);
          func_0x000107c59fd0(puVar7);
          func_0x000107c61170(uVar8);
          func_0x000107c56824(puVar7);
          FUN_1032e7e10(uVar15,lVar14,uVar11,lVar1,uVar2,uVar13,uVar3);
          func_0x000107c55de0(param_1);
          if ((param_9 & 1) != 0) {
            puVar9 = &UNK_110639d70;
            func_0x000107c613fc(&UNK_110639d70,0x18,7);
            *(undefined **)(puVar9 + 0x10) = puVar7;
            pcStack_70 = FUN_1032e7e4c;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            puStack_80 = &UNK_1010c376c;
            puStack_78 = &UNK_110639d88;
            ppuVar10 = &puStack_90;
            puStack_68 = puVar9;
            func_0x000107c60bc4(ppuVar10);
            puVar9 = puStack_68;
            func_0x000107c61174(puVar7);
            func_0x000107c61574(puVar9);
            func_0x000107c5d440(param_8);
            func_0x000107c61170(puVar7);
            func_0x000107c61574(puVar4);
            func_0x000107c61170(lVar5);
            func_0x000107c60bd0(ppuVar10);
            return;
          }
          func_0x000107c61170(puVar7);
          func_0x000107c61574(puStack_90);
          goto LAB_1032e7520;
        }
        func_0x000107c61574(puStack_90);
        func_0x000107c61170(lVar5);
      }
      FUN_1032e7e10(uVar15,lVar14,uVar11,lVar1,uVar2,uVar13,uVar3);
      return;
    }
    func_0x000107c61574(puStack_90);
  }
LAB_1032e7520:
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 1032e75ec; end: 1032e7717;  */

undefined8 FUN_1032e75ec(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  func_0x000107c501d0();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    pcVar5 = (code *)0x0;
    puVar3 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = &UNK_110639dc0;
    func_0x000107c613fc(&UNK_110639dc0,0x18,7);
    *(undefined8 **)(puVar3 + 0x10) = &uStack_38;
    puVar1 = &UNK_110639de8;
    func_0x000107c613fc(&UNK_110639de8,0x20,7);
    pcVar5 = FUN_1032e7e80;
    *(code **)(puVar1 + 0x10) = FUN_1032e7e80;
    *(undefined **)(puVar1 + 0x18) = puVar3;
    uStack_48 = 0x1032e7eb0;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1019dec60;
    puStack_50 = &UNK_110639e00;
    ppuVar2 = &puStack_68;
    puStack_40 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_40);
    func_0x000107c4c590(unaff_x20);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(unaff_x20);
    uVar4 = uStack_38;
  }
  func_0x0001032e7e70(pcVar5,puVar3);
  return uVar4;
}



/* Entry: 1032e7718; end: 1032e782b; -[_TtC36SCLensPreviewConfiguringServicesImpl25LensPreviewConfigProvider configurePreview:lensSessionId:swipeId:lensId:snapDocEditor:snapEditorEnabled:caption:] */

/* WARNING: Possible PIC construction at 0x0001032e77fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e7800) */

void FUN_1032e7718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  uVar1 = param_2;
  func_0x000107c5faec(param_5);
  uVar2 = uVar1;
  func_0x000107c5faec(param_6);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_9);
  func_0x000107c6157c(param_1);
  FUN_1032e7124(param_3,param_4,param_2,param_5,uVar1,param_6,uVar2,param_7,param_8);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_9);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1032e782c; end: 1032e789b; -[_TtC36SCLensPreviewConfiguringServicesImpl25LensPreviewConfigProvider prepareLeaderboardShareStickerWithImage:] */

void FUN_1032e782c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000d224c(&uStack_38);
  FUN_1032ea82c(param_3);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1032e789c; end: 1032e791b; -[_TtC36SCLensPreviewConfiguringServicesImpl25LensPreviewConfigProvider notifyLeaderboardShareStickerReadyWithCompletion:] */

void FUN_1032e789c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c6157c(param_1);
  func_0x0001000d224c(&uStack_38);
  FUN_1032ed06c(uStack_38,param_3);
  func_0x000107c60bd0(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c60bd0(param_3);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 1032e791c; end: 1032e79a3; -[_TtC36SCLensPreviewConfiguringServicesImpl25LensPreviewConfigProvider addLeaderboardShareStickerWithImage:to:] */

void FUN_1032e791c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_1);
  func_0x0001000d224c(&uStack_38);
  FUN_1032ea9b4(param_3,param_4);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1032e79a4; end: 1032e7a47; -[_TtC36SCLensPreviewConfiguringServicesImpl25LensPreviewConfigProvider snapEditorLensSendStepConfigWithLensSessionId:swipeId:lensId:snapDocEditor:] */

void FUN_1032e79a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c6157c(param_1);
  FUN_1032e7aac(param_3,param_2,param_4,uVar1);
  func_0x000107c615e8(param_6);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1032e7a48; end: 1032e7aab;  */

void FUN_1032e7a48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032e7aac; end: 1032e7e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032e7aac(ulong param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lStack_68;
  
  func_0x000104875e28(&lStack_68);
  if (lStack_68 == 0) {
    func_0x000104875e28(&lStack_68);
    if (lStack_68 == 0) {
      return (undefined *)0x0;
    }
    func_0x000107c61574();
    func_0x0001000d224c(&lStack_68);
    lVar11 = *(long *)(lStack_68 + 0x18);
    if (lVar11 != 0) {
      uVar15 = *(ulong *)(lStack_68 + 0x10);
      uVar9 = *(ulong *)(lStack_68 + 0x20);
      lVar3 = *(long *)(lStack_68 + 0x28);
      lVar14 = *(long *)(lStack_68 + 0x30);
      func_0x000107c61434(lVar11);
      func_0x000107c61434(lVar3);
      func_0x000107c61174();
      uVar8 = param_1;
      func_0x000107c5fb5c(param_1,param_2);
      if (((0 < (long)uVar8) &&
          (((uVar15 == param_1 && (lVar11 == param_2)) ||
           (func_0x000107c605b8(uVar15,lVar11,param_1,param_2,0), (uVar15 & 1) != 0)))) &&
         (((uVar9 == param_3 && (lVar3 == param_4)) ||
          (func_0x000107c605b8(uVar9,lVar3,param_3,param_4,0), (uVar9 & 1) != 0)))) {
        uVar12 = *(undefined8 *)(lVar14 + _DAT_113076f28);
        uVar4 = ((undefined8 *)(lVar14 + _DAT_113076f28))[1];
        uVar1 = *(undefined8 *)(lVar14 + _DAT_113076f30);
        uVar5 = ((undefined8 *)(lVar14 + _DAT_113076f30))[1];
        uVar7 = *(undefined1 *)(lVar14 + _DAT_113076f40);
        uVar2 = *(undefined8 *)(lVar14 + _DAT_113076f38);
        uVar6 = ((undefined8 *)(lVar14 + _DAT_113076f38))[1];
        uVar13 = *(undefined8 *)(lVar14 + _DAT_113076f48);
        func_0x0001043fcd1c(0);
        func_0x000107c610f8();
        func_0x000107c61434(uVar6);
        func_0x000107c61434(uVar13);
        func_0x000107c61434(uVar4);
        func_0x000107c61434(uVar5);
        func_0x0001043fca88(uVar12,uVar4,uVar1,uVar5,uVar2,uVar6,uVar7,uVar13);
        puVar10 = PTR_PTR_1126b13c0;
        func_0x000107c61168(PTR_PTR_1126b13c0);
        func_0x000107c452b0();
        func_0x000107c61180();
        func_0x000107c61574(lStack_68);
        func_0x000107c61170(lVar14);
        func_0x000107c6142c(lVar3);
        func_0x000107c6142c(lVar11);
        func_0x000107c61170(uVar12);
        return puVar10;
      }
      func_0x000107c61574(lStack_68);
      func_0x000107c61170(lVar14);
      func_0x000107c6142c(lVar3);
      func_0x000107c6142c(lVar11);
      return (undefined *)0x0;
    }
  }
  else {
    func_0x000107c61574();
    func_0x0001000d224c(&lStack_68);
    lVar11 = *(long *)(lStack_68 + 0x60);
    if (lVar11 != 0) {
      uVar8 = *(ulong *)(lStack_68 + 0x58);
      uVar9 = *(ulong *)(lStack_68 + 0x68);
      lVar3 = *(long *)(lStack_68 + 0x70);
      uVar12 = *(undefined8 *)(lStack_68 + 0x78);
      if (((uVar8 == param_1 && lVar11 == param_2) ||
          (func_0x000107c605b8(uVar8,lVar11,param_1,param_2,0), (uVar8 & 1) != 0)) &&
         ((uVar9 == param_3 && lVar3 == param_4 ||
          (func_0x000107c605b8(uVar9,lVar3,param_3,param_4,0), (uVar9 & 1) != 0)))) {
        puVar10 = PTR_PTR_1126b13c0;
        func_0x000107c61168(PTR_PTR_1126b13c0);
        func_0x000107c61434(lVar11);
        func_0x000107c61434(lVar3);
        func_0x000107c61174(uVar12);
        func_0x000107c4f4a4(puVar10);
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
        func_0x000107c6142c(lVar3);
        func_0x000107c6142c(lVar11);
        func_0x000107c61574(lStack_68);
        return puVar10;
      }
      func_0x000107c61434(lVar11);
      func_0x000107c61434(lVar3);
      func_0x000107c6142c();
      func_0x000107c6142c(lVar11);
    }
  }
  func_0x000107c61574(lStack_68);
  return (undefined *)0x0;
}



/* Entry: 1032e7e10; end: 1032e7e4b;  */

/* WARNING: Possible PIC construction at 0x0001032e7e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e7e30) */

void FUN_1032e7e10(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1032e7e4c; end: 1032e7e7f;  */

void FUN_1032e7e4c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1bc330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setLensMusicInfo__11264caf0,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032e7e80; end: 1032e7ecf;  */

void FUN_1032e7e80(void)

{
  undefined8 in_x6;
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = in_x6;
  func_0x000107c61174(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1032e7ed0; end: 1032e7ed7;  */

void FUN_1032e7ed0(long param_1,long param_2)

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



/* Entry: 1032e7ed8; end: 1032e8d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e7ed8(undefined *param_1,long param_2,uint param_3,ulong param_4,long param_5,
                  ulong param_6,long param_7,ulong param_8,long param_9,ulong param_10)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  long unaff_x20;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puStack_e8;
  undefined *puStack_c8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  if (param_10 != 0) {
    lVar24 = param_2;
    func_0x000107c61174();
    uVar27 = param_10;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar26 = uVar27;
    func_0x000107c5faec();
    lVar21 = lVar24;
    func_0x000107c61170(uVar27);
    if (param_8 == uVar26 && param_9 == lVar24) {
      func_0x000107c6142c(lVar24);
    }
    else {
      func_0x000107c605b8(param_8,param_9,uVar26,lVar24,0);
      func_0x000107c6142c(lVar24);
      lVar21 = param_9;
      if ((param_8 & 1) == 0) {
        func_0x000107c61170(param_10);
        goto LAB_1032e85a0;
      }
    }
    uVar27 = param_10;
    func_0x000107c41198();
    func_0x000107c61180();
    uVar26 = uVar27;
    func_0x000107c5faec();
    func_0x000107c61170(uVar27);
    lVar24 = lVar21;
    func_0x000107c5fb5c(uVar26,lVar21);
    func_0x000107c6142c(lVar21);
    if (0 < (long)uVar26) {
      uVar27 = param_10;
      func_0x000107c41198();
      func_0x000107c61180();
      lVar21 = lVar24;
      uVar26 = uVar27;
      if (uVar27 == 0) {
        func_0x000107c5faec();
        lVar21 = lVar24;
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar24);
      }
      func_0x000107c5faec();
      func_0x0001043fcd1c(0);
      func_0x000107c610f8();
      func_0x000107c61434(lVar21);
      func_0x0001043fca88(uVar27,lVar21,0,0xe000000000000000,0,0,0,
                          PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar19 = PTR_PTR_1126b13c0;
      func_0x000107c61168(PTR_PTR_1126b13c0);
      func_0x000107c452b0();
      func_0x000107c61180();
      func_0x000107c55e60(param_1);
      func_0x000107c61170(puVar19);
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 == (undefined *)0x0) {
        func_0x000107c610f8(PTR_PTR_1126b13a8);
        func_0x000107c453e4();
        func_0x000107c55cb8(param_1);
      }
      func_0x000107c61170();
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 != (undefined *)0x0) {
        puVar9 = puVar19;
        func_0x000107c4119c();
        func_0x000107c61180();
        puVar18 = puVar19;
        if (puVar9 == (undefined *)0x0) {
          puVar18 = PTR_PTR_1126ad068;
          func_0x000107c610f8(PTR_PTR_1126ad068);
          func_0x000107c453e4();
          func_0x000107c53da0(puVar19);
        }
        func_0x000107c61170();
        func_0x000107c61170(puVar18);
      }
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 != (undefined *)0x0) {
        puVar9 = puVar19;
        func_0x000107c4119c();
        func_0x000107c61180();
        func_0x000107c61170(puVar19);
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c61170(uVar26);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d4c);
          (*pcVar8)();
        }
        func_0x000107c53d9c(puVar9);
        func_0x000107c61170(puVar9);
      }
      func_0x000107c61170(uVar26);
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 != (undefined *)0x0) {
        puVar9 = puVar19;
        func_0x000107c4119c();
        func_0x000107c61180();
        func_0x000107c61170(puVar19);
        if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d50);
          (*pcVar8)();
        }
        uVar16 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c53d90(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar16);
      }
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 != (undefined *)0x0) {
        puVar9 = puVar19;
        func_0x000107c4119c();
        func_0x000107c61180();
        func_0x000107c61170(puVar19);
        puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d54);
          (*pcVar8)();
        }
        uVar26 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e;
        if (uVar26 == 0) {
          puVar19 = (undefined *)0x0;
        }
        else {
          puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c60480();
        }
        puVar18 = (undefined *)0x0;
        puVar11 = puStack_e8;
        while (puVar19 != puVar18) {
          if (uVar26 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e83c8);
            (*pcVar8)();
          }
          puVar10 = puVar18;
          func_0x0001010e6634(puVar18,puVar11);
          puVar1 = puVar18 + 1;
          if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d68);
            (*pcVar8)();
          }
          uVar16 = 0;
          FUN_1032e9bc8(0,0x112dc0130,&PTR_PTR_1126afad0);
          lVar24 = *(long *)(puVar10 + _DAT_113076e50);
          lVar23 = *(long *)((long)(puVar10 + _DAT_113076e50) + 8);
          func_0x000107c61434(lVar23);
          func_0x000103ee3c34(lVar24,lVar23,uVar16,&PTR_DAT_110639e28);
          func_0x000107c61170(puVar10);
          puVar18 = puVar18 + 1;
          if (lVar24 != 0) {
            puVar18 = puStack_e8;
            func_0x000107c61550();
            if ((((int)puVar18 == 0) || ((long)puStack_e8 < 0)) ||
               (((ulong)puStack_e8 >> 0x3e & 1) != 0)) {
              if ((ulong)puStack_e8 >> 0x3e == 0) {
                puVar18 = *(undefined **)(((ulong)puStack_e8 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar18 = (undefined *)((ulong)puStack_e8 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puStack_e8) {
                  puVar18 = puStack_e8;
                }
                func_0x000107c60480(puVar18);
              }
              puVar11 = (undefined *)0x0;
              func_0x0001016b0d54(0,puVar18 + 1,1,puStack_e8);
              puStack_e8 = puVar11;
            }
            uVar22 = (ulong)puStack_e8 & 0xffffffffffffff8;
            uVar25 = *(ulong *)(uVar22 + 0x10);
            if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar25) {
              puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
              func_0x0001016b0d54(puVar18,uVar25 + 1,1,puStack_e8);
              uVar22 = (ulong)puVar18 & 0xffffffffffffff8;
              puStack_e8 = puVar18;
            }
            *(ulong *)(uVar22 + 0x10) = uVar25 + 1;
            *(long *)(uVar22 + uVar25 * 8 + 0x20) = lVar24;
            puVar18 = puVar1;
            puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
        }
        puVar19 = puStack_e8;
        FUN_1032e948c(puStack_e8,&PTR_PTR_1126afad0,0x112dc0130);
        func_0x000107c6142c(puStack_e8);
        puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar11 = puVar19;
        func_0x000107c5fc48(puVar19,PTR___sypN_11034f1a8 + 8);
        func_0x000107c6142c(puVar19);
        func_0x000107c45788(puVar18);
        func_0x000107c61170(puVar11);
        func_0x000107c56614(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar18);
      }
      if ((param_3 & 1) != 0) {
        puVar19 = &UNK_110639fa8;
        func_0x000107c613fc(&UNK_110639fa8,0x18,7);
        *(undefined **)(puVar19 + 0x10) = param_1;
        puVar9 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_88 = (code *)0x1032e9c20;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1010c376c;
        puStack_90 = &UNK_110639fc0;
        ppuVar12 = &puStack_a8;
        puStack_80 = puVar19;
        func_0x000107c60bc4(ppuVar12);
        puVar19 = puStack_80;
        func_0x000107c615f0(param_1);
        func_0x000107c61574(puVar19);
        func_0x000107c5d440(param_2);
        func_0x000107c60bd0(ppuVar12);
        puVar19 = &UNK_110639ff8;
        func_0x000107c613fc(&UNK_110639ff8,0x18,7);
        *(undefined **)(puVar19 + 0x10) = param_1;
        pcStack_88 = (code *)0x1032e9c24;
        puStack_a8 = puVar9;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1010c3770;
        puStack_90 = &UNK_11063a010;
        ppuVar12 = &puStack_a8;
        puStack_80 = puVar19;
        func_0x000107c60bc4(ppuVar12);
        puVar19 = puStack_80;
        func_0x000107c615f0(param_1);
        func_0x000107c61574(puVar19);
        func_0x000107c5d618(param_2);
        func_0x000107c61170(uVar27);
        func_0x000107c6142c(lVar21);
        func_0x000107c61170(param_10);
        func_0x000107c60bd0(ppuVar12);
        goto LAB_1032e85a0;
      }
      func_0x000107c61170(uVar27);
      func_0x000107c6142c(lVar21);
    }
    func_0x000107c61170(param_10);
  }
LAB_1032e85a0:
  lVar24 = *(long *)(unaff_x20 + 0x18);
  if (lVar24 != 0) {
    uVar25 = *(ulong *)(unaff_x20 + 0x10);
    uVar27 = *(ulong *)(unaff_x20 + 0x20);
    lVar21 = *(long *)(unaff_x20 + 0x28);
    lVar23 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c61434(lVar24);
    func_0x000107c61434(lVar21);
    func_0x000107c61174();
    uVar26 = param_4;
    func_0x000107c5fb5c(param_4,param_5);
    if ((((long)uVar26 < 1) ||
        (((uVar25 != param_4 || (lVar24 != param_5)) &&
         (func_0x000107c605b8(uVar25,lVar24,param_4,param_5,0), (uVar25 & 1) == 0)))) ||
       (((uVar27 != param_6 || (lVar21 != param_7)) &&
        (func_0x000107c605b8(uVar27,lVar21,param_6,param_7,0), (uVar27 & 1) == 0)))) {
      func_0x000107c61170(lVar23);
      func_0x000107c6142c(lVar21);
    }
    else {
      uVar16 = *(undefined8 *)(lVar23 + _DAT_113076f28);
      uVar3 = ((undefined8 *)(lVar23 + _DAT_113076f28))[1];
      uVar14 = *(undefined8 *)(lVar23 + _DAT_113076f30);
      uVar4 = ((undefined8 *)(lVar23 + _DAT_113076f30))[1];
      uVar7 = *(undefined1 *)(lVar23 + _DAT_113076f40);
      uVar20 = *(undefined8 *)(lVar23 + _DAT_113076f38);
      lVar5 = ((undefined8 *)(lVar23 + _DAT_113076f38))[1];
      uVar27 = *(ulong *)(lVar23 + _DAT_113076f48);
      func_0x0001043fcd1c(0);
      func_0x000107c610f8();
      func_0x000107c61434(lVar5);
      func_0x000107c61438(uVar3,2);
      func_0x000107c61438(uVar4,2);
      func_0x000107c61438(uVar27,2);
      uVar13 = uVar16;
      func_0x0001043fca88(uVar16,uVar3,uVar14,uVar4,uVar20,lVar5,uVar7,uVar27);
      puVar19 = PTR_PTR_1126b13c0;
      func_0x000107c61168(PTR_PTR_1126b13c0);
      func_0x000107c452b0();
      func_0x000107c61180();
      func_0x000107c55e60(param_1);
      func_0x000107c61170(puVar19);
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 == (undefined *)0x0) {
        func_0x000107c610f8(PTR_PTR_1126b13a8);
        func_0x000107c453e4();
        func_0x000107c55cb8(param_1);
      }
      func_0x000107c61170();
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 != (undefined *)0x0) {
        puVar9 = puVar19;
        func_0x000107c4119c();
        func_0x000107c61180();
        puVar18 = puVar19;
        if (puVar9 == (undefined *)0x0) {
          puVar18 = PTR_PTR_1126ad068;
          func_0x000107c610f8(PTR_PTR_1126ad068);
          func_0x000107c453e4();
          func_0x000107c53da0(puVar19);
        }
        func_0x000107c61170();
        func_0x000107c61170(puVar18);
      }
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 != (undefined *)0x0) {
        puVar9 = puVar19;
        func_0x000107c4119c();
        func_0x000107c61180();
        func_0x000107c61170(puVar19);
        if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d58);
          (*pcVar8)();
        }
        func_0x000107c5fadc(uVar16,uVar3);
        func_0x000107c53d9c(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar16);
      }
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 != (undefined *)0x0) {
        puVar9 = puVar19;
        func_0x000107c4119c();
        func_0x000107c61180();
        func_0x000107c61170(puVar19);
        if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d5c);
          (*pcVar8)();
        }
        func_0x000107c5fadc(uVar14,uVar4);
        func_0x000107c53d90(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar14);
      }
      puVar19 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar19 != (undefined *)0x0) {
        puVar9 = puVar19;
        func_0x000107c4119c();
        func_0x000107c61180();
        func_0x000107c61170(puVar19);
        if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d60);
          (*pcVar8)();
        }
        uVar26 = uVar27 & 0xffffffffffffff8;
        if (uVar27 >> 0x3e == 0) {
          uVar25 = *(ulong *)(uVar26 + 0x10);
        }
        else {
          uVar25 = uVar26;
          if (0x7fffffffffffffff < uVar27) {
            uVar25 = uVar27;
          }
          func_0x000107c60480();
        }
        puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar22 = 0;
        while (uVar25 != uVar22) {
          if ((uVar27 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar26 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d18);
              (*pcVar8)();
            }
            uVar15 = *(ulong *)(uVar27 + uVar22 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar15 = uVar22;
            func_0x0001010e6634(uVar22,uVar27);
          }
          uVar2 = uVar22 + 1;
          if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d14);
            (*pcVar8)();
          }
          uVar16 = 0;
          FUN_1032e9bc8(0,0x112dc0130,&PTR_PTR_1126afad0);
          lVar17 = *(long *)(uVar15 + _DAT_113076e50);
          lVar6 = ((long *)(uVar15 + _DAT_113076e50))[1];
          func_0x000107c61434(lVar6);
          func_0x000103ee3c34(lVar17,lVar6,uVar16,&PTR_DAT_110639e28);
          func_0x000107c61170(uVar15);
          uVar22 = uVar22 + 1;
          if (lVar17 != 0) {
            puVar19 = puStack_c8;
            func_0x000107c61550();
            if ((((int)puVar19 == 0) || ((long)puStack_c8 < 0)) ||
               (puVar19 = puStack_c8, ((ulong)puStack_c8 >> 0x3e & 1) != 0)) {
              if ((ulong)puStack_c8 >> 0x3e == 0) {
                puVar18 = *(undefined **)(((ulong)puStack_c8 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar18 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puStack_c8) {
                  puVar18 = puStack_c8;
                }
                func_0x000107c60480(puVar18);
              }
              puVar19 = (undefined *)0x0;
              func_0x0001016b0d54(0,puVar18 + 1,1,puStack_c8);
            }
            uVar15 = (ulong)puVar19 & 0xffffffffffffff8;
            uVar22 = *(ulong *)(uVar15 + 0x10);
            puStack_c8 = puVar19;
            if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar22) {
              puStack_c8 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
              func_0x0001016b0d54(puStack_c8,uVar22 + 1,1,puVar19);
              uVar15 = (ulong)puStack_c8 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar15 + 0x10) = uVar22 + 1;
            *(long *)(uVar15 + uVar22 * 8 + 0x20) = lVar17;
            uVar22 = uVar2;
          }
        }
        puVar19 = puStack_c8;
        FUN_1032e948c(puStack_c8,&PTR_PTR_1126afad0,0x112dc0130);
        func_0x000107c6142c(puStack_c8);
        puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar11 = puVar19;
        func_0x000107c5fc48(puVar19,PTR___sypN_11034f1a8 + 8);
        func_0x000107c6142c(puVar19);
        func_0x000107c45788(puVar18);
        func_0x000107c61170(puVar11);
        func_0x000107c56614(puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar18);
      }
      if (lVar5 != 0) {
        puVar19 = param_1;
        func_0x000107c4afb0();
        func_0x000107c61180();
        if (puVar19 != (undefined *)0x0) {
          puVar9 = puVar19;
          func_0x000107c4119c();
          func_0x000107c61180();
          func_0x000107c61170(puVar19);
          if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1032e8d64);
            (*pcVar8)();
          }
          func_0x000107c5fadc(uVar20,lVar5);
          func_0x000107c577f4(puVar9);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(uVar20);
        }
      }
      if ((param_3 & 1) != 0) {
        puVar19 = &UNK_110639f08;
        func_0x000107c613fc(&UNK_110639f08,0x18,7);
        *(undefined **)(puVar19 + 0x10) = param_1;
        puVar9 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_88 = FUN_1032e99a4;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1010c376c;
        puStack_90 = &UNK_110639f20;
        ppuVar12 = &puStack_a8;
        puStack_80 = puVar19;
        func_0x000107c60bc4(ppuVar12);
        puVar19 = puStack_80;
        func_0x000107c615f0(param_1);
        func_0x000107c61574(puVar19);
        func_0x000107c5d440(param_2);
        func_0x000107c60bd0(ppuVar12);
        puVar19 = &UNK_110639f58;
        func_0x000107c613fc(&UNK_110639f58,0x18,7);
        *(undefined **)(puVar19 + 0x10) = param_1;
        pcStack_88 = (code *)0x1032e99c4;
        puStack_a8 = puVar9;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1010c3770;
        puStack_90 = &UNK_110639f70;
        ppuVar12 = &puStack_a8;
        puStack_80 = puVar19;
        func_0x000107c60bc4(ppuVar12);
        puVar19 = puStack_80;
        func_0x000107c615f0(param_1);
        func_0x000107c61574(puVar19);
        func_0x000107c5d618(param_2);
        func_0x000107c61170(uVar13);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(uVar27);
        func_0x000107c61170(lVar23);
        func_0x000107c6142c(lVar21);
        func_0x000107c6142c(lVar24);
        func_0x000107c60bd0(ppuVar12);
        return;
      }
      func_0x000107c61170(uVar13);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar27);
      func_0x000107c61170(lVar23);
      func_0x000107c6142c(lVar21);
    }
    func_0x000107c6142c(lVar24);
  }
  return;
}



/* Entry: 1032e8d68; end: 1032e90ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1032e8d68(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  if (param_7 == 0) goto LAB_1032e8f10;
  lVar12 = param_2;
  func_0x000107c61174();
  uVar7 = param_7;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  lVar11 = lVar12;
  func_0x000107c61170(uVar7);
  if ((param_5 == uVar8) && (param_6 == lVar12)) {
    func_0x000107c6142c(lVar12);
    param_6 = lVar11;
LAB_1032e8e18:
    uVar7 = param_7;
    func_0x000107c41198();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    lVar12 = param_6;
    func_0x000107c5fb5c(uVar8,param_6);
    func_0x000107c6142c(param_6);
    if (0 < (long)uVar8) {
      puVar10 = PTR_PTR_1126b13c0;
      func_0x000107c61168(PTR_PTR_1126b13c0);
      uVar7 = param_7;
      func_0x000107c41198(param_7);
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x000107c5faec();
      func_0x000107c61170(uVar7);
      func_0x0001043fcd1c(0);
      func_0x000107c610f8();
      func_0x0001043fca88(uVar8,lVar12,0,0xe000000000000000,0,0,0,
                          PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c452b0(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(param_7);
      return puVar10;
    }
  }
  else {
    func_0x000107c605b8(param_5,param_6,uVar8,lVar12,0);
    func_0x000107c6142c(lVar12);
    if ((param_5 & 1) != 0) goto LAB_1032e8e18;
  }
  func_0x000107c61170(param_7);
LAB_1032e8f10:
  lVar12 = *(long *)(unaff_x20 + 0x18);
  if (lVar12 != 0) {
    uVar15 = *(ulong *)(unaff_x20 + 0x10);
    uVar7 = *(ulong *)(unaff_x20 + 0x20);
    lVar11 = *(long *)(unaff_x20 + 0x28);
    lVar13 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c61434(lVar12);
    func_0x000107c61434(lVar11);
    func_0x000107c61174();
    uVar8 = param_1;
    func_0x000107c5fb5c(param_1,param_2);
    if (((0 < (long)uVar8) &&
        (((uVar15 == param_1 && (lVar12 == param_2)) ||
         (func_0x000107c605b8(uVar15,lVar12,param_1,param_2,0), (uVar15 & 1) != 0)))) &&
       (((uVar7 == param_3 && (lVar11 == param_4)) ||
        (func_0x000107c605b8(uVar7,lVar11,param_3,param_4,0), (uVar7 & 1) != 0)))) {
      uVar9 = *(undefined8 *)(lVar13 + _DAT_113076f28);
      uVar3 = ((undefined8 *)(lVar13 + _DAT_113076f28))[1];
      uVar1 = *(undefined8 *)(lVar13 + _DAT_113076f30);
      uVar4 = ((undefined8 *)(lVar13 + _DAT_113076f30))[1];
      uVar6 = *(undefined1 *)(lVar13 + _DAT_113076f40);
      uVar2 = *(undefined8 *)(lVar13 + _DAT_113076f38);
      uVar5 = ((undefined8 *)(lVar13 + _DAT_113076f38))[1];
      uVar14 = *(undefined8 *)(lVar13 + _DAT_113076f48);
      func_0x0001043fcd1c(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar14);
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      func_0x0001043fca88(uVar9,uVar3,uVar1,uVar4,uVar2,uVar5,uVar6,uVar14);
      puVar10 = PTR_PTR_1126b13c0;
      func_0x000107c61168(PTR_PTR_1126b13c0);
      func_0x000107c452b0();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      func_0x000107c6142c(lVar11);
      func_0x000107c6142c(lVar12);
      func_0x000107c61170(uVar9);
      return puVar10;
    }
    func_0x000107c61170(lVar13);
    func_0x000107c6142c(lVar11);
    func_0x000107c6142c(lVar12);
  }
  return (undefined *)0x0;
}



/* Entry: 1032e90f0; end: 1032e9113;  */

void FUN_1032e90f0(undefined8 *param_1,undefined8 param_2)

{
  func_0x000103ee3c34();
  *param_1 = param_2;
  return;
}



/* Entry: 1032e9114; end: 1032e912b;  */

/* WARNING: Possible PIC construction at 0x000103ee397c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ee3980) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b00) */
/* WARNING: Removing unreachable block (ram,0x000103ee398c) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b04) */
/* WARNING: Removing unreachable block (ram,0x000103ee3994) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b08) */
/* WARNING: Removing unreachable block (ram,0x000103ee399c) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b0c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39a0) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b10) */
/* WARNING: Removing unreachable block (ram,0x000103ee39a8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b14) */
/* WARNING: Removing unreachable block (ram,0x000103ee39ac) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b18) */
/* WARNING: Removing unreachable block (ram,0x000103ee39b4) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b1c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39b8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b20) */
/* WARNING: Removing unreachable block (ram,0x000103ee39c0) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b24) */
/* WARNING: Removing unreachable block (ram,0x000103ee39c4) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b28) */
/* WARNING: Removing unreachable block (ram,0x000103ee39cc) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b2c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39d0) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b30) */
/* WARNING: Removing unreachable block (ram,0x000103ee39d8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b34) */
/* WARNING: Removing unreachable block (ram,0x000103ee39dc) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b38) */
/* WARNING: Removing unreachable block (ram,0x000103ee39e4) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b3c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39e8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b40) */
/* WARNING: Removing unreachable block (ram,0x000103ee3ad8) */

void FUN_1032e9114(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long alStack_110 [8];
  undefined1 auStack_d0 [80];
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar12 = param_1;
  (**(code **)(param_2 + 0x18))();
  (**(code **)(param_2 + 0x30))(param_1,param_2);
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uStack_70 = uVar12 >> 0x20 | uVar12 << 0x20;
  uVar12 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uStack_78 = uVar12 >> 0x20 | uVar12 << 0x20;
  puVar4 = &uStack_70;
  puVar8 = &uStack_68;
  func_0x000100e36f4c(puVar4,puVar8);
  puVar5 = &uStack_78;
  puVar9 = &uStack_70;
  func_0x000100e36f4c(puVar5,puVar9);
  func_0x00010006c00c(puVar4,(ulong)puVar8 & 0xffffffffffffff);
  puVar6 = puVar4;
  func_0x0001018e4e30(puVar4,(ulong)puVar8 & 0xffffffffffffff);
  func_0x00010006c00c(puVar5,(ulong)puVar9 & 0xffffffffffffff);
  puVar7 = puVar5;
  func_0x0001018e4e30(puVar5,(ulong)puVar9 & 0xffffffffffffff);
  puStack_80 = puVar6;
  *(ulong **)((long)alStack_110 + lVar1) = puVar5;
  *(undefined1 **)((long)alStack_110 + lVar1 + 8) = auStack_d0 + lVar1;
  *(ulong **)((long)alStack_110 + lVar1 + 0x10) = puVar4;
  *(long *)((long)alStack_110 + lVar1 + 0x18) = lVar11;
  *(ulong ***)((long)alStack_110 + lVar1 + 0x20) = &puStack_80;
  *(long *)((long)alStack_110 + lVar1 + 0x28) = lVar3;
  *(undefined1 **)((long)alStack_110 + lVar1 + 0x30) = &stack0xfffffffffffffff0;
  *(undefined **)((long)alStack_110 + lVar1 + 0x38) = &UNK_103ee3980;
  puVar9 = puStack_80;
  uVar12 = puVar7[2];
  uVar13 = puStack_80[2];
  if (SCARRY8(uVar13,uVar12)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c28);
    (*pcVar2)();
  }
  puVar6 = puStack_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar6 == 0) || (uVar10 = puVar9[3] >> 1, (long)uVar10 < (long)(uVar13 + uVar12))) {
    func_0x0001014d97ac();
    uVar10 = puVar6[3] >> 1;
    uVar13 = puVar7[2];
    puVar9 = puVar6;
  }
  else {
    uVar13 = puVar7[2];
  }
  if (uVar13 == 0) {
    _swift_bridgeObjectRelease(puVar7);
    if (uVar12 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c2c);
      (*pcVar2)();
    }
  }
  else {
    if (uVar10 - puVar9[2] < uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c30);
      (*pcVar2)();
    }
    _memcpy((long)puVar9 + puVar9[2] + 0x20,puVar7 + 4,uVar12);
    _swift_bridgeObjectRelease(puVar7);
    if (uVar12 != 0) {
      if (SCARRY8(puVar9[2],uVar12)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c34);
        (*pcVar2)();
      }
      puVar9[2] = puVar9[2] + uVar12;
    }
  }
  return;
}



/* Entry: 1032e912c; end: 1032e9163;  */

undefined1  [16] FUN_1032e912c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[1] = uVar1;
  func_0x000107c44e64();
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1032e9164;
  return auVar2;
}



/* Entry: 1032e9164; end: 1032e9183;  */

void FUN_1032e9164(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a85b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1[1],PTR_s_setHighBits__112647b88,*param_1);
  return;
}



/* Entry: 1032e9184; end: 1032e91bb;  */

undefined1  [16] FUN_1032e9184(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[1] = uVar1;
  func_0x000107c4c0fc();
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1032e91bc;
  return auVar2;
}



/* Entry: 1032e91bc; end: 1032e91c7;  */

void FUN_1032e91bc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1[1],PTR_s_setLowBits__11264de20,*param_1);
  return;
}



/* Entry: 1032e91c8; end: 1032e92f7; -[_TtC36SCLensPreviewConfiguringServicesImpl35LensPreviewInLensCreationConfigurer setCustomizationString:customizationId:lensSessionId:previewText:swipeId:shouldCallBackend:mentions:] */

void FUN_1032e91c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  if (param_6 == 0) {
    param_6 = 0;
    uVar7 = 0;
    uVar5 = uVar4;
  }
  else {
    uVar7 = uVar4;
    func_0x000107c5faec(param_6);
    uVar5 = uVar7;
  }
  func_0x000107c5faec();
  uVar2 = 0;
  func_0x0001043fc638(0);
  func_0x000107c5fc54(param_9,uVar2);
  func_0x0001043fcd1c(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_1);
  func_0x0001043fca88(param_4,uVar3,param_3,param_2,param_6,uVar7,param_8,param_9);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = param_7;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  func_0x0001032e9968(uVar3,uVar2,uVar7,uVar1,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1032e92f8; end: 1032e9463; -[_TtC36SCLensPreviewConfiguringServicesImpl35LensPreviewInLensCreationConfigurer makeSnapEditorLensSendStepConfigWithLensId:lensSessionId:] */

void FUN_1032e92f8(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  func_0x000107c5faec(param_3);
  lVar4 = param_2;
  func_0x000107c5faec();
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    if ((uVar7 == param_4 && lVar5 == lVar4) ||
       (uVar3 = uVar7, func_0x000107c605b8(uVar7,lVar5,param_4,lVar4,0), (uVar3 & 1) != 0)) {
      func_0x000107c6157c(param_1);
      FUN_1032e992c(uVar7,lVar5,uVar1,uVar2,uVar6);
      FUN_1032e8d68(param_4,lVar4,uVar1,uVar2,param_3,param_2,0);
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(lVar5);
      func_0x000107c61574(param_1);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar4);
      goto LAB_1032e9448;
    }
    func_0x000107c6157c(param_1);
    FUN_1032e992c(uVar7,lVar5,uVar1,uVar2,uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(lVar5);
    func_0x000107c61574(param_1);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar4);
  param_4 = 0;
LAB_1032e9448:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1032e9464; end: 1032e948b;  */

undefined * FUN_1032e9464(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032e9678);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1032e9bc8(0,0x112f56b48,&PTR_PTR_1126e05f8);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        FUN_1032e9a0c(uVar8,param_1,&PTR_PTR_1126e05f8,0x112f56b48);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1032e9bc8(0,0x112f56b48,&PTR_PTR_1126e05f8);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 1032e948c; end: 1032e9677;  */

undefined * FUN_1032e948c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032e9678);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1032e9bc8(0,param_3,param_2);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        FUN_1032e9a0c(uVar8,param_1,param_2,param_3);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1032e9bc8(0,param_3,param_2);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 1032e9678; end: 1032e96d7;  */

/* WARNING: Possible PIC construction at 0x0001032e96c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e96c4) */

void FUN_1032e9678(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x000107c4adb4();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c4afb0(param_2);
    func_0x000107c61180();
    func_0x000107c53734(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e96d8);
  (*pcVar1)();
}



/* Entry: 1032e96d8; end: 1032e9703;  */

void FUN_1032e96d8(void)

{
  long unaff_x20;
  
  func_0x0001032e9968(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032e9704; end: 1032e975f;  */

long FUN_1032e9704(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032e9760; end: 1032e9837;  */

undefined8 * FUN_1032e9760(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1032e9838; end: 1032e988b;  */

undefined8 * FUN_1032e9838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 1032e988c; end: 1032e992b;  */

int FUN_1032e988c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032e992c; end: 1032e99a3;  */

void FUN_1032e992c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_5);
    return;
  }
  return;
}



/* Entry: 1032e99a4; end: 1032e99cb;  */

void FUN_1032e99a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4afb0(uVar1);
  func_0x000107c61180();
  func_0x000107c55cb8(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1032e99cc; end: 1032e9a0b;  */

void FUN_1032e99cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4afb0(uVar1);
  func_0x000107c61180();
  func_0x000107c55cb8(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1032e9a0c; end: 1032e9bc7;  */

ulong FUN_1032e9a0c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032e9af0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032e9af4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1032e9bc8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032e9bc8);
  (*pcVar2)();
}



/* Entry: 1032e9bc8; end: 1032e9c07;  */

void FUN_1032e9bc8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032e9c08; end: 1032e9c27;  */

void FUN_1032e9c08(long param_1,long param_2)

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



/* Entry: 1032e9c28; end: 1032e9cfb;  */

/* WARNING: Possible PIC construction at 0x0001032e7e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e7e30) */

long FUN_1032e9c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  long lVar9;
  char cVar10;
  char cVar11;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  cVar6 = *(char *)(unaff_x20 + 0x40);
  cVar10 = '\x02';
  if (param_7 != '\x01') {
    cVar10 = '\0';
  }
  cVar11 = '\x01';
  if (param_7 == '\0') {
    cVar11 = '\x02';
  }
  cVar8 = '\x01';
  if (cVar6 != '\x01') {
    cVar11 = cVar6;
    cVar8 = cVar6;
  }
  cVar7 = '\0';
  if (cVar6 != '\0') {
    cVar10 = cVar11;
    cVar7 = cVar8;
  }
  if (lVar9 != 0) {
    param_7 = cVar10;
    cVar6 = cVar7;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(char *)(unaff_x20 + 0x40) = param_7;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  if (lVar9 == 0) {
    return lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (lVar9,lVar9,uVar2,uVar4,uVar3,uVar5,cVar6,param_8,unaff_x20,unaff_x19,unaff_x29,
             unaff_x30);
  return lVar9;
}



/* Entry: 1032e9cfc; end: 1032e9d03;  */

void FUN_1032e9cfc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bc330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLensMusicInfo__11264caf0,param_2);
  return;
}



/* Entry: 1032e9d04; end: 1032e9d33;  */

void FUN_1032e9d04(void)

{
  long unaff_x20;
  
  FUN_1032e7e10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined1 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032e9d34; end: 1032e9d8f;  */

long FUN_1032e9d34(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032e9d90; end: 1032e9e7f;  */

undefined8 * FUN_1032e9d90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1032e9e80; end: 1032e9edb;  */

undefined8 * FUN_1032e9e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 1032e9edc; end: 1032e9f83;  */

int FUN_1032e9edc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032e9f84; end: 1032e9fa3;  */

void FUN_1032e9f84(void)

{
  FUN_1032e9c28();
  return;
}



/* Entry: 1032e9fa4; end: 1032e9fcb;  */

/* WARNING: Possible PIC construction at 0x0001032e7e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e7e30) */

long FUN_1032e9fa4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  
  lVar8 = *unaff_x20;
  lVar1 = *(long *)(lVar8 + 0x10);
  lVar7 = *(long *)(lVar8 + 0x18);
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  uVar4 = *(undefined8 *)(lVar8 + 0x28);
  uVar3 = *(undefined8 *)(lVar8 + 0x30);
  uVar5 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  uVar6 = *(undefined1 *)(lVar8 + 0x40);
  *(undefined1 *)(lVar8 + 0x40) = 0;
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7,lVar7,uVar2,uVar4,uVar3,uVar5,uVar6);
    return lVar7;
  }
  return lVar1;
}



/* Entry: 1032e9fcc; end: 1032ea82b;  */

void FUN_1032e9fcc(undefined *param_1,ulong param_2,long param_3,ulong param_4,long param_5,
                  undefined8 param_6,uint param_7)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 auStack_118 [3];
  undefined1 auStack_100 [32];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar11 = *(long *)(unaff_x20 + 0x18);
  if ((lVar11 != 0) &&
     ((((uVar2 = *(ulong *)(unaff_x20 + 0x10), uVar2 == param_2 && lVar11 == param_3 ||
        (func_0x000107c605b8(uVar2,lVar11,param_2,param_3,0), (uVar2 & 1) != 0)) &&
       (lVar11 = *(long *)(unaff_x20 + 0x28), lVar11 != 0)) &&
      ((uVar2 = *(ulong *)(unaff_x20 + 0x20), uVar2 == param_4 && lVar11 == param_5 ||
       (func_0x000107c605b8(uVar2,lVar11,param_4,param_5,0), (uVar2 & 1) != 0)))))) {
    uVar20 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar18 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x60);
    lStack_d8 = *(long *)(unaff_x20 + 0x38);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar19 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_d0 = uVar4;
    uStack_c8 = uVar19;
    uStack_c0 = uVar16;
    uStack_b8 = uVar20;
    uStack_b0 = uVar17;
    uStack_a8 = uVar18;
    if (lStack_d8 != 0) {
      func_0x0001032ed8d8(&uStack_e0,&puStack_158);
      func_0x000107c61174();
      puVar3 = (undefined *)0x0;
      func_0x0001032efa90(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar2 = *(ulong *)(puVar3 + 0x10);
      puVar9 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
        func_0x0001032efa90(puVar9,uVar2 + 1,1,puVar3);
      }
      *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x20) = uVar4;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x40) = uVar17;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x38) = uVar20;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x30) = uVar16;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x28) = uVar19;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x48) = uVar18;
      FUN_1032ed5a8(&uStack_e0);
    }
    lVar11 = *(long *)(unaff_x20 + 0x70);
    if (lVar11 != 0) {
      uVar16 = *(undefined8 *)(unaff_x20 + 0x98);
      uVar18 = *(undefined8 *)(unaff_x20 + 0x90);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
      uVar19 = *(undefined8 *)(unaff_x20 + 0x80);
      uVar17 = *(undefined8 *)(unaff_x20 + 0x78);
      func_0x000107c61174();
      func_0x000107c61174();
      puVar3 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar3 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001032efa90(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar2 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001032efa90(puVar9,uVar2 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
      *(long *)(puVar9 + uVar2 * 0x30 + 0x20) = lVar11;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x40) = uVar18;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x38) = uVar4;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x30) = uVar19;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x28) = uVar17;
      *(undefined8 *)(puVar9 + uVar2 * 0x30 + 0x48) = uVar16;
      func_0x000107c61170(lVar11);
    }
    lVar11 = *(long *)(puVar9 + 0x10);
    if (lVar11 != 0) {
      puVar3 = PTR_PTR_1126b13b8;
      func_0x000107c61168(PTR_PTR_1126b13b8);
      puVar8 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      puVar13 = (undefined8 *)(puVar9 + 0x48);
      do {
        uVar4 = puVar13[-5];
        uVar17 = puVar13[-4];
        uVar18 = puVar13[-3];
        uVar19 = puVar13[-2];
        uVar16 = puVar13[-1];
        uVar20 = *puVar13;
        func_0x000107c61174(uVar4);
        func_0x000107c61174();
        puVar5 = puVar8;
        func_0x000107c44410(puVar8);
        func_0x000107c61180();
        puVar6 = puVar3;
        func_0x000107c3d88c(uVar19,uVar16,uVar17,uVar18,0x3ff0000000000000,uVar20,puVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        lVar11 = lVar11 + -1;
        puVar13 = puVar13 + 6;
      } while (lVar11 != 0);
    }
    func_0x0001000285a8(0x112f56d00,&UNK_10dbae5a0);
    func_0x000100087bd4(&puStack_158,FUN_1032ed968);
    puVar8 = puStack_148;
    uVar4 = uStack_150;
    puVar3 = puStack_158;
    if (puStack_158 != (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b13b8;
      func_0x000107c61168(PTR_PTR_1126b13b8);
      puVar6 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      func_0x000107c61174(puVar3);
      func_0x000107c44410(puVar6);
      func_0x000107c61180();
      func_0x000107c3d88c(uVar4,puVar8,0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,0,
                          puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61428(unaff_x20 + 0xc0,auStack_100,0,0);
    lVar11 = *(long *)(unaff_x20 + 0xc0);
    ppuVar14 = *(undefined ***)(lVar11 + 0x10);
    if (ppuVar14 == (undefined **)0x0) {
      lVar11 = *(long *)(unaff_x20 + 0xa8);
      ppuVar10 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(lVar11);
      ppuVar10 = ppuVar14;
      func_0x0001010c3c44(ppuVar14,0);
      ppuVar15 = &puStack_158;
      func_0x0001032ecf20(ppuVar15,ppuVar10 + 4,ppuVar14,lVar11);
      FUN_1032ed88c(puStack_158,uStack_150,puStack_148,puStack_140,uStack_138);
      if (ppuVar15 != ppuVar14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ea7f4);
        (*pcVar1)();
      }
      lVar11 = *(long *)(unaff_x20 + 0xa8);
    }
    if (lVar11 != 0) {
      uVar18 = *(undefined8 *)(unaff_x20 + 0xa0);
      uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
      uVar17 = *(undefined8 *)(unaff_x20 + 0xb8);
      func_0x0001032ed89c(uVar18,lVar11,uVar4,uVar17);
      func_0x000107c61174();
      ppuVar14 = ppuVar10;
      func_0x000107c61550();
      if ((((int)ppuVar14 == 0) || ((long)ppuVar10 < 0)) ||
         (ppuVar14 = ppuVar10, ((ulong)ppuVar10 >> 0x3e & 1) != 0)) {
        if ((ulong)ppuVar10 >> 0x3e == 0) {
          ppuVar15 = *(undefined ***)(((ulong)ppuVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          ppuVar15 = (undefined **)((ulong)ppuVar10 & 0xffffffffffffff8);
          if ((undefined **)0x7fffffffffffffff < ppuVar10) {
            ppuVar15 = ppuVar10;
          }
          func_0x000107c60480(ppuVar15);
        }
        ppuVar14 = (undefined **)0x0;
        func_0x0001010c39b4(0,(undefined *)((long)ppuVar15 + 1),1,ppuVar10);
      }
      uVar12 = (ulong)ppuVar14 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar12 + 0x10);
      ppuVar10 = ppuVar14;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
        ppuVar10 = (undefined **)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        func_0x0001010c39b4(ppuVar10,uVar2 + 1,1,ppuVar14);
        uVar12 = (ulong)ppuVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
      *(undefined8 *)(uVar12 + uVar2 * 8 + 0x20) = uVar4;
      func_0x000107c61428(unaff_x20 + 200,&puStack_158,0x21,0);
      func_0x000107c61434(lVar11);
      func_0x000107c61174(uVar17);
      uVar19 = *(undefined8 *)(unaff_x20 + 200);
      func_0x000107c61558(uVar19);
      auStack_118[0] = *(undefined8 *)(unaff_x20 + 200);
      *(undefined8 *)(unaff_x20 + 200) = 0x8000000000000000;
      FUN_1032ec808(uVar17,uVar18,lVar11,uVar19,0x112f56cf8,&UNK_10dbae578);
      func_0x000107c6142c(lVar11);
      *(undefined8 *)(unaff_x20 + 200) = auStack_118[0];
      func_0x000107c614a8(&puStack_158);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar4);
      func_0x000107c6142c(lVar11);
    }
    if ((ulong)ppuVar10 >> 0x3e == 0) {
      ppuVar14 = *(undefined ***)(((ulong)ppuVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      ppuVar14 = (undefined **)((ulong)ppuVar10 & 0xffffffffffffff8);
      if ((undefined **)0x7fffffffffffffff < ppuVar10) {
        ppuVar14 = ppuVar10;
      }
      func_0x000107c60480();
    }
    if (ppuVar14 != (undefined **)0x0) {
      uVar4 = 0;
      func_0x0001032ed928(0,0x112d5b150,&PTR_PTR_1126d2bc8);
      ppuVar14 = ppuVar10;
      func_0x000107c5fc48(ppuVar10,uVar4);
      func_0x000107c55ebc(param_1);
      func_0x000107c61170(ppuVar14);
      puVar3 = param_1;
      func_0x000107c4afb0();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR_PTR_1126b13a8;
        func_0x000107c610f8(PTR_PTR_1126b13a8);
        func_0x000107c453e4();
      }
      func_0x000107c55cb8(param_1);
      func_0x000107c61170(puVar3);
      func_0x000107c61428(unaff_x20 + 200,auStack_118,0,0);
      if (*(long *)(*(long *)(unaff_x20 + 200) + 0x10) != 0) {
        func_0x000107c4afb0();
        func_0x000107c61180();
        if (param_1 != (undefined *)0x0) {
          lVar11 = *(long *)(unaff_x20 + 200);
          ppuVar15 = *(undefined ***)(lVar11 + 0x10);
          ppuVar14 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
          if (ppuVar15 != (undefined **)0x0) {
            func_0x000107c61434(lVar11);
            ppuVar14 = ppuVar15;
            FUN_1032efbac(ppuVar15,0);
            ppuVar7 = &puStack_158;
            func_0x0001032ecf20(ppuVar7,ppuVar14 + 4,ppuVar15,lVar11);
            FUN_1032ed88c(puStack_158,uStack_150,puStack_148,puStack_140,uStack_138);
            if (ppuVar7 != ppuVar15) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ea60c);
              (*pcVar1)();
            }
          }
          ppuVar15 = ppuVar14;
          FUN_1032e9464(ppuVar14);
          func_0x000107c61574(ppuVar14);
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          ppuVar14 = ppuVar15;
          func_0x000107c5fc48(ppuVar15,PTR___sypN_11034f1a8 + 8);
          func_0x000107c6142c(ppuVar15);
          func_0x000107c45788(puVar3);
          func_0x000107c61170(ppuVar14);
          func_0x000107c59bf8(param_1);
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar3);
        }
      }
      if ((param_7 & 1) != 0) {
        puVar3 = &UNK_11063a3c8;
        func_0x000107c613fc(&UNK_11063a3c8,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,unaff_x20);
        puVar8 = &UNK_11063a418;
        func_0x000107c613fc(&UNK_11063a418,0x20,7);
        *(undefined **)(puVar8 + 0x10) = puVar3;
        *(undefined ***)(puVar8 + 0x18) = ppuVar10;
        uStack_138 = 0x1032ed894;
        puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_150 = 0x42000000;
        puStack_148 = &UNK_1010c376c;
        puStack_140 = &UNK_11063a430;
        ppuVar14 = &puStack_158;
        puStack_130 = puVar8;
        func_0x000107c60bc4(ppuVar14);
        puVar3 = puStack_130;
        func_0x000107c61434(ppuVar10);
        func_0x000107c61574(puVar3);
        func_0x000107c5d440(param_6);
        func_0x000107c60bd0(ppuVar14);
      }
    }
    func_0x000107c6142c(ppuVar10);
    func_0x000107c6142c(puVar9);
  }
  return;
}



/* Entry: 1032ea82c; end: 1032ea9b3;  */

/* WARNING: Possible PIC construction at 0x0001032ea96c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ea970) */

void FUN_1032ea82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *unaff_x20;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar1);
  func_0x000100087bd4(FUN_1032ed80c);
  lVar2 = unaff_x20[0x1b];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c49824();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar5 = unaff_x20[0x1a];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    puVar1 = &UNK_11063a3c8;
    func_0x000107c613fc(&UNK_11063a3c8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    puVar4 = &UNK_11063a3f0;
    func_0x000107c613fc(&UNK_11063a3f0,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar1;
    *(undefined8 *)(puVar4 + 0x18) = param_5;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    *(undefined8 *)(puVar4 + 0x30) = uVar5;
    *(undefined8 *)(puVar4 + 0x38) = uVar6;
    func_0x000107c6157c(puVar1);
    func_0x000107c61174(param_5);
    func_0x000107c61174(uVar5);
    func_0x00010090569c(FUN_1032ed83c,puVar4,lVar2);
    func_0x000107c615e8(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1032ea9b4; end: 1032eab3f;  */

void FUN_1032ea9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0x112f56d00;
  func_0x0001000285a8(0x112f56d00,&UNK_10dbae5a0);
  func_0x000100087bd4(&lStack_68,FUN_1032ed79c);
  lVar5 = lStack_68;
  uVar6 = uStack_60;
  uVar7 = uStack_58;
  if (lStack_68 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar2);
    uVar6 = *(undefined8 *)(unaff_x20 + 0xd0);
    FUN_1032ed17c(param_3,param_4,param_5,uVar6);
    lVar5 = param_5;
    uVar7 = uVar1;
    if (param_5 == 0) {
      return;
    }
  }
  puVar2 = PTR_PTR_1126b13b8;
  func_0x000107c61168(PTR_PTR_1126b13b8);
  puVar3 = PTR_PTR_1126affe8;
  func_0x000107c61168(PTR_PTR_1126affe8);
  lVar4 = lStack_68;
  func_0x000107c61174(lStack_68);
  func_0x000107c61174(lVar5);
  func_0x000107c44410(puVar3);
  func_0x000107c61180();
  func_0x000107c3d88c(uVar6,uVar7,0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,0,puVar2)
  ;
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1032eab40; end: 1032eabd7;  */

void FUN_1032eab40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + 0xc0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + 200) = puVar1;
  puVar1 = &UNK_10dbae4f0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0xe0) = puVar1;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_2;
  return;
}



/* Entry: 1032eabd8; end: 1032eae23;  */

void FUN_1032eabd8(ulong param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = param_1;
    func_0x000107c5c730();
    func_0x000107c61180();
    if (uVar3 == 0) {
      func_0x000107c610f8(PTR_PTR_1126cae88);
      func_0x000107c453e4();
      func_0x000107c59bfc(param_1);
    }
    func_0x000107c61170();
    uVar3 = param_1;
    func_0x000107c5c730();
    func_0x000107c61180();
    puVar1 = PTR___sypN_11034f1a8;
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c4246c();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032eae24);
        (*pcVar2)();
      }
      func_0x0001032e9478(param_3);
      uVar5 = param_3;
      func_0x000107c5fc48();
      func_0x000107c6142c(param_3);
      func_0x000107c3d7a0(uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
    }
    uVar3 = param_1;
    func_0x000107c44924();
    if ((uVar3 & 1) == 0) {
      puVar6 = PTR_PTR_1126b13a8;
      func_0x000107c610f8(PTR_PTR_1126b13a8);
      func_0x000107c453e4();
      func_0x000107c55cb8(param_1);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c4afb0();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032eae1c);
      (*pcVar2)();
    }
    uVar3 = param_1;
    func_0x000107c5c728();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032eae20);
      (*pcVar2)();
    }
    func_0x000107c61428(param_2 + 200,auStack_70,0,0);
    lVar10 = *(long *)(param_2 + 200);
    puVar9 = *(undefined8 **)(lVar10 + 0x10);
    puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar9 != (undefined8 *)0x0) {
      func_0x000107c61434(lVar10);
      puVar7 = puVar9;
      FUN_1032efbac(puVar9,0);
      puVar8 = &uStack_98;
      func_0x0001032ecf20(puVar8,puVar7 + 4,puVar9,lVar10);
      FUN_1032ed88c(uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
      if (puVar8 != puVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032eada8);
        (*pcVar2)();
      }
    }
    puVar9 = puVar7;
    func_0x0001032e9464(puVar7);
    func_0x000107c61574(puVar7);
    puVar7 = puVar9;
    func_0x000107c5fc48(puVar9,puVar1 + 8);
    func_0x000107c6142c(puVar9);
    func_0x000107c3d7a0(uVar3);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 1032eae24; end: 1032eafdf;  */

/* WARNING: Possible PIC construction at 0x0001032eafac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032eafb0) */

void FUN_1032eae24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,ulong param_15,undefined8 param_16,
                  undefined8 param_17)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  
  if (param_15 >> 0x1f == 0) {
    FUN_1032eafe0(param_11,param_12,param_13,param_14);
    func_0x000103ee3360(0);
    uVar2 = param_7;
    func_0x000103edf90c(param_7,param_8,param_5,param_6,param_9,param_10,param_15);
    puVar3 = &UNK_11063a2d8;
    func_0x000107c613fc(&UNK_11063a2d8,0x80,7);
    *(undefined8 *)(puVar3 + 0x10) = param_9;
    *(undefined8 *)(puVar3 + 0x18) = param_10;
    *(undefined8 *)(puVar3 + 0x20) = param_7;
    *(undefined8 *)(puVar3 + 0x28) = param_8;
    *(undefined8 *)(puVar3 + 0x30) = param_3;
    *(undefined8 *)(puVar3 + 0x38) = uVar2;
    *(undefined8 *)(puVar3 + 0x40) = param_1;
    *(undefined8 *)(puVar3 + 0x48) = param_2;
    *(undefined8 *)(puVar3 + 0x50) = param_4;
    *(undefined8 *)(puVar3 + 0x58) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x60) = param_5;
    *(undefined8 *)(puVar3 + 0x68) = param_6;
    *(undefined8 *)(puVar3 + 0x70) = param_16;
    *(undefined8 *)(puVar3 + 0x78) = param_17;
    puVar4 = &UNK_11063a300;
    func_0x000107c613fc(&UNK_11063a300,0x20,7);
    *(undefined **)(puVar4 + 0x10) = &UNK_10dbae588;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    func_0x000107c61434(param_10);
    func_0x000107c61434(param_8);
    func_0x000107c61174(uVar2);
    func_0x000107c6157c();
    func_0x000107c61434(param_6);
    func_0x000107c6157c(param_17);
    func_0x0001001ca524(1,0,0x38,4,0,0,&UNK_10dbae598,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032eafe0);
  (*pcVar1)();
}



/* Entry: 1032eafe0; end: 1032eb14b;  */

void FUN_1032eafe0(ulong param_1,long param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((lVar3 != 0) && (lVar5 = *(long *)(unaff_x20 + 0x28), lVar5 != 0)) {
    uVar2 = *(ulong *)(unaff_x20 + 0x10);
    uVar6 = *(ulong *)(unaff_x20 + 0x20);
    if ((uVar2 == param_1 && lVar3 == param_2) ||
       (func_0x000107c605b8(uVar2,lVar3,param_1,param_2,0), (uVar2 & 1) != 0)) {
      if (uVar6 == param_3 && lVar5 == param_4) {
        return;
      }
      func_0x000107c605b8(uVar6,lVar5,param_3,param_4,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
  }
  *(ulong *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c6142c(lVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(unaff_x20 + 0x20) = param_3;
  *(long *)(unaff_x20 + 0x28) = param_4;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  func_0x000107c61434(param_4);
  func_0x000107c61170(uVar4);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  FUN_1032ed5a8(&uStack_90);
  func_0x000107c61428(unaff_x20 + 0xc0,auStack_a8,1,0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (*(long *)(*(long *)(unaff_x20 + 0xc0) + 0x10) != 0) {
    *(undefined **)(unaff_x20 + 0xc0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c6142c();
  }
  func_0x000107c61428(unaff_x20 + 200,auStack_c0,1,0);
  if (*(long *)(*(long *)(unaff_x20 + 200) + 0x10) != 0) {
    *(undefined **)(unaff_x20 + 200) = puVar1;
    func_0x000107c6142c();
  }
  return;
}



/* Entry: 1032eb14c; end: 1032eb1df;  */

void FUN_1032eb14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_13;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_14;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_11;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_12;
  *(undefined8 *)(unaff_x22 + 0x98) = param_10;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_9;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1032eb1e0,uVar1,uVar2);
  return;
}



/* Entry: 1032eb1e0; end: 1032eb38f;  */

void FUN_1032eb1e0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar7 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  if (lVar7 == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x68);
    puVar5 = (undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c61434(lVar8);
  }
  else {
    puVar5 = (undefined8 *)(unaff_x22 + 0x50);
    lVar8 = lVar7;
  }
  uVar9 = *puVar5;
  pcVar1 = *(code **)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar10 = *(long *)(unaff_x22 + 0x98);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x88);
  dVar11 = *(double *)(unaff_x22 + 0x90);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  dVar21 = *(double *)(unaff_x22 + 0x70);
  dVar12 = dVar11;
  func_0x000107c61434(lVar7);
  func_0x000107c5fadc(uVar9,lVar8);
  func_0x000107c6142c(lVar8);
  func_0x000108e84ec4(uVar9);
  dVar13 = dVar12;
  dVar14 = param_2;
  func_0x000107c61170(uVar9);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar4);
  func_0x000107c609cc(dVar13,dVar14,param_3,param_4);
  uVar15 = *(undefined8 *)(lVar10 + 0x58);
  uVar9 = *(undefined8 *)(lVar10 + 0x50);
  uVar17 = *(undefined8 *)(lVar10 + 0x68);
  uVar16 = *(undefined8 *)(lVar10 + 0x60);
  uVar20 = *(undefined8 *)(lVar10 + 0x30);
  uVar19 = *(undefined8 *)(lVar10 + 0x48);
  uVar18 = *(undefined8 *)(lVar10 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar10 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar16;
  *(undefined8 *)(lVar10 + 0x30) = uVar2;
  *(undefined8 *)(lVar10 + 0x38) = uVar3;
  *(undefined8 *)(lVar10 + 0x40) = uVar6;
  *(undefined8 *)(lVar10 + 0x48) = uVar23;
  *(undefined8 *)(lVar10 + 0x50) = uVar22;
  *(double *)(lVar10 + 0x58) = (dVar21 * dVar12) / dVar13;
  *(double *)(lVar10 + 0x60) = (dVar21 * param_2) / (dVar13 / 0.5625);
  *(double *)(lVar10 + 0x68) = dVar11;
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  FUN_1032ed5a8(unaff_x22 + 0x10);
  (*pcVar1)();
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001032eb38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1032eb390; end: 1032eb3cb;  */

void FUN_1032eb390(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001032eb3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1032eb3cc; end: 1032eb4a3;  */

void FUN_1032eb3cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  uVar1 = 0;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_1032ed17c(param_1,param_2);
    if (param_4 != 0) {
      lVar2 = *(long *)(param_3 + 0xe8);
      lStack_80 = param_3;
      lStack_78 = param_4;
      uStack_70 = param_5;
      uStack_68 = uVar1;
      func_0x000107c6157c(lVar2);
      func_0x000100087bd4(FUN_1032ed84c,auStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(param_4);
      func_0x000107c61574(param_3);
      param_3 = lVar2;
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 1032eb4a4; end: 1032eb55b;  */

void FUN_1032eb4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_11063a378;
  func_0x000107c613fc(&UNK_11063a378,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcStack_40 = FUN_1032ed7d0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11063a390;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1032eb55c; end: 1032eb8d7;  */

void FUN_1032eb55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_98 [24];
  
  FUN_1032eafe0(param_8,param_9,param_10,param_11);
  puVar2 = PTR_PTR_1126e05f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ad070;
  func_0x000107c610f8(PTR_PTR_1126ad070);
  func_0x000107c453e4();
  func_0x000107c57a8c(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f7ac();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032eb8c8);
    (*pcVar1)();
  }
  uVar7 = param_6;
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c57a94(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  uVar7 = param_6;
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c559a4(puVar2);
  func_0x000107c61170(uVar7);
  puVar3 = PTR_PTR_1126d2bc8;
  func_0x000107c610f8(PTR_PTR_1126d2bc8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar4 = PTR_PTR_1126ba918;
  func_0x000107c610f8(PTR_PTR_1126ba918);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c559a4(puVar4);
  func_0x000107c61170(param_6);
  func_0x000107c53218(puVar4);
  func_0x000107c52140(puVar3);
  puVar5 = PTR_PTR_1126d2bd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000107c3f74c();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032eb8cc);
    (*pcVar1)();
  }
  func_0x000107c5a7f0(param_1);
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c3f74c();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032eb8d0);
    (*pcVar1)();
  }
  func_0x000107c5a804(param_2);
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c5b078();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c5a724(param_3);
    func_0x000107c61170(puVar6);
    puVar6 = puVar5;
    func_0x000107c5b078();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c550b8(param_4);
      func_0x000107c61170(puVar6);
      func_0x000107c57f1c(param_5,puVar5);
      func_0x000107c52810(puVar3);
      func_0x000107c61428(unaff_x20 + 200,auStack_98,0x21,0);
      func_0x000107c61174(puVar2);
      uVar7 = *(undefined8 *)(unaff_x20 + 200);
      func_0x000107c61558(uVar7);
      uVar8 = *(undefined8 *)(unaff_x20 + 200);
      *(undefined8 *)(unaff_x20 + 200) = 0x8000000000000000;
      FUN_1032ec808(puVar2,0x6e6f697473657571,0xe800000000000000,uVar7,0x112f56cf8,&UNK_10dbae578);
      *(undefined8 *)(unaff_x20 + 200) = uVar8;
      func_0x000107c614a8(auStack_98);
      func_0x000107c61428(unaff_x20 + 0xc0,auStack_98,0x21,0);
      func_0x000107c61174(puVar3);
      uVar7 = *(undefined8 *)(unaff_x20 + 0xc0);
      func_0x000107c61558(uVar7);
      uVar8 = *(undefined8 *)(unaff_x20 + 0xc0);
      *(undefined8 *)(unaff_x20 + 0xc0) = 0x8000000000000000;
      FUN_1032ec808(puVar3,0x6e6f697473657571,0xe800000000000000,uVar7,0x112f56cf0,&UNK_10dbae570);
      *(undefined8 *)(unaff_x20 + 0xc0) = uVar8;
      func_0x000107c614a8(auStack_98);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032eb8d8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032eb8d4);
  (*pcVar1)();
}



/* Entry: 1032eb8d8; end: 1032eba7f;  */

void FUN_1032eb8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  FUN_1032eafe0(param_8,param_9,param_10,param_11);
  puVar1 = PTR_PTR_1126d2bc8;
  func_0x000107c610f8(PTR_PTR_1126d2bc8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar2 = PTR_PTR_1126ba918;
  func_0x000107c610f8(PTR_PTR_1126ba918);
  func_0x000107c453e4();
  uVar4 = param_6;
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c559a4(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c53218(puVar2);
  puVar3 = puVar1;
  func_0x000107c52140(puVar1);
  FUN_1032ed494(param_1,param_2,param_3,param_4,param_5);
  func_0x000107c52810(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61428(unaff_x20 + 0xc0,auStack_88,0x21,0);
  func_0x000107c61434(param_7);
  func_0x000107c61174(puVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xc0);
  func_0x000107c61558(uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xc0) = 0x8000000000000000;
  FUN_1032ec808(puVar1,param_6,param_7,uVar4,0x112f56cf0,&UNK_10dbae570);
  func_0x000107c6142c(param_7);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar5;
  func_0x000107c614a8(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1032eba80; end: 1032ebd27;  */

void FUN_1032eba80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_98 [24];
  
  uVar3 = param_6 & 0xffffffffffff;
  if ((param_7 & 0x2000000000000000) != 0) {
    uVar3 = param_7 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    FUN_1032eafe0(param_8,param_9,param_10,param_11);
    puVar2 = PTR_PTR_1126e05f8;
    func_0x000107c610f8(PTR_PTR_1126e05f8);
    func_0x000107c453e4();
    uVar3 = param_6;
    func_0x000107c5fadc(param_6,param_7);
    func_0x000107c559a4(puVar2);
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126d2bc8;
    func_0x000107c610f8(PTR_PTR_1126d2bc8);
    func_0x000107c453e4();
    func_0x000107c5a0f8();
    puVar5 = PTR_PTR_1126ba918;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = param_6;
    func_0x000107c5fadc(param_6,param_7);
    func_0x000107c559a4(puVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c53218(puVar5);
    puVar6 = puVar4;
    func_0x000107c52140(puVar4);
    FUN_1032ed494(param_1,param_2,param_3,param_4,param_5);
    func_0x000107c52810(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61428(unaff_x20 + 200,auStack_98,0x21,0);
    func_0x000107c61434(param_7);
    func_0x000107c61174(puVar2);
    uVar7 = *(undefined8 *)(unaff_x20 + 200);
    func_0x000107c61558(uVar7);
    uVar9 = *(undefined8 *)(unaff_x20 + 200);
    *(undefined8 *)(unaff_x20 + 200) = 0x8000000000000000;
    FUN_1032ec808(puVar2,param_6,param_7,uVar7,0x112f56cf8,&UNK_10dbae578);
    func_0x000107c6142c(param_7);
    *(undefined8 *)(unaff_x20 + 200) = uVar9;
    func_0x000107c614a8(auStack_98);
    puVar6 = puVar5;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ebd28);
      (*pcVar1)();
    }
    puVar8 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
    func_0x000107c61428(unaff_x20 + 0xc0,auStack_98,0x21,0);
    func_0x000107c61174(puVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + 0xc0);
    func_0x000107c61558(uVar7);
    uVar9 = *(undefined8 *)(unaff_x20 + 0xc0);
    *(undefined8 *)(unaff_x20 + 0xc0) = 0x8000000000000000;
    FUN_1032ec808(puVar4,puVar8,param_6,uVar7,0x112f56cf0,&UNK_10dbae570);
    func_0x000107c6142c(param_6);
    *(undefined8 *)(unaff_x20 + 0xc0) = uVar9;
    func_0x000107c614a8(auStack_98);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 1032ebd28; end: 1032ec093;  */

void FUN_1032ebd28(void)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_1032eafe0();
  func_0x000107c61428(unaff_x20 + 0xc0,auStack_78,0,0);
  lVar11 = *(long *)(unaff_x20 + 0xc0);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(lVar11 + 0x40);
  func_0x000107c61434(lVar11);
  lVar12 = 0;
  while( true ) {
    while (uVar10 != 0) {
      uVar7 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 0x10 +
                        lVar12 * 0x400);
      uVar7 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar7 != 0x6e6f697473657571 || uVar2 != 0xe800000000000000) &&
         (uVar6 = uVar7, func_0x000107c605b8(uVar7,uVar2,0x6e6f697473657571,0xe800000000000000,0),
         (uVar6 & 1) == 0)) {
        func_0x000107c61428(unaff_x20 + 0xc0,auStack_90,0x21,0);
        uVar13 = *(undefined8 *)(unaff_x20 + 0xc0);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(uVar13);
        uVar6 = uVar2;
        func_0x000100029284();
        func_0x000107c6142c(uVar13);
        if ((uVar6 & 1) == 0) {
          func_0x000107c6142c(uVar2);
        }
        else {
          iVar5 = (int)*(undefined8 *)(unaff_x20 + 0xc0);
          func_0x000107c61558();
          lVar9 = *(long *)(unaff_x20 + 0xc0);
          *(undefined8 *)(unaff_x20 + 0xc0) = 0x8000000000000000;
          if (iVar5 == 0) {
            FUN_1032ec97c(0x112f56cf0,&UNK_10dbae570);
          }
          func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar7 * 0x10 + 8));
          func_0x000107c61170(*(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar7 * 8));
          func_0x0001032ecd70(uVar7,lVar9);
          func_0x000107c6142c(uVar2);
          *(long *)(unaff_x20 + 0xc0) = lVar9;
        }
        func_0x000107c614a8(auStack_90);
      }
    }
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) break;
    if ((long)(uVar8 + 0x3f >> 6) <= lVar12) {
      func_0x000107c61574(lVar11);
      return;
    }
    uVar10 = ((ulong *)(lVar11 + 0x40))[lVar12];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1032ebf3c);
  (*pcVar3)();
}



/* Entry: 1032ec094; end: 1032ec137;  */

void FUN_1032ec094(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_1032ed76c(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  FUN_1032ec7cc(*(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  return;
}



/* Entry: 1032ec138; end: 1032ec18b;  */

undefined8 * FUN_1032ec138(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1032ec18c; end: 1032ec1c7;  */

undefined8 * FUN_1032ec18c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 1032ec1c8; end: 1032ec25f;  */

int FUN_1032ec1c8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032ec260; end: 1032ec28f;  */

/* WARNING: Possible PIC construction at 0x0001032ec27c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ec280) */

void FUN_1032ec260(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1032ec290; end: 1032ec357;  */

undefined8 * FUN_1032ec290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1032ec358; end: 1032ec3ab;  */

undefined8 * FUN_1032ec358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1032ec3ac; end: 1032ec443;  */

int FUN_1032ec3ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032ec444; end: 1032ec487;  */

undefined8 * FUN_1032ec444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1032ec488; end: 1032ec4f3;  */

undefined8 * FUN_1032ec488(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1032ec4f4; end: 1032ec53f;  */

undefined8 * FUN_1032ec4f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1032ec540; end: 1032ec5e3;  */

int FUN_1032ec540(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032ec5e4; end: 1032ec61b;  */

void FUN_1032ec5e4(void)

{
  FUN_1032eae24();
  return;
}



/* Entry: 1032ec61c; end: 1032ec65b;  */

void FUN_1032ec61c(void)

{
  long lVar1;
  long *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar1 = *unaff_x20;
  uStack_48 = *(undefined8 *)(lVar1 + 0x38);
  uStack_50 = *(undefined8 *)(lVar1 + 0x30);
  uStack_38 = *(undefined8 *)(lVar1 + 0x48);
  uStack_40 = *(undefined8 *)(lVar1 + 0x40);
  uStack_28 = *(undefined8 *)(lVar1 + 0x58);
  uStack_30 = *(undefined8 *)(lVar1 + 0x50);
  uStack_18 = *(undefined8 *)(lVar1 + 0x68);
  uStack_20 = *(undefined8 *)(lVar1 + 0x60);
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  FUN_1032ed5a8(&uStack_50);
  return;
}



/* Entry: 1032ec65c; end: 1032ec713;  */

void FUN_1032ec65c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  FUN_1032eafe0(param_10,param_11,param_12,param_13);
  func_0x000103ee3360(0);
  func_0x000103edf9bc(param_6,param_7,param_8,param_9);
  uVar1 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = param_6;
  *(undefined8 *)(lVar2 + 0x78) = param_1;
  *(undefined8 *)(lVar2 + 0x80) = param_2;
  *(undefined8 *)(lVar2 + 0x88) = param_3;
  *(undefined8 *)(lVar2 + 0x90) = param_4;
  *(undefined8 *)(lVar2 + 0x98) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1032ec714; end: 1032ec7b3;  */

void FUN_1032ec714(void)

{
  FUN_1032eb55c();
  return;
}



/* Entry: 1032ec7b4; end: 1032ec7cb;  */

/* WARNING: Possible PIC construction at 0x0001032ec7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ec7f4) */

undefined8 FUN_1032ec7b4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  
  lVar5 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar5 + 0xa0);
  lVar2 = *(long *)(lVar5 + 0xa8);
  uVar4 = *(undefined8 *)(lVar5 + 0xb0);
  uVar3 = *(undefined8 *)(lVar5 + 0xb8);
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  if (lVar2 != 0) {
    func_0x000107c6142c(lVar2,lVar2,uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return uVar4;
  }
  return uVar1;
}



/* Entry: 1032ec7cc; end: 1032ec807;  */

/* WARNING: Possible PIC construction at 0x0001032ec7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ec7f4) */

void FUN_1032ec7cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1032ec808; end: 1032ec97b;  */

void FUN_1032ec808(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032ec8f8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1032ecadc(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032ec8bc);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1032ec97c(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x0001032ec914;
  }
  lVar6 = *unaff_x20;
joined_r0x0001032ec914:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032ec97c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1032ec97c; end: 1032ecadb;  */

void FUN_1032ec97c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1032eca48;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_1032eca48:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1032ecadc);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1032ecab4;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1032ecab4:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1032ecadc; end: 1032ed06b;  */

void FUN_1032ecadc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1032ecd3c:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1032ecd6c);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1032ecd3c;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1032ecd70);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1032ed06c; end: 1032ed17b;  */

/* WARNING: Possible PIC construction at 0x0001032ed144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ed148) */

void FUN_1032ed06c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = &UNK_11063a328;
  func_0x000107c613fc(&UNK_11063a328,0x18,7);
  *(long *)(puVar1 + 0x10) = param_2;
  lVar5 = *(long *)(param_1 + 0xd8);
  func_0x000107c60bc4(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  else {
    lVar2 = lVar5;
    func_0x000107c49824();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    func_0x000107c614f0(lVar2);
    puVar3 = &UNK_11063a350;
    func_0x000107c613fc(&UNK_11063a350,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar4;
    *(undefined8 *)(puVar3 + 0x18) = 0x1032ed7b8;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    func_0x000107c615f0(uVar4);
    func_0x000107c6157c(puVar1);
    func_0x00010090569c(0x1032ed7c4,puVar3,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032ed17c; end: 1032ed493;  */

undefined *
FUN_1032ed17c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,long param_6,undefined *param_7)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined8 unaff_x19;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double unaff_d10;
  double unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  double adStack_f0 [8];
  long alStack_b0 [2];
  undefined auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  dVar15 = param_1;
  dVar17 = param_2;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_a0 + lVar1;
  puVar4 = (undefined *)0x0;
  if ((0.0 < param_1) && (uVar10 = 0, 0.0 < param_2)) {
    lVar5 = param_6;
    func_0x000107c60bb8(param_6,0,0);
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      func_0x000107c5c734();
      func_0x000107c61180();
      unaff_x19 = uVar10;
      if (param_7 == (undefined *)0x0) {
        func_0x00010006c090(lVar6,uVar10);
      }
      else {
        lVar5 = lVar6;
        uVar11 = uVar10;
        func_0x000107c5ee20();
        lVar7 = lVar5;
        func_0x000107c5eec4(puVar8);
        func_0x000107c5eeac();
        (**(code **)(lVar13 + 8))(puVar8,lVar3);
        lStack_98 = lVar7;
        uStack_90 = uVar11;
        func_0x000107c5fb78(0x676e702e,0xe400000000000000);
        uVar11 = uStack_90;
        lVar3 = lStack_98;
        uVar12 = uStack_90;
        func_0x000107c5fadc(lStack_98,uStack_90);
        func_0x000107c6142c(uVar11);
        lStack_98 = 0;
        puVar8 = param_7;
        func_0x000107c5e908();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar3);
        lVar3 = lStack_98;
        if (puVar8 == (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          func_0x000107c5faec();
          func_0x000107c61174(lVar3);
          func_0x000107c61174();
          func_0x000107c5fadc(puVar8,uVar12);
          func_0x000107c6142c(uVar12);
          dVar14 = dVar15;
          dVar16 = dVar17;
        }
        else {
          func_0x000107c61174(lStack_98);
          func_0x000107c61174();
          dVar14 = dVar15;
          dVar16 = dVar17;
        }
        if (lVar3 == 0) {
          func_0x000107c5b078(param_6);
          func_0x000103ee3360(0);
          puVar9 = PTR_PTR_1126c4970;
          func_0x000107c61168();
          func_0x000107c4b83c();
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          *(undefined8 *)((long)alStack_b0 + lVar1) = 0;
          puVar4 = puVar9;
          func_0x000103edfc9c(dVar14,dVar16,puVar9,0,0,0,0,0,0,0);
          func_0x00010006c090(lVar6,uVar10);
          func_0x000107c61170(puVar9);
          func_0x000107c615e8(param_7);
          dVar15 = dVar14 / param_1;
          dVar17 = dVar16 / param_2;
          puVar8 = puVar4;
          unaff_d10 = dVar14;
          unaff_d11 = dVar16;
          goto LAB_1032ed364;
        }
        func_0x000107c61170(puVar8);
        func_0x00010006c090(lVar6,uVar10);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(param_7);
        dVar15 = dVar14;
        dVar17 = dVar16;
      }
    }
    puVar4 = (undefined *)0x0;
  }
LAB_1032ed364:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar4;
  }
  func_0x000107c60e78();
  *(undefined8 *)((long)adStack_f0 + lVar1) = unaff_d13;
  *(undefined8 *)((long)adStack_f0 + lVar1 + 8) = unaff_d12;
  *(double *)((long)adStack_f0 + lVar1 + 0x10) = unaff_d11;
  *(double *)((long)adStack_f0 + lVar1 + 0x18) = unaff_d10;
  *(double *)((long)adStack_f0 + lVar1 + 0x20) = param_1;
  *(double *)((long)adStack_f0 + lVar1 + 0x28) = param_2;
  *(undefined **)((long)adStack_f0 + lVar1 + 0x30) = puVar8;
  *(undefined8 *)((long)adStack_f0 + lVar1 + 0x38) = unaff_x19;
  *(undefined1 **)((long)alStack_b0 + lVar1) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_b0 + lVar1 + 8) = FUN_1032ed494;
  puVar8 = PTR_PTR_1126d2bd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = puVar8;
  func_0x000107c3f74c();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032ed59c);
    (*pcVar2)();
  }
  func_0x000107c5a7f0(dVar15);
  func_0x000107c61170(puVar4);
  puVar4 = puVar8;
  func_0x000107c3f74c();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032ed5a0);
    (*pcVar2)();
  }
  func_0x000107c5a804(dVar17);
  func_0x000107c61170(puVar4);
  puVar4 = puVar8;
  func_0x000107c5b078();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032ed5a4);
    (*pcVar2)();
  }
  func_0x000107c5a724(param_3);
  func_0x000107c61170(puVar4);
  puVar4 = puVar8;
  func_0x000107c5b078();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032ed5a8);
    (*pcVar2)();
  }
  func_0x000107c550b8(param_4);
  func_0x000107c61170(puVar4);
  func_0x000107c57f1c(param_5,puVar8);
  return puVar8;
}



/* Entry: 1032ed494; end: 1032ed5a7;  */

undefined *
FUN_1032ed494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126d2bd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c3f74c();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ed59c);
    (*pcVar1)();
  }
  func_0x000107c5a7f0(param_1);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c3f74c();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ed5a0);
    (*pcVar1)();
  }
  func_0x000107c5a804(param_2);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5b078();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ed5a4);
    (*pcVar1)();
  }
  func_0x000107c5a724(param_3);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5b078();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c550b8(param_4);
    func_0x000107c61170(puVar3);
    func_0x000107c57f1c(param_5,puVar2);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ed5a8);
  (*pcVar1)();
}



/* Entry: 1032ed5a8; end: 1032ed5ef;  */

undefined8 FUN_1032ed5a8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f56ce8;
  func_0x0001000285a8(0x112f56ce8,&UNK_10dbae568);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1032ed5f0; end: 1032ed6bf;  */

void FUN_1032ed5f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar12 = *(long *)(unaff_x20 + 0x30);
  lVar11 = *(long *)(unaff_x20 + 0x38);
  lVar13 = *(long *)(unaff_x20 + 0x40);
  lVar14 = *(long *)(unaff_x20 + 0x48);
  lVar15 = *(long *)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  lVar5 = *(long *)(unaff_x20 + 0x60);
  lVar2 = *(long *)(unaff_x20 + 0x68);
  lVar6 = *(long *)(unaff_x20 + 0x70);
  lVar10 = *(long *)(unaff_x20 + 0x78);
  plVar9 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1032ed6c0;
  plVar9[0x16] = lVar6;
  plVar9[0x17] = lVar10;
  plVar9[0x14] = lVar5;
  plVar9[0x15] = lVar2;
  plVar9[0x13] = lVar1;
  plVar9[0x11] = lVar14;
  plVar9[0x12] = lVar15;
  plVar9[0x10] = lVar13;
  plVar9[0xf] = lVar11;
  plVar9[0xe] = lVar12;
  plVar9[0xc] = lVar7;
  plVar9[0xd] = lVar4;
  plVar9[10] = lVar8;
  plVar9[0xb] = lVar3;
  lVar7 = 0;
  func_0x000107c5fcec();
  lVar8 = lVar7;
  func_0x000107c5fce8();
  plVar9[0x18] = lVar8;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar7,lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1032eb1e0,lVar7,lVar8);
  return;
}



/* Entry: 1032ed6c0; end: 1032ed6fb;  */

void FUN_1032ed6c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001032ed6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1032ed6fc; end: 1032ed76b;  */

void FUN_1032ed6fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1032ed994;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1032ed76c; end: 1032ed79b;  */

void FUN_1032ed76c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1032ed79c; end: 1032ed7cf;  */

void FUN_1032ed79c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0xf8);
  *param_1 = uVar2;
  param_1[2] = uVar1;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  return;
}


