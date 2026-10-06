/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bd5704; end: 101bd5797; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider isSpotifyTopicPageIntegrationEnabled] */

undefined8 FUN_101bd5704(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f002ad0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bd5798; end: 101bd582b; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider isListeningActivityPermissionsEnabled] */

undefined8 FUN_101bd5798(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f002b00);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bd582c; end: 101bd58bf; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider isNowPlayingProfilePillEnabled] */

undefined8 FUN_101bd582c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f002b40);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bd58c0; end: 101bd58f3; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider mapsFocusCardNowPlayingTreatment] */

undefined8 FUN_101bd58c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101bd58f4();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 101bd58f4; end: 101bd59c3;  */

int FUN_101bd58f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uStack_38;
  
  if (bRam0000000112e08198 < 2) {
    iVar3 = 3;
    if (bRam0000000112e08198 != 0) {
      iVar3 = 2;
    }
  }
  else if (bRam0000000112e08198 == 2) {
    iVar3 = 1;
  }
  else if (bRam0000000112e08198 == 3) {
    iVar3 = 0;
  }
  else {
    func_0x000100083b20(&uStack_38);
    uVar1 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f002b70);
    uVar2 = uStack_38;
    func_0x000107c4980c();
    func_0x000107c615e8(uStack_38);
    func_0x000107c61170(uVar1);
    iVar3 = (int)uVar2;
    if (2 < iVar3 - 1U) {
      iVar3 = 0;
    }
  }
  return iVar3;
}



/* Entry: 101bd59c4; end: 101bd59f7; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider isExternalMusicEnabled] */

uint FUN_101bd59c4(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101bd59f8();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101bd59f8; end: 101bd5a97;  */

bool FUN_101bd59f8(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f002ad0);
  uVar4 = uStack_38;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar3);
  iVar2 = (int)uVar3;
  if ((uVar4 & 1) == 0) {
    FUN_101bd58f4();
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 101bd5a98; end: 101bd5aa3; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider debug_failAuthRegistration] */

undefined1 FUN_101bd5a98(void)

{
  return uRam0000000112e08158;
}



/* Entry: 101bd5aa4; end: 101bd5aaf; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider debug_failTrackSave] */

undefined1 FUN_101bd5aa4(void)

{
  return uRam0000000112e08118;
}



/* Entry: 101bd5ab0; end: 101bd5abb; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider debug_simulatedServiceError] */

undefined1 FUN_101bd5ab0(void)

{
  return uRam0000000112e080d8;
}



/* Entry: 101bd5abc; end: 101bd5acf; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider debug_simulatedServiceErrorMode] */

bool FUN_101bd5abc(void)

{
  return cRam0000000112e08098 == '\x01';
}



/* Entry: 101bd5ad0; end: 101bd5adb; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider debug_disarmSimulatedServiceError] */

void FUN_101bd5ad0(void)

{
  uRam0000000112e080d8 = 0;
  return;
}



/* Entry: 101bd5adc; end: 101bd5ae7; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider debug_nowPlayingLogViewerMode] */

undefined1 FUN_101bd5adc(void)

{
  return uRam0000000112e08058;
}



/* Entry: 101bd5ae8; end: 101bd5b7b; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider isSpotifyAuthSDKEnabled] */

undefined8 FUN_101bd5ae8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f002ba0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101bd5b7c; end: 101bd5c13; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider listeningActivityReminderIntervalSeconds] */

double FUN_101bd5b7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000036;
  func_0x000107c5fadc(0xd000000000000036,0x800000010f002bd0);
  uVar2 = uStack_38;
  func_0x000107c4980c(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (double)(int)uVar2;
}



/* Entry: 101bd5c14; end: 101bd5ca7; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider nowPlayingCacheTTL] */

double FUN_101bd5c14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efb8230);
  uVar2 = uStack_38;
  func_0x000107c4980c(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (double)(int)uVar2;
}



/* Entry: 101bd5ca8; end: 101bd5d3b; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider nowPlayingRequestTimeout] */

double FUN_101bd5ca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efb8260);
  uVar2 = uStack_38;
  func_0x000107c4980c(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (double)(int)uVar2;
}



/* Entry: 101bd5d3c; end: 101bd5dcf; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider connectedProviderCacheTTL] */

double FUN_101bd5d3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f002c10);
  uVar2 = uStack_38;
  func_0x000107c4980c(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (double)(int)uVar2;
}



/* Entry: 101bd5dd0; end: 101bd5e6b; -[_TtC33ExternalMusicTweaksImplementation27ExternalMusicTweaksProvider createRevokeSpotifyAuthTweak:] */

/* WARNING: Possible PIC construction at 0x000101bd5e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd5e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd5e24) */
/* WARNING: Removing unreachable block (ram,0x000101bd5e34) */

void FUN_101bd5dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (lRam0000000112e08050 != -1) {
    func_0x000107c61568(0x112e08050,FUN_101bd55f4);
  }
  uVar1 = uRam0000000112e08048;
  uRam0000000112e08048 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(uVar1);
  return;
}



/* Entry: 101bd5e6c; end: 101bd5e8f;  */

void FUN_101bd5e6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101bd5e90; end: 101bd5e9f;  */

undefined1  [16] FUN_101bd5e90(void)

{
  return ZEXT816(0x110453a30);
}



/* Entry: 101bd5ea0; end: 101bd5ebf;  */

void FUN_101bd5ea0(void)

{
  func_0x000107c61168(&PTR_PTR_112e08220);
  return;
}



/* Entry: 101bd5ec0; end: 101bd5fbf;  */

void FUN_101bd5ec0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  
  lVar1 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_101bd778c();
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x000103a814dc();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar4,1,1,lVar2);
  uVar3 = 0x112e08288;
  func_0x0001000285a8(0x112e08288,&UNK_10d9dcab0);
  func_0x000107c613fc();
  func_0x00010006c248(puVar4,uVar3);
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined1 **)(lVar1 + 0x20) = puVar4;
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110453ae8;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  return;
}



/* Entry: 101bd5fc0; end: 101bd5fc7;  */

void FUN_101bd5fc0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_101bd778c();
  func_0x000107c613fc();
  lVar4 = 0;
  func_0x000103a814dc();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar6,1,1,lVar4);
  uVar5 = 0x112e08288;
  func_0x0001000285a8(0x112e08288,&UNK_10d9dcab0);
  func_0x000107c613fc();
  func_0x00010006c248(puVar6,uVar5);
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  *(undefined1 **)(lVar3 + 0x20) = puVar6;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *param_1 = lVar3;
  param_1[1] = (long)&PTR_DAT_110453ae8;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 101bd5fc8; end: 101bd62eb;  */

long FUN_101bd5fc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x20;
  
  lVar1 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x000103a814dc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,1,lVar1);
  func_0x0001000285a8(0x112e08288,&UNK_10d9dcab0);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined1 **)(unaff_x20 + 0x20) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return unaff_x20;
}



/* Entry: 101bd62ec; end: 101bd6c13;  */

undefined *
FUN_101bd62ec(double param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined *param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  long alStack_c0 [2];
  undefined *apuStack_b0 [5];
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar7 = 0x112d5ed18;
  apuStack_b0[0] = param_5;
  apuStack_b0[1] = (undefined *)param_6;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)apuStack_b0 - extraout_x8;
  lVar8 = 0;
  func_0x000103a814dc();
  lVar16 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &UNK_110453b78;
  func_0x000107c613fc(&UNK_110453b78,0x18,7);
  apuStack_b0[2] = (undefined *)((ulong)apuStack_b0[2] & 0xffffffffffffff00);
  apuStack_b0[3] = (undefined *)0x0;
  func_0x0001000285a8(0x112e08340,&UNK_10d9dcb78);
  func_0x000107c613fc();
  ppuVar10 = apuStack_b0 + 2;
  func_0x00010006c248();
  *(undefined ***)(puVar9 + 0x10) = ppuVar10;
  func_0x0001000c74f0(lVar15);
  lVar7 = lVar15;
  (**(code **)(lVar16 + 0x30))(lVar15,1,lVar8);
  if ((int)lVar7 == 1) {
    FUN_101bd7b90(lVar15,0x112d5ed18,&UNK_10d925c50);
    puVar11 = PTR_PTR_1126a63d8;
    func_0x000107c610f8(PTR_PTR_1126a63d8);
    func_0x000107c453e4();
    func_0x000107c4d664(param_2);
    func_0x000107c61170(puVar11);
  }
  else {
    func_0x00010111dd50(lVar15,lVar17);
    lVar7 = lVar17;
    FUN_101bd7948(lVar17);
    func_0x000107c4d664(param_2);
    func_0x000107c61170(lVar7);
    uVar2 = *(undefined8 *)(param_4 + 0x18);
    lVar7 = *(long *)(param_4 + 0x20);
    func_0x0001000a8868(param_4,uVar2);
    puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar8 + 0x24));
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar8 + 0x20));
    uVar4 = *puVar1;
    uVar6 = puVar1[1];
    pcVar14 = *(code **)(lVar7 + 0x20);
    *(undefined8 *)(lVar17 + -0x10) = uVar2;
    *(long *)(lVar17 + -8) = lVar7;
    *(undefined1 *)(lVar17 + -0x18) = 1;
    *(undefined8 *)(lVar17 + -0x20) = 0;
    (*pcVar14)(param_4,uVar3,uVar5,uVar4,uVar6,0,0,0,0);
    func_0x00010111dddc(lVar17);
  }
  if (param_1 <= 1.0) {
    param_1 = 1.0;
  }
  ppuVar12 = ppuVar10;
  func_0x000107c6157c();
  func_0x000101bd6608(param_1);
  func_0x000107c61574(ppuVar10);
  func_0x000107c614f0(ppuVar12);
  func_0x000107c60020();
  puVar13 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar11 = &UNK_110453ba0;
  func_0x000107c613fc(&UNK_110453ba0,0x20,7);
  *(undefined **)(puVar11 + 0x10) = puVar9;
  *(undefined ***)(puVar11 + 0x18) = ppuVar12;
  pcStack_80 = FUN_101bd785c;
  apuStack_b0[2] = PTR___NSConcreteStackBlock_11034bd00;
  apuStack_b0[3] = (undefined *)0x42000000;
  apuStack_b0[4] = &UNK_1000f6b44;
  puStack_88 = &UNK_110453bb8;
  ppuVar10 = apuStack_b0 + 2;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar10);
  puVar11 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c615f0(ppuVar12);
  func_0x000107c61574(puVar11);
  func_0x000107c408f0(puVar13);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puVar9);
  func_0x000107c615e8(ppuVar12);
  return puVar13;
}



/* Entry: 101bd6c14; end: 101bd6c2b;  */

void FUN_101bd6c14(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *param_1 = uVar1;
  return;
}



/* Entry: 101bd6c2c; end: 101bd6d23;  */

void FUN_101bd6c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar1 = 0;
  func_0x000103a814dc();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar1 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd6d24,0,0);
  return;
}



/* Entry: 101bd6d24; end: 101bd6dd7;  */

void FUN_101bd6d24(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 *puVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  puVar6 = *(uint3 **)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(puVar6 + 6);
  lVar3 = *(long *)(puVar6 + 8);
  func_0x0001000a8868(puVar6,uVar2);
  func_0x000103a83e9c();
  uVar9 = *(undefined8 *)(puVar6 + 2);
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  uVar4 = *puVar6;
  uVar5 = puVar6[4];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bd6dd8;
                    /* WARNING: Could not recover jumptable at 0x000101bd6dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (plVar7,*(undefined8 *)(unaff_x22 + 0xb0),(ulong)uVar4,uVar9,(char)uVar5,uVar2,lVar3);
  return;
}



/* Entry: 101bd6dd8; end: 101bd6e33;  */

void FUN_101bd6dd8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bd6e34;
  }
  else {
    pcVar1 = FUN_101bd74ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bd6e34; end: 101bd71e7;  */

void FUN_101bd6e34(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long unaff_x22;
  long lVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  
  func_0x000107c5fd5c();
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
  if ((param_1 & 1) != 0) {
    FUN_101bd7b90(uVar13,0x112d5ed18,&UNK_10d925c50);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000100075034(FUN_101bd7918,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615c0(uVar20);
    func_0x000107c615c0(uVar13);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar16);
    func_0x000107c615c0(uVar22);
    func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101bd6f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar17 = *(long *)(unaff_x22 + 0x78);
  func_0x0001000c74f0(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000101bd7ee8(uVar13,uVar15,0x112d5ed18,&UNK_10d925c50);
  pcVar21 = *(code **)(lVar17 + 0x30);
  (*pcVar21)(uVar15,1,uVar16);
  if ((int)uVar15 == 1) {
    puVar9 = PTR_PTR_1126a63d8;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    puVar14 = *(undefined **)(unaff_x22 + 0x88);
    func_0x00010111dd50(*(undefined8 *)(unaff_x22 + 0xa0),puVar14);
    puVar9 = puVar14;
    FUN_101bd7948();
    func_0x00010111dddc(puVar14);
  }
  *(undefined **)(unaff_x22 + 200) = puVar9;
  uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar15;
  func_0x000100075034(FUN_101bd7f30,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar16;
  func_0x000101bd7ee8(uVar15,uVar13,0x112d5ed18,&UNK_10d925c50);
  (*pcVar21)(uVar13,1,uVar20);
  if ((int)uVar13 == 1) {
    FUN_101bd7b90(*(undefined8 *)(unaff_x22 + 0x98),0x112d5ed18,&UNK_10d925c50);
    goto LAB_101bd7168;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x00010111dd50(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000101bd7ee8(uVar15,uVar13,0x112d5ed18,&UNK_10d925c50);
  (*pcVar21)(uVar13,1,uVar16);
  lVar17 = *(long *)(unaff_x22 + 0x90);
  if ((int)uVar13 == 1) {
    FUN_101bd7b90(lVar17,0x112d5ed18,&UNK_10d925c50);
LAB_101bd7090:
    lVar17 = *(long *)(unaff_x22 + 0x80);
    lVar18 = *(long *)(unaff_x22 + 0x70);
    lVar10 = *(long *)(unaff_x22 + 0x48);
    lVar19 = *(long *)(lVar10 + 0x20);
    func_0x0001000a8868(lVar10,*(undefined8 *)(lVar10 + 0x18));
    puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x24));
    puVar2 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x20));
    (**(code **)(lVar19 + 0x20))(lVar10,*puVar1,puVar1[1],*puVar2,puVar2[1],0,0,0,0,0,1);
  }
  else {
    lVar19 = *(long *)(unaff_x22 + 0x80);
    lVar10 = *(long *)(unaff_x22 + 0x70);
    puVar3 = (ulong *)(lVar17 + *(int *)(lVar10 + 0x20));
    uVar11 = *puVar3;
    uVar7 = puVar3[1];
    func_0x000107c61434(uVar7);
    func_0x00010111dddc(lVar17);
    puVar3 = (ulong *)(lVar19 + *(int *)(lVar10 + 0x20));
    uVar4 = *puVar3;
    uVar8 = puVar3[1];
    if ((uVar11 == uVar4) && (uVar7 == uVar8)) {
      func_0x000107c6142c(uVar7);
    }
    else {
      func_0x000107c605b8(uVar11,uVar7,uVar4,uVar8,0);
      func_0x000107c6142c(uVar7);
      if ((uVar11 & 1) == 0) goto LAB_101bd7090;
    }
    lVar17 = *(long *)(unaff_x22 + 0x80);
  }
  func_0x00010111dddc(lVar17);
LAB_101bd7168:
  uVar15 = 0;
  func_0x000107c5fcec();
  puVar9 = PTR___sScMMa_11034fc70;
  uVar13 = uVar15;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar13;
  uVar13 = 0x112d45220;
  func_0x000101bd7ea8(0x112d45220,puVar9,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar15,uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd71e8,uVar15,uVar13);
  return;
}



/* Entry: 101bd71e8; end: 101bd7273;  */

void FUN_101bd71e8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000100075034(unaff_x22 + 0x101,FUN_101bd76d4,0,PTR___sSbN_11034dd40);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar1;
  if (*(char *)(unaff_x22 + 0x101) == '\x01') {
    func_0x000107c4d664(*(undefined8 *)(unaff_x22 + 0x50));
    pcVar2 = FUN_101bd7274;
  }
  else {
    pcVar2 = (code *)0x101bd8130;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101bd7274; end: 101bd7373;  */

void FUN_101bd7274(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 200));
  FUN_101bd7b90(uVar1,0x112d5ed18,&UNK_10d925c50);
  FUN_101bd7b90(uVar3,0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000100075034(FUN_101bd7918,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101bd7370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bd7374; end: 101bd741f;  */

void FUN_101bd7374(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000100075034(unaff_x22 + 0x100,FUN_101bd8118,0,PTR___sSbN_11034dd40);
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
  if (*(char *)(unaff_x22 + 0x100) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar1 = PTR_PTR_1126a63d8;
    func_0x000107c610f8(PTR_PTR_1126a63d8);
    func_0x000107c453e4();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(puVar1);
    pcVar2 = FUN_101bd7420;
  }
  else {
    pcVar2 = (code *)0x101bd8134;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101bd7420; end: 101bd74eb;  */

void FUN_101bd7420(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xc0));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000100075034(FUN_101bd7918,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101bd74e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bd74ec; end: 101bd76d3;  */

void FUN_101bd74ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(ulong *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c614b0();
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar9,(undefined8 *)(unaff_x22 + 0x28),uVar7,uVar10,6);
  if ((uVar9 & 1) == 0) {
    func_0x000107c5fd5c();
    if ((uVar9 & 1) == 0) {
      func_0x000100075034(FUN_101bd76e8,0,PTR___sytN_11034f1b0 + 8);
      *(undefined8 *)(unaff_x22 + 0xe8) = 0;
      uVar10 = 0;
      func_0x000107c5fcec();
      puVar6 = PTR___sScMMa_11034fc70;
      uVar7 = uVar10;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0xf0) = uVar7;
      uVar7 = 0x112d45220;
      FUN_101bd7ea8(0x112d45220,puVar6,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8(uVar10,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd7374,uVar10,uVar7);
      return;
    }
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xc0));
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x60);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xc0));
    (**(code **)(lVar1 + 8))(uVar7,uVar10);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000100075034(FUN_101bd7918,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101bd7628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bd76d4; end: 101bd76e7;  */

void FUN_101bd76d4(byte *param_1,byte *param_2)

{
  *param_1 = (*param_2 ^ 0xff) & 1;
  return;
}



/* Entry: 101bd76e8; end: 101bd7743;  */

void FUN_101bd76e8(undefined8 param_1)

{
  long lVar1;
  
  FUN_101bd7b90(param_1,0x112d5ed18,&UNK_10d925c50);
  lVar1 = 0;
  func_0x000103a814dc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Entry: 101bd7744; end: 101bd7777;  */

void FUN_101bd7744(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101bd7778; end: 101bd778b;  */

undefined * FUN_101bd7778(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_138 [40];
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [40];
  undefined8 auStack_68 [5];
  
  uVar7 = *unaff_x20;
  func_0x000100083b20(&puStack_c0);
  puVar5 = puStack_c0;
  puVar2 = puStack_c0;
  func_0x000107c4a104();
  func_0x000107c615e8(puVar5);
  if ((int)puVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_c0);
    puVar5 = puStack_c0;
    uStack_b8 = 3;
    puStack_c0 = (undefined *)0xa;
    puStack_b0 = (undefined *)CONCAT71(puStack_b0._1_7_,0x50);
    func_0x00010008a7c8(auStack_68,&puStack_c0);
    func_0x000107c61574(puVar5);
    func_0x000100083b20(auStack_e8);
    func_0x000107c61574(auStack_68[0]);
    lVar1 = lStack_c8;
    uVar6 = uStack_d0;
    func_0x0001000a8868(auStack_e8,uStack_d0);
    (**(code **)(lVar1 + 0x18))(auStack_110,uVar6,lVar1);
    func_0x0001000a8868(auStack_e8,uStack_d0);
    (**(code **)(lStack_c8 + 0x40))(auStack_138,uStack_d0,lStack_c8);
    uVar6 = unaff_x20[4];
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    FUN_101bd77ac(auStack_138,auStack_68);
    FUN_101bd77ac(auStack_110,auStack_90);
    puVar5 = &UNK_110453b28;
    func_0x000107c613fc(&UNK_110453b28,0x78,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar6;
    func_0x000100cc8e20(auStack_68,puVar5 + 0x18);
    *(undefined8 *)(puVar5 + 0x40) = 0x4024000000000000;
    func_0x000100cc8e20(auStack_90,puVar5 + 0x48);
    *(undefined8 *)(puVar5 + 0x70) = uVar7;
    pcStack_a0 = FUN_101bd77f0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1004725e8;
    puStack_a8 = &UNK_110453b40;
    ppuVar3 = &puStack_c0;
    puStack_98 = puVar5;
    func_0x000107c60bc4(ppuVar3);
    puVar5 = puStack_98;
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(puVar5);
    func_0x000107c408f0(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    puVar4 = puVar2;
    func_0x000107c5cb24(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar5 = PTR_PTR_1126a8c38;
    func_0x000107c610f8(PTR_PTR_1126a8c38);
    func_0x000107c453e4();
    func_0x000107c56b58();
    func_0x000107c61170(puVar4);
    func_0x0001000834e4(auStack_138);
    func_0x0001000834e4(auStack_110);
    func_0x0001000834e4(auStack_e8);
  }
  return puVar5;
}



/* Entry: 101bd778c; end: 101bd77ab;  */

void FUN_101bd778c(void)

{
  func_0x000107c61168(&PTR_PTR_112e082d0);
  return;
}



/* Entry: 101bd77ac; end: 101bd77ef;  */

long FUN_101bd77ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101bd77f0; end: 101bd7823;  */

undefined * FUN_101bd77f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  long alStack_c0 [2];
  long alStack_b0 [2];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  dVar19 = *(double *)(unaff_x20 + 0x40);
  alStack_b0[1] = *(undefined8 *)(unaff_x20 + 0x70);
  lVar12 = unaff_x20 + 0x18;
  alStack_b0[0] = unaff_x20 + 0x48;
  lVar7 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)alStack_b0 - extraout_x8;
  lVar8 = 0;
  func_0x000103a814dc();
  lVar17 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &UNK_110453b78;
  func_0x000107c613fc(&UNK_110453b78,0x18,7);
  puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
  uStack_98 = 0;
  func_0x0001000285a8(0x112e08340,&UNK_10d9dcb78);
  func_0x000107c613fc();
  ppuVar10 = &puStack_a0;
  func_0x00010006c248();
  *(undefined ***)(puVar9 + 0x10) = ppuVar10;
  func_0x0001000c74f0(lVar16);
  lVar7 = lVar16;
  (**(code **)(lVar17 + 0x30))(lVar16,1,lVar8);
  if ((int)lVar7 == 1) {
    FUN_101bd7b90(lVar16,0x112d5ed18,&UNK_10d925c50);
    puVar11 = PTR_PTR_1126a63d8;
    func_0x000107c610f8(PTR_PTR_1126a63d8);
    func_0x000107c453e4();
    func_0x000107c4d664(param_1);
    func_0x000107c61170(puVar11);
  }
  else {
    func_0x00010111dd50(lVar16,lVar18);
    lVar7 = lVar18;
    FUN_101bd7948(lVar18);
    func_0x000107c4d664(param_1);
    func_0x000107c61170(lVar7);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar7 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(lVar12,uVar2);
    puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar8 + 0x24));
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar8 + 0x20));
    uVar4 = *puVar1;
    uVar6 = puVar1[1];
    pcVar15 = *(code **)(lVar7 + 0x20);
    *(undefined8 *)(lVar18 + -0x10) = uVar2;
    *(long *)(lVar18 + -8) = lVar7;
    *(undefined1 *)(lVar18 + -0x18) = 1;
    *(undefined8 *)(lVar18 + -0x20) = 0;
    (*pcVar15)(lVar12,uVar3,uVar5,uVar4,uVar6,0,0,0,0);
    func_0x00010111dddc(lVar18);
  }
  if (dVar19 <= 1.0) {
    dVar19 = 1.0;
  }
  ppuVar13 = ppuVar10;
  func_0x000107c6157c();
  func_0x000101bd6608(dVar19);
  func_0x000107c61574(ppuVar10);
  func_0x000107c614f0(ppuVar13);
  func_0x000107c60020();
  puVar14 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar11 = &UNK_110453ba0;
  func_0x000107c613fc(&UNK_110453ba0,0x20,7);
  *(undefined **)(puVar11 + 0x10) = puVar9;
  *(undefined ***)(puVar11 + 0x18) = ppuVar13;
  pcStack_80 = FUN_101bd785c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110453bb8;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar10);
  puVar11 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c615f0(ppuVar13);
  func_0x000107c61574(puVar11);
  func_0x000107c408f0(puVar14);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puVar9);
  func_0x000107c615e8(ppuVar13);
  return puVar14;
}



/* Entry: 101bd7824; end: 101bd785b;  */

void FUN_101bd7824(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bd785c; end: 101bd7917;  */

void FUN_101bd785c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  func_0x000107c6157c(uVar3);
  uVar2 = 0x112e08348;
  func_0x0001000285a8(0x112e08348,&UNK_10da5ac20);
  func_0x000100075034(&lStack_38,FUN_101bd6c14,0,uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c614f0(uVar1);
  func_0x000107c6001c();
  if (lStack_38 != 0) {
    func_0x000107c6157c(lStack_38);
    func_0x000107c5fd50();
    func_0x000107c61578(lStack_38,2);
  }
  return;
}



/* Entry: 101bd7918; end: 101bd7947;  */

void FUN_101bd7918(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 101bd7948; end: 101bd7b8f;  */

undefined * FUN_101bd7948(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  puVar2 = PTR_PTR_1126a63d8;
  func_0x000107c610f8(PTR_PTR_1126a63d8);
  func_0x000107c453e4();
  uVar6 = *param_1;
  func_0x000107c5fadc(uVar6,param_1[1]);
  func_0x000107c59e18(puVar2);
  func_0x000107c61170(uVar6);
  uVar6 = param_1[2];
  func_0x000107c5fadc(uVar6,param_1[3]);
  func_0x000107c528fc(puVar2);
  func_0x000107c61170(uVar6);
  lVar3 = 0;
  func_0x000103a814dc();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  uVar6 = *puVar1;
  func_0x000107c5fadc(uVar6,puVar1[1]);
  func_0x000107c579d0(puVar2);
  func_0x000107c61170(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
  uVar6 = *puVar1;
  func_0x000107c5fadc(uVar6,puVar1[1]);
  func_0x000107c558fc(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000101bd7ee8((long)param_1 + (long)*(int *)(lVar3 + 0x1c),puVar7,0x112d36580,&UNK_10d9016d0
                     );
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar4 + -8);
  uVar6 = 1;
  puVar8 = puVar7;
  (**(code **)(lVar9 + 0x30))(puVar7,1,lVar4);
  if ((int)puVar8 == 1) {
    FUN_101bd7b90(puVar7,0x112d36580,&UNK_10d9016d0);
    puVar8 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar9 + 8))(puVar7,lVar4);
    func_0x000107c5fadc(puVar8,uVar6);
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c525e8(puVar2);
  func_0x000107c61170(puVar8);
  if (*(char *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c) + 8) != '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d8();
    func_0x000107c59fd0(puVar2);
    func_0x000107c61170(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c579d4(puVar2);
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 101bd7b90; end: 101bd7c0f;  */

undefined8 FUN_101bd7b90(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101bd7c10; end: 101bd7c7b;  */

void FUN_101bd7c10(void)

{
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  lStack_68 = unaff_x20 + 0x18;
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x48);
  lStack_58 = unaff_x20 + 0x50;
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x000100075034(&uStack_31,FUN_101bd7cc0,auStack_80,PTR___sSbN_11034dd40);
  return;
}



/* Entry: 101bd7c7c; end: 101bd7cbf;  */

void FUN_101bd7c7c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSTsMc_11034dd08;
    func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 101bd7cc0; end: 101bd7dff;  */

void FUN_101bd7cc0(undefined1 *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  if ((*param_2 & 1) != 0) {
    *param_1 = 0;
    return;
  }
  if (*(long *)(param_2 + 8) != 0) {
    *param_1 = 0;
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_101bd77ac(*(undefined8 *)(unaff_x20 + 0x18),auStack_78);
  FUN_101bd77ac(uVar2,auStack_a0);
  puVar3 = &UNK_110453c40;
  func_0x000107c613fc(&UNK_110453c40,0x80,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  func_0x000100cc8e20(auStack_78,puVar3 + 0x18);
  *(undefined8 *)(puVar3 + 0x40) = uVar1;
  func_0x000100cc8e20(auStack_a0,puVar3 + 0x48);
  *(undefined8 *)(puVar3 + 0x78) = uVar6;
  *(undefined8 *)(puVar3 + 0x70) = uVar5;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar5);
  uVar4 = 10;
  func_0x0001001ca524(10,3,0x50,4,0,0,&UNK_10d9dcb90,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  *(undefined8 *)(param_2 + 8) = uVar4;
  *param_1 = 1;
  return;
}



/* Entry: 101bd7e00; end: 101bd7e6b;  */

void FUN_101bd7e00(void)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  lVar6 = *(long *)(unaff_x20 + 0x70);
  plVar3 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bd7e6c;
  plVar3[9] = unaff_x20 + 0x48;
  plVar3[10] = lVar6;
  plVar3[7] = unaff_x20 + 0x18;
  plVar3[8] = lVar5;
  plVar3[6] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcbc();
  plVar3[0xb] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0xc] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xd] = uVar1;
  lVar4 = 0;
  func_0x000103a814dc();
  plVar3[0xe] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0xf] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x10] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x11] = uVar1;
  lVar4 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x12] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x13] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x14] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x15] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x16] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd6d24,0,0);
  return;
}



/* Entry: 101bd7e6c; end: 101bd7ea7;  */

void FUN_101bd7e6c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bd7ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bd7ea8; end: 101bd7f2f;  */

void FUN_101bd7ea8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101bd7f30; end: 101bd7f97;  */

void FUN_101bd7f30(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101bd7b90(param_1,0x112d5ed18,&UNK_10d925c50);
  func_0x000101bd7ee8(uVar1,param_1,0x112d5ed18,&UNK_10d925c50);
  return;
}



/* Entry: 101bd7f98; end: 101bd7fcb;  */

undefined1 * FUN_101bd7f98(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 101bd7fcc; end: 101bd7fd3;  */

void FUN_101bd7fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101bd7fd4; end: 101bd804b;  */

undefined1 * FUN_101bd7fd4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bd804c; end: 101bd8117;  */

int FUN_101bd804c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101bd8118; end: 101bd812b;  */

void FUN_101bd8118(void)

{
  FUN_101bd76d4();
  return;
}



/* Entry: 101bd812c; end: 101bd8137;  */

undefined1 * FUN_101bd812c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 101bd8138; end: 101bd82b7;  */

/* WARNING: Possible PIC construction at 0x000101bd8230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd8240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd8250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd8260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd8270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd8280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd8290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd8284) */
/* WARNING: Removing unreachable block (ram,0x000101bd8274) */
/* WARNING: Removing unreachable block (ram,0x000101bd8264) */
/* WARNING: Removing unreachable block (ram,0x000101bd8254) */
/* WARNING: Removing unreachable block (ram,0x000101bd8244) */
/* WARNING: Removing unreachable block (ram,0x000101bd8234) */
/* WARNING: Removing unreachable block (ram,0x000101bd8294) */

void FUN_101bd8138(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110453de0;
  func_0x000107c613fc(&UNK_110453de0,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  uVar2 = 0x112e08358;
  func_0x0001000285a8(0x112e08358,&UNK_10d9dcc00);
  func_0x000107c613fc();
  uVar3 = 0x101bd88c0;
  func_0x0001000841fc(0x101bd88c0,puVar1,uVar2);
  func_0x000100084214(&UNK_10d9dcbd0,0x2f,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101bd82b8; end: 101bd82f3;  */

void FUN_101bd82b8(void)

{
  long unaff_x20;
  
  FUN_101bd8138(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101bd82f4; end: 101bd8303;  */

undefined1  [16] FUN_101bd82f4(void)

{
  return ZEXT816(0x110453dc0);
}



/* Entry: 101bd8304; end: 101bd8833;  */

void FUN_101bd8304(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 2);
  func_0x0001000285a8(0x112e08360,&UNK_10d9dcc08);
  puVar2 = &uStack_80;
  uStack_80 = uVar3;
  uStack_78 = uVar5;
  uStack_70 = uVar1;
  func_0x0001000838ec();
  func_0x000101bd8a44();
  func_0x000100082720("ExternalMusicBlizzardLoggerServiceProvider",0x2a,2);
  func_0x000101c16780();
  func_0x000100082720("MusicProviderConnectionStoreServiceProvider",0x2b,2);
  FUN_101c16e44();
  func_0x000100082720("MusicProviderImageFetcherServiceProvider",0x28,2);
  uVar3 = param_5;
  FUN_101c192d0();
  pcVar4 = "SpotifyMetadataServiceProvider";
  func_0x000100082720("SpotifyMetadataServiceProvider",0x1e,2);
  FUN_101c1a208();
  func_0x000100082720("SpotifyNavigatorServiceProvider",0x1f,2);
  uVar5 = param_3;
  FUN_101c0c040();
  func_0x0001002acff8("ProviderConnectionCoordinatorServiceProvider",0x2c,2);
  FUN_101bd9900(param_6,param_7,param_4,param_8);
  func_0x000100082720("ExternalMusicGRPCServiceImplServiceProvider",0x2b,2);
  uVar6 = param_3;
  FUN_101c183cc(param_3,param_6,param_4,param_9);
  func_0x000100082720("SpotifyConnectionManagerServiceProvider",0x27,2);
  uVar7 = param_6;
  FUN_101c1b22c();
  func_0x000100082720("SpotifyTrackManagerServiceProvider",0x22,2);
  func_0x0001000285a8(0x112e08368,&UNK_10d9dcc10);
  puVar8 = &UNK_110453e08;
  func_0x000107c613fc(&UNK_110453e08,0x38,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar6;
  *(undefined8 *)(puVar8 + 0x18) = uVar3;
  *(char **)(puVar8 + 0x20) = pcVar4;
  *(undefined8 *)(puVar8 + 0x28) = uVar7;
  *(undefined8 *)(puVar8 + 0x30) = param_8;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(param_8);
  pcVar9 = FUN_101bd8908;
  func_0x0001000823a8(FUN_101bd8908,puVar8);
  func_0x000100082720("MusicProviderPluginRegistryServiceProvider",0x2a,2);
  uVar10 = param_8;
  FUN_101bf022c(param_8,param_4,pcVar9);
  func_0x000100082720("ConnectedMusicProviderResolverServiceProvider",0x2d,2);
  uVar11 = param_5;
  FUN_101be468c(param_5,pcVar9,param_10,puVar2);
  func_0x000100082720("ExternalMusicNotificationServiceImplServiceProvider",0x33,2);
  uVar12 = uVar10;
  FUN_101bf75b8(uVar10,param_6);
  func_0x000100082720("ListeningActivityPermissionsServiceImplServiceProvider",0x36,2);
  uVar13 = uVar10;
  FUN_101bf820c(uVar10,param_11,uVar12,param_12,param_13,param_14,param_15);
  func_0x000100082720("ListeningActivityPermissionsSheetScopedFactoryServiceProvider",0x3d,2);
  uVar14 = param_3;
  FUN_101c0248c(param_3,uVar10,uVar5,param_5,uVar11,uVar12,uVar13,pcVar9,puVar2,param_8);
  func_0x000100082720("MusicProviderConnectionSheetPresenterServiceProvider",0x34,2);
  uVar15 = uVar10;
  FUN_101be72a0(uVar10,uVar14,param_6,param_8,param_16,uVar11);
  func_0x000100082720("ExternalMusicNowPlayingServiceImplServiceProvider",0x31,2);
  uVar16 = param_3;
  FUN_101bf3628(param_3,uVar10,uVar14,uVar11,uVar13,pcVar9,param_8);
  func_0x000100082720("ExternalMusicTrackSavingServiceImplServiceProvider",0x32,2);
  uVar17 = param_3;
  FUN_101bf22c4(param_3,uVar10,uVar14,uVar11,uVar15,uVar12,uVar13,pcVar9,uVar16);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(param_6);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000100082720("ExternalMusicServicesImplEntryPointProvider",0x2b,2);
  *param_1 = uVar17;
  return;
}



/* Entry: 101bd8834; end: 101bd8907;  */

void FUN_101bd8834(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bd8908; end: 101bd8917;  */

/* WARNING: Possible PIC construction at 0x000101bd89c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd89d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd89c8) */
/* WARNING: Removing unreachable block (ram,0x000101bd89d8) */

void FUN_101bd8908(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_110453e30;
  func_0x000107c613fc(&UNK_110453e30,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112e08370;
  func_0x0001000285a8(0x112e08370,&UNK_10d9dcc18);
  func_0x000107c613fc();
  pcVar6 = FUN_101bd89fc;
  func_0x0001000841fc(FUN_101bd89fc,puVar4,uVar5);
  func_0x000100084214("MusicProviderPluginRegistryServiceProvider",0x2a,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101bd8918; end: 101bd89fb;  */

/* WARNING: Possible PIC construction at 0x000101bd89c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd89d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd89c8) */
/* WARNING: Removing unreachable block (ram,0x000101bd89d8) */

void FUN_101bd8918(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110453e30;
  func_0x000107c613fc(&UNK_110453e30,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112e08370;
  func_0x0001000285a8(0x112e08370,&UNK_10d9dcc18);
  func_0x000107c613fc();
  pcVar3 = FUN_101bd89fc;
  func_0x0001000841fc(FUN_101bd89fc,puVar1,uVar2);
  func_0x000100084214("MusicProviderPluginRegistryServiceProvider",0x2a,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101bd89fc; end: 101bd8a8f;  */

void FUN_101bd89fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101c19c1c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100082720("SpotifyMusicProviderPluginPluginProvider",0x28,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101bd8a90; end: 101bd8adf;  */

void FUN_101bd8a90(long *param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  
  FUN_101bd925c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110453ec8;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101bd8ae0; end: 101bd8b0f;  */

void FUN_101bd8ae0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101bd8b10; end: 101bd8c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd8b10(undefined8 param_1,undefined8 param_2,char param_3,char param_4,
                  undefined8 param_5,char param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126e2598;
  func_0x000107c610f8(PTR_PTR_1126e2598);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c545fc(puVar1);
  if (param_3 != '\x02') {
    func_0x000107c5a394(puVar1);
  }
  if (param_4 != '\x02') {
    func_0x000107c5a19c(puVar1);
  }
  if (param_6 != '\x01') {
    func_0x000107c56288(puVar1);
  }
  func_0x000100083b20(&lStack_58);
  lVar2 = *(long *)(lStack_58 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c4bfb0(lVar3);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101bd8c40; end: 101bd8dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd8c40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,char param_6,char param_7,byte param_8,undefined4 param_9,
                  undefined4 param_10,char param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126e2640;
  func_0x000107c610f8(PTR_PTR_1126e2640);
  func_0x000107c453e4();
  func_0x000107c52140();
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c56894(puVar1);
    func_0x000107c61170(param_2);
  }
  if (param_5 != 0) {
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c558fc(puVar1);
    func_0x000107c61170(param_4);
  }
  if (param_6 != '\x02') {
    func_0x000107c5a394(puVar1);
  }
  if (param_7 != '\x02') {
    func_0x000107c571f8(puVar1);
  }
  if ((param_8 < 2) || (param_8 == 2)) {
    func_0x000107c59558(puVar1);
  }
  if (param_11 != '\x01') {
    func_0x000107c56288(puVar1);
  }
  func_0x000100083b20(&lStack_68);
  lVar2 = *(long *)(lStack_68 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c4bfb0(lVar3);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101bd8e00; end: 101bd8ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd8e00(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126e2610;
  func_0x000107c610f8(PTR_PTR_1126e2610);
  func_0x000107c453e4();
  func_0x000107c57674();
  func_0x000107c590b4(puVar1);
  func_0x000107c590b8(puVar1);
  func_0x000107c5a394(puVar1);
  func_0x000100083b20(&lStack_48);
  lVar2 = *(long *)(lStack_48 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c4bfb0(lVar3);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101bd8ef4; end: 101bd9087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd8ef4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined4 param_9,undefined4 param_10,char param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126e2618;
  func_0x000107c610f8(PTR_PTR_1126e2618);
  func_0x000107c453e4();
  if (param_2 != 0) {
    func_0x000107c5fadc(param_1);
    func_0x000107c56894(puVar1);
    func_0x000107c61170(param_1);
  }
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c558fc(puVar1);
    func_0x000107c61170(param_3);
  }
  func_0x000107c54c0c(puVar1);
  func_0x000107c571f8(puVar1);
  if (param_8 != 0) {
    func_0x000107c5fadc(param_7,param_8);
    func_0x000107c59c14(puVar1);
    func_0x000107c61170(param_7);
  }
  if (param_11 != '\x01') {
    func_0x000107c56288(puVar1);
  }
  func_0x000100083b20(&lStack_68);
  lVar2 = *(long *)(lStack_68 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c4bfb0(lVar3);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101bd9088; end: 101bd9157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd9088(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126e2608;
  func_0x000107c610f8(PTR_PTR_1126e2608);
  func_0x000107c453e4();
  func_0x000107c55010();
  if (param_2 != '\x02') {
    func_0x000107c55fa0(puVar1);
  }
  func_0x000100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c4bfb0(lVar3);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101bd9158; end: 101bd917b;  */

void FUN_101bd9158(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101bd917c; end: 101bd924b;  */

void FUN_101bd917c(void)

{
  FUN_101bd8b10();
  return;
}



/* Entry: 101bd924c; end: 101bd925b;  */

undefined1  [16] FUN_101bd924c(void)

{
  return ZEXT816(0x110453f08);
}



/* Entry: 101bd925c; end: 101bd92a3;  */

void FUN_101bd925c(void)

{
  func_0x000107c61168(&PTR_PTR_112e083c0);
  return;
}



/* Entry: 101bd92a4; end: 101bd932b;  */

undefined1  [16] FUN_101bd92a4(void)

{
  func_0x000107c602fc(0x38);
  func_0x000107c5fb78(0xd000000000000036,0x800000010f0030c0);
  func_0x000107c603d0();
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 101bd932c; end: 101bd935b;  */

void FUN_101bd932c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE13failureReasonSSSgvg_1103506b8)();
  return;
}



/* Entry: 101bd935c; end: 101bd9407;  */

void FUN_101bd935c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101bd9408; end: 101bd945f;  */

undefined1  [16] FUN_101bd9408(void)

{
  char *pcVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  pcVar1 = "permissions_sheet";
  uVar2 = 0xd000000000000021;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "tweak is enabled.";
    uVar2 = 0xd000000000000028;
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 101bd9460; end: 101bd9507;  */

undefined1  [16] FUN_101bd9460(void)

{
  undefined1 auVar1 [16];
  undefined8 *unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c5fb78(0xd000000000000021,0x800000010f003100);
  func_0x000107c603d0(&uStack_c0,&uStack_30,&UNK_11045b090,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 101bd9508; end: 101bd9523;  */

void FUN_101bd9508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE13failureReasonSSSgvg_1103506b8)();
  return;
}



/* Entry: 101bd9524; end: 101bd98ff;  */

void FUN_101bd9524(ulong *param_1,ulong *param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_1c8 [136];
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_80 = param_2[0x10];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  if (((char)param_2[0xc] == '\x01') && (param_2[0xb] != 0)) {
    uStack_108 = param_2[1];
    uStack_110 = *param_2;
    uVar6 = uStack_110 & 0xffffffffffff;
    if ((uStack_108 & 0x2000000000000000) != 0) {
      uVar6 = uStack_108 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      uStack_118 = param_2[3];
      uStack_120 = param_2[2];
      uVar6 = uStack_120 & 0xffffffffffff;
      if ((uStack_118 & 0x2000000000000000) != 0) {
        uVar6 = uStack_118 >> 0x38 & 0xf;
      }
      if (uVar6 != 0) {
        uStack_128 = param_2[10];
        uStack_130 = param_2[9];
        uVar6 = uStack_130 & 0xffffffffffff;
        if ((uStack_128 & 0x2000000000000000) != 0) {
          uVar6 = uStack_128 >> 0x38 & 0xf;
        }
        if (uVar6 != 0) {
          uStack_138 = param_2[5];
          uStack_140 = param_2[4];
          uVar6 = uStack_140 & 0xffffffffffff;
          if ((uStack_138 & 0x2000000000000000) != 0) {
            uVar6 = uStack_138 >> 0x38 & 0xf;
          }
          if (uVar6 != 0) {
            uVar6 = param_2[7];
            uVar14 = param_2[8];
            lVar9 = 0;
            func_0x000103a814dc();
            iVar7 = *(int *)(lVar9 + 0x1c);
            func_0x000100402194(&uStack_110,auStack_1c8);
            func_0x000100402194(&uStack_120,auStack_1c8);
            func_0x000100402194(&uStack_130,auStack_1c8);
            func_0x000100402194(&uStack_140,auStack_1c8);
            func_0x000107c5edd0((long)param_1 + (long)iVar7,uVar6,uVar14);
            uVar13 = param_2[6];
            uVar14 = param_2[0xd];
            uVar12 = param_2[0xe];
            uVar6 = uVar14 & 0xffffffffffff;
            if ((uVar12 & 0x2000000000000000) != 0) {
              uVar6 = uVar12 >> 0x38 & 0xf;
            }
            if (uVar6 == 0) {
              uVar14 = 0;
              uVar12 = 0;
            }
            else {
              func_0x000107c61434();
            }
            param_1[1] = uStack_108;
            *param_1 = uStack_110;
            param_1[3] = uStack_118;
            param_1[2] = uStack_120;
            puVar11 = (ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x20));
            puVar11[1] = uStack_128;
            *puVar11 = uStack_130;
            puVar11 = (ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x24));
            puVar11[1] = uStack_138;
            *puVar11 = uStack_140;
            puVar11 = (ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c));
            *puVar11 = uVar13;
            *(bool *)(puVar11 + 1) = uVar13 == 0;
            param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x28));
            *param_1 = uVar14;
            param_1[1] = uVar12;
            return;
          }
        }
      }
    }
  }
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar8 = uRam0000000112e08430;
  uVar5 = 0x800000010f003040;
  uVar10 = 0xd000000000000011;
  if (param_3 != 6) {
    uVar5 = 0xec00000064656566;
    uVar10 = 0x5f73646e65697266;
  }
  uVar1 = 0xef6369706f745f74;
  uVar2 = 0x6867696c746f7073;
  if (param_3 != 4) {
    uVar1 = 0xee0073676e697474;
    uVar2 = 0x65735f636973756d;
  }
  if (param_3 < 6) {
    uVar5 = uVar1;
    uVar10 = uVar2;
  }
  uVar1 = 0x656c69666f7270;
  if (param_3 != 2) {
    uVar1 = 0x70616d;
  }
  uVar2 = 0xe700000000000000;
  if (param_3 != 2) {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (param_3 != 0) {
    uVar3 = 0x68747561;
  }
  uVar4 = 0xe700000000000000;
  if (param_3 != 0) {
    uVar4 = 0xe400000000000000;
  }
  if (param_3 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  if (param_3 < 4) {
    uVar5 = uVar2;
    uVar10 = uVar1;
  }
  func_0x000107c5fadc(uVar10,uVar5);
  func_0x000107c6142c(uVar5);
  puVar11 = (ulong *)0x5f64696c61766e69;
  func_0x000107c5fadc(0x5f64696c61766e69,0xed00006b63617274);
  func_0x000105728e38(uVar8,uVar10,puVar11,1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170();
  FUN_101be2900();
  func_0x000107c613f8(&UNK_1104541b8,puVar11,0,0);
  puVar11[0xd] = uStack_98;
  puVar11[0xc] = uStack_a0;
  puVar11[0xf] = uStack_88;
  puVar11[0xe] = uStack_90;
  puVar11[0x10] = uStack_80;
  puVar11[5] = uStack_d8;
  puVar11[4] = uStack_e0;
  puVar11[7] = uStack_c8;
  puVar11[6] = uStack_d0;
  puVar11[9] = uStack_b8;
  puVar11[8] = uStack_c0;
  puVar11[0xb] = uStack_a8;
  puVar11[10] = uStack_b0;
  puVar11[1] = uStack_f8;
  *puVar11 = uStack_100;
  puVar11[3] = uStack_e8;
  puVar11[2] = uStack_f0;
  func_0x000107c61654();
  FUN_101be283c(param_2,auStack_1c8);
  return;
}



/* Entry: 101bd9900; end: 101bd99a3;  */

void FUN_101bd9900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e08420,&UNK_10d9dccc0);
  puVar1 = &UNK_110453fb0;
  func_0x000107c613fc(&UNK_110453fb0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_101bd9a48,puVar1);
  return;
}



/* Entry: 101bd99a4; end: 101bd9a47;  */

/* WARNING: Possible PIC construction at 0x000101bd9a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd9a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd9a1c) */
/* WARNING: Removing unreachable block (ram,0x000101bd9a2c) */

void FUN_101bd99a4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_2;
  FUN_101be2594();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined8 *)(lVar2 + 0x88) = param_5;
  *(undefined **)(lVar2 + 0x90) = puVar3;
  *(long *)(lVar2 + 0x70) = param_2;
  *(undefined8 *)(lVar2 + 0x78) = param_3;
  *(undefined8 *)(lVar2 + 0x80) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110453fc8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101bd9a48; end: 101bd9a53;  */

/* WARNING: Possible PIC construction at 0x000101bd9a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd9a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd9a1c) */
/* WARNING: Removing unreachable block (ram,0x000101bd9a2c) */

void FUN_101bd9a48(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = lVar1;
  FUN_101be2594();
  lVar6 = lVar5;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined8 *)(lVar6 + 0x88) = uVar4;
  *(undefined **)(lVar6 + 0x90) = puVar7;
  *(long *)(lVar6 + 0x70) = lVar1;
  *(undefined8 *)(lVar6 + 0x78) = uVar3;
  *(undefined8 *)(lVar6 + 0x80) = uVar2;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_110453fc8;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 101bd9a54; end: 101bd9abf;  */

long FUN_101bd9a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined8 *)(unaff_x20 + 0x88) = param_4;
  *(undefined **)(unaff_x20 + 0x90) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_3;
  return unaff_x20;
}



/* Entry: 101bd9ac0; end: 101bd9b5b;  */

void FUN_101bd9ac0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x410) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x478) = param_2;
  *(undefined8 *)(unaff_x22 + 0x408) = param_1;
  lVar1 = 0;
  func_0x000103a814dc();
  *(long *)(unaff_x22 + 0x418) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x420) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x428) = uVar2;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x430) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x438) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x440) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x448) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd9b5c);
  return;
}



/* Entry: 101bd9b5c; end: 101bd9c37;  */

void FUN_101bd9b5c(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x448));
  func_0x000100083b20(unaff_x22 + 0x400);
  plVar3 = *(long **)(unaff_x22 + 0x400);
  *(long **)(unaff_x22 + 0x450) = plVar3;
  func_0x000100083b20(unaff_x22 + 0x3c0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3d8);
  lVar5 = *(long *)(unaff_x22 + 0x3e0);
  func_0x0001000a8868(unaff_x22 + 0x3c0,uVar4);
  (**(code **)(lVar5 + 8))(unaff_x22 + 0x360,uVar4,lVar5);
  piVar2 = *(int **)(*plVar3 + 0x90);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x458) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bd9c38;
                    /* WARNING: Could not recover jumptable at 0x000101bd9c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar3,unaff_x22 + 0x10,1,1,0,0xc000000000000000,unaff_x22 + 0x360);
  return;
}



/* Entry: 101bd9c38; end: 101bd9d2f;  */

void FUN_101bd9c38(void)

{
  undefined1 uVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar7 + 0x460) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar7 + 0x458));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar7 + 0x450);
    func_0x000101be2878(lVar7 + 0x360,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar4);
    func_0x0001000834e4(lVar7 + 0x3c0);
    lVar5 = *(long *)(lVar7 + 0x10);
    plVar2 = (long *)0xa0;
    uVar1 = *(undefined1 *)(lVar7 + 0x18);
    func_0x000107c615b8();
    *(long **)(lVar7 + 0x468) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_101bd9d30;
    lVar6 = *(long *)(lVar7 + 0x410);
    *(undefined1 *)((long)plVar2 + 0x9d) = *(undefined1 *)(lVar7 + 0x478);
    *(undefined1 *)((long)plVar2 + 0x9c) = uVar1;
    plVar2[0xf] = lVar5;
    plVar2[0x10] = lVar6;
    pcVar3 = FUN_101bdd590;
  }
  else {
    uVar4 = *(undefined8 *)(lVar7 + 0x450);
    lVar6 = *(long *)(lVar7 + 0x410);
    func_0x000101be2878(lVar7 + 0x360,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar4);
    pcVar3 = FUN_101bda654;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar6,0);
  return;
}



/* Entry: 101bd9d30; end: 101bd9d8b;  */

void FUN_101bd9d30(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x470) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x468));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bd9d8c;
  }
  else {
    pcVar1 = FUN_101bda974;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x410),0);
  return;
}



/* Entry: 101bd9d8c; end: 101bda653;  */

void FUN_101bd9d8c(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar17;
  undefined8 uVar18;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  long unaff_x22;
  undefined8 *puVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  undefined8 *puVar16;
  
  FUN_101c2fd64();
  if ((param_2 & 1) == 0) {
    lVar37 = *(long *)(unaff_x22 + 0x420);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x418);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x408);
    FUN_101bde27c(1,*(undefined1 *)(unaff_x22 + 0x478));
    (**(code **)(lVar37 + 0x38))(uVar8,1,1,uVar10);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x22 + 0x1c8);
    puVar2 = (undefined8 *)(unaff_x22 + 0x250);
    *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x240) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x38);
    *puVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x40);
    puVar6 = puVar1;
    FUN_101bde438();
    if ((int)puVar6 == 1) {
      FUN_101c2fd2c((undefined8 *)(unaff_x22 + 0x140));
      puVar6 = (undefined8 *)(unaff_x22 + 0x1b8);
      puVar16 = (undefined8 *)(unaff_x22 + 0x1c0);
      puVar7 = (undefined8 *)(unaff_x22 + 0x1a8);
      puVar13 = (undefined8 *)(unaff_x22 + 0x1b0);
      puVar33 = (undefined8 *)(unaff_x22 + 0x198);
      puVar12 = (undefined1 *)(unaff_x22 + 0x1a0);
      puVar31 = (undefined8 *)(unaff_x22 + 0x188);
      puVar9 = (undefined8 *)(unaff_x22 + 400);
      puVar25 = (undefined8 *)(unaff_x22 + 0x178);
      puVar35 = (undefined8 *)(unaff_x22 + 0x180);
      puVar27 = (undefined8 *)(unaff_x22 + 0x170);
      puVar21 = (undefined8 *)(unaff_x22 + 0x160);
      puVar29 = (undefined8 *)(unaff_x22 + 0x168);
      puVar17 = (undefined8 *)(unaff_x22 + 0x150);
      puVar23 = (undefined8 *)(unaff_x22 + 0x158);
      puVar19 = (undefined8 *)(unaff_x22 + 0x148);
      puVar39 = (undefined8 *)(unaff_x22 + 0x140);
    }
    else {
      puVar19 = (undefined8 *)(unaff_x22 + 0x1d0);
      puVar17 = (undefined8 *)(unaff_x22 + 0x1d8);
      puVar23 = (undefined8 *)(unaff_x22 + 0x1e0);
      puVar21 = (undefined8 *)(unaff_x22 + 0x1e8);
      puVar29 = (undefined8 *)(unaff_x22 + 0x1f0);
      puVar27 = (undefined8 *)(unaff_x22 + 0x1f8);
      puVar25 = (undefined8 *)(unaff_x22 + 0x200);
      puVar35 = (undefined8 *)(unaff_x22 + 0x208);
      puVar31 = (undefined8 *)(unaff_x22 + 0x210);
      puVar9 = (undefined8 *)(unaff_x22 + 0x218);
      puVar33 = (undefined8 *)(unaff_x22 + 0x220);
      puVar12 = (undefined1 *)(unaff_x22 + 0x228);
      puVar7 = (undefined8 *)(unaff_x22 + 0x230);
      puVar13 = (undefined8 *)(unaff_x22 + 0x238);
      puVar6 = (undefined8 *)(unaff_x22 + 0x240);
      puVar16 = (undefined8 *)(unaff_x22 + 0x248);
      puVar39 = puVar1;
    }
    uVar15 = *puVar16;
    uVar11 = *puVar6;
    uVar14 = *puVar13;
    uVar8 = *puVar7;
    uVar3 = *puVar12;
    uVar34 = *puVar33;
    uVar10 = *puVar9;
    uVar32 = *puVar31;
    uVar36 = *puVar35;
    uVar26 = *puVar25;
    uVar28 = *puVar27;
    uVar30 = *puVar29;
    uVar22 = *puVar21;
    uVar24 = *puVar23;
    uVar18 = *puVar17;
    uVar20 = *puVar19;
    lVar37 = *(long *)(unaff_x22 + 0x470);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x428);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x478);
    *(undefined8 *)(unaff_x22 + 0x250) = *puVar39;
    *(undefined8 *)(unaff_x22 + 600) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x260) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x268) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x270) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x278) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x280) = uVar28;
    *(undefined8 *)(unaff_x22 + 0x288) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x290) = uVar36;
    *(undefined8 *)(unaff_x22 + 0x298) = uVar32;
    *(undefined8 *)(unaff_x22 + 0x2a0) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x2a8) = uVar34;
    *(undefined1 *)(unaff_x22 + 0x2b0) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x2b8) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x2c0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x2c8) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x2d0) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x278);
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x270);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x288);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x280);
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 600);
    *(undefined8 *)(unaff_x22 + 0xb8) = *puVar2;
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x268);
    *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x260);
    param_1 = *(undefined8 *)(unaff_x22 + 0x290);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x2d0);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x2b8);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x2b0);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x2c8);
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x2c0);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x298);
    *(undefined8 *)(unaff_x22 + 0xf8) = param_1;
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x2a8);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x2a0);
    func_0x000101be28b8(puVar1,unaff_x22 + 0x2d8,0x112e08438,&UNK_10d9dcce0);
    FUN_101bd9524(uVar40,(undefined8 *)(unaff_x22 + 0xb8),uVar4);
    if (lVar37 != 0) {
      FUN_101bde248(unaff_x22 + 0x10);
      FUN_101bde450(puVar2);
      func_0x00010006c090(0,0xc000000000000000);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x448);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x440);
      lVar41 = *(long *)(unaff_x22 + 0x438);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x430);
      bVar5 = *(byte *)(unaff_x22 + 0x478);
      func_0x000107c614b0(lVar37);
      func_0x000107c5eea0(uVar8);
      func_0x000107c5ee68(uVar10);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar41 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar8,uVar11);
      uVar8 = 0x800000010f003040;
      uVar10 = 0xd000000000000011;
      if (bVar5 != 6) {
        uVar8 = 0xec00000064656566;
        uVar10 = 0x5f73646e65697266;
      }
      uVar11 = 0xef6369706f745f74;
      uVar14 = 0x6867696c746f7073;
      if (bVar5 != 4) {
        uVar11 = 0xee0073676e697474;
        uVar14 = 0x65735f636973756d;
      }
      if (bVar5 < 6) {
        uVar8 = uVar11;
        uVar10 = uVar14;
      }
      uVar11 = 0x656c69666f7270;
      if (bVar5 != 2) {
        uVar11 = 0x70616d;
      }
      uVar14 = 0xe700000000000000;
      if (bVar5 != 2) {
        uVar14 = 0xe300000000000000;
      }
      uVar15 = 0x6e776f6e6b6e75;
      if (bVar5 != 0) {
        uVar15 = 0x68747561;
      }
      uVar18 = 0xe700000000000000;
      if (bVar5 != 0) {
        uVar18 = 0xe400000000000000;
      }
      if (bVar5 < 2) {
        uVar14 = uVar18;
        uVar11 = uVar15;
      }
      if (bVar5 < 4) {
        uVar8 = uVar14;
        uVar10 = uVar11;
      }
      uVar11 = uVar8;
      FUN_101c25950(uVar10,uVar8,5);
      func_0x000107c6142c(uVar8);
      if (lRam0000000112e08428 != -1) {
        func_0x000107c61568(0x112e08428,0x101bd927c);
      }
      uVar8 = uRam0000000112e08430;
      uVar24 = *(undefined8 *)(unaff_x22 + 0x448);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x440);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x430);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x428);
      uVar14 = uVar10;
      func_0x000107c5fadc(uVar10,uVar11);
      uVar18 = 0x796669746f7073;
      uVar15 = uVar18;
      func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
      func_0x000105728418(param_1,uVar8,uVar14,uVar15);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar14);
      func_0x000107c5fadc(uVar10,uVar11);
      func_0x000107c6142c(uVar11);
      func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
      uVar11 = 0;
      uVar14 = 1;
      FUN_101c25b6c(0,1);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar14);
      func_0x000105728688(uVar8,uVar10,uVar18,uVar11,1);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar18);
      func_0x000107c61170(uVar10);
      func_0x000107c614ac(lVar37);
      func_0x000107c61654();
      (*UNRECOVERED_JUMPTABLE)(uVar24,uVar26);
      func_0x000107c615c0(uVar24);
      func_0x000107c615c0(uVar22);
      func_0x000107c615c0(uVar20);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101bda600;
    }
    lVar41 = *(long *)(unaff_x22 + 0x428);
    lVar37 = *(long *)(unaff_x22 + 0x418);
    lVar42 = *(long *)(unaff_x22 + 0x410);
    FUN_101bde450(puVar2);
    func_0x000107c61428(lVar42 + 0x90,unaff_x22 + 1000,0x21,0);
    puVar1 = (undefined8 *)(lVar41 + *(int *)(lVar37 + 0x24));
    uVar8 = *puVar1;
    uVar10 = puVar1[1];
    puVar1 = (undefined8 *)(lVar41 + *(int *)(lVar37 + 0x28));
    lVar37 = puVar1[1];
    if (lVar37 == 0) {
      uVar11 = 0;
      lVar41 = -0x2000000000000000;
    }
    else {
      uVar11 = *puVar1;
      lVar41 = lVar37;
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x428);
    lVar38 = *(long *)(unaff_x22 + 0x420);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x418);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x408);
    func_0x000107c61434(uVar10);
    func_0x000107c61434(lVar37);
    uVar14 = *(undefined8 *)(lVar42 + 0x90);
    func_0x000107c61558(uVar14);
    uVar15 = *(undefined8 *)(lVar42 + 0x90);
    *(undefined8 *)(lVar42 + 0x90) = 0x8000000000000000;
    func_0x00010018433c(uVar11,lVar41,uVar8,uVar10,uVar14);
    func_0x000107c6142c(uVar10);
    *(undefined8 *)(lVar42 + 0x90) = uVar15;
    func_0x000107c614a8(unaff_x22 + 1000);
    func_0x00010111dd50(uVar18,uVar22);
    (**(code **)(lVar38 + 0x38))(uVar22,0,1,uVar20);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x440);
  lVar37 = *(long *)(unaff_x22 + 0x438);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x430);
  bVar5 = *(byte *)(unaff_x22 + 0x478);
  func_0x000107c5eea0(uVar8);
  func_0x000107c5ee68(uVar10);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar37 + 8);
  (*UNRECOVERED_JUMPTABLE)(uVar8,uVar11);
  uVar8 = 0x800000010f003040;
  uVar10 = 0xd000000000000011;
  if (bVar5 != 6) {
    uVar8 = 0xec00000064656566;
    uVar10 = 0x5f73646e65697266;
  }
  uVar11 = 0xef6369706f745f74;
  uVar14 = 0x6867696c746f7073;
  if (bVar5 != 4) {
    uVar11 = 0xee0073676e697474;
    uVar14 = 0x65735f636973756d;
  }
  if (bVar5 < 6) {
    uVar8 = uVar11;
    uVar10 = uVar14;
  }
  uVar11 = 0x656c69666f7270;
  if (bVar5 != 2) {
    uVar11 = 0x70616d;
  }
  uVar14 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar14 = 0xe300000000000000;
  }
  uVar15 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar15 = 0x68747561;
  }
  uVar18 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar18 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar14 = uVar18;
    uVar11 = uVar15;
  }
  if (bVar5 < 4) {
    uVar8 = uVar14;
    uVar10 = uVar11;
  }
  uVar11 = uVar8;
  FUN_101c25950(uVar10,uVar8,5);
  func_0x000107c6142c(uVar8);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar8 = uRam0000000112e08430;
  uVar24 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar14 = uVar10;
  func_0x000107c5fadc(uVar10,uVar11);
  uVar18 = 0x796669746f7073;
  uVar15 = uVar18;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar8,uVar14,uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c5fadc(uVar10,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar11 = 0;
  uVar14 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar14);
  func_0x000105728688(uVar8,uVar10,uVar18,uVar11,1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar10);
  FUN_101bde248(unaff_x22 + 0x10);
  (*UNRECOVERED_JUMPTABLE)(uVar24,uVar26);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar22);
  func_0x000107c615c0(uVar20);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101bda600:
                    /* WARNING: Could not recover jumptable at 0x000101bda620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bda654; end: 101bda973;  */

void FUN_101bda654(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  func_0x00010006c090(0,0xc000000000000000);
  func_0x0001000834e4(unaff_x22 + 0x3c0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x460);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x440);
  lVar13 = *(long *)(unaff_x22 + 0x438);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x430);
  bVar1 = *(byte *)(unaff_x22 + 0x478);
  func_0x000107c614b0(uVar7);
  func_0x000107c5eea0(uVar10);
  func_0x000107c5ee68(uVar8);
  pcVar4 = *(code **)(lVar13 + 8);
  (*pcVar4)(uVar10,uVar11);
  uVar8 = 0x800000010f003040;
  uVar10 = 0xd000000000000011;
  if (bVar1 != 6) {
    uVar8 = 0xec00000064656566;
    uVar10 = 0x5f73646e65697266;
  }
  uVar11 = 0xef6369706f745f74;
  uVar3 = 0x6867696c746f7073;
  if (bVar1 != 4) {
    uVar11 = 0xee0073676e697474;
    uVar3 = 0x65735f636973756d;
  }
  if (bVar1 < 6) {
    uVar8 = uVar11;
    uVar10 = uVar3;
  }
  uVar11 = 0x656c69666f7270;
  if (bVar1 != 2) {
    uVar11 = 0x70616d;
  }
  uVar3 = 0xe700000000000000;
  if (bVar1 != 2) {
    uVar3 = 0xe300000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (bVar1 != 0) {
    uVar2 = 0x68747561;
  }
  uVar9 = 0xe700000000000000;
  if (bVar1 != 0) {
    uVar9 = 0xe400000000000000;
  }
  if (bVar1 < 2) {
    uVar3 = uVar9;
    uVar11 = uVar2;
  }
  if (bVar1 < 4) {
    uVar8 = uVar3;
    uVar10 = uVar11;
  }
  uVar11 = uVar8;
  FUN_101c25950(uVar10,uVar8,5);
  func_0x000107c6142c(uVar8);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar8 = uRam0000000112e08430;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar3 = uVar10;
  func_0x000107c5fadc(uVar10,uVar11);
  uVar9 = 0x796669746f7073;
  uVar2 = uVar9;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar8,uVar3,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c5fadc(uVar10,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar11 = 0;
  uVar3 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000105728688(uVar8,uVar10,uVar9,uVar11,1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c614ac(uVar7);
  func_0x000107c61654();
  (*pcVar4)(uVar12,uVar14);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101bda958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bda974; end: 101bdac93;  */

void FUN_101bda974(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  FUN_101bde248(unaff_x22 + 0x10);
  func_0x00010006c090(0,0xc000000000000000);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x440);
  lVar13 = *(long *)(unaff_x22 + 0x438);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x430);
  bVar1 = *(byte *)(unaff_x22 + 0x478);
  func_0x000107c614b0(uVar7);
  func_0x000107c5eea0(uVar10);
  func_0x000107c5ee68(uVar8);
  pcVar4 = *(code **)(lVar13 + 8);
  (*pcVar4)(uVar10,uVar11);
  uVar8 = 0x800000010f003040;
  uVar10 = 0xd000000000000011;
  if (bVar1 != 6) {
    uVar8 = 0xec00000064656566;
    uVar10 = 0x5f73646e65697266;
  }
  uVar11 = 0xef6369706f745f74;
  uVar3 = 0x6867696c746f7073;
  if (bVar1 != 4) {
    uVar11 = 0xee0073676e697474;
    uVar3 = 0x65735f636973756d;
  }
  if (bVar1 < 6) {
    uVar8 = uVar11;
    uVar10 = uVar3;
  }
  uVar11 = 0x656c69666f7270;
  if (bVar1 != 2) {
    uVar11 = 0x70616d;
  }
  uVar3 = 0xe700000000000000;
  if (bVar1 != 2) {
    uVar3 = 0xe300000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (bVar1 != 0) {
    uVar2 = 0x68747561;
  }
  uVar9 = 0xe700000000000000;
  if (bVar1 != 0) {
    uVar9 = 0xe400000000000000;
  }
  if (bVar1 < 2) {
    uVar3 = uVar9;
    uVar11 = uVar2;
  }
  if (bVar1 < 4) {
    uVar8 = uVar3;
    uVar10 = uVar11;
  }
  uVar11 = uVar8;
  FUN_101c25950(uVar10,uVar8,5);
  func_0x000107c6142c(uVar8);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar8 = uRam0000000112e08430;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar3 = uVar10;
  func_0x000107c5fadc(uVar10,uVar11);
  uVar9 = 0x796669746f7073;
  uVar2 = uVar9;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar8,uVar3,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c5fadc(uVar10,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar11 = 0;
  uVar3 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000105728688(uVar8,uVar10,uVar9,uVar11,1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c614ac(uVar7);
  func_0x000107c61654();
  (*pcVar4)(uVar12,uVar14);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101bdac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdac94; end: 101bdad2b;  */

void FUN_101bdac94(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x1b0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  *(undefined8 *)(unaff_x22 + 0x140) = unaff_x20;
  lVar1 = 0;
  func_0x000103a814dc();
  *(long *)(unaff_x22 + 0x148) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x150) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x158) = uVar2;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x160) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x168) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x170) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x178) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdad2c);
  return;
}



/* Entry: 101bdad2c; end: 101bdae47;  */

void FUN_101bdad2c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x178));
  FUN_101c30030(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x180) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x188) = uVar4;
  func_0x000107c61434(uVar2);
  func_0x000101be2878(unaff_x22 + 0x128,0x112d38270,&UNK_10d905a20);
  func_0x000100083b20(unaff_x22 + 0x130);
  plVar7 = *(long **)(unaff_x22 + 0x130);
  *(long **)(unaff_x22 + 400) = plVar7;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  func_0x000100083b20(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar5 = *(long *)(unaff_x22 + 0xe0);
  func_0x0001000a8868(unaff_x22 + 0xc0,uVar2);
  (**(code **)(lVar5 + 8))(unaff_x22 + 0x10,uVar2,lVar5);
  piVar6 = *(int **)(*plVar7 + 0x98);
  iVar1 = *piVar6;
  plVar7 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bdae48;
                    /* WARNING: Could not recover jumptable at 0x000101bdae44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))((undefined8 *)(unaff_x22 + 0x70),unaff_x22 + 0x10);
  return;
}


