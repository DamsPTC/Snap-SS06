/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103119a9c; end: 103119b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103119a9c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + _DAT_113076530) + _DAT_113076610);
  puVar1 = &UNK_1106102f0;
  func_0x000107c613fc(&UNK_1106102f0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_50 = FUN_103119bbc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103119a1c;
  puStack_58 = &UNK_110610308;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c4db94(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 103119b9c; end: 103119bbb;  */

void FUN_103119b9c(void)

{
  func_0x000107c61168(&PTR_PTR_112f42080);
  return;
}



/* Entry: 103119bbc; end: 103119bdf;  */

void FUN_103119bbc(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      func_0x000107c615f0(param_1);
      FUN_1031198e4();
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 103119be0; end: 103119cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103119be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_4 + _DAT_113038858);
  puVar1 = &UNK_110610348;
  func_0x000107c613fc(&UNK_110610348,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  func_0x0001000285a8(0x112f420e8,&UNK_10db8f0b0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  pcVar2 = FUN_103119e1c;
  func_0x0001000bdd8c(FUN_103119e1c,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 103119cc4; end: 103119e1b;  */

void FUN_103119cc4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = &UNK_110610370;
  func_0x000107c613fc(&UNK_110610370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_103119fec;
  func_0x0001000bdd8c(FUN_103119fec,puVar1);
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar3 = uStack_50;
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  uVar4 = 0;
  func_0x00010311ab78(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  uVar6 = 0;
  FUN_103476260();
  uVar7 = uVar6;
  func_0x000107c613fc();
  FUN_103475f30(pcVar2,0,uVar3,uVar4,uVar5,uVar7);
  func_0x0001000834e4(auStack_68);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11065a420;
  *param_1 = pcVar2;
  return;
}



/* Entry: 103119e1c; end: 103119e23;  */

void FUN_103119e1c(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110610370;
  func_0x000107c613fc(&UNK_110610370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  pcVar2 = FUN_103119fec;
  func_0x0001000bdd8c(FUN_103119fec,puVar1);
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar3 = uStack_50;
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  uVar4 = 0;
  func_0x00010311ab78(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  uVar6 = 0;
  FUN_103476260();
  uVar7 = uVar6;
  func_0x000107c613fc();
  FUN_103475f30(pcVar2,0,uVar3,uVar4,uVar5,uVar7);
  func_0x0001000834e4(auStack_68);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11065a420;
  *param_1 = pcVar2;
  return;
}



/* Entry: 103119e24; end: 103119e4f;  */

void FUN_103119e24(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103119e50; end: 103119ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103119e50(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + _DAT_113038bd8) + _DAT_113038cc0);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_58);
  func_0x000107c61574(uVar1);
  func_0x0001000a8868(auStack_58,lStack_40);
  *(long *)(param_1 + 0x18) = lStack_40;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lStack_38 + 8);
  func_0x0001000c5db4(param_1);
  (**(code **)(*(long *)(lStack_40 + -8) + 0x10))();
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103119ef8; end: 103119eff;  */

void FUN_103119ef8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103119f00; end: 103119f9f;  */

void FUN_103119f00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103119fa0; end: 103119feb;  */

void FUN_103119fa0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103475eb8(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103475dfc();
  *param_1 = uVar1;
  return;
}



/* Entry: 103119fec; end: 103119ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103119fec(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113038bd8) + _DAT_113038cc0);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_58);
  func_0x000107c61574(uVar1);
  func_0x0001000a8868(auStack_58,lStack_40);
  *(long *)(param_1 + 0x18) = lStack_40;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lStack_38 + 8);
  func_0x0001000c5db4(param_1);
  (**(code **)(*(long *)(lStack_40 + -8) + 0x10))();
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103119ff4; end: 10311a9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103119ff4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar1 = param_3;
  func_0x000107c4b33c();
  func_0x000107c61180();
  lVar13 = lVar1;
  func_0x000107c4ae48();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  if (lVar1 == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
  }
  else {
    pcVar2 = 
    "init(beginIn:lensTalkCarouselScopedLensCarouselManagementServices:scopedLensProcessingCarouselServices:callLensPickerServices:arBarServices:lensConfigurationServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
    func_0x0001000285a8(0x112d5dfe0,&UNK_10db17e80);
    lVar13 = lVar1;
    func_0x000107c41ddc(lVar1);
    func_0x000107c61180();
    lVar3 = lVar13;
    func_0x0001000b637c();
    func_0x000107c61170(lVar13);
    pcVar4 = pcVar2;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(pcVar2);
    lVar13 = lVar1;
    func_0x000107c41dd0(lVar1);
    func_0x000107c61180();
    lVar3 = lVar13;
    func_0x0001000b637c();
    func_0x000107c61170(lVar13);
    pcVar5 = pcVar2;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(pcVar2);
    func_0x0001000285a8(0x112f421c8,&UNK_10db8f0f8);
    uVar6 = param_1;
    func_0x000107c3f65c();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x0001000b637c();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112f421d0,&UNK_10db8f100);
    uVar6 = param_1;
    func_0x000107c3f6a0();
    func_0x000107c61180();
    uVar8 = uVar6;
    func_0x0001000b637c();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112ee3010,&UNK_10db0e2d0);
    uVar6 = param_1;
    func_0x000107c4ef50(param_1);
    func_0x000107c61180();
    uVar9 = uVar6;
    func_0x0001000b637c();
    func_0x000107c61170(uVar6);
    pcVar10 = FUN_10311a9e4;
    func_0x0001000bfde0(FUN_10311a9e4,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar9);
    func_0x000107c6157c(pcVar4);
    func_0x000107c6157c(pcVar5);
    uVar6 = param_1;
    func_0x000107c5e8c8();
    func_0x000107c61180();
    func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
    uVar9 = param_2;
    func_0x000107c4aeb0();
    func_0x000107c61180();
    uVar11 = uVar9;
    func_0x000107c4aeb4();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    uVar9 = uVar11;
    func_0x0001000bda74();
    func_0x000107c61170(uVar11);
    func_0x0001000285a8(0x112f421d8,&UNK_10db8f108);
    uVar12 = *(undefined8 *)(param_4 + _DAT_1130362e8);
    func_0x000107c61174();
    uVar11 = uVar12;
    func_0x0001000bda74();
    func_0x000107c61170(uVar12);
    func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
    uVar12 = param_5;
    func_0x000107c3e0b0();
    func_0x000107c61180();
    uVar15 = uVar12;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    uVar12 = uVar15;
    func_0x0001000bda74();
    func_0x000107c61170(uVar15);
    uVar16 = *(undefined8 *)(param_6 + _DAT_1130813f0);
    lVar13 = 0;
    func_0x00010311c828();
    func_0x000107c613fc();
    func_0x000107c61614(lVar13 + 0x38,0);
    *(undefined8 *)(lVar13 + 0x60) = 0;
    puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
    func_0x0001000285a8(0x112d70da8,&UNK_10d9e4e30);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar16);
    ppuVar14 = &puStack_68;
    func_0x00010006c248();
    *(undefined ***)(lVar13 + 0x68) = ppuVar14;
    uVar15 = 0;
    func_0x0001005f60b4();
    func_0x000107c613fc();
    func_0x0001005f60d4();
    *(undefined8 *)(lVar13 + 0x70) = uVar15;
    *(undefined8 *)(lVar13 + 0x10) = uVar7;
    *(undefined8 *)(lVar13 + 0x18) = uVar8;
    *(code **)(lVar13 + 0x20) = pcVar10;
    *(char **)(lVar13 + 0x28) = pcVar4;
    *(char **)(lVar13 + 0x30) = pcVar5;
    func_0x000107c61604(lVar13 + 0x38,uVar6);
    func_0x000107c615e8(uVar6);
    *(undefined8 *)(lVar13 + 0x40) = uVar9;
    *(undefined8 *)(lVar13 + 0x48) = uVar11;
    *(undefined8 *)(lVar13 + 0x50) = uVar12;
    *(undefined8 *)(lVar13 + 0x58) = uVar16;
    FUN_10311af84();
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(pcVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(pcVar4);
    *(long *)(unaff_x20 + 0x10) = lVar13;
  }
  return unaff_x20;
}



/* Entry: 10311a9e4; end: 10311a9e7;  */

void FUN_10311a9e4(void)

{
  return;
}



/* Entry: 10311a9e8; end: 10311aa1f;  */

undefined8 FUN_10311a9e8(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_10311b4bc();
    func_0x000107c61574(lVar1);
  }
  return 0;
}



/* Entry: 10311aa20; end: 10311aa43;  */

void FUN_10311aa20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10311aa44; end: 10311aa47;  */

void FUN_10311aa44(void)

{
  return;
}



/* Entry: 10311aa48; end: 10311aa83;  */

undefined8 FUN_10311aa48(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_10311b4bc();
    func_0x000107c61574(lVar1);
  }
  return 0;
}



/* Entry: 10311aa84; end: 10311aaa3;  */

void FUN_10311aa84(void)

{
  func_0x000107c61168(&PTR_PTR_112f42228);
  return;
}



/* Entry: 10311aaa4; end: 10311aaab; -[_TtC27LensCarouselTalkIntegration48LensCarouselTalkLensFeaturesVisibilityController lensFullScreenModeEnabled] */

undefined8 FUN_10311aaa4(void)

{
  return 0;
}



/* Entry: 10311aaac; end: 10311aaaf; -[_TtC27LensCarouselTalkIntegration48LensCarouselTalkLensFeaturesVisibilityController setSnapButtonHidden:] */

void FUN_10311aaac(void)

{
  return;
}



/* Entry: 10311aab0; end: 10311aab3; -[_TtC27LensCarouselTalkIntegration48LensCarouselTalkLensFeaturesVisibilityController setupLensFullScreenModeEnabled:] */

void FUN_10311aab0(void)

{
  return;
}



/* Entry: 10311aab4; end: 10311aac7; -[_TtC27LensCarouselTalkIntegration48LensCarouselTalkLensFeaturesVisibilityController setVisibleInterfaceElements:] */

void FUN_10311aab4(void)

{
  return;
}



/* Entry: 10311aac8; end: 10311aae7;  */

void FUN_10311aac8(void)

{
  func_0x000107c61168(&PTR_PTR_112f422c8);
  return;
}



/* Entry: 10311aae8; end: 10311aaeb; -[_TtC27LensCarouselTalkIntegration48LensCarouselTalkLensFeaturesVisibilityController lensFullScreenModeEnabledObservable] */

void FUN_10311aae8(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311aaec; end: 10311aaef; -[_TtC27LensCarouselTalkIntegration48LensCarouselTalkLensFeaturesVisibilityController lensSnapButtonEventObservable] */

void FUN_10311aaec(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311aaf0; end: 10311aaf7; -[_TtC27LensCarouselTalkIntegration38LensCarouselTalkUIActivationParameters openAnimated] */

undefined8 FUN_10311aaf0(void)

{
  return 0;
}



/* Entry: 10311aaf8; end: 10311aaff; -[_TtC27LensCarouselTalkIntegration38LensCarouselTalkUIActivationParameters closeAnimated] */

undefined8 FUN_10311aaf8(void)

{
  return 0;
}



/* Entry: 10311ab00; end: 10311ab07; -[_TtC27LensCarouselTalkIntegration38LensCarouselTalkUIActivationParameters shouldKeepVisibleAfterHide] */

undefined8 FUN_10311ab00(void)

{
  return 0;
}



/* Entry: 10311ab08; end: 10311ab43; -[_TtC27LensCarouselTalkIntegration38LensCarouselTalkUIActivationParameters init] */

void FUN_10311ab08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10311ab44; end: 10311ab97;  */

void FUN_10311ab44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10311ab98; end: 10311abf7; -[_TtC27LensCarouselTalkIntegration43LensCarouselTalkLensTouchProcessingWorkflow init] */

void FUN_10311ab98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselTalkIntegration.LensCarouselTalkLensTouchProcessingWorkflow",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10311abc4);
  (*pcVar1)();
}



/* Entry: 10311abf8; end: 10311ac3f; -[_TtC27LensCarouselTalkIntegration43LensCarouselTalkLensTouchProcessingWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311abf8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f42348));
  FUN_10311af60(param_1 + _DAT_112f42350);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f42358));
  return;
}



/* Entry: 10311ac40; end: 10311ac5f;  */

void FUN_10311ac40(void)

{
  func_0x000107c61168(&PTR_PTR_1128b8f38);
  return;
}



/* Entry: 10311ac60; end: 10311acfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311ac60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f42350);
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c4b4c8();
    if ((int)puVar2 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f42358);
      func_0x0001043ece90();
      uVar3 = uVar4;
      func_0x000107c4a610(uVar4,param_2,*puVar2);
      if ((int)uVar3 != 0) {
        func_0x000107c49e88(uVar4,param_2,param_1,*puVar2);
        func_0x000107c615e8(puVar1);
        return;
      }
    }
    func_0x000107c615e8(puVar1);
  }
  return;
}



/* Entry: 10311acfc; end: 10311ad57; -[_TtC27LensCarouselTalkIntegration43LensCarouselTalkLensTouchProcessingWorkflow gestureRecognizerShouldBegin:] */

uint FUN_10311acfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10311ac60(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10311ad58; end: 10311ae2f; -[_TtC27LensCarouselTalkIntegration43LensCarouselTalkLensTouchProcessingWorkflow gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10311ad58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f42358;
  uVar5 = *(undefined8 *)((long)param_1 + _DAT_112f42358);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar2 = param_1;
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x0001043ece90();
  func_0x000107c49e88(uVar5,param_2,param_3,*puVar3);
  if ((int)uVar5 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(puVar2);
  }
  else {
    uVar4 = *(ulong *)((long)param_1 + lVar1);
    func_0x000107c49e88(uVar4,param_2,param_4,*puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10311ae30; end: 10311aee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10311ae30(void)

{
  ulong uVar1;
  int iVar2;
  long unaff_x20;
  ulong uVar3;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112f42358);
  iVar2 = (int)uVar3;
  func_0x0001043ed220();
  uVar1 = uVar3;
  func_0x000107c49e8c();
  if ((uVar1 & 1) == 0) {
    func_0x0001043ed22c();
    uVar1 = uVar3;
    func_0x000107c49e8c();
    if ((uVar1 & 1) == 0) {
      func_0x0001043ed244();
      uVar1 = uVar3;
      func_0x000107c49e8c();
      if ((uVar1 & 1) == 0) {
        func_0x0001043ed238();
        func_0x000107c49e8c();
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
  }
  func_0x0001043ed214();
  func_0x000107c49e8c();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 10311aee8; end: 10311af5f; -[_TtC27LensCarouselTalkIntegration43LensCarouselTalkLensTouchProcessingWorkflow gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

uint FUN_10311aee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10311ae30(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10311af60; end: 10311af83;  */

undefined8 FUN_10311af60(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10311af84; end: 10311b4bb;  */

void FUN_10311af84(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  long *plStack_68;
  
  func_0x0001000d224c(&plStack_68);
  if (plStack_68 != (long *)0x0) {
    plVar10 = *(long **)(unaff_x20 + 0x10);
    puVar8 = &UNK_1106103d0;
    puVar1 = puVar8;
    func_0x000107c613fc(&UNK_1106103d0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uVar2 = 0x10311c87c;
    puVar6 = puVar1;
    (**(code **)(*plVar10 + 0x60))(0x10311c87c);
    func_0x000107c61574(puVar1);
    uVar3 = uVar2;
    func_0x000107c614f0(uVar2);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x70);
    (**(code **)(puVar6 + 0x18))(uVar9,uVar3,puVar6);
    func_0x000107c615e8(uVar2);
    uVar2 = 0x10311c420;
    func_0x0001000d5158(0x10311c420,0,PTR___sSbN_11034dd40);
    pcVar4 = FUN_10311c2f8;
    func_0x0001000d5158(FUN_10311c2f8,0,PTR___sytN_11034f1b0 + 8);
    pcVar5 = pcVar4;
    func_0x0001006c733c();
    func_0x000107c61574(uVar2);
    func_0x000107c61574(pcVar4);
    puVar6 = puVar8;
    func_0x000107c613fc(&UNK_1106103d0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar1 = &UNK_1106103f8;
    func_0x000107c613fc(&UNK_1106103f8,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = 0x10311c884;
    *(undefined **)(puVar1 + 0x18) = puVar6;
    pcVar4 = FUN_10311c88c;
    puVar6 = puVar1;
    (**(code **)(*(long *)pcVar5 + 0x60))(FUN_10311c88c);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(puVar1);
    pcVar5 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar6 + 0x18))(uVar9,pcVar5,puVar6);
    func_0x000107c615e8(pcVar4);
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    plVar10 = plStack_68;
    func_0x000107c4b2e0();
    func_0x000107c61180();
    plVar7 = plVar10;
    func_0x0001000b637c();
    func_0x000107c61170(plVar10);
    puVar1 = puVar8;
    func_0x000107c613fc(&UNK_1106103d0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    pcVar4 = FUN_10311c8b0;
    puVar6 = puVar1;
    (**(code **)(*plVar7 + 0x60))(FUN_10311c8b0);
    func_0x000107c61574(plVar7);
    func_0x000107c61574(puVar1);
    pcVar5 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar6 + 0x18))(uVar9,pcVar5,puVar6);
    func_0x000107c615e8(pcVar4);
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    plVar10 = plStack_68;
    func_0x000107c3d14c();
    func_0x000107c61180();
    plVar7 = plVar10;
    func_0x0001000b637c();
    func_0x000107c61170(plVar10);
    puVar1 = puVar8;
    func_0x000107c613fc(&UNK_1106103d0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uVar2 = 0x10311c8b8;
    puVar6 = puVar1;
    (**(code **)(*plVar7 + 0x60))(0x10311c8b8);
    func_0x000107c61574(plVar7);
    func_0x000107c61574(puVar1);
    uVar3 = uVar2;
    func_0x000107c614f0(uVar2);
    (**(code **)(puVar6 + 0x18))(uVar9,uVar3,puVar6);
    func_0x000107c615e8(uVar2);
    plVar10 = plStack_68;
    func_0x000107c51c8c();
    func_0x000107c61180();
    plVar7 = plVar10;
    func_0x0001000b637c();
    func_0x000107c61170(plVar10);
    puVar1 = puVar8;
    func_0x000107c613fc(&UNK_1106103d0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uVar2 = 0x10311c8c0;
    puVar6 = puVar1;
    (**(code **)(*plVar7 + 0x60))(0x10311c8c0);
    func_0x000107c61574(plVar7);
    func_0x000107c61574(puVar1);
    uVar3 = uVar2;
    func_0x000107c614f0(uVar2);
    (**(code **)(puVar6 + 0x18))(uVar9,uVar3,puVar6);
    func_0x000107c615e8(uVar2);
    plVar10 = *(long **)(unaff_x20 + 0x28);
    puVar1 = puVar8;
    func_0x000107c613fc(&UNK_1106103d0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uVar2 = 0x10311c8c8;
    puVar6 = puVar1;
    (**(code **)(*plVar10 + 0x60))(0x10311c8c8);
    func_0x000107c61574(puVar1);
    uVar3 = uVar2;
    func_0x000107c614f0(uVar2);
    (**(code **)(puVar6 + 0x18))(uVar9,uVar3,puVar6);
    func_0x000107c615e8(uVar2);
    plVar10 = *(long **)(unaff_x20 + 0x30);
    puVar1 = puVar8;
    func_0x000107c613fc(&UNK_1106103d0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uVar2 = 0x10311c8d0;
    puVar6 = puVar1;
    (**(code **)(*plVar10 + 0x60))(0x10311c8d0);
    func_0x000107c61574(puVar1);
    uVar3 = uVar2;
    func_0x000107c614f0();
    (**(code **)(puVar6 + 0x18))(uVar9,uVar3,puVar6);
    func_0x000107c615e8(uVar2);
    plVar10 = *(long **)(unaff_x20 + 0x20);
    func_0x000107c613fc(&UNK_1106103d0,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    uVar2 = 0x10311c8d8;
    puVar1 = puVar8;
    (**(code **)(*plVar10 + 0x60))();
    func_0x000107c61574(puVar8);
    uVar3 = uVar2;
    func_0x000107c614f0();
    (**(code **)(puVar1 + 0x18))(uVar9,uVar3,puVar1);
    func_0x000107c615e8(plStack_68);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 10311b4bc; end: 10311b543;  */

void FUN_10311b4bc(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  ulong uStack_38;
  
  func_0x000104875e28(&uStack_38);
  if (1 < uStack_38) {
    uVar1 = uStack_38;
    func_0x000107c3fa50(uStack_38);
    func_0x000107c61180();
    FUN_10311c86c(uStack_38);
    func_0x000107c61170(uVar1);
  }
  lVar2 = unaff_x20 + 0x38;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c41a54();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10311b544; end: 10311b787;  */

void FUN_10311b544(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_90;
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  uVar9 = *param_1;
  pcStack_70 = FUN_10311b788;
  puStack_68 = (undefined *)0x0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e2fcec;
  puStack_78 = &UNK_110610550;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  puVar3 = &UNK_110610588;
  func_0x000107c613fc(&UNK_110610588,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10311c998;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  pcStack_70 = FUN_10311c9a0;
  puStack_90 = puVar8;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x10311b81c;
  puStack_78 = &UNK_1106105a0;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_1106105d8;
  func_0x000107c613fc(&UNK_1106105d8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10311c9c0;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  pcStack_70 = (code *)0x10311c9f8;
  puStack_90 = puVar8;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x10311b81c;
  puStack_78 = &UNK_1106105f0;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar8 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c4c788(uVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar2);
  uVar7 = 0;
  func_0x000107c61544(0,"",0x76,0x44,0x34,1);
  func_0x000107c61574(param_2);
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10311b780);
    (*pcVar1)();
  }
  puVar8 = puVar3;
  func_0x000107c61544(puVar3,"",0x76,0x46,0x24,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar8 & 1) == 0) {
    puVar3 = puVar5;
    func_0x000107c61544(puVar5,"",0x76,0x48,0x1b,1);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10311b788);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10311b784);
  (*pcVar1)();
}



/* Entry: 10311b788; end: 10311b78b;  */

void FUN_10311b788(void)

{
  return;
}



/* Entry: 10311b78c; end: 10311b85b;  */

void FUN_10311b78c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c61174(param_1);
      FUN_10311c558();
      func_0x000107c61170(lVar1);
    }
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(long *)(param_2 + 0x60) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10311b85c; end: 10311b8b7;  */

void FUN_10311b85c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10311b8b8(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10311b8b8; end: 10311b99f;  */

void FUN_10311b8b8(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    FUN_10311c674(param_1);
    if (param_1 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f77918;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f77918);
    }
    else {
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      ppuVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    uVar2 = 0;
    func_0x000104501ac4(0);
    func_0x000104500ea0(ppuVar1,param_2,0,0,1,uVar2);
    func_0x000107c6142c(param_2);
    func_0x000107c3e02c(lStack_38);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(ppuVar1);
  }
  return;
}



/* Entry: 10311b9a0; end: 10311b9fb;  */

void FUN_10311b9a0(uint param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10311b9fc(param_1 & 1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10311b9fc; end: 10311bc07;  */

void FUN_10311b9fc(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  func_0x0001000d224c(&puStack_80);
  puVar1 = puStack_80;
  if (puStack_80 != (undefined *)0x0) {
    if ((param_1 & 1) == 0) {
      pcStack_60 = FUN_10311c550;
      uStack_58 = 0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100ab47f8;
      puStack_68 = &UNK_110610410;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c413b4(puVar1);
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x60);
      if (lVar7 == 0) {
        uVar8 = 0;
      }
      else {
        func_0x000104501ac4(0);
        func_0x000107c61174(lVar7);
        lVar2 = lVar7;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        func_0x000104500ea0(lVar3,param_2,0,0,1);
        func_0x000107c6142c(param_2);
        func_0x000107c61170(lVar7);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
        lVar7 = lVar3;
      }
      func_0x0001044fa118(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar8);
      lVar2 = lVar7;
      func_0x000107c61174(lVar7);
      uVar5 = 0x13;
      func_0x0001044fa0b8(0x13,lVar7,uVar8,0);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
      *(undefined8 *)(unaff_x20 + 0x60) = 0;
      func_0x000107c61170(uVar8);
      pcStack_60 = FUN_10311c550;
      uStack_58 = 0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100ab47f8;
      puStack_68 = &UNK_110610438;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c3d0c0(puVar1);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar2);
      ppuVar4 = ppuVar6;
    }
    func_0x000107c60bd0(ppuVar4);
    lVar7 = unaff_x20 + 0x38;
    func_0x000107c61618();
    if (lVar7 != 0) {
      func_0x000107c41a54();
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c615e8(puVar1);
  }
  return;
}



/* Entry: 10311bc08; end: 10311bff7;  */

void FUN_10311bc08(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 auStack_d0 [16];
  undefined *puStack_c0;
  long lStack_b0;
  undefined *apuStack_a8 [5];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar18 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  func_0x000107c600f4(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_80,lVar4,lVar5);
  puVar16 = PTR___sypN_11034f1a8;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_68 != 0) {
    func_0x000100102924(auStack_80,apuStack_a8);
    func_0x000100102924(apuStack_a8,auStack_d0);
    uVar8 = 0;
    func_0x000100c70ba8(0);
    plVar9 = &lStack_b0;
    func_0x000107c6147c(plVar9,auStack_d0,puVar16 + 8,uVar8,6);
    lVar2 = lStack_b0;
    if ((((ulong)plVar9 & 1) != 0) && (lStack_b0 != 0)) {
      puVar7 = puVar10;
      func_0x000107c61550();
      if (((int)puVar7 == 0) ||
         (((long)puVar10 < 0 || (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar6 = puVar10;
          }
          func_0x000107c60480(puVar6);
        }
        puVar7 = (undefined *)0x0;
        func_0x000100fe2a60(0,puVar6 + 1,1,puVar10);
      }
      uVar15 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar15 + 0x10);
      puVar10 = puVar7;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar1) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        func_0x000100fe2a60(puVar10,uVar1 + 1,1,puVar7);
        uVar15 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar15 + 0x10) = uVar1 + 1;
      *(long *)(uVar15 + uVar1 * 8 + 0x20) = lVar2;
    }
    func_0x000107c601c0(auStack_80,lVar4,lVar5);
  }
  (**(code **)(lVar18 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  lVar5 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    lVar4 = lVar5 + 0x38;
    func_0x000107c61618();
    func_0x000107c61574(lVar5);
    if (lVar4 != 0) {
      uVar8 = 0;
      func_0x000100c70ba8(0);
      puVar16 = puVar10;
      func_0x000107c5fc48(puVar10,uVar8);
      func_0x000107c41e10(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar16);
    }
  }
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      puVar16 = puVar10;
    }
    func_0x000107c60480();
  }
  if (puVar16 == (undefined *)0x0) {
    func_0x000107c6142c(puVar10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar6 = (undefined *)((ulong)puVar16 & ((long)puVar16 >> 0x3f ^ 0xffffffffffffffffU));
    apuStack_a8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,puVar6,0);
    if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10311bff8);
      (*pcVar3)();
    }
    puVar17 = (undefined *)0x0;
    do {
      puVar7 = apuStack_a8[0];
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        puVar11 = *(undefined **)(puVar10 + (long)puVar17 * 8 + 0x20);
        func_0x000107c61174();
        puVar14 = puVar6;
      }
      else {
        puVar11 = puVar17;
        puVar14 = puVar10;
        func_0x000100ff3f88();
      }
      func_0x000107c61174();
      puVar12 = puVar11;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      puVar13 = puVar12;
      func_0x000107c5faec();
      puVar6 = puVar14;
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar12);
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar11 = (undefined *)(uVar1 + 1);
      apuStack_a8[0] = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar6 = puVar11;
        func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),puVar11,1);
      }
      puVar7 = apuStack_a8[0];
      puVar17 = puVar17 + 1;
      *(undefined **)(apuStack_a8[0] + 0x10) = puVar11;
      *(undefined **)(apuStack_a8[0] + uVar1 * 0x10 + 0x20) = puVar13;
      *(undefined **)(apuStack_a8[0] + uVar1 * 0x10 + 0x28) = puVar14;
    } while (puVar16 != puVar17);
    func_0x000107c6142c(puVar10);
  }
  puVar10 = puVar7;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar7);
  func_0x000107c61428(param_2 + 0x10,apuStack_a8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c6142c(puVar10);
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x68);
    func_0x000107c6157c(uVar8);
    func_0x000107c61574(param_2);
    puStack_c0 = puVar10;
    func_0x000100075034(FUN_10311c8e0,auStack_d0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c6142c(puVar10);
    func_0x000107c61574(uVar8);
  }
  return;
}



/* Entry: 10311bff8; end: 10311c27f;  */

void FUN_10311bff8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c4a6ec();
  if ((int)lVar2 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) goto LAB_10311c0c8;
    lVar2 = param_2 + 0x38;
    func_0x000107c61618();
    func_0x000107c61574(param_2);
    if (lVar2 == 0) goto LAB_10311c0c8;
    func_0x000107c419bc(lVar2);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) goto LAB_10311c0c8;
    lVar2 = param_2 + 0x38;
    func_0x000107c61618();
    func_0x000107c61574(param_2);
    if (lVar2 == 0) goto LAB_10311c0c8;
    func_0x000107c41ae0(lVar2);
  }
  func_0x000107c615e8(lVar2);
LAB_10311c0c8:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 10311c280; end: 10311c2f7;  */

void FUN_10311c280(undefined8 param_1,long param_2)

{
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001000d224c(&lStack_40);
    if (lStack_40 != 0) {
      func_0x000107c3d04c(lStack_40);
      func_0x000107c615e8(lStack_40);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10311c2f8; end: 10311c54f;  */

void FUN_10311c2f8(undefined1 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *param_2;
  *param_1 = 1;
  puVar3 = &UNK_110610470;
  func_0x000107c613fc(&UNK_110610470,0x18,7);
  *(undefined1 **)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_110610498;
  func_0x000107c613fc(&UNK_110610498,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10311c940;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_10311c94c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_1106104b0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c7cc(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x76,0x85,0x30,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10311c420);
  (*pcVar2)();
}



/* Entry: 10311c550; end: 10311c557;  */

void FUN_10311c550(void)

{
  return;
}



/* Entry: 10311c558; end: 10311c673;  */

void FUN_10311c558(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar1 = uStack_48;
  if (uStack_48 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
    func_0x000107c6157c(uVar4);
    func_0x0001000c74f0(&uStack_48);
    func_0x000107c61574(uVar4);
    uVar2 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    uVar4 = param_2;
    func_0x0001000f66f0(uVar3,param_2,uStack_48);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uStack_48);
    if ((uVar3 & 1) == 0) {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (param_1 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar4);
      }
      uVar2 = uVar1;
      func_0x000107c403f8();
      func_0x000107c61170(param_1);
      if ((uVar2 & 1) == 0) {
        func_0x000107c4e718(uVar1);
      }
    }
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 10311c674; end: 10311c78b;  */

void FUN_10311c674(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar2 = param_1;
    func_0x000107c61174();
    func_0x000107c6157c(uVar5);
    func_0x0001000c74f0(&lStack_58);
    func_0x000107c61574(uVar5);
    lVar1 = lStack_58;
    uVar3 = uVar2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    func_0x0001000f66f0(uVar4,param_2,lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar1);
    if ((uVar4 & 1) != 0) goto LAB_10311c754;
  }
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c3d064(lStack_58);
    func_0x000107c615e8(lStack_58);
  }
  uVar2 = param_1;
  if (param_1 == 0) {
    return;
  }
LAB_10311c754:
  func_0x000107c61174(uVar2);
  FUN_10311c558();
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10311c78c; end: 10311c847;  */

void FUN_10311c78c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_10311c848(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10311c848; end: 10311c86b;  */

undefined8 FUN_10311c848(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10311c86c; end: 10311c88b;  */

void FUN_10311c86c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10311c88c; end: 10311c8af;  */

void FUN_10311c88c(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 10311c8b0; end: 10311c8df;  */

void FUN_10311c8b0(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  ulong uVar15;
  long unaff_x20;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 auStack_d0 [16];
  undefined *puStack_c0;
  long lStack_b0;
  undefined *apuStack_a8 [5];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar18 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  func_0x000107c600f4(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_80,lVar4,lVar5);
  puVar16 = PTR___sypN_11034f1a8;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_68 != 0) {
    func_0x000100102924(auStack_80,apuStack_a8);
    func_0x000100102924(apuStack_a8,auStack_d0);
    uVar8 = 0;
    func_0x000100c70ba8(0);
    plVar9 = &lStack_b0;
    func_0x000107c6147c(plVar9,auStack_d0,puVar16 + 8,uVar8,6);
    lVar2 = lStack_b0;
    if ((((ulong)plVar9 & 1) != 0) && (lStack_b0 != 0)) {
      puVar7 = puVar10;
      func_0x000107c61550();
      if (((int)puVar7 == 0) ||
         (((long)puVar10 < 0 || (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar6 = puVar10;
          }
          func_0x000107c60480(puVar6);
        }
        puVar7 = (undefined *)0x0;
        func_0x000100fe2a60(0,puVar6 + 1,1,puVar10);
      }
      uVar15 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar15 + 0x10);
      puVar10 = puVar7;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar1) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        func_0x000100fe2a60(puVar10,uVar1 + 1,1,puVar7);
        uVar15 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar15 + 0x10) = uVar1 + 1;
      *(long *)(uVar15 + uVar1 * 8 + 0x20) = lVar2;
    }
    func_0x000107c601c0(auStack_80,lVar4,lVar5);
  }
  (**(code **)(lVar18 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    lVar4 = lVar5 + 0x38;
    func_0x000107c61618();
    func_0x000107c61574(lVar5);
    if (lVar4 != 0) {
      uVar8 = 0;
      func_0x000100c70ba8(0);
      puVar16 = puVar10;
      func_0x000107c5fc48(puVar10,uVar8);
      func_0x000107c41e10(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar16);
    }
  }
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      puVar16 = puVar10;
    }
    func_0x000107c60480();
  }
  if (puVar16 == (undefined *)0x0) {
    func_0x000107c6142c(puVar10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar6 = (undefined *)((ulong)puVar16 & ((long)puVar16 >> 0x3f ^ 0xffffffffffffffffU));
    apuStack_a8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,puVar6,0);
    if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10311bff8);
      (*pcVar3)();
    }
    puVar17 = (undefined *)0x0;
    do {
      puVar7 = apuStack_a8[0];
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        puVar11 = *(undefined **)(puVar10 + (long)puVar17 * 8 + 0x20);
        func_0x000107c61174();
        puVar14 = puVar6;
      }
      else {
        puVar11 = puVar17;
        puVar14 = puVar10;
        func_0x000100ff3f88();
      }
      func_0x000107c61174();
      puVar12 = puVar11;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      puVar13 = puVar12;
      func_0x000107c5faec();
      puVar6 = puVar14;
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar12);
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar11 = (undefined *)(uVar1 + 1);
      apuStack_a8[0] = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar6 = puVar11;
        func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),puVar11,1);
      }
      puVar7 = apuStack_a8[0];
      puVar17 = puVar17 + 1;
      *(undefined **)(apuStack_a8[0] + 0x10) = puVar11;
      *(undefined **)(apuStack_a8[0] + uVar1 * 0x10 + 0x20) = puVar13;
      *(undefined **)(apuStack_a8[0] + uVar1 * 0x10 + 0x28) = puVar14;
    } while (puVar16 != puVar17);
    func_0x000107c6142c(puVar10);
  }
  puVar10 = puVar7;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar7);
  func_0x000107c61428(unaff_x20 + 0x10,apuStack_a8,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    func_0x000107c6142c(puVar10);
  }
  else {
    uVar8 = *(undefined8 *)(lVar5 + 0x68);
    func_0x000107c6157c(uVar8);
    func_0x000107c61574(lVar5);
    puStack_c0 = puVar10;
    func_0x000100075034(FUN_10311c8e0,auStack_d0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c6142c(puVar10);
    func_0x000107c61574(uVar8);
  }
  return;
}



/* Entry: 10311c8e0; end: 10311c923;  */

void FUN_10311c8e0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6142c(*param_1);
  *param_1 = uVar1;
  func_0x000107c61434(uVar1);
  return;
}



/* Entry: 10311c924; end: 10311c94b;  */

void FUN_10311c924(long param_1,long param_2)

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



/* Entry: 10311c94c; end: 10311c96b;  */

void FUN_10311c94c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10311c96c; end: 10311c977;  */

void FUN_10311c96c(undefined1 param_1)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10311c978; end: 10311c997;  */

void FUN_10311c978(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10311c998; end: 10311c99f;  */

void FUN_10311c998(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c61174(param_1);
      FUN_10311c558();
      func_0x000107c61170(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    *(long *)(lVar1 + 0x60) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 10311c9a0; end: 10311c9bf;  */

void FUN_10311c9a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10311c9c0; end: 10311c9fb;  */

void FUN_10311c9c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10311b8b8(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10311c9fc; end: 10311ca07; -[SCLensCarouselTalkViewModelCreatingServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311c9fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42488;
  func_0x000107c61428(param_1 + _DAT_112f42488,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311ca08; end: 10311ca13; -[SCLensCarouselTalkViewModelCreatingServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311ca08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42488;
  func_0x000107c61428(param_1 + _DAT_112f42488,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311ca14; end: 10311ca1f; -[SCLensCarouselTalkViewModelCreatingServiceProvider talkCarouselScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311ca14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42490;
  func_0x000107c61428(param_1 + _DAT_112f42490,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311ca20; end: 10311ca2b; -[SCLensCarouselTalkViewModelCreatingServiceProvider setTalkCarouselScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311ca20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42490;
  func_0x000107c61428(param_1 + _DAT_112f42490,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311ca2c; end: 10311ca37; -[SCLensCarouselTalkViewModelCreatingServiceProvider lensCarouselDataProviderControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311ca2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42498;
  func_0x000107c61428(param_1 + _DAT_112f42498,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311ca38; end: 10311ca43; -[SCLensCarouselTalkViewModelCreatingServiceProvider setLensCarouselDataProviderControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311ca38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42498;
  func_0x000107c61428(param_1 + _DAT_112f42498,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311ca44; end: 10311ca4f; -[SCLensCarouselTalkViewModelCreatingServiceProvider lensCarouselContextConfiguratorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311ca44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f424a0;
  func_0x000107c61428(param_1 + _DAT_112f424a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311ca50; end: 10311ca93;  */

void FUN_10311ca50(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311ca94; end: 10311ca9f; -[SCLensCarouselTalkViewModelCreatingServiceProvider setLensCarouselContextConfiguratorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311ca94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f424a0;
  func_0x000107c61428(param_1 + _DAT_112f424a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311caa0; end: 10311caf3;  */

void FUN_10311caa0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311caf4; end: 10311cccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311caf4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5c6d4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ae64();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4ae60();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = 0;
          func_0x000103119f24();
          func_0x000107c613fc();
          uVar8 = *(undefined8 *)(lVar4 + _DAT_113038858);
          puVar6 = &UNK_110610628;
          func_0x000107c613fc(&UNK_110610628,0x20,7);
          *(long *)(puVar6 + 0x10) = lVar3;
          *(undefined8 *)(puVar6 + 0x18) = uVar8;
          func_0x0001000285a8(0x112f420e8,&UNK_10db8f0b0);
          func_0x000107c613fc();
          func_0x000107c61174(lVar3);
          func_0x000107c6157c(uVar8);
          pcVar7 = FUN_10311ccd0;
          func_0x0001000bdd8c(FUN_10311ccd0,puVar6);
          *(code **)(lVar5 + 0x10) = pcVar7;
          uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f424a8);
          *(long *)(unaff_x20 + _DAT_112f424a8) = lVar5;
          func_0x000107c6157c(lVar5);
          func_0x000107c61574(uVar8);
          uVar8 = *(undefined8 *)(lVar5 + 0x10);
          FUN_103475eb8(0);
          func_0x000107c610f8();
          func_0x000107c6157c(uVar8);
          func_0x000103475dfc();
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61574(lVar5);
          return;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10311ccd0; end: 10311ccd7;  */

void FUN_10311ccd0(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110610370;
  func_0x000107c613fc(&UNK_110610370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  pcVar2 = FUN_103119fec;
  func_0x0001000bdd8c(FUN_103119fec,puVar1);
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar3 = uStack_50;
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  uVar4 = 0;
  func_0x00010311ab78(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  uVar6 = 0;
  FUN_103476260();
  uVar7 = uVar6;
  func_0x000107c613fc();
  FUN_103475f30(pcVar2,0,uVar3,uVar4,uVar5,uVar7);
  func_0x0001000834e4(auStack_68);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11065a420;
  *param_1 = pcVar2;
  return;
}



/* Entry: 10311ccd8; end: 10311cd63; -[SCLensCarouselTalkViewModelCreatingServiceProvider provide] */

void FUN_10311ccd8(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10311caf4();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensCarouselTalkIntegration/SCLensCarouselTalkViewModelCreatingServiceProvider.swift"
                      ,0x54,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10311cd64);
  (*pcVar1)();
}



/* Entry: 10311cd64; end: 10311cd97; -[SCLensCarouselTalkViewModelCreatingServiceProvider __safeProvide] */

void FUN_10311cd64(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10311caf4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10311cd98; end: 10311cddb; -[SCLensCarouselTalkViewModelCreatingServiceProvider end] */

void FUN_10311cd98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311cddc; end: 10311d047;  */

void FUN_10311cddc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef1048630)) {
      uVar2 = 0xd000000000000011;
      func_0x000107c605b8(0xd000000000000011,0x800000010efb79d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002b;
        if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0ed9910)) ||
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f1266f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55c24();
        }
        else {
          uVar2 = 0xd000000000000027;
          if (((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0ed98e0)) &&
             (func_0x000107c605b8(0xd000000000000027,0x800000010f126720,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "LensCarouselTalkIntegration/SCLensCarouselTalkViewModelCreatingServiceProvider.swift"
                                ,0x54,2,0x3a,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10311d048);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55c20();
        }
        goto LAB_10311ce6c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59bb8();
  }
LAB_10311ce6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10311d048; end: 10311d0f3; -[SCLensCarouselTalkViewModelCreatingServiceProvider setValue:forIvarName:] */

void FUN_10311d048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10311cddc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10311d0f4; end: 10311d18f; -[SCLensCarouselTalkViewModelCreatingServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d0f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f42488,0);
  func_0x000107c61614(param_1 + _DAT_112f42490,0);
  func_0x000107c61614(param_1 + _DAT_112f42498,0);
  func_0x000107c61614(param_1 + _DAT_112f424a0,0);
  *(undefined8 *)(param_1 + _DAT_112f424a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10311d190; end: 10311d1c3;  */

void FUN_10311d190(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10311d1c4; end: 10311d22b; -[SCLensCarouselTalkViewModelCreatingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d1c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f42488);
  func_0x000107c61610(param_1 + _DAT_112f42490);
  func_0x000107c61610(param_1 + _DAT_112f42498);
  func_0x000107c61610(param_1 + _DAT_112f424a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f424a8));
  return;
}



/* Entry: 10311d22c; end: 10311d24b;  */

void FUN_10311d22c(void)

{
  func_0x000107c61168(&PTR_PTR_112f424f0);
  return;
}



/* Entry: 10311d24c; end: 10311d257; -[SCLensCarouselTalkContextConfiguratorServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d24c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42568;
  func_0x000107c61428(param_1 + _DAT_112f42568,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311d258; end: 10311d263; -[SCLensCarouselTalkContextConfiguratorServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42568;
  func_0x000107c61428(param_1 + _DAT_112f42568,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311d264; end: 10311d26f; -[SCLensCarouselTalkContextConfiguratorServiceProvider talkCarouselScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d264(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42570;
  func_0x000107c61428(param_1 + _DAT_112f42570,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311d270; end: 10311d27b; -[SCLensCarouselTalkContextConfiguratorServiceProvider setTalkCarouselScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42570;
  func_0x000107c61428(param_1 + _DAT_112f42570,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311d27c; end: 10311d287; -[SCLensCarouselTalkContextConfiguratorServiceProvider lensTalkCarouselScopedLensCarouselLensApplicatorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d27c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42578;
  func_0x000107c61428(param_1 + _DAT_112f42578,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311d288; end: 10311d293; -[SCLensCarouselTalkContextConfiguratorServiceProvider setLensTalkCarouselScopedLensCarouselLensApplicatorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42578;
  func_0x000107c61428(param_1 + _DAT_112f42578,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311d294; end: 10311d29f; -[SCLensCarouselTalkContextConfiguratorServiceProvider scopedLensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d294(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42580;
  func_0x000107c61428(param_1 + _DAT_112f42580,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311d2a0; end: 10311d2e3;  */

void FUN_10311d2a0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10311d2e4; end: 10311d2ef; -[SCLensCarouselTalkContextConfiguratorServiceProvider setScopedLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42580;
  func_0x000107c61428(param_1 + _DAT_112f42580,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311d2f0; end: 10311d343;  */

void FUN_10311d2f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


