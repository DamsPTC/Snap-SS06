/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f83ef8; end: 101f83f07; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager factoryReset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1353f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e47298),PTR_s_requestFactoryReset_11262af18);
  return;
}



/* Entry: 101f83f08; end: 101f83f2f; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager numericInputObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83f08(long param_1)

{
  func_0x000107c5cb24(*(undefined8 *)(param_1 + _DAT_112e472d0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f83f30; end: 101f840a7;  */

void FUN_101f83f30(undefined1 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar1 = "resetNumericInput(withFailure:)";
  func_0x0001000c10c0("resetNumericInput(withFailure:)");
  func_0x000107c61180();
  puVar2 = &UNK_1104aba50;
  func_0x000107c613fc(&UNK_1104aba50,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1104abb18;
  func_0x000107c613fc(&UNK_1104abb18,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1;
  pcStack_40 = FUN_101f84484;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104abb30;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101f840a8; end: 101f840d7; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager resetNumericInputWithFailure:] */

void FUN_101f840a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101f83f30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f840d8; end: 101f841df;  */

void FUN_101f840d8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "asyncNumericInputViewFactory(completion:)";
  func_0x0001000c10c0("asyncNumericInputViewFactory(completion:)");
  func_0x000107c61180();
  puVar2 = &UNK_1104aba50;
  func_0x000107c613fc(&UNK_1104aba50,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1104aba78;
  func_0x000107c613fc(&UNK_1104aba78,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uStack_50 = 0x101f84434;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104aba90;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101f841e0; end: 101f843af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f841e0(long param_1,code *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + _DAT_112e472b0);
    if (lVar5 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar1 = PTR_PTR_1126c1ff0;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar5);
      func_0x000107c464f4();
      uVar6 = *(undefined8 *)(param_1 + _DAT_112e472f8);
      *(undefined **)(param_1 + _DAT_112e472f8) = puVar1;
      func_0x000107c61174();
      func_0x000107c61170(uVar6);
      if (puVar1 == (undefined *)0x0) {
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar5);
      }
      else {
        puVar2 = &UNK_1104abac8;
        func_0x000107c613fc(&UNK_1104abac8,0x18,7);
        *(undefined **)(puVar2 + 0x10) = puVar1;
        pcStack_78 = FUN_101f8445c;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100f11710;
        puStack_80 = &UNK_1104abae0;
        ppuVar3 = &puStack_98;
        puStack_70 = puVar2;
        func_0x000107c60bc4(ppuVar3);
        puVar2 = puStack_70;
        func_0x000107c61174(puVar1);
        func_0x000107c61574(puVar2);
        FUN_101f844b4(0,0x112e47328,&PTR_PTR_1126c1ff0);
        func_0x000107c614e8();
        lVar4 = lVar5;
        func_0x000107c4c214(lVar5);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c615f0(lVar4);
        (*param_2)();
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(puVar1);
        func_0x000107c615ec(lVar4,2);
      }
    }
  }
  return;
}



/* Entry: 101f843b0; end: 101f84423; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager asyncNumericInputViewFactoryWithCompletion:] */

void FUN_101f843b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1104aba28;
  func_0x000107c613fc(&UNK_1104aba28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_101f840d8(FUN_101f84424,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f84424; end: 101f8445b;  */

void FUN_101f84424(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101f84430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101f8445c; end: 101f84483;  */

undefined8 FUN_101f8445c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 101f84484; end: 101f844b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f84484(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112e472f8);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c504ec(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101f844b4; end: 101f844f3;  */

void FUN_101f844b4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101f844f4; end: 101f8451b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f844f4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112e47290);
    func_0x000107c4194c();
    func_0x000107c61180();
    uVar2 = uVar3;
    FUN_101f82174();
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112e472f0);
    *(undefined8 *)(lVar1 + _DAT_112e472f0) = uVar2;
    func_0x000107c61174(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c4d664(*(undefined8 *)(lVar1 + _DAT_112e472b8));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101f8451c; end: 101f8457f;  */

void FUN_101f8451c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f84580; end: 101f84587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f84580(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((param_1 == 0) || (func_0x000107c50650(), param_1 == 2)) {
    uStack_34 = 0;
    puVar3 = &uStack_34;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 0) {
        lVar2 = ((undefined8 *)(lVar4 + _DAT_112e472e0))[1];
        if (lVar2 != 0) {
          puVar1 = (undefined8 *)(lVar4 + _DAT_112e472d8);
          uVar5 = puVar1[1];
          *puVar1 = *(undefined8 *)(lVar4 + _DAT_112e472e0);
          puVar1[1] = lVar2;
          func_0x000107c61434();
          func_0x000107c6142c(uVar5);
        }
      }
      goto LAB_101f82b4c;
    }
    uStack_38 = 1;
    puVar3 = &uStack_38;
  }
  func_0x0001002a64a8(puVar3);
LAB_101f82b4c:
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e472e0);
  uVar5 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 101f84588; end: 101f845fb;  */

void FUN_101f84588(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f845fc; end: 101f8460b;  */

/* WARNING: Possible PIC construction at 0x000101f827e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f827fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f827e4) */
/* WARNING: Removing unreachable block (ram,0x000101f82800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f845fc(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c61174();
    FUN_101f82174();
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e472f0);
    *(long *)(lVar1 + _DAT_112e472f0) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 101f8460c; end: 101f8462b;  */

void FUN_101f8460c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f8462c; end: 101f846c3;  */

void FUN_101f8462c(long param_1,long param_2)

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



/* Entry: 101f846c4; end: 101f848db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101f846c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar1;
  func_0x000107c61614(unaff_x20 + 0xa8,0);
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307b2a0);
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar1;
  func_0x000107c615f0();
  return unaff_x20;
}



/* Entry: 101f848dc; end: 101f854fb;  */

/* WARNING: Possible PIC construction at 0x000101f849ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f849f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f84a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f854dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f854f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f84ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f84df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f84e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f84e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f84ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8507c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f850fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f851b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8527c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f852ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f852bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f84af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f84ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f852c0) */
/* WARNING: Removing unreachable block (ram,0x000101f852b0) */
/* WARNING: Removing unreachable block (ram,0x000101f85280) */
/* WARNING: Removing unreachable block (ram,0x000101f85100) */
/* WARNING: Removing unreachable block (ram,0x000101f85104) */
/* WARNING: Removing unreachable block (ram,0x000101f85080) */
/* WARNING: Removing unreachable block (ram,0x000101f85084) */
/* WARNING: Removing unreachable block (ram,0x000101f850a4) */
/* WARNING: Removing unreachable block (ram,0x000101f85138) */
/* WARNING: Removing unreachable block (ram,0x000101f850e4) */
/* WARNING: Removing unreachable block (ram,0x000101f85048) */
/* WARNING: Removing unreachable block (ram,0x000101f84eec) */
/* WARNING: Removing unreachable block (ram,0x000101f85050) */
/* WARNING: Removing unreachable block (ram,0x000101f851b4) */
/* WARNING: Removing unreachable block (ram,0x000101f85064) */
/* WARNING: Removing unreachable block (ram,0x000101f85000) */
/* WARNING: Removing unreachable block (ram,0x000101f84e5c) */
/* WARNING: Removing unreachable block (ram,0x000101f84e08) */
/* WARNING: Removing unreachable block (ram,0x000101f84df4) */
/* WARNING: Removing unreachable block (ram,0x000101f84de0) */
/* WARNING: Removing unreachable block (ram,0x000101f854f8) */
/* WARNING: Removing unreachable block (ram,0x000101f854e0) */
/* WARNING: Removing unreachable block (ram,0x000101f84a4c) */
/* WARNING: Removing unreachable block (ram,0x000101f852f0) */
/* WARNING: Removing unreachable block (ram,0x000101f84a50) */
/* WARNING: Removing unreachable block (ram,0x000101f84a70) */
/* WARNING: Removing unreachable block (ram,0x000101f852fc) */
/* WARNING: Removing unreachable block (ram,0x000101f84a98) */
/* WARNING: Removing unreachable block (ram,0x000101f85300) */
/* WARNING: Removing unreachable block (ram,0x000101f849f8) */
/* WARNING: Removing unreachable block (ram,0x000101f849fc) */
/* WARNING: Removing unreachable block (ram,0x000101f84a1c) */
/* WARNING: Removing unreachable block (ram,0x000101f84aec) */
/* WARNING: Removing unreachable block (ram,0x000101f84a30) */
/* WARNING: Removing unreachable block (ram,0x000101f849b0) */
/* WARNING: Removing unreachable block (ram,0x000101f849b8) */
/* WARNING: Removing unreachable block (ram,0x000101f84af4) */
/* WARNING: Removing unreachable block (ram,0x000101f84af8) */
/* WARNING: Removing unreachable block (ram,0x000101f849dc) */
/* WARNING: Removing unreachable block (ram,0x000101f84ab8) */

void FUN_101f848dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5b73c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5bd38();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      func_0x000107c509b4(lVar1);
      func_0x000107c61180();
      lVar2 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101f854fc; end: 101f8551f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f854fc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e470c8);
    func_0x000107c61174(uVar2);
    uVar3 = uVar2;
    FUN_101f7aa4c();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101f85520; end: 101f8558f;  */

void FUN_101f85520(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_101f85598(uVar2,uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101f85590; end: 101f85597;  */

void FUN_101f85590(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_101f85598(uVar3,uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101f85598; end: 101f85ddb;  */

/* WARNING: Possible PIC construction at 0x000101f85610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f859c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f858dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f857f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f856fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8571c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8578c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f857a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f85d14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f85790) */
/* WARNING: Removing unreachable block (ram,0x000101f85754) */
/* WARNING: Removing unreachable block (ram,0x000101f85758) */
/* WARNING: Removing unreachable block (ram,0x000101f85720) */
/* WARNING: Removing unreachable block (ram,0x000101f85724) */
/* WARNING: Removing unreachable block (ram,0x000101f85d10) */
/* WARNING: Removing unreachable block (ram,0x000101f85730) */
/* WARNING: Removing unreachable block (ram,0x000101f85700) */
/* WARNING: Removing unreachable block (ram,0x000101f85704) */
/* WARNING: Removing unreachable block (ram,0x000101f85864) */
/* WARNING: Removing unreachable block (ram,0x000101f85868) */
/* WARNING: Removing unreachable block (ram,0x000101f85828) */
/* WARNING: Removing unreachable block (ram,0x000101f857fc) */
/* WARNING: Removing unreachable block (ram,0x000101f85800) */
/* WARNING: Removing unreachable block (ram,0x000101f85840) */
/* WARNING: Removing unreachable block (ram,0x000101f85818) */
/* WARNING: Removing unreachable block (ram,0x000101f8581c) */
/* WARNING: Removing unreachable block (ram,0x000101f85c4c) */
/* WARNING: Removing unreachable block (ram,0x000101f85c50) */
/* WARNING: Removing unreachable block (ram,0x000101f85d50) */
/* WARNING: Removing unreachable block (ram,0x000101f85c14) */
/* WARNING: Removing unreachable block (ram,0x000101f85c18) */
/* WARNING: Removing unreachable block (ram,0x000101f85bd8) */
/* WARNING: Removing unreachable block (ram,0x000101f85bac) */
/* WARNING: Removing unreachable block (ram,0x000101f85bb0) */
/* WARNING: Removing unreachable block (ram,0x000101f85bf0) */
/* WARNING: Removing unreachable block (ram,0x000101f85bc8) */
/* WARNING: Removing unreachable block (ram,0x000101f85bcc) */
/* WARNING: Removing unreachable block (ram,0x000101f85dd4) */
/* WARNING: Removing unreachable block (ram,0x000101f85dc0) */
/* WARNING: Removing unreachable block (ram,0x000101f85db0) */
/* WARNING: Removing unreachable block (ram,0x000101f8597c) */
/* WARNING: Removing unreachable block (ram,0x000101f85948) */
/* WARNING: Removing unreachable block (ram,0x000101f8594c) */
/* WARNING: Removing unreachable block (ram,0x000101f85d60) */
/* WARNING: Removing unreachable block (ram,0x000101f85d64) */
/* WARNING: Removing unreachable block (ram,0x000101f85968) */
/* WARNING: Removing unreachable block (ram,0x000101f8590c) */
/* WARNING: Removing unreachable block (ram,0x000101f858e0) */
/* WARNING: Removing unreachable block (ram,0x000101f858e4) */
/* WARNING: Removing unreachable block (ram,0x000101f85924) */
/* WARNING: Removing unreachable block (ram,0x000101f858fc) */
/* WARNING: Removing unreachable block (ram,0x000101f85900) */
/* WARNING: Removing unreachable block (ram,0x000101f859c8) */
/* WARNING: Removing unreachable block (ram,0x000101f859cc) */
/* WARNING: Removing unreachable block (ram,0x000101f85b60) */
/* WARNING: Removing unreachable block (ram,0x000101f85b4c) */
/* WARNING: Removing unreachable block (ram,0x000101f85b14) */
/* WARNING: Removing unreachable block (ram,0x000101f85b18) */
/* WARNING: Removing unreachable block (ram,0x000101f85b40) */
/* WARNING: Removing unreachable block (ram,0x000101f85ad8) */
/* WARNING: Removing unreachable block (ram,0x000101f85aac) */
/* WARNING: Removing unreachable block (ram,0x000101f85ab0) */
/* WARNING: Removing unreachable block (ram,0x000101f85af0) */
/* WARNING: Removing unreachable block (ram,0x000101f85ac8) */
/* WARNING: Removing unreachable block (ram,0x000101f85acc) */
/* WARNING: Removing unreachable block (ram,0x000101f85d0c) */
/* WARNING: Removing unreachable block (ram,0x000101f85cbc) */
/* WARNING: Removing unreachable block (ram,0x000101f85cc0) */
/* WARNING: Removing unreachable block (ram,0x000101f85d38) */
/* WARNING: Removing unreachable block (ram,0x000101f85d3c) */
/* WARNING: Removing unreachable block (ram,0x000101f85cf0) */
/* WARNING: Removing unreachable block (ram,0x000101f85c80) */
/* WARNING: Removing unreachable block (ram,0x000101f85c8c) */
/* WARNING: Removing unreachable block (ram,0x000101f85c98) */
/* WARNING: Removing unreachable block (ram,0x000101f85c84) */
/* WARNING: Removing unreachable block (ram,0x000101f85614) */
/* WARNING: Removing unreachable block (ram,0x000101f857a4) */
/* WARNING: Removing unreachable block (ram,0x000101f85b5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f85598(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_68 [24];
  
  if (((uint)param_2 & 0xff) == 1) {
    if (param_1 < 4) {
      if (param_1 < 2) {
        if (param_1 == 0) {
          lVar1 = *(long *)(unaff_x20 + 0x10);
          func_0x000107c41864(*(undefined8 *)(lVar1 + _DAT_11307b2a8),param_2,0);
          lVar2 = _DAT_11307b2b0;
          func_0x000107c61428(lVar1 + _DAT_11307b2b0,auStack_68,0,0);
          lVar1 = lVar1 + lVar2;
          func_0x000107c61618();
          if (lVar1 == 0) {
            return;
          }
          func_0x000107c5b700();
        }
        else {
          lVar1 = *(long *)(unaff_x20 + 0x10);
          func_0x000107c41864(*(undefined8 *)(lVar1 + _DAT_11307b2a8),param_2,0);
          lVar2 = _DAT_11307b2b0;
          func_0x000107c61428(lVar1 + _DAT_11307b2b0,auStack_68,0,0);
          lVar1 = lVar1 + lVar2;
          func_0x000107c61618();
          if (lVar1 == 0) {
            return;
          }
          func_0x000107c5b704();
        }
        goto code_r0x000107c615e8;
      }
      if (param_1 == 2) {
        return;
      }
      lVar1 = *(long *)(unaff_x20 + 0x70);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        lVar1 = unaff_x20 + 0xa8;
        func_0x000107c61618();
        if (lVar1 == 0) {
          return;
        }
        func_0x000107c5cc14();
        func_0x000107c61180();
      }
    }
    else if (param_1 < 6) {
      if (param_1 == 4) {
        lVar1 = *(long *)(unaff_x20 + 0x68);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar1 == 0) {
          lVar1 = unaff_x20 + 0xa8;
          func_0x000107c61618();
          if (lVar1 == 0) {
            return;
          }
          func_0x000107c5cc14();
          func_0x000107c61180();
        }
      }
      else {
        lVar1 = *(long *)(unaff_x20 + 0x78);
        if (lVar1 != 0) {
          func_0x000107c5194c();
          func_0x000107c61180();
          if (lVar1 != 0) goto code_r0x000107c61170;
        }
        lVar1 = unaff_x20 + 0xa8;
        func_0x000107c61618();
        if (lVar1 == 0) {
          return;
        }
        func_0x000107c5cc14();
        func_0x000107c61180();
      }
    }
    else if (param_1 == 6) {
      lVar1 = *(long *)(unaff_x20 + 0x80);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        lVar1 = unaff_x20 + 0xa8;
        func_0x000107c61618();
        if (lVar1 == 0) {
          return;
        }
        func_0x000107c610f8(PTR_PTR_1126aead0);
        func_0x000107c47994();
      }
    }
    else if (param_1 == 7) {
      lVar1 = *(long *)(unaff_x20 + 0x98);
      func_0x000107c42e44();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c405a4();
        func_0x000107c61180();
        goto code_r0x000107c615e8;
      }
      func_0x000107c5194c(0);
      func_0x000107c61180();
    }
    else {
      lVar1 = *(long *)(unaff_x20 + 0x90);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        lVar1 = unaff_x20 + 0xa8;
        func_0x000107c61618();
        if (lVar1 == 0) {
          return;
        }
        func_0x000107c5cc14();
        func_0x000107c61180();
      }
    }
  }
  else {
    lVar1 = *(long *)(unaff_x20 + 0x88);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = *(long *)(unaff_x20 + 0x98);
      lVar1 = lVar2;
      func_0x000107c40220();
      func_0x000107c61180();
      if (lVar1 == 0) {
        return;
      }
      func_0x000107c42e44();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c436c0();
        func_0x000107c61180();
        lVar1 = lVar2;
      }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101f85ddc; end: 101f85e13;  */

void FUN_101f85ddc(void)

{
  FUN_101f85e28();
  return;
}



/* Entry: 101f85e14; end: 101f85e27;  */

/* WARNING: Possible PIC construction at 0x000101f85fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f85fc0) */

void FUN_101f85e14(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_1104ac200;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1104ac200,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(0x101f86ac8,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101f85e28; end: 101f85f0f;  */

void FUN_101f85e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x0001000c10c0(param_4);
  func_0x000107c61180();
  func_0x000107c613fc(param_5,0x28,7);
  *(undefined8 *)(param_5 + 0x10) = param_3;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_7;
  uStack_60 = param_6;
  lStack_58 = param_5;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(param_4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(param_4);
  return;
}



/* Entry: 101f85f10; end: 101f85f47;  */

void FUN_101f85f10(void)

{
  FUN_101f85e28();
  return;
}



/* Entry: 101f85f48; end: 101f85f5b;  */

/* WARNING: Possible PIC construction at 0x000101f85fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f85fc0) */

void FUN_101f85f48(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_1104ac160;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1104ac160,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(0x101f86b28,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101f85f5c; end: 101f85fd7;  */

/* WARNING: Possible PIC construction at 0x000101f85fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f85fc0) */

void FUN_101f85f5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  func_0x000107c613fc(param_3,0x18,7);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101f85fd8; end: 101f86063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f85fd8(byte param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = param_2 + 0xa8;
    func_0x000107c61618();
    func_0x000107c61574(param_2);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + _DAT_112e471c0) = (param_1 ^ 0xff) & 1;
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 101f86064; end: 101f8606b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f86064(byte param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0xa8;
    func_0x000107c61618();
    func_0x000107c61574(lVar1);
    if (lVar2 != 0) {
      *(byte *)(lVar2 + _DAT_112e471c0) = (param_1 ^ 0xff) & 1;
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 101f8606c; end: 101f8614f;  */

void FUN_101f8606c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61610(unaff_x20 + 0xa8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 101f86150; end: 101f8616f;  */

void FUN_101f86150(void)

{
  FUN_101f848dc();
  return;
}



/* Entry: 101f86170; end: 101f86177;  */

undefined8 FUN_101f86170(void)

{
  return 0;
}



/* Entry: 101f86178; end: 101f863e3;  */

/* WARNING: Possible PIC construction at 0x000101f86284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f862a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f86288) */
/* WARNING: Removing unreachable block (ram,0x000101f862a8) */

void FUN_101f86178(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    func_0x000107c615f0(0);
  }
  else {
    param_1 = param_1 + 0xa8;
    func_0x000107c61618();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c5cc14();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c4f078();
        func_0x000107c61180();
        while (lVar2 != 0) {
          func_0x000107c61170(lVar1);
          lVar3 = lVar2;
          func_0x000107c4f078();
          func_0x000107c61180();
          lVar1 = lVar2;
          lVar2 = lVar3;
        }
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x000107c61170(lVar1);
      }
    }
    func_0x000107c4c1e0(lVar4);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 101f863e4; end: 101f86473;  */

long FUN_101f863e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0xa8;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5cc14();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4f078();
      func_0x000107c61180();
      while (lVar2 != 0) {
        func_0x000107c61170(lVar1);
        lVar3 = lVar2;
        func_0x000107c4f078();
        func_0x000107c61180();
        lVar1 = lVar2;
        lVar2 = lVar3;
      }
      return lVar1;
    }
  }
  return 0;
}



/* Entry: 101f86474; end: 101f8657f;  */

/* WARNING: Possible PIC construction at 0x000101f8653c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f86540) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f86474(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x68);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = uVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (uVar1 != 0) {
    FUN_101f8682c(0,0x112e47350,&PTR_PTR_1126b6798);
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    uVar2 = uVar1;
    func_0x000107c60118();
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x000107c4ffe8(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      goto code_r0x000107c61574;
    }
  }
  func_0x000107c61170(param_3);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f86580; end: 101f865eb; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl42SpectaclesDeviceSettingsComposerEntryPoint spectaclesOTAUpdatePageDidDismiss] */

/* WARNING: Possible PIC construction at 0x000101f865c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f865cc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f86580(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x70));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f865ec; end: 101f8682b;  */

/* WARNING: Possible PIC construction at 0x000101f86694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f86698) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f865ec(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000104458a58(0);
    func_0x000107c61174();
    uVar2 = param_3;
    func_0x000107c60118();
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar1);
    if ((uVar2 & 1) != 0) {
      func_0x000107c4ffe8(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      goto code_r0x000107c61574;
    }
  }
  func_0x000107c61170(param_3);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f8682c; end: 101f8686b;  */

void FUN_101f8682c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101f8686c; end: 101f868af; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl42SpectaclesDeviceSettingsComposerEntryPoint spectaclesContextNotificationScopeWillDismiss:] */

void FUN_101f8686c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000101f866ec(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f868b0; end: 101f8691b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl42SpectaclesDeviceSettingsComposerEntryPoint spectaclesHomeWifiScopeDidDismiss] */

/* WARNING: Possible PIC construction at 0x000101f868f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f868fc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f868b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x80));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f8691c; end: 101f86987; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl42SpectaclesDeviceSettingsComposerEntryPoint spectaclesFlightSettingsScopeDidDismiss] */

/* WARNING: Possible PIC construction at 0x000101f86964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f86968) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f8691c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x88));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f86988; end: 101f869a7;  */

void FUN_101f86988(void)

{
  func_0x000107c61168(&PTR_PTR_112e473a0);
  return;
}



/* Entry: 101f869a8; end: 101f86a13; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl42SpectaclesDeviceSettingsComposerEntryPoint calibrationPageExited] */

/* WARNING: Possible PIC construction at 0x000101f869f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f869f4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f869a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x90));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f86a14; end: 101f86ad7;  */

int FUN_101f86a14(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101f86ad8; end: 101f86b03;  */

void FUN_101f86ad8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f86b04; end: 101f86b43;  */

/* WARNING: Possible PIC construction at 0x000101f86284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f862a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f86288) */
/* WARNING: Removing unreachable block (ram,0x000101f862a8) */

void FUN_101f86b04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(lVar2 + 0x38);
  func_0x000107c3dae4(lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar4 == 0) {
    lVar4 = *(long *)(lVar2 + 0xb0);
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    func_0x000107c615f0(0);
  }
  else {
    lVar2 = lVar2 + 0xa8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5cc14();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c4f078();
        func_0x000107c61180();
        while (lVar2 != 0) {
          func_0x000107c61170(lVar1);
          lVar3 = lVar2;
          func_0x000107c4f078();
          func_0x000107c61180();
          lVar1 = lVar2;
          lVar2 = lVar3;
        }
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x000107c61170(lVar1);
      }
    }
    func_0x000107c4c1e0(lVar4);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 101f86b44; end: 101f86b47; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl42SpectaclesDeviceSettingsComposerEntryPoint spectaclesReportIssueScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000101f8653c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f86540) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f86b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x68);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = uVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (uVar1 != 0) {
    FUN_101f8682c(0,0x112e47350,&PTR_PTR_1126b6798);
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    uVar2 = uVar1;
    func_0x000107c60118();
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x000107c4ffe8(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      goto code_r0x000107c61574;
    }
  }
  func_0x000107c61170(param_3);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f86b48; end: 101f86b4b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl42SpectaclesDeviceSettingsComposerEntryPoint spectaclesReportIssueScopeWantsToDismiss:] */

/* WARNING: Possible PIC construction at 0x000101f8653c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f86540) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f86b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x68);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = uVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (uVar1 != 0) {
    FUN_101f8682c(0,0x112e47350,&PTR_PTR_1126b6798);
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    uVar2 = uVar1;
    func_0x000107c60118();
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x000107c4ffe8(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      goto code_r0x000107c61574;
    }
  }
  func_0x000107c61170(param_3);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f86b4c; end: 101f86b4f; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl42SpectaclesDeviceSettingsComposerEntryPoint spectaclesKioskModeScopeWantsToDismiss:] */

/* WARNING: Possible PIC construction at 0x000101f86694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f86698) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f86b4c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000104458a58(0);
    func_0x000107c61174();
    uVar2 = param_3;
    func_0x000107c60118();
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar1);
    if ((uVar2 & 1) != 0) {
      func_0x000107c4ffe8(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      goto code_r0x000107c61574;
    }
  }
  func_0x000107c61170(param_3);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f86b50; end: 101f86b53; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl42SpectaclesDeviceSettingsComposerEntryPoint spectaclesKioskModeScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000101f86694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f86698) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101f86b50(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000104458a58(0);
    func_0x000107c61174();
    uVar2 = param_3;
    func_0x000107c60118();
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar1);
    if ((uVar2 & 1) != 0) {
      func_0x000107c4ffe8(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      goto code_r0x000107c61574;
    }
  }
  func_0x000107c61170(param_3);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101f86b54; end: 101f86bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f86b54(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f86f48();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e474b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f86bc0; end: 101f86c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f86bc0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e474b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f86c2c; end: 101f86c8b; -[_TtC53SpectaclesDeviceStatusBarScopedFactoryServiceProvider41SCSpectaclesDeviceStatusBarScopedServices init] */

void FUN_101f86c2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceStatusBarScopedFactoryServiceProvider.SCSpectaclesDeviceStatusBarScopedServices"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f86c58);
  (*pcVar1)();
}



/* Entry: 101f86c8c; end: 101f86c9b; -[_TtC53SpectaclesDeviceStatusBarScopedFactoryServiceProvider41SCSpectaclesDeviceStatusBarScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f86c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e474b0));
  return;
}



/* Entry: 101f86c9c; end: 101f86d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f86c9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104ac438;
  func_0x000107c613fc(&UNK_1104ac438,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f87024,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f86d08; end: 101f86da3;  */

void FUN_101f86d08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104ac348;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104ac348;
  return;
}



/* Entry: 101f86da4; end: 101f86ddb;  */

void FUN_101f86da4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101f86ddc; end: 101f86de3;  */

undefined8 FUN_101f86ddc(void)

{
  return 0x1b;
}



/* Entry: 101f86de4; end: 101f86f17;  */

void FUN_101f86de4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104ac460;
  func_0x000107c613fc(&UNK_1104ac460,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f86ffc;
  func_0x00010058fa64(FUN_101f86ffc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f86f18; end: 101f86f47;  */

undefined ** FUN_101f86f18(void)

{
  return &PTR_DAT_112fe9398;
}



/* Entry: 101f86f48; end: 101f86f67;  */

void FUN_101f86f48(void)

{
  func_0x000107c61168(&PTR_PTR_11280ed30);
  return;
}



/* Entry: 101f86f68; end: 101f86fb7;  */

undefined1  [16] FUN_101f86f68(void)

{
  return ZEXT816(0x1104ac398);
}



/* Entry: 101f86fb8; end: 101f86ffb;  */

void FUN_101f86fb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e47518 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9bb0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e47518 = puVar1;
  return;
}



/* Entry: 101f86ffc; end: 101f87023;  */

void FUN_101f86ffc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f87024; end: 101f87027;  */

void FUN_101f87024(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f87028; end: 101f870f3;  */

/* WARNING: Possible PIC construction at 0x000101f870c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f870d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f870cc) */
/* WARNING: Removing unreachable block (ram,0x000101f870dc) */

void FUN_101f87028(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104ac4e8;
  func_0x000107c613fc(&UNK_1104ac4e8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112e47528;
  func_0x0001000285a8(0x112e47528,&UNK_10da3c578);
  func_0x000107c613fc();
  pcVar3 = FUN_101f874a0;
  func_0x0001000841fc(FUN_101f874a0,puVar1,uVar2);
  func_0x000100084214(&UNK_10da3c540,0x37,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101f870f4; end: 101f8710f;  */

/* WARNING: Possible PIC construction at 0x000101f870c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f870d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f870cc) */
/* WARNING: Removing unreachable block (ram,0x000101f870dc) */

void FUN_101f870f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_1104ac4e8;
  func_0x000107c613fc(&UNK_1104ac4e8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112e47528;
  func_0x0001000285a8(0x112e47528,&UNK_10da3c578);
  func_0x000107c613fc();
  pcVar6 = FUN_101f874a0;
  func_0x0001000841fc(FUN_101f874a0,puVar4,uVar5);
  func_0x000100084214(&UNK_10da3c540,0x37,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101f87110; end: 101f8749f;  */

void FUN_101f87110(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e47530,&UNK_10da3c580);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101f8887c();
  func_0x000100082720("SCSpectaclesHomeScopeExposerSubjectServiceProvider",0x32,2);
  puVar3 = puVar2;
  FUN_101f88908();
  func_0x000100082720("SCSpectaclesHomeScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f86da4;
  func_0x0001000823a8(FUN_101f86da4,0);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopedServicesCleanupRelayServiceProvider",0x44,2)
  ;
  puVar5 = puVar2;
  FUN_101f88730();
  func_0x000100082720("SpectaclesDeviceStatusBarScopeGraphBridgeServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e47538,&UNK_10da3c590);
  puVar6 = &UNK_1104ac510;
  func_0x000107c613fc(&UNK_1104ac510,0x40,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 **)(puVar6 + 0x38) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x101f874ac;
  func_0x0001000823a8(0x101f874ac,puVar6);
  func_0x000100082720("SCSpectaclesDeviceStatusBarEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e47540,&UNK_10da3c598);
  puVar6 = &UNK_1104ac538;
  func_0x000107c613fc(&UNK_1104ac538,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  pcVar7 = FUN_101f874f8;
  func_0x0001000823a8(FUN_101f874f8,puVar6);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112e474b8,&UNK_10da3c2c0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x101f87504;
  func_0x0001000823a8(0x101f87504,pcVar7);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopeInitializationServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e474a8,&UNK_10da3c2b0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101f8750c;
  func_0x0001000823a8(0x101f8750c,uVar8);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopedServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104ac560;
  func_0x000107c613fc(&UNK_1104ac560,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x101f87514;
  func_0x0001000823a8(0x101f87514,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopeEntryPointProvider",0x32,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 101f874a0; end: 101f874bb;  */

void FUN_101f874a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e47530,&UNK_10da3c580);
  puVar2 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_101f8887c();
  func_0x000100082720("SCSpectaclesHomeScopeExposerSubjectServiceProvider",0x32,2);
  puVar4 = puVar3;
  FUN_101f88908();
  func_0x000100082720("SCSpectaclesHomeScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_101f86da4;
  func_0x0001000823a8(FUN_101f86da4,0);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopedServicesCleanupRelayServiceProvider",0x44,2)
  ;
  puVar6 = puVar3;
  FUN_101f88730();
  func_0x000100082720("SpectaclesDeviceStatusBarScopeGraphBridgeServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e47538,&UNK_10da3c590);
  puVar7 = &UNK_1104ac510;
  func_0x000107c613fc(&UNK_1104ac510,0x40,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar8;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar10;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined8 **)(puVar7 + 0x38) = puVar4;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar4);
  uVar8 = 0x101f874ac;
  func_0x0001000823a8(0x101f874ac,puVar7);
  func_0x000100082720("SCSpectaclesDeviceStatusBarEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e47540,&UNK_10da3c598);
  puVar7 = &UNK_1104ac538;
  func_0x000107c613fc(&UNK_1104ac538,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar2;
  *(code **)(puVar7 + 0x20) = pcVar5;
  *(undefined8 **)(puVar7 + 0x28) = puVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar6);
  pcVar9 = FUN_101f874f8;
  func_0x0001000823a8(FUN_101f874f8,puVar7);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112e474b8,&UNK_10da3c2c0);
  func_0x000107c6157c(pcVar9);
  uVar10 = 0x101f87504;
  func_0x0001000823a8(0x101f87504,pcVar9);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopeInitializationServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e474a8,&UNK_10da3c2b0);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x101f8750c;
  func_0x0001000823a8(0x101f8750c,uVar10);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopedServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_1104ac560;
  func_0x000107c613fc(&UNK_1104ac560,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar11;
  *(code **)(puVar7 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar11 = 0x101f87514;
  func_0x0001000823a8(0x101f87514,puVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopeEntryPointProvider",0x32,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 101f874bc; end: 101f874f7;  */

void FUN_101f874bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f874f8; end: 101f8751b;  */

void FUN_101f874f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f87e98(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpectaclesDeviceStatusBarScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8751c; end: 101f87c8f;  */

void FUN_101f8751c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
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
  func_0x000100083b20(&uStack_90);
  FUN_101f87de8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  func_0x0001000285a8(0x112e47548,&UNK_10daf8610);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar7 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar5 = PTR_PTR_1126a9bb8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x6142737574617473;
  func_0x000107c5fadc(0x6142737574617473,0xee0065706f635372);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f01d700);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f023f80);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar7 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f019f40);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar7);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f023fa0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_90);
  *param_1 = param_2;
  return;
}



/* Entry: 101f87c90; end: 101f87cdb;  */

void FUN_101f87c90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 101f87cdc; end: 101f87ce3;  */

undefined8 FUN_101f87cdc(void)

{
  return 0x1b;
}



/* Entry: 101f87ce4; end: 101f87d67;  */

void FUN_101f87ce4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f87e28,param_2,FUN_101f87e2c,param_2,FUN_101f87e54,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f87d68; end: 101f87db7;  */

undefined8 FUN_101f87d68(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f87db8; end: 101f87de7;  */

void FUN_101f87db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104ac578;
  return;
}



/* Entry: 101f87de8; end: 101f87e07;  */

void FUN_101f87de8(void)

{
  func_0x000107c61168(&PTR_PTR_112e475b8);
  return;
}



/* Entry: 101f87e08; end: 101f87e2b;  */

undefined1  [16] FUN_101f87e08(void)

{
  return ZEXT816(0x1104ac5b8);
}



/* Entry: 101f87e2c; end: 101f87e53;  */

void FUN_101f87e2c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f87e54; end: 101f87e5b;  */

undefined8 FUN_101f87e54(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f87e5c; end: 101f87e97;  */

void FUN_101f87e5c(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f87e98();
  func_0x0001000a7f38("SCSpectaclesDeviceStatusBarScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f87e98; end: 101f88083;  */

void FUN_101f87e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106ceb70;
  ppuVar4 = &PTR_DAT_112fe9398;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e47640;
  func_0x0001000285a8(0x112e47640,&UNK_10da3c710);
  func_0x0001000a6ee8(&UNK_1104ac5b8,
                      "SCSpectaclesDeviceStatusBarEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_101f880f8,param_1,uVar2,&UNK_1104ac5b8,&PTR_DAT_112e47550);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104ac608;
  func_0x000107c613fc(&UNK_1104ac608,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104ac3d8,
                      "SCSpectaclesDeviceStatusBarScopedServicesScopeInitializationPluginKey",0x45,2
                      ,FUN_101f881a8,puVar3,uVar2,&UNK_1104ac3d8,&PTR_DAT_112e474c0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104ac630;
  func_0x000107c613fc(&UNK_1104ac630,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104ac828,
                      "SpectaclesDeviceStatusBarScopeGraphBridgeScopeInitializationPluginKey",0x45,2
                      ,FUN_101f881b0,puVar3,uVar2,&UNK_1104ac828,&PTR_DAT_112e476d8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e47648;
  func_0x0001000285a8(0x112e47648,&UNK_10da3c718);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f88084; end: 101f880f7;  */

void FUN_101f88084(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f88224;
  func_0x0001000823a8(0x101f88224,param_3);
  func_0x000100082720("SCSpectaclesDeviceStatusBarEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f880f8; end: 101f880ff;  */

void FUN_101f880f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f88224;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesDeviceStatusBarEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f88100; end: 101f881a7;  */

void FUN_101f88100(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ac658;
  func_0x000107c613fc(&UNK_1104ac658,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f8821c;
  func_0x0001000823a8(FUN_101f8821c,puVar1);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f881a8; end: 101f881af;  */

void FUN_101f881a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104ac658;
  func_0x000107c613fc(&UNK_1104ac658,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f8821c;
  func_0x0001000823a8(FUN_101f8821c,puVar3);
  func_0x000100082720("SCSpectaclesDeviceStatusBarScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f881b0; end: 101f881ef;  */

void FUN_101f881b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f889b0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesDeviceStatusBarScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f881f0; end: 101f8821b;  */

void FUN_101f881f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f8821c; end: 101f8822b;  */

void FUN_101f8821c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104ac460;
  func_0x000107c613fc(&UNK_1104ac460,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f86ffc;
  func_0x00010058fa64(FUN_101f86ffc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f8822c; end: 101f88307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f8822c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_101f88640();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e47650) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e47658) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f88308);
  (*pcVar1)();
}



/* Entry: 101f88308; end: 101f88367; -[_TtC41SpectaclesDeviceStatusBarScopeGraphBridge56SpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f88308(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceStatusBarScopeGraphBridge.SpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f88334);
  (*pcVar1)();
}



/* Entry: 101f88368; end: 101f8839f; -[_TtC41SpectaclesDeviceStatusBarScopeGraphBridge56SpectaclesDeviceStatusBarScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f88384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f88388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f88368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47650));
  return;
}



/* Entry: 101f883a0; end: 101f883c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f883a0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e47658),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e47650));
  return;
}



/* Entry: 101f883c8; end: 101f883e7;  */

void FUN_101f883c8(void)

{
  func_0x000107c61168(&PTR_PTR_11280edf0);
  return;
}



/* Entry: 101f883e8; end: 101f8846f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f883e8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e47688) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e47690);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f88470);
  (*pcVar2)();
}



/* Entry: 101f88470; end: 101f88557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f88470(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47688);
  *(undefined **)(unaff_x20 + _DAT_112e47688) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47690);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e47690))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104ac748;
  func_0x000107c613fc(&UNK_1104ac748,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f8855c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}


