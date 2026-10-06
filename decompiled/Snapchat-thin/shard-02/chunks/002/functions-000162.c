/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a9dcc8; end: 101a9dd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101a9dcc8(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112df5680);
  if (lVar5 == 0) {
    bVar2 = false;
  }
  else {
    func_0x000107c615f0(lVar5);
    uVar3 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efcee70);
    lVar4 = lVar5;
    func_0x000107c4980c();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(lVar5);
    if ((int)lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9dd60);
      (*pcVar1)();
    }
    bVar2 = (int)lVar4 != 0;
  }
  return bVar2;
}



/* Entry: 101a9dd60; end: 101a9de03; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl myAISendToShortcutLabelVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9dd60(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efcee70);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9de04);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9de04; end: 101a9dea7; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl myAISendToRankingVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9de04(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010efcee40);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9dea8);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9dea8; end: 101a9df43; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl enableAddAChatInSelectionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9dea8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010efcee20);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9df44; end: 101a9dfdf; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl isMerlinRecentsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9df44(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010efcee00);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9dfe0; end: 101a9e083; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl addAChatInSelectBarCharacterLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9dfe0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0x82;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010efcedd0);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9e084);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9e084; end: 101a9e11f; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl topGroupsSubscribeToStreaksObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e084(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010efced90);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e120; end: 101a9e1bb; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl showFriendmojiInReplySectionOverSubtext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e120(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010efced50);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e1bc; end: 101a9e257; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl removeInlineShareSheetHeaderForTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e1bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010efced20);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e258; end: 101a9e2f3; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl expandStoriesSectionOnExpansionForTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e258(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010efcecf0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e2f4; end: 101a9e38f; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl removeInlineShareSheetHeaderForAll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e2f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010efcecc0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e390; end: 101a9e42b; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl expandPreviewSectionOnExpansionForTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e390(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010efcec90);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e42c; end: 101a9e4df; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl sendToTrayHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101a9e42c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar2 == 0) {
    dVar4 = 0.7;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar2);
    uVar1 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010ef351b0);
    fVar3 = 0.7;
    func_0x000107c436e4(0x3f333333,lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    dVar4 = (double)fVar3;
  }
  return dVar4;
}



/* Entry: 101a9e4e0; end: 101a9e57b; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl sendToTrayUseSpringAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e4e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 1;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010efcec60);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e57c; end: 101a9e617; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl earlyPrewarmRecentRecipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e57c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010efcec30);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e618; end: 101a9e6b3; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl shouldIncludeSendToPromote] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e618(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efcec10);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e6b4; end: 101a9e757; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl rankingCacheLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9e6b4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010efcebe0);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9e758);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9e758; end: 101a9e7f3; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl spotlightPostingHintPreSelectionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e758(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efceba0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e7f4; end: 101a9e88f; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl enableCreatePostSpotlightCellAlwaysPosterImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e7f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 1;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efceb70);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e890; end: 101a9e92b; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl shouldUseFriendProfilePictureForAvatar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e890(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efceb40);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9e92c; end: 101a9eaab; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl enableCreatePostMusicPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9e92c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010efceb10);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9eaac; end: 101a9eae7; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl isSendToRewriteEnabledWithShouldExpose:] */

uint FUN_101a9eaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000101a9e9c8(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101a9eae8; end: 101a9eb83; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl enableCreatePostSaveConfigOnDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9eae8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010efceac0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9eb84; end: 101a9ec1f; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl enableCreatePostSpotlightSelectOnDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9eb84(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010efcea90);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9ec20; end: 101a9ecbb; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl enableCreatePostSpotlightSelectOnDismissIfChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9ec20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010efcea50);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9ecbc; end: 101a9ed1b; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl init] */

void FUN_101a9ecbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToExperimentConfiguration.SCSendToExperimentConfigurationImpl",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9ece8);
  (*pcVar1)();
}



/* Entry: 101a9ed1c; end: 101a9ed53; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9ed1c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112df5680));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df5688));
  return;
}



/* Entry: 101a9ed54; end: 101a9ed73;  */

void FUN_101a9ed54(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2810);
  return;
}



/* Entry: 101a9ed74; end: 101a9ee0f; -[_TtC31SCSendToExperimentConfiguration33SCSendToMentionsConfigurationImpl featureEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9ed74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df56b8);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010efcf2e0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9ee10; end: 101a9eeab; -[_TtC31SCSendToExperimentConfiguration33SCSendToMentionsConfigurationImpl selectAllEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9ee10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df56b8);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010efcf2b0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9eeac; end: 101a9ef4f; -[_TtC31SCSendToExperimentConfiguration33SCSendToMentionsConfigurationImpl preselectionMaxCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9eeac(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df56b8);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010efcf280);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9ef50);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9ef50; end: 101a9efaf; -[_TtC31SCSendToExperimentConfiguration33SCSendToMentionsConfigurationImpl init] */

void FUN_101a9ef50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToExperimentConfiguration.SCSendToMentionsConfigurationImpl",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9ef7c);
  (*pcVar1)();
}



/* Entry: 101a9efb0; end: 101a9efbf; -[_TtC31SCSendToExperimentConfiguration33SCSendToMentionsConfigurationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9efb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112df56b8));
  return;
}



/* Entry: 101a9efc0; end: 101a9efdf;  */

void FUN_101a9efc0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f28d8);
  return;
}



/* Entry: 101a9efe0; end: 101a9f07b; -[_TtC31SCSendToExperimentConfiguration27SCSendToUIConfigurationImpl searchPreTypeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9efe0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df56e8);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010efcf3a0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9f07c; end: 101a9f117; -[_TtC31SCSendToExperimentConfiguration27SCSendToUIConfigurationImpl searchSingleSelectionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9f07c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df56e8);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010efcf370);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9f118; end: 101a9f1b3; -[_TtC31SCSendToExperimentConfiguration27SCSendToUIConfigurationImpl searchOnlyRemoveTextEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9f118(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df56e8);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010efcf340);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9f1b4; end: 101a9f213; -[_TtC31SCSendToExperimentConfiguration27SCSendToUIConfigurationImpl init] */

void FUN_101a9f1b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToExperimentConfiguration.SCSendToUIConfigurationImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9f1e0);
  (*pcVar1)();
}



/* Entry: 101a9f214; end: 101a9f223; -[_TtC31SCSendToExperimentConfiguration27SCSendToUIConfigurationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9f214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112df56e8));
  return;
}



/* Entry: 101a9f224; end: 101a9f243;  */

void FUN_101a9f224(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2998);
  return;
}



/* Entry: 101a9f244; end: 101a9f2c7;  */

void FUN_101a9f244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 101a9f2c8; end: 101a9f5cf;  */

undefined * FUN_101a9f2c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000027;
  func_0x0001000a9a18(0xd000000000000027,0x800000010efcf3d0);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5c360();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_110438e88;
  func_0x000107c613fc(&UNK_110438e88,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_98 = FUN_101a9f650;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  uStack_a8 = 0x101a9f890;
  puStack_a0 = &UNK_110438ea0;
  ppuVar7 = &puStack_b8;
  puStack_90 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_90;
  func_0x000107c615f0(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_110438ed8;
  func_0x000107c613fc(&UNK_110438ed8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  pcStack_98 = FUN_101a9f674;
  puStack_b8 = puVar1;
  uStack_b0 = 0x42000000;
  uStack_a8 = 0x101a9f894;
  puStack_a0 = &UNK_110438ef0;
  ppuVar7 = &puStack_b8;
  puStack_90 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_90;
  func_0x000107c615f0(uVar2);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_110438f28;
  func_0x000107c613fc(&UNK_110438f28,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  pcStack_98 = FUN_101a9f704;
  puStack_b8 = puVar1;
  uStack_b0 = 0x42000000;
  uStack_a8 = 0x101a9f898;
  puStack_a0 = &UNK_110438f40;
  ppuVar7 = &puStack_b8;
  puStack_90 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_90;
  func_0x000107c615f0(uVar2);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar6 = PTR_PTR_1126a87b0;
  func_0x000107c610f8(PTR_PTR_1126a87b0);
  func_0x000107c4601c();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61428(param_1,&puStack_b8,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return puVar6;
}



/* Entry: 101a9f5d0; end: 101a9f64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9f5d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  FUN_101a9ed54();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112df5680) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112df5688) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 101a9f650; end: 101a9f673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9f650(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_101a9ed54();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112df5680) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112df5688) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 101a9f674; end: 101a9f69b;  */

void FUN_101a9f674(void)

{
  long unaff_x20;
  
  FUN_101a9f69c(*(undefined8 *)(unaff_x20 + 0x10),FUN_101a9f224,&DAT_112df56e8);
  return;
}



/* Entry: 101a9f69c; end: 101a9f703;  */

void FUN_101a9f69c(undefined8 param_1,code *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  (*param_2)();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + *param_3) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 101a9f704; end: 101a9f72b;  */

void FUN_101a9f704(void)

{
  long unaff_x20;
  
  FUN_101a9f69c(*(undefined8 *)(unaff_x20 + 0x10),FUN_101a9efc0,&DAT_112df56b8);
  return;
}



/* Entry: 101a9f72c; end: 101a9f763;  */

void FUN_101a9f72c(long param_1)

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



/* Entry: 101a9f764; end: 101a9f787;  */

/* WARNING: Possible PIC construction at 0x000101a9f770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a9f774) */

void FUN_101a9f764(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a9f788; end: 101a9f7db;  */

void FUN_101a9f788(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a9f7dc; end: 101a9f85b;  */

void FUN_101a9f7dc(undefined8 param_1)

{
  if (lRam0000000112df5740 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66d8dc);
  return;
}



/* Entry: 101a9f85c; end: 101a9f87f;  */

void FUN_101a9f85c(undefined8 *param_1,undefined8 param_2)

{
  FUN_101a9f2c8();
  *param_1 = param_2;
  return;
}



/* Entry: 101a9f880; end: 101a9f89b;  */

void FUN_101a9f880(long param_1,long param_2)

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



/* Entry: 101a9f89c; end: 101a9f8e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9f89c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df57f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101a9f8e8; end: 101a9fa3f; -[_TtC31SCContactSessionServiceProvider25ContactSessionServiceImpl setContactRankingResponseId:] */

/* WARNING: Possible PIC construction at 0x000101a9f954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a9f958) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9f8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112df57f8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5fadc(0xd000000000000020,0x800000010efcf450);
  func_0x000107c56bcc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a9fa40; end: 101a9fa97; -[_TtC31SCContactSessionServiceProvider25ContactSessionServiceImpl getContactRankingResponseId] */

void FUN_101a9fa40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101a9f974();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a9fa98; end: 101a9faf7; -[_TtC31SCContactSessionServiceProvider25ContactSessionServiceImpl init] */

void FUN_101a9fa98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContactSessionServiceProvider.ContactSessionServiceImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9fac4);
  (*pcVar1)();
}



/* Entry: 101a9faf8; end: 101a9fb07; -[_TtC31SCContactSessionServiceProvider25ContactSessionServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9faf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df57f8));
  return;
}



/* Entry: 101a9fb08; end: 101a9fb27;  */

void FUN_101a9fb08(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2a58);
  return;
}



/* Entry: 101a9fb28; end: 101a9fbdb;  */

void FUN_101a9fb28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101a9fbdc; end: 101a9fbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9fbdc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lStack_28 = 0;
  if (lVar1 != 0) {
    FUN_101a9fb08();
    lVar2 = lStack_28;
    func_0x000107c610f8();
    *(long *)(lVar2 + _DAT_112df57f8) = lVar1;
    lStack_30 = lVar2;
    func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  }
  return;
}



/* Entry: 101a9fbe4; end: 101a9fc1b;  */

void FUN_101a9fbe4(long param_1)

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



/* Entry: 101a9fc1c; end: 101a9fc2b;  */

void FUN_101a9fc1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101a9fc2c; end: 101a9fc4f;  */

void FUN_101a9fc2c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a9fc50; end: 101a9fd47;  */

void FUN_101a9fc50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110439060;
  func_0x000107c613fc(&UNK_110439060,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  uStack_50 = 0x101a9fd4c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101a9fbe4;
  puStack_58 = &UNK_110439078;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x0001001ccb10(0);
  func_0x000107c610f8();
  func_0x0001009793d8(puVar1,uVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 101a9fd48; end: 101a9fd53;  */

void FUN_101a9fd48(long param_1,long param_2)

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



/* Entry: 101a9fd54; end: 101a9fdc7;  */

void FUN_101a9fd54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101a9fdc8; end: 101a9ff17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101a9fdc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113047eb8);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_110439148;
  func_0x000107c613fc(&UNK_110439148,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  pcStack_50 = FUN_101a9ffc4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101a9ffcc;
  puStack_58 = &UNK_110439160;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126a87b8;
  func_0x000107c610f8(PTR_PTR_1126a87b8);
  func_0x000107c46f0c();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 101a9ff18; end: 101a9ffc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9ff18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  FUN_101aa0764();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112df59d0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112df59d8) = param_2;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar3 + _DAT_112df59e0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar3 + _DAT_112df59e8) = puVar1;
  *(undefined1 *)(lVar3 + _DAT_112df59f0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 101a9ffc4; end: 101a9ffcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9ffc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_101aa0764();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112df59d0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112df59d8) = uVar2;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar5 + _DAT_112df59e0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar5 + _DAT_112df59e8) = puVar3;
  *(undefined1 *)(lVar5 + _DAT_112df59f0) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 101a9ffcc; end: 101aa0003;  */

void FUN_101a9ffcc(long param_1)

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



/* Entry: 101aa0004; end: 101aa001f;  */

void FUN_101aa0004(long param_1,long param_2)

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



/* Entry: 101aa0020; end: 101aa003b;  */

/* WARNING: Possible PIC construction at 0x000101aa002c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa0030) */

void FUN_101aa0020(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101aa003c; end: 101aa0087;  */

void FUN_101aa003c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aa0088; end: 101aa0103;  */

void FUN_101aa0088(undefined8 param_1)

{
  if (lRam0000000112df5920 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66d9f8);
  return;
}



/* Entry: 101aa0104; end: 101aa0127;  */

void FUN_101aa0104(undefined8 *param_1,undefined8 param_2)

{
  FUN_101a9fdc8();
  *param_1 = param_2;
  return;
}



/* Entry: 101aa0128; end: 101aa0383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa0128(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112df59d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126a87c8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar4 = *(long *)(unaff_x20 + _DAT_112df59d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar4 = 0;
      lVar7 = 0;
      lVar6 = param_2;
    }
    else {
      lVar7 = lVar4;
      func_0x000107c43fac();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      lVar4 = lVar7;
      func_0x000107c5faec(lVar7);
      lVar6 = param_2;
      func_0x000107c61170(lVar7);
      lVar7 = param_2;
    }
    FUN_101aa0b34(param_1);
    puVar5 = puVar3;
    func_0x000107c554e0();
    func_0x00010011df08();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar6);
    }
    func_0x000107c554f8(puVar3);
    func_0x000107c61170(puVar5);
    lVar6 = _DAT_112df59e0;
    func_0x000107c61428(unaff_x20 + _DAT_112df59e0,auStack_78,1,0);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar6);
    FUN_101aa0af0(0);
    uVar8 = uVar9;
    func_0x000107c61434(uVar9);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar9);
    func_0x000107c537d0(puVar3);
    func_0x000107c61170(uVar8);
    lVar1 = _DAT_112df59e8;
    func_0x000107c61428(unaff_x20 + _DAT_112df59e8,auStack_90,1,0);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
    uVar8 = uVar9;
    func_0x000107c61434(uVar9);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar9);
    func_0x000107c5550c(puVar3);
    func_0x000107c61170(uVar8);
    if (lVar7 == 0) {
      lVar4 = 0;
    }
    else {
      func_0x000107c5fadc(lVar4,lVar7);
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c537b4(puVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c4bfb0(lVar2);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = *(undefined8 *)(unaff_x20 + lVar6);
    *(undefined **)(unaff_x20 + lVar6) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c6142c(uVar8);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar5;
    func_0x000107c6142c(uVar8);
    *(undefined1 *)(unaff_x20 + _DAT_112df59f0) = 0;
  }
  return;
}



/* Entry: 101aa0384; end: 101aa03b3; -[_TtC35SCInviteContactSectionLoggerFeature30InviteContactSectionLoggerImpl logContactSectionImpressionWithFeature:] */

void FUN_101aa0384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101aa0128(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101aa03b4; end: 101aa04ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101aa03b4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar3 = PTR_PTR_1126a87c0;
  func_0x000107c610f8(PTR_PTR_1126a87c0);
  func_0x000107c453e4();
  uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112df59f0);
  uVar4 = param_2;
  func_0x000107c44c54(param_2);
  func_0x000107c61180();
  func_0x000107c55068(puVar3,param_3,uVar4);
  func_0x000107c61170(uVar4);
  uVar4 = param_2;
  func_0x000107c4a200(param_2);
  func_0x000107c557b4(puVar3,param_3,uVar4);
  func_0x000107c45330(param_2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101aa04a4);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x000107c57b0c(puVar3,param_3,(long)param_1);
      func_0x000107c4f8d0(param_2);
      func_0x000107c57b24(puVar3);
      func_0x000107c5927c(puVar3,param_3,uVar1);
      return puVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101aa04ac);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101aa04a8);
  (*pcVar2)();
}



/* Entry: 101aa04ac; end: 101aa058b; -[_TtC35SCInviteContactSectionLoggerFeature30InviteContactSectionLoggerImpl logContactSeenWithContact:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa04ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_3;
  FUN_101aa03b4();
  lVar2 = _DAT_112df59e0;
  func_0x000107c61428(param_1 + _DAT_112df59e0,auStack_58,0x21,0);
  FUN_101aa07e0();
  uVar4 = *(ulong *)(param_1 + lVar2);
  uVar5 = uVar4 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar5 + 0x10);
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_101aa0850(uVar4,uVar1 + 1,1);
    uVar5 = uVar4 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar5 + uVar1 * 8 + 0x20) = uVar3;
  *(ulong *)(param_1 + lVar2) = uVar4;
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101aa058c; end: 101aa0697; -[_TtC35SCInviteContactSectionLoggerFeature30InviteContactSectionLoggerImpl logInviteActionWithHashedPhone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa058c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_68 [24];
  
  func_0x000107c5faec();
  lVar2 = _DAT_112df59e8;
  func_0x000107c61428(param_1 + _DAT_112df59e8,auStack_68,0x21,0);
  uVar6 = *(ulong *)(param_1 + lVar2);
  lVar3 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  uVar4 = uVar6;
  func_0x000107c61558();
  *(ulong *)(param_1 + lVar2) = uVar6;
  uVar5 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    func_0x0001000d182c(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(param_1 + lVar2) = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001000d182c(uVar6,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  lVar1 = uVar6 + uVar4 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(ulong *)(param_1 + lVar2) = uVar6;
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101aa0698; end: 101aa06ab; -[_TtC35SCInviteContactSectionLoggerFeature30InviteContactSectionLoggerImpl onPageScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa0698(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112df59f0) = 1;
  return;
}



/* Entry: 101aa06ac; end: 101aa070b; -[_TtC35SCInviteContactSectionLoggerFeature30InviteContactSectionLoggerImpl init] */

void FUN_101aa06ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCInviteContactSectionLoggerFeature.InviteContactSectionLoggerImpl",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa06d8);
  (*pcVar1)();
}



/* Entry: 101aa070c; end: 101aa0763; -[_TtC35SCInviteContactSectionLoggerFeature30InviteContactSectionLoggerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101aa0748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aa074c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aa070c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112df59d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112df59d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112df59e0));
  return;
}



/* Entry: 101aa0764; end: 101aa07df;  */

void FUN_101aa0764(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2b18);
  return;
}



/* Entry: 101aa07e0; end: 101aa084f;  */

void FUN_101aa07e0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_101aa0850(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 101aa0850; end: 101aa0977;  */

ulong FUN_101aa0850(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa0978);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101aa0978(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101aa0974);
      (*pcVar1)();
    }
    FUN_101aa09f8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101aa0978; end: 101aa09f7;  */

undefined * FUN_101aa0978(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000101aa0784();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101aa09f8; end: 101aa0aef;  */

long FUN_101aa09f8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101aa0aec);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101aa0af0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101aa0af0(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101aa0af0(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101aa0ae8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101aa0af0; end: 101aa0b33;  */

void FUN_101aa0af0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df5a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a87c0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112df5a20 = puVar1;
  return;
}



/* Entry: 101aa0b34; end: 101aa0b8f;  */

undefined8 FUN_101aa0b34(uint param_1)

{
  if (param_1 < 9) {
    return *(undefined8 *)(&UNK_10d9c4550 + (ulong)param_1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 101aa0b90; end: 101aa0c1f;  */

uint FUN_101aa0b90(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_e8 = param_1[0x17];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_28 = param_2[0x17];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_101aa0e84(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 101aa0c20; end: 101aa0d5b;  */

bool FUN_101aa0c20(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
    bVar2 = param_1[2] == param_2[2];
  }
  if (!bVar2) {
    return false;
  }
  return param_1[3] == param_2[3];
}



/* Entry: 101aa0d5c; end: 101aa0d9f;  */

void FUN_101aa0d5c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101aa0da0; end: 101aa0e83;  */

void FUN_101aa0da0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x13];
  uVar3 = param_2[0x12];
  uVar5 = param_2[0x14];
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  uVar2 = param_2[0x19];
  uVar1 = param_2[0x18];
  uVar4 = param_2[0x1b];
  uVar3 = param_2[0x1a];
  uVar6 = param_2[0x1d];
  uVar5 = param_2[0x1c];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1b] = uVar4;
  param_1[0x1a] = uVar3;
  param_1[0x1d] = uVar6;
  param_1[0x1c] = uVar5;
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  return;
}



/* Entry: 101aa0e84; end: 101aa0f2f;  */

void FUN_101aa0e84(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  func_0x000107c609ac(*param_1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],
                      param_2[3]);
  if ((((iVar1 != 0) &&
       (func_0x000107c609ac(param_1[4],param_1[5],param_1[6],param_1[7],param_2[4],param_2[5],
                            param_2[6],param_2[7]), iVar1 != 0)) &&
      (func_0x000107c609ac(param_1[8],param_1[9],param_1[10],param_1[0xb],param_2[8],param_2[9],
                           param_2[10],param_2[0xb]), iVar1 != 0)) &&
     ((func_0x000107c609ac(param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],param_2[0xc],
                           param_2[0xd],param_2[0xe],param_2[0xf]), iVar1 != 0 &&
      (func_0x000107c609ac(param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],param_2[0x10],
                           param_2[0x11],param_2[0x12],param_2[0x13]), iVar1 != 0)))) {
    func_0x000107c609ac(param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],param_2[0x14],
                        param_2[0x15],param_2[0x16],param_2[0x17]);
  }
  return;
}



/* Entry: 101aa0f30; end: 101aa0f5b;  */

void FUN_101aa0f30(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101aa0f5c; end: 101aa10ff;  */

undefined8 FUN_101aa0f5c(undefined8 param_1)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x148) == '\x01') {
    func_0x000108faa5f4(*(undefined8 *)(unaff_x20 + 0x30));
    *(undefined8 *)(unaff_x20 + 0x140) = param_1;
    *(undefined1 *)(unaff_x20 + 0x148) = 0;
    return param_1;
  }
  return *(undefined8 *)(unaff_x20 + 0x140);
}



/* Entry: 101aa1100; end: 101aa11c3;  */

void FUN_101aa1100(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0x90808;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x3fc3333333333333;
  *(undefined8 *)(unaff_x20 + 0x20) = 7;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x408f800000000000;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0x7e;
  *(undefined8 *)(unaff_x20 + 0x58) = 0x60;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined1 *)(unaff_x20 + 0x88) = 1;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined1 *)(unaff_x20 + 0x98) = 1;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined1 *)(unaff_x20 + 0xb8) = 1;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined1 *)(unaff_x20 + 200) = 1;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined1 *)(unaff_x20 + 0xd8) = 1;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined1 *)(unaff_x20 + 0xe8) = 1;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined1 *)(unaff_x20 + 0xf8) = 1;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined1 *)(unaff_x20 + 0x108) = 1;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined1 *)(unaff_x20 + 0x118) = 1;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined1 *)(unaff_x20 + 0x128) = 1;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined1 *)(unaff_x20 + 0x138) = 1;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined1 *)(unaff_x20 + 0x148) = 1;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined1 *)(unaff_x20 + 0x158) = 1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Entry: 101aa11c4; end: 101aa12cb;  */

undefined1  [16] FUN_101aa11c4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000108faa4f4();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
    *(long *)(unaff_x20 + 0x40) = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c6142c(uVar2);
    lVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    param_2 = lVar1;
  }
  func_0x000107c61434(lVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


