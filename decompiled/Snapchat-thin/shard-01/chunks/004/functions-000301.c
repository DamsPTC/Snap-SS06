/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10104b554; end: 10104b5ef;  */

int FUN_10104b554(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10104b5f0; end: 10104b5fb; -[SCSpotlightManagementEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b5f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56cd8;
  func_0x000107c61428(param_1 + _DAT_112d56cd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b5fc; end: 10104b607; -[SCSpotlightManagementEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b5fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56cd8;
  func_0x000107c61428(param_1 + _DAT_112d56cd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b608; end: 10104b613; -[SCSpotlightManagementEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b608(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56ce0;
  func_0x000107c61428(param_1 + _DAT_112d56ce0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b614; end: 10104b61f; -[SCSpotlightManagementEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b614(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56ce0;
  func_0x000107c61428(param_1 + _DAT_112d56ce0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b620; end: 10104b62b; -[SCSpotlightManagementEntryPoint storiesNetworkingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b620(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56ce8;
  func_0x000107c61428(param_1 + _DAT_112d56ce8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b62c; end: 10104b637; -[SCSpotlightManagementEntryPoint setStoriesNetworkingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56ce8;
  func_0x000107c61428(param_1 + _DAT_112d56ce8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b638; end: 10104b643; -[SCSpotlightManagementEntryPoint storiesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b638(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56cf0;
  func_0x000107c61428(param_1 + _DAT_112d56cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b644; end: 10104b64f; -[SCSpotlightManagementEntryPoint setStoriesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56cf0;
  func_0x000107c61428(param_1 + _DAT_112d56cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b650; end: 10104b65b; -[SCSpotlightManagementEntryPoint legacyStoriesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b650(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56cf8;
  func_0x000107c61428(param_1 + _DAT_112d56cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b65c; end: 10104b667; -[SCSpotlightManagementEntryPoint setLegacyStoriesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56cf8;
  func_0x000107c61428(param_1 + _DAT_112d56cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b668; end: 10104b673; -[SCSpotlightManagementEntryPoint myStoriesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b668(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56d00;
  func_0x000107c61428(param_1 + _DAT_112d56d00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b674; end: 10104b67f; -[SCSpotlightManagementEntryPoint setMyStoriesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b674(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56d00;
  func_0x000107c61428(param_1 + _DAT_112d56d00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b680; end: 10104b68b; -[SCSpotlightManagementEntryPoint spotlightPlaybackServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b680(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56d08;
  func_0x000107c61428(param_1 + _DAT_112d56d08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b68c; end: 10104b697; -[SCSpotlightManagementEntryPoint setSpotlightPlaybackServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b68c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56d08;
  func_0x000107c61428(param_1 + _DAT_112d56d08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b698; end: 10104b6a3; -[SCSpotlightManagementEntryPoint spotlightRepliesViewCountManagerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56d10;
  func_0x000107c61428(param_1 + _DAT_112d56d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b6a4; end: 10104b6af; -[SCSpotlightManagementEntryPoint setSpotlightRepliesViewCountManagerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56d10;
  func_0x000107c61428(param_1 + _DAT_112d56d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b6b0; end: 10104b6bb; -[SCSpotlightManagementEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b6b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56d18;
  func_0x000107c61428(param_1 + _DAT_112d56d18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b6bc; end: 10104b6c7; -[SCSpotlightManagementEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56d18;
  func_0x000107c61428(param_1 + _DAT_112d56d18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b6c8; end: 10104b6d3; -[SCSpotlightManagementEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b6c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56d20;
  func_0x000107c61428(param_1 + _DAT_112d56d20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104b6d4; end: 10104b717;  */

void FUN_10104b6d4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10104b718; end: 10104b723; -[SCSpotlightManagementEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56d20;
  func_0x000107c61428(param_1 + _DAT_112d56d20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b724; end: 10104b777;  */

void FUN_10104b724(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104b778; end: 10104b7bf; -[SCSpotlightManagementEntryPoint saveStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b778(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56d28;
  func_0x000107c61428(param_1 + _DAT_112d56d28,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10104b7c0; end: 10104b823; -[SCSpotlightManagementEntryPoint setSaveStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104b7c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56d28;
  func_0x000107c61428(param_1 + _DAT_112d56d28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10104b824; end: 10104c3bb;  */

/* WARNING: Possible PIC construction at 0x00010104baac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bde8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bdf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104be10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104be24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104be3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104be84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104be94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104beb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c0d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104c038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bfc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bfe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bf88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bf98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bfa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bf58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bf68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bf78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bf38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bf48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bf18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104bee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104befc) */
/* WARNING: Removing unreachable block (ram,0x00010104bf1c) */
/* WARNING: Removing unreachable block (ram,0x00010104bf4c) */
/* WARNING: Removing unreachable block (ram,0x00010104bf3c) */
/* WARNING: Removing unreachable block (ram,0x00010104bf7c) */
/* WARNING: Removing unreachable block (ram,0x00010104bf6c) */
/* WARNING: Removing unreachable block (ram,0x00010104bf5c) */
/* WARNING: Removing unreachable block (ram,0x00010104bfac) */
/* WARNING: Removing unreachable block (ram,0x00010104bf9c) */
/* WARNING: Removing unreachable block (ram,0x00010104bf8c) */
/* WARNING: Removing unreachable block (ram,0x00010104bfec) */
/* WARNING: Removing unreachable block (ram,0x00010104bfdc) */
/* WARNING: Removing unreachable block (ram,0x00010104bfcc) */
/* WARNING: Removing unreachable block (ram,0x00010104c03c) */
/* WARNING: Removing unreachable block (ram,0x00010104c02c) */
/* WARNING: Removing unreachable block (ram,0x00010104c01c) */
/* WARNING: Removing unreachable block (ram,0x00010104c00c) */
/* WARNING: Removing unreachable block (ram,0x00010104c08c) */
/* WARNING: Removing unreachable block (ram,0x00010104c07c) */
/* WARNING: Removing unreachable block (ram,0x00010104c06c) */
/* WARNING: Removing unreachable block (ram,0x00010104c05c) */
/* WARNING: Removing unreachable block (ram,0x00010104c04c) */
/* WARNING: Removing unreachable block (ram,0x00010104c100) */
/* WARNING: Removing unreachable block (ram,0x00010104c0ec) */
/* WARNING: Removing unreachable block (ram,0x00010104c0d8) */
/* WARNING: Removing unreachable block (ram,0x00010104c0c4) */
/* WARNING: Removing unreachable block (ram,0x00010104c1a8) */
/* WARNING: Removing unreachable block (ram,0x00010104c198) */
/* WARNING: Removing unreachable block (ram,0x00010104c184) */
/* WARNING: Removing unreachable block (ram,0x00010104c170) */
/* WARNING: Removing unreachable block (ram,0x00010104c15c) */
/* WARNING: Removing unreachable block (ram,0x00010104c14c) */
/* WARNING: Removing unreachable block (ram,0x00010104c138) */
/* WARNING: Removing unreachable block (ram,0x00010104c124) */
/* WARNING: Removing unreachable block (ram,0x00010104c244) */
/* WARNING: Removing unreachable block (ram,0x00010104c234) */
/* WARNING: Removing unreachable block (ram,0x00010104c2b0) */
/* WARNING: Removing unreachable block (ram,0x00010104c2a0) */
/* WARNING: Removing unreachable block (ram,0x00010104c28c) */
/* WARNING: Removing unreachable block (ram,0x00010104c290) */
/* WARNING: Removing unreachable block (ram,0x00010104c278) */
/* WARNING: Removing unreachable block (ram,0x00010104c33c) */
/* WARNING: Removing unreachable block (ram,0x00010104c328) */
/* WARNING: Removing unreachable block (ram,0x00010104c314) */
/* WARNING: Removing unreachable block (ram,0x00010104c300) */
/* WARNING: Removing unreachable block (ram,0x00010104c304) */
/* WARNING: Removing unreachable block (ram,0x00010104c2ec) */
/* WARNING: Removing unreachable block (ram,0x00010104c2d8) */
/* WARNING: Removing unreachable block (ram,0x00010104c2c4) */
/* WARNING: Removing unreachable block (ram,0x00010104c2c8) */
/* WARNING: Removing unreachable block (ram,0x00010104c208) */
/* WARNING: Removing unreachable block (ram,0x00010104c2b4) */
/* WARNING: Removing unreachable block (ram,0x00010104c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010104c1e0) */
/* WARNING: Removing unreachable block (ram,0x00010104c1cc) */
/* WARNING: Removing unreachable block (ram,0x00010104bed8) */
/* WARNING: Removing unreachable block (ram,0x00010104c348) */
/* WARNING: Removing unreachable block (ram,0x00010104bec8) */
/* WARNING: Removing unreachable block (ram,0x00010104beb8) */
/* WARNING: Removing unreachable block (ram,0x00010104bea8) */
/* WARNING: Removing unreachable block (ram,0x00010104be98) */
/* WARNING: Removing unreachable block (ram,0x00010104be88) */
/* WARNING: Removing unreachable block (ram,0x00010104be40) */
/* WARNING: Removing unreachable block (ram,0x00010104be28) */
/* WARNING: Removing unreachable block (ram,0x00010104be14) */
/* WARNING: Removing unreachable block (ram,0x00010104bdfc) */
/* WARNING: Removing unreachable block (ram,0x00010104bdec) */
/* WARNING: Removing unreachable block (ram,0x00010104bba4) */
/* WARNING: Removing unreachable block (ram,0x00010104c384) */
/* WARNING: Removing unreachable block (ram,0x00010104bbac) */
/* WARNING: Removing unreachable block (ram,0x00010104c3b8) */
/* WARNING: Removing unreachable block (ram,0x00010104bd9c) */
/* WARNING: Removing unreachable block (ram,0x00010104bb14) */
/* WARNING: Removing unreachable block (ram,0x00010104c1b0) */
/* WARNING: Removing unreachable block (ram,0x00010104c1bc) */
/* WARNING: Removing unreachable block (ram,0x00010104bb18) */
/* WARNING: Removing unreachable block (ram,0x00010104c210) */
/* WARNING: Removing unreachable block (ram,0x00010104bb44) */
/* WARNING: Removing unreachable block (ram,0x00010104c24c) */
/* WARNING: Removing unreachable block (ram,0x00010104bb6c) */
/* WARNING: Removing unreachable block (ram,0x00010104bab0) */
/* WARNING: Removing unreachable block (ram,0x00010104c0b0) */
/* WARNING: Removing unreachable block (ram,0x00010104bab4) */
/* WARNING: Removing unreachable block (ram,0x00010104c110) */
/* WARNING: Removing unreachable block (ram,0x00010104bae0) */
/* WARNING: Removing unreachable block (ram,0x00010104c3b4) */
/* WARNING: Removing unreachable block (ram,0x00010104baf8) */
/* WARNING: Removing unreachable block (ram,0x00010104beec) */

void FUN_10104b824(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5ffd8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5da74();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c5bf68();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c5bf88();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c4ad88();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4d3a0();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar2);
            lVar2 = lVar3;
          }
          else {
            lVar5 = unaff_x20;
            func_0x000107c5b918();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar5 = unaff_x20;
              func_0x000107c516c0();
              func_0x000107c61180();
              if (lVar5 != 0) {
                lVar5 = unaff_x20;
                func_0x000107c5b948();
                func_0x000107c61180();
                if (lVar5 == 0) {
                  func_0x000107c61170(lVar2);
                  lVar2 = lVar3;
                }
                else {
                  lVar5 = unaff_x20;
                  func_0x000107c3fa0c();
                  func_0x000107c61180();
                  if (lVar5 == 0) {
                    func_0x000107c61170(lVar2);
                    lVar2 = lVar3;
                  }
                  else {
                    func_0x000107c5b398();
                    func_0x000107c61180();
                    if (unaff_x20 != 0) {
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174(lVar2);
                      func_0x000107c4cfc4();
                      func_0x000107c61180();
                      if (lVar4 == 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x10104c3b4);
                        (*pcVar1)();
                      }
                      func_0x000107c5c734();
                      func_0x000107c61180();
                      lVar2 = lVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10104c3bc; end: 10104c3eb;  */

/* WARNING: Possible PIC construction at 0x00010104c3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104c3d8) */

void FUN_10104c3bc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10104c3ec; end: 10104c413; -[SCSpotlightManagementEntryPoint begin] */

void FUN_10104c3ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10104b824();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10104c414; end: 10104c457; -[SCSpotlightManagementEntryPoint end] */

void FUN_10104c414(undefined8 param_1)

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



/* Entry: 10104c458; end: 10104c9b3;  */

void FUN_10104c458(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ef630)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a3f8();
    }
    else {
      uVar2 = 0xd000000000000019;
      if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10de470)) ||
         (func_0x000107c605b8(0xd000000000000019,0x800000010ef21b90,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59910();
      }
      else {
        uVar2 = 0x53736569726f7473;
        if (((param_2 == 0x53736569726f7473) && (param_3 == -0x108c9a9c96898d9b)) ||
           (func_0x000107c605b8(0x53736569726f7473,0xef73656369767265,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59924();
        }
        else {
          if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10de450)) {
            uVar2 = 0xd000000000000015;
            func_0x000107c605b8(0xd000000000000015,0x800000010ef21bb0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000011;
              if (((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef10de430)) ||
                 (func_0x000107c605b8(0xd000000000000011,0x800000010ef21bd0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c56920();
              }
              else {
                if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10de410)) {
                  uVar2 = 0xd000000000000019;
                  func_0x000107c605b8(0xd000000000000019,0x800000010ef21bf0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffd8) && (param_3 == -0x7ffffffef10de3f0)) ||
                       (func_0x000107c605b8(0xd000000000000028,0x800000010ef21c10,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c59710();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
                         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c53414();
                      }
                      else {
                        uVar2 = 0x536f725070616e73;
                        if (((param_2 == 0x536f725070616e73) && (param_3 == -0x108c9a9c96898d9b)) ||
                           (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,
                                                param_3,0), (uVar2 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c5943c();
                        }
                        else {
                          if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10de3c0))
                          {
                            uVar2 = 0xd000000000000015;
                            func_0x000107c605b8(0xd000000000000015,0x800000010ef21c40,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              func_0x000107c602fc(0x15);
                              func_0x000107c6142c(0xe000000000000000);
                              func_0x000107c5fb78(param_2,param_3);
                              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                  0x800000010ef0fc20,
                                                  "SCSpotlightManagementEntryPoint/SCSpotlightManagementEntryPoint.swift"
                                                  ,0x45,2,0x57,0);
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x10104c9b4);
                              (*pcVar1)();
                            }
                          }
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c58bdc();
                        }
                      }
                    }
                    goto LAB_10104c4e8;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c596f0();
              }
              goto LAB_10104c4e8;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55bb4();
        }
      }
    }
  }
LAB_10104c4e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10104c9b4; end: 10104ca5f; -[SCSpotlightManagementEntryPoint setValue:forIvarName:] */

void FUN_10104c9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10104c458(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10104ca60; end: 10104cb83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104ca60(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d56cd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56ce0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56ce8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56cf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56cf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56d00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56d08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56d10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56d18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d56d20,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d56d28) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d56d30);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10104cb84; end: 10104cba3; -[SCSpotlightManagementEntryPoint init] */

void FUN_10104cb84(void)

{
  FUN_10104ca60();
  return;
}



/* Entry: 10104cba4; end: 10104cbd7;  */

void FUN_10104cba4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10104cbd8; end: 10104ccb3; -[SCSpotlightManagementEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010104cc94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104cc98) */
/* WARNING: Removing unreachable block (ram,0x00010104c3bc) */
/* WARNING: Removing unreachable block (ram,0x00010104c3e8) */
/* WARNING: Removing unreachable block (ram,0x00010104c3c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104cbd8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d56cd8);
  func_0x000107c61610(param_1 + _DAT_112d56ce0);
  func_0x000107c61610(param_1 + _DAT_112d56ce8);
  func_0x000107c61610(param_1 + _DAT_112d56cf0);
  func_0x000107c61610(param_1 + _DAT_112d56cf8);
  func_0x000107c61610(param_1 + _DAT_112d56d00);
  func_0x000107c61610(param_1 + _DAT_112d56d08);
  func_0x000107c61610(param_1 + _DAT_112d56d10);
  func_0x000107c61610(param_1 + _DAT_112d56d18);
  func_0x000107c61610(param_1 + _DAT_112d56d20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d56d28));
  return;
}



/* Entry: 10104ccb4; end: 10104ccd3;  */

void FUN_10104ccb4(void)

{
  func_0x000107c61168(&PTR_PTR_1127aaba8);
  return;
}



/* Entry: 10104ccd4; end: 10104cdcf;  */

undefined * FUN_10104ccd4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d56d78,&UNK_10d91d9b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10104cdcc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10104cdd0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10104cdd0; end: 10104cdf7;  */

undefined * FUN_10104cdd0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d56d80,&UNK_10d91d910);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10104cee0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10104cee4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10104cdf8; end: 10104cee3;  */

undefined * FUN_10104cdf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10104cee0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10104cee4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10104cee4; end: 10104cf0f;  */

long FUN_10104cee4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10104cf10; end: 10104d017;  */

/* WARNING: Possible PIC construction at 0x00010104cf8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104cfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104cfec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104cfe0) */
/* WARNING: Removing unreachable block (ram,0x00010104cf90) */
/* WARNING: Removing unreachable block (ram,0x00010104cff0) */
/* WARNING: Removing unreachable block (ram,0x000100de78a0) */
/* WARNING: Removing unreachable block (ram,0x000100de78b0) */
/* WARNING: Removing unreachable block (ram,0x00010006c00c) */
/* WARNING: Removing unreachable block (ram,0x00010006c018) */
/* WARNING: Removing unreachable block (ram,0x00010006c048) */
/* WARNING: Removing unreachable block (ram,0x00010006c020) */
/* WARNING: Removing unreachable block (ram,0x00010006c040) */
/* WARNING: Removing unreachable block (ram,0x000107c6157c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0428) */
/* WARNING: Removing unreachable block (ram,0x000100de78ac) */

void FUN_10104cf10(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 in_x5;
  uint in_w7;
  
  uVar1 = in_w7 >> 4 & 0xf;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar1 != 1)) {
        return;
      }
    }
    else {
      param_1 = param_2;
      if ((uVar1 != 2) && (param_1 = in_x5, uVar1 != 3)) {
        return;
      }
    }
  }
  else if (uVar1 < 6) {
    if ((uVar1 != 4) && (param_1 = param_2, uVar1 != 5)) {
      return;
    }
  }
  else {
    param_1 = param_2;
    if (((uVar1 != 6) && (uVar1 != 8)) && (param_1 = in_x5, uVar1 != 9)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_1);
  return;
}



/* Entry: 10104d018; end: 10104d033;  */

/* WARNING: Possible PIC construction at 0x00010104d0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104d0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104d0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104d0dc) */
/* WARNING: Removing unreachable block (ram,0x00010104d0ac) */
/* WARNING: Removing unreachable block (ram,0x00010104d0ec) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */

void FUN_10104d018(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  bVar2 = *(byte *)(param_1 + 7) >> 4;
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if ((bVar2 != 0) && (bVar2 != 1)) {
        return;
      }
    }
    else {
      uVar3 = uVar1;
      if ((bVar2 != 2) && (bVar2 != 3)) {
        return;
      }
    }
  }
  else if (bVar2 < 6) {
    if ((bVar2 != 4) && (uVar3 = uVar1, bVar2 != 5)) {
      return;
    }
  }
  else {
    uVar3 = uVar1;
    if (((bVar2 != 6) && (bVar2 != 8)) && (bVar2 != 9)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (uVar3,uVar1,param_1[2],param_1[3],param_1[4],param_1[5],param_1[6]);
  return;
}



/* Entry: 10104d034; end: 10104d127;  */

/* WARNING: Possible PIC construction at 0x00010104d0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104d0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104d0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104d0dc) */
/* WARNING: Removing unreachable block (ram,0x00010104d0ac) */
/* WARNING: Removing unreachable block (ram,0x00010104d0ec) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */

void FUN_10104d034(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint in_w7;
  
  uVar1 = in_w7 >> 4 & 0xf;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar1 != 1)) {
        return;
      }
    }
    else {
      param_1 = param_2;
      if ((uVar1 != 2) && (uVar1 != 3)) {
        return;
      }
    }
  }
  else if (uVar1 < 6) {
    if ((uVar1 != 4) && (param_1 = param_2, uVar1 != 5)) {
      return;
    }
  }
  else {
    param_1 = param_2;
    if (((uVar1 != 6) && (uVar1 != 8)) && (uVar1 != 9)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 10104d128; end: 10104d257;  */

undefined8 * FUN_10104d128(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar8 = param_2[6];
  uVar7 = *(undefined1 *)(param_2 + 7);
  FUN_10104cf10(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar8;
  *(undefined1 *)(param_1 + 7) = uVar7;
  return param_1;
}



/* Entry: 10104d258; end: 10104d273;  */

void FUN_10104d258(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10104d274; end: 10104d2cf;  */

undefined8 * FUN_10104d274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = param_2[6];
  uVar7 = *(undefined1 *)(param_2 + 7);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[6] = uVar10;
  uVar8 = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar7;
  FUN_10104d034(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return param_1;
}



/* Entry: 10104d2d0; end: 10104d433;  */

int FUN_10104d2d0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x75 < param_2) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + 0x76;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 0xe) >> 4) | (*(byte *)(param_1 + 0xe) >> 1 & 7) << 4) ^ 0x7f;
  if (0x74 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10104d434; end: 10104d477;  */

void FUN_10104d434(long param_1,long *param_2,long param_3)

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



/* Entry: 10104d478; end: 10104d497;  */

void FUN_10104d478(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10104d498; end: 10104d5cb;  */

void FUN_10104d498(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  
  iVar1 = (int)&uStack_a0;
  uVar2 = 0;
  FUN_10104d5cc(0);
  func_0x000107c61174();
  uVar3 = 0x112d56d98;
  func_0x0001000285a8(0x112d56d98,&UNK_10d91d958);
  func_0x000107c6147c(&uStack_a0,&stack0xffffffffffffff90,uVar2,uVar3,6);
  if (iVar1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_10104d610(&uStack_a0);
    func_0x000107c4d68c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      FUN_10104d498(param_1);
      func_0x000107c61170(unaff_x20);
    }
  }
  else {
    FUN_10104d658(&uStack_a0,auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    uVar3 = 0;
    FUN_101064470(0);
    uVar4 = param_1;
    FUN_101064b74(param_1,uVar3,&PTR_DAT_11037b328);
    if ((uVar4 & 1) == 0) {
      func_0x000107c4d68c();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_10104d498(param_1);
        func_0x000107c61170(unaff_x20);
      }
    }
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 10104d5cc; end: 10104d60f;  */

void FUN_10104d5cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d56d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIResponder_1126c6df8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d56d90 = puVar1;
  return;
}



/* Entry: 10104d610; end: 10104d657;  */

undefined8 FUN_10104d610(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d56da0;
  func_0x0001000285a8(0x112d56da0,&UNK_10d91d960);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10104d658; end: 10104d66f;  */

undefined8 * FUN_10104d658(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10104d670; end: 10104dcb7;  */

/* WARNING: Removing unreachable block (ram,0x00010104dc9c) */

undefined * FUN_10104d670(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined *puStack_68;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10104ccd4();
  uVar22 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar18 = *(ulong *)(uVar22 + 0x10);
  }
  else {
    uVar18 = uVar22;
    if (0x7fffffffffffffff < param_1) {
      uVar18 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar18 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar22 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10104dc70);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
          func_0x000107c61174();
          uVar13 = param_2;
        }
        else {
          uVar5 = uVar6;
          uVar13 = param_1;
          FUN_101059128();
        }
        uVar10 = uVar6 + 1;
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10104dc6c);
          (*pcVar2)();
        }
        uVar16 = uVar5;
        func_0x000107c4d1b8();
        func_0x000107c61180();
        param_2 = uVar13;
        if (uVar16 != 0) break;
LAB_10104d6c8:
        func_0x000107c61170(uVar5);
        uVar6 = uVar6 + 1;
        if (uVar10 == uVar18) goto LAB_10104d97c;
      }
      uVar12 = uVar16;
      func_0x000107c3ee04();
      func_0x000107c61180();
      func_0x000107c61170(uVar16);
      param_2 = uVar13;
      if (uVar12 == 0) goto LAB_10104d6c8;
      uVar6 = uVar12;
      func_0x000107c5faec();
      func_0x000107c61170(uVar12);
      puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(puVar4 + 0x10) != 0) {
        func_0x000107c61434(puVar4);
        uVar16 = uVar6;
        uVar12 = uVar13;
        func_0x000100029284();
        puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((uVar12 & 1) != 0) {
          puVar19 = *(undefined **)(*(long *)(puVar4 + 0x38) + uVar16 * 8);
          func_0x000107c61434(puVar19);
        }
        func_0x000107c6142c(puVar4);
      }
      func_0x000107c61174();
      puVar8 = puVar19;
      func_0x000107c61550();
      if ((((int)puVar8 == 0) || ((long)puVar19 < 0)) ||
         (puVar8 = puVar19, ((ulong)puVar19 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar19 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar19 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar19) {
            puVar7 = puVar19;
          }
          func_0x000107c60480(puVar7);
        }
        puVar8 = (undefined *)0x0;
        FUN_101055e1c(0,puVar7 + 1,1,puVar19);
      }
      uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar16 = *(ulong *)(uVar12 + 0x10);
      puVar19 = puVar8;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar16) {
        puVar19 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_101055e1c(puVar19,uVar16 + 1,1,puVar8);
        uVar12 = (ulong)puVar19 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar16 + 1;
      *(ulong *)(uVar12 + uVar16 * 8 + 0x20) = uVar5;
      func_0x000107c61434(puVar19);
      puVar8 = puVar4;
      func_0x000107c61558();
      uVar16 = uVar6;
      uVar12 = uVar13;
      puStack_68 = puVar4;
      func_0x000100029284();
      uVar14 = (ulong)~(uint)uVar12 & 1;
      lVar20 = *(long *)(puVar4 + 0x10) + uVar14;
      if (SCARRY8(*(long *)(puVar4 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10104dc94);
        (*pcVar2)();
      }
      if (*(long *)(puVar4 + 0x18) < lVar20) {
        FUN_101052394(lVar20,puVar8);
        uVar16 = uVar6;
        param_2 = uVar13;
        func_0x000100029284();
        puVar4 = puStack_68;
        if (((uint)uVar12 & 1) != ((uint)param_2 & 1)) goto LAB_10104dca8;
      }
      else {
        param_2 = uVar12;
        puVar4 = puStack_68;
        if (((ulong)puVar8 & 1) == 0) {
          FUN_1010520cc();
          puVar4 = puStack_68;
        }
      }
      puStack_68 = puVar4;
      if ((uVar12 & 1) == 0) {
        *(ulong *)(puVar4 + (uVar16 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar4 + (uVar16 >> 6) * 8 + 0x40) | 1L << (uVar16 & 0x3f);
        puVar15 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar16 * 0x10);
        *puVar15 = uVar6;
        puVar15[1] = uVar13;
        *(undefined **)(*(long *)(puVar4 + 0x38) + uVar16 * 8) = puVar19;
        func_0x000107c61170(uVar5);
        if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10104dc98);
          (*pcVar2)();
        }
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      }
      else {
        puVar8 = *(undefined **)(*(long *)(puVar4 + 0x38) + uVar16 * 8);
        *(undefined **)(*(long *)(puVar4 + 0x38) + uVar16 * 8) = puVar19;
        func_0x000107c6142c(puVar19);
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar13);
        puVar19 = puVar8;
      }
      func_0x000107c6142c(puVar19);
      uVar6 = uVar10;
    } while (uVar10 != uVar18);
  }
LAB_10104d97c:
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10104ccd4();
  puVar15 = (ulong *)(puVar4 + 0x40);
  uVar18 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
  uVar22 = 0xffffffffffffffff;
  if (-uVar18 < 0x40) {
    uVar22 = ~(-1L << (-uVar18 & 0x3f));
  }
  uVar22 = uVar22 & *puVar15;
  func_0x000107c61434(puVar4);
  lVar20 = 0;
  lVar21 = lVar20;
  do {
    while (uVar22 == 0) {
      bVar3 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10104dc68);
        (*pcVar2)();
      }
      if ((long)(0x3f - uVar18 >> 6) <= lVar20) {
        func_0x000107c6142c(puVar4);
        FUN_101052a30(puVar4,puVar15,~uVar18,lVar21,0);
        return puVar19;
      }
      uVar22 = puVar15[lVar20];
    }
    uVar6 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar13 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar20 << 6;
    puVar1 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar13 * 0x10);
    uVar6 = *puVar1;
    uVar5 = puVar1[1];
    puVar8 = *(undefined **)(*(long *)(puVar4 + 0x38) + uVar13 * 8);
    if ((ulong)puVar8 >> 0x3e == 0) {
      func_0x000107c61434(uVar5);
      func_0x000107c61434(puVar8);
      puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
LAB_10104da80:
      func_0x000107c61434(uVar5);
      func_0x000107c61434(puVar8);
    }
    else {
      puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar7 = puVar8;
      }
      func_0x000107c60480();
      func_0x000107c61434(uVar5);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar7 == (undefined *)0x0) goto LAB_10104da80;
      func_0x000107c61438(puVar8,2);
      func_0x000107c61434(uVar5);
      puVar9 = puVar7;
      FUN_10105606c(puVar7,0);
      puVar11 = puVar8;
      FUN_101056714(puVar9 + 0x20,puVar7);
      func_0x000107c6142c();
      if (puVar11 != puVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10104dc9c);
        (*pcVar2)();
      }
    }
    puStack_68 = puVar9;
    FUN_10105054c(&puStack_68);
    puVar7 = puStack_68;
    puVar9 = puVar19;
    func_0x000107c61558();
    uVar13 = uVar6;
    uVar10 = uVar5;
    puStack_68 = puVar19;
    func_0x000100029284();
    uVar16 = (ulong)~(uint)uVar10 & 1;
    lVar21 = *(long *)(puVar19 + 0x10) + uVar16;
    if (SCARRY8(*(long *)(puVar19 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10104dc74);
      (*pcVar2)();
    }
    if (*(long *)(puVar19 + 0x18) < lVar21) {
      FUN_101052394(lVar21,puVar9);
      uVar13 = uVar6;
      uVar16 = uVar5;
      func_0x000100029284();
      if (((uint)uVar10 & 1) != ((uint)uVar16 & 1)) {
LAB_10104dca8:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10104dcb8);
        (*pcVar2)();
      }
    }
    else if (((ulong)puVar9 & 1) == 0) {
      FUN_1010520cc();
    }
    puVar19 = puStack_68;
    uVar22 = uVar22 - 1 & uVar22;
    lVar21 = lVar20;
    if ((uVar10 & 1) == 0) {
      *(ulong *)(puStack_68 + (uVar13 >> 6) * 8 + 0x40) =
           *(ulong *)(puStack_68 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puStack_68 + 0x30) + uVar13 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar5;
      *(undefined **)(*(long *)(puStack_68 + 0x38) + uVar13 * 8) = puVar7;
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(uVar5);
      if (SCARRY8(*(long *)(puVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10104dc78);
        (*pcVar2)();
      }
      *(long *)(puVar19 + 0x10) = *(long *)(puVar19 + 0x10) + 1;
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(puStack_68 + 0x38) + uVar13 * 8);
      *(undefined **)(*(long *)(puStack_68 + 0x38) + uVar13 * 8) = puVar7;
      func_0x000107c6142c(puVar8);
      func_0x000107c61430(uVar5,2);
      func_0x000107c6142c(uVar17);
    }
  } while( true );
}



/* Entry: 10104dcb8; end: 10104dcef;  */

void FUN_10104dcb8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10104dcf0; end: 10104e077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104dcf0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x00010104de58();
  func_0x000108f553e4();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d56df8);
  puVar3 = &UNK_11037a6a0;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_11037a6a0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  FUN_10104e078(param_1,uVar5,FUN_1010528c0,puVar1);
  func_0x000107c61578(puVar1,2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d56dd0);
  func_0x000107c3fb90(uVar2);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_11037a6a0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_50 = 0x1010528c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10104e6fc;
  puStack_58 = &UNK_11037a708;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10104e078; end: 10104e6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104e078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar12;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  uStack_c0 = param_3;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar12 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar3 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126c0dd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126d67d8;
  func_0x000107c610f8(PTR_PTR_1126d67d8);
  func_0x000107c453e4();
  func_0x000107c58f64();
  func_0x000107c54424(puVar5);
  uVar6 = 0;
  func_0x000107c5ee20(0,0xc000000000000000);
  func_0x000107c54004(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c56b8c(puVar5);
  func_0x000107c53ff8(puVar4);
  puVar7 = PTR_PTR_1126b1080;
  func_0x000107c61168(PTR_PTR_1126b1080);
  func_0x000107c4e0ec();
  func_0x000107c61180();
  func_0x000107c53714(puVar4);
  func_0x000107c61170(puVar7);
  puVar7 = PTR_PTR_1126d5c50;
  func_0x000107c610f8(PTR_PTR_1126d5c50);
  func_0x000107c453e4();
  func_0x000107c54634(puVar4);
  func_0x000107c61170(puVar7);
  puVar7 = puVar4;
  func_0x000107c429ec();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c54950();
    func_0x000107c61170();
    func_0x000101064d70();
    func_0x000107c613fc();
    *(undefined8 *)(puVar7 + 0x18) = 3;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined **)(puVar7 + 0x20) = puVar4;
    uStack_c8 = *(undefined8 *)(unaff_x20 + _DAT_112d56df8);
    puVar8 = &UNK_11037a6a0;
    func_0x000107c613fc(&UNK_11037a6a0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar9 = &UNK_11037a740;
    func_0x000107c613fc(&UNK_11037a740,0x40,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    *(undefined8 *)(puVar9 + 0x20) = param_2;
    puVar9[0x28] = 1;
    *(undefined8 *)(puVar9 + 0x30) = uStack_c0;
    *(undefined8 *)(puVar9 + 0x38) = param_4;
    uStack_70 = 0x101052a38;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11037a758;
    ppuVar10 = &puStack_90;
    puStack_68 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61174(puVar4);
    func_0x000107c6157c(puVar8);
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_4);
    func_0x000107c5f808(lVar3);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar6 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar11 = uVar6;
    func_0x0001001c7f30();
    lVar1 = lStack_b8;
    func_0x000107c60264(puVar12,&puStack_98,uVar6,uVar11,lStack_b8,param_4);
    func_0x000107c5ffe8(0,lVar3,puVar12,ppuVar10);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61574(puVar7);
    (**(code **)(lStack_a0 + 8))(puVar12,lVar1);
    (**(code **)(lStack_b0 + 8))(lVar3,lStack_a8);
    puVar4 = puStack_68;
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10104e408);
  (*pcVar2)();
}



/* Entry: 10104e6fc; end: 10104e747;  */

void FUN_10104e6fc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10104e748; end: 10104eadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104e748(undefined *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 ****ppppuStack_1a0;
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
  undefined8 *****pppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
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
  ulong auStack_78 [3];
  
  if (param_1 != (undefined *)0x0) {
    func_0x000107c61174();
    puVar3 = param_1;
    func_0x000107c5c068();
    func_0x000107c61180();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar3 != (undefined *)0x0) {
      uVar4 = 0;
      func_0x000101054230(0,0x112d56e50,&PTR_PTR_1126cc4e0);
      puVar5 = puVar3;
      func_0x000107c5fc54(puVar3,uVar4);
      func_0x000107c61170(puVar3);
    }
    puVar3 = puVar5;
    FUN_10104d670();
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar14 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar14 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar14 = puVar5;
      }
      func_0x000107c60480();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (puVar14 != (undefined *)0x0) {
      uVar15 = 0;
      do {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10104e99c);
            (*pcVar1)();
          }
          uVar6 = *(ulong *)(puVar5 + uVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar15;
          FUN_101059128(uVar15,puVar5);
        }
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10104e998);
          (*pcVar1)();
        }
        puVar13 = (undefined *)(uVar15 + 1);
        auStack_78[0] = uVar6;
        FUN_10104eae0(&pppppuStack_108,auStack_78,puVar3,param_2);
        func_0x000107c61170(uVar6);
        iVar2 = (int)&pppppuStack_108;
        func_0x000101054358();
        if (iVar2 == 1) {
          FUN_101054370(&pppppuStack_108,0x112d56e58,&UNK_10d91d9c0);
        }
        else {
          uStack_138 = uStack_a0;
          uStack_140 = uStack_a8;
          uStack_128 = uStack_90;
          uStack_130 = uStack_98;
          uStack_118 = uStack_80;
          uStack_120 = uStack_88;
          uStack_168 = CONCAT71(uStack_cf,uStack_d0);
          uStack_178 = uStack_e0;
          uStack_180 = uStack_e8;
          uStack_170 = uStack_d8;
          uStack_158 = uStack_c0;
          uStack_160 = uStack_c8;
          uStack_148 = uStack_b0;
          uStack_150 = uStack_b8;
          uStack_198 = uStack_100;
          ppppuStack_1a0 = pppppuStack_108;
          uStack_188 = uStack_f0;
          uStack_190 = uStack_f8;
          puVar7 = puVar9;
          func_0x000107c61558();
          puVar8 = puVar9;
          if (((ulong)puVar7 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_101055f44(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar6 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar6) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_101055f44(puVar9,uVar6 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x28) = uStack_198;
          *(undefined8 *****)(puVar9 + uVar6 * 0x90 + 0x20) = ppppuStack_1a0;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x58) = uStack_168;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x50) = uStack_170;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x68) = uStack_158;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x60) = uStack_160;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x38) = uStack_188;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x30) = uStack_190;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x48) = uStack_178;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x40) = uStack_180;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x98) = uStack_128;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x90) = uStack_130;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0xa8) = uStack_118;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0xa0) = uStack_120;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x78) = uStack_148;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x70) = uStack_150;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x88) = uStack_138;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x80) = uStack_140;
        }
        uVar15 = uVar15 + 1;
      } while (puVar13 != puVar14);
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar3);
    func_0x000107c61428(param_2 + 0x10,&ppppuStack_1a0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c6142c(puVar9);
      func_0x000107c61170(param_1);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112d56da8);
      func_0x000107c6157c(uVar4);
      func_0x000107c61170(param_2);
      ppppppuVar12 = *(undefined8 *******)(puVar9 + 0x10);
      if (ppppppuVar12 == (undefined8 ******)0x0) {
        func_0x000107c6142c(puVar9);
        pppppuStack_108 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppppppuVar10 = ppppppuVar12;
        func_0x0001010560ec(ppppppuVar12,0);
        ppppppuVar11 = &pppppuStack_108;
        FUN_1010528f8(ppppppuVar11,ppppppuVar10 + 4,ppppppuVar12,puVar9);
        func_0x000107c61434(puVar9);
        func_0x000107c6142c(pppppuStack_108);
        if (ppppppuVar11 != ppppppuVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10104eae0);
          (*pcVar1)();
        }
        func_0x000107c6142c(puVar9);
        pppppuStack_108 = ppppppuVar10;
      }
      uStack_d0 = 0x40;
      func_0x0001002a64a8(&pppppuStack_108);
      func_0x000107c61574(uVar4);
      func_0x000107c61170(param_1);
      FUN_101052098(&pppppuStack_108);
    }
  }
  return;
}



/* Entry: 10104eae0; end: 10104f74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104eae0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long extraout_x8;
  undefined *puVar12;
  long unaff_x21;
  long lVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined8 auStack_330 [4];
  undefined1 auStack_310 [8];
  undefined8 auStack_308 [3];
  undefined1 auStack_2f0 [8];
  undefined1 *puStack_2e8;
  undefined *puStack_2e0;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 auStack_280 [24];
  undefined *puStack_268;
  undefined *puStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  undefined *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined2 uStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [24];
  undefined *puStack_110;
  undefined *puStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar3 = 0x112d373d8;
  puVar15 = &UNK_10d9014c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar17 = auStack_2f0 + lVar3;
  puVar16 = (undefined *)*param_3;
  puVar12 = puVar16;
  func_0x000107c3fb8c();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) goto LAB_10104ece0;
  puVar4 = puVar12;
  func_0x000107c5faec();
  puVar5 = puVar16;
  puVar10 = puVar15;
  puStack_288 = puVar4;
  func_0x000107c5c9d4();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
LAB_10104ecd4:
    func_0x000107c6142c(puVar15);
    func_0x000107c61170(puVar12);
LAB_10104ece0:
    FUN_1010543b0(&puStack_110);
    param_1[0xd] = puStack_a8;
    param_1[0xc] = uStack_b0;
    param_1[0xf] = uStack_98;
    param_1[0xe] = puStack_a0;
    param_1[0x11] = uStack_88;
    param_1[0x10] = uStack_90;
    param_1[5] = puStack_e8;
    param_1[4] = pcStack_f0;
    param_1[7] = puStack_d8;
    param_1[6] = puStack_e0;
    param_1[9] = puStack_c8;
    param_1[8] = puStack_d0;
    param_1[0xb] = puStack_b8;
    param_1[10] = puStack_c0;
    param_1[1] = puStack_108;
    *param_1 = puStack_110;
    param_1[3] = puStack_f8;
    param_1[2] = pcStack_100;
    return;
  }
  puStack_298 = puVar15;
  puStack_290 = param_5;
  func_0x000107c5ca64();
  uVar18 = param_2;
  func_0x000107c61170(puVar5);
  puVar15 = puVar16;
  func_0x000107c4d1b8();
  func_0x000107c61180();
  if (puVar15 == (undefined *)0x0) {
LAB_10104ed30:
    func_0x000101064d4c();
    func_0x000107c613fc();
    uVar18 = 1;
    *(undefined8 *)(puVar15 + 0x18) = 3;
    *(undefined8 *)(puVar15 + 0x10) = 1;
    *(undefined **)(puVar15 + 0x20) = puVar16;
    func_0x000107c61174(puVar16);
  }
  else {
    puVar4 = puVar15;
    func_0x000107c3ee04();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar4 == (undefined *)0x0) goto LAB_10104ed30;
    puVar5 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    puVar15 = puVar10;
    if (*(long *)(param_4 + 0x10) == 0) {
LAB_10104ed24:
      func_0x000107c6142c();
      goto LAB_10104ed30;
    }
    func_0x000107c61434(param_4);
    func_0x000100029284();
    if (((ulong)puVar15 & 1) == 0) {
      func_0x000107c6142c(puVar10);
      puVar15 = param_4;
      goto LAB_10104ed24;
    }
    puVar15 = *(undefined **)(*(long *)(param_4 + 0x38) + (long)puVar5 * 8);
    func_0x000107c61434(puVar15);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(param_4);
    if ((ulong)puVar15 >> 0x3e != 0) {
      puVar4 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar15) {
        puVar4 = puVar15;
      }
      func_0x000107c60480();
      if (puVar4 != (undefined *)0x0) goto LAB_10104ec54;
LAB_10104ecc0:
      func_0x000107c6142c(puVar15);
      puVar15 = puStack_298;
      goto LAB_10104ecd4;
    }
    if (*(long *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_10104ecc0;
LAB_10104ec54:
    if (((ulong)puVar15 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10104f750);
        (*pcVar2)();
      }
      uVar6 = *(undefined8 *)(puVar15 + 0x20);
      func_0x000107c61174(uVar6);
    }
    else {
      uVar6 = 0;
      FUN_101059128(0,puVar15);
    }
    func_0x000101054230(0,0x112d56e50,&PTR_PTR_1126cc4e0);
    puVar4 = puVar16;
    func_0x000107c61174();
    puVar5 = puVar4;
    func_0x000107c60118();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    if (((ulong)puVar5 & 1) == 0) goto LAB_10104ecc0;
  }
  puVar4 = puStack_290;
  puVar7 = auStack_128;
  func_0x000107c61428(puStack_290 + 0x10,puVar7,0,0);
  puVar4 = puVar4 + 0x10;
  func_0x000107c61618();
  if (puVar4 != (undefined *)0x0) {
    uVar6 = *(undefined8 *)(puVar4 + _DAT_112d56de0);
    func_0x000107c615f0(uVar6);
    func_0x000107c61170(puVar4);
    puVar7 = (undefined1 *)0x0;
    func_0x000101054230(0,0x112d56e50,&PTR_PTR_1126cc4e0);
    puVar4 = puVar15;
    func_0x000107c5fc48(puVar15);
    func_0x000107c4fca8(uVar6);
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(puVar4);
  }
  puVar4 = puVar16;
  func_0x000107c5c910();
  func_0x000107c61180();
  uStack_1c0 = param_2;
  uStack_130 = param_2;
  if (puVar4 == (undefined *)0x0) {
LAB_10104ef1c:
    puVar4 = puVar12;
    func_0x000108ea5f00();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    puVar12 = puVar4;
    func_0x000107c5faec();
    puVar11 = puVar7;
    func_0x000107c61170(puVar4);
    func_0x000107c4c930();
    func_0x000107c61180();
    if (puVar16 == (undefined *)0x0) {
      puVar16 = PTR_PTR_1126c3398;
      func_0x000107c610f8();
      func_0x000107c5fadc(puVar12,puVar7);
      func_0x000107c6142c(puVar7);
      func_0x000107c45b3c();
      func_0x000107c61170(puVar12);
      puStack_168 = puVar15;
      puStack_160 = puVar16;
    }
    else {
      puVar4 = puVar16;
      puStack_2a8 = puVar12;
      puStack_2a0 = puVar7;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        puVar14 = (undefined1 *)0x0;
        puVar7 = puVar11;
      }
      else {
        puVar12 = puVar4;
        func_0x000107c5faec();
        puVar7 = puVar11;
        func_0x000107c61170(puVar4);
        puVar14 = puVar11;
      }
      puVar4 = puVar16;
      puStack_290 = puVar15;
      func_0x000107c4a804();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar15 = puVar4;
        func_0x000107c5faec();
        func_0x000107c61170(puVar4);
      }
      uVar18 = 0;
      func_0x0001044d64d8(0);
      func_0x000107c610f8();
      func_0x0001044d5bec(puVar12,puVar14,puVar15,puVar7,uVar18);
      puVar15 = puVar16;
      func_0x000107c5d0f0();
      puVar4 = puVar16;
      puStack_2b0 = puVar15;
      func_0x000107c4a754();
      puStack_2b8 = (undefined *)CONCAT44(puStack_2b8._4_4_,(int)puVar4);
      func_0x000107c5ee80(puVar17,0x40f5180000000000);
      lVar9 = 0;
      func_0x000107c5eea4();
      lVar13 = *(long *)(lVar9 + -8);
      (**(code **)(lVar13 + 0x38))(puVar17,0,1,lVar9);
      func_0x000107c61174(puVar12);
      puVar15 = puStack_2a8;
      func_0x000107c5fadc(puStack_2a8,puStack_2a0);
      puVar7 = puVar17;
      (**(code **)(lVar13 + 0x30))(puVar17,1,lVar9);
      puVar11 = (undefined1 *)0x0;
      if ((int)puVar7 != 1) {
        func_0x000107c5ee70();
        (**(code **)(lVar13 + 8))(puVar17,lVar9);
        puVar11 = puVar7;
      }
      puVar4 = PTR_PTR_1126c3390;
      func_0x000107c610f8(PTR_PTR_1126c3390);
      *(undefined8 *)((long)auStack_308 + lVar3 + 0x10) = 0;
      *(undefined8 *)((long)auStack_308 + lVar3 + 8) = 0;
      *(undefined8 *)((long)auStack_308 + lVar3) = 0;
      auStack_310[lVar3] = 0;
      *(undefined1 **)((long)auStack_330 + lVar3 + 0x10) = puVar11;
      *(undefined8 *)((long)auStack_330 + lVar3 + 0x18) = 0;
      *(undefined8 *)((long)auStack_330 + lVar3 + 8) = 0;
      *(undefined8 *)((long)auStack_330 + lVar3) = 0;
      func_0x000107c45b38();
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar11);
      puVar5 = PTR_PTR_1126c3398;
      func_0x000107c610f8();
      puVar15 = puStack_2a0;
      puVar10 = puStack_2a8;
      func_0x000107c5fadc(puStack_2a8,puStack_2a0);
      func_0x000107c6142c(puVar15);
      func_0x000107c45b3c();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar16);
      puStack_168 = puStack_290;
      puStack_160 = puVar5;
    }
    uStack_138 = 0;
    uStack_140 = 0;
    puStack_148 = (undefined1 *)0x0;
    puStack_150 = (undefined *)0x0;
    uStack_158 = 0;
    puStack_170 = (undefined1 *)0x0;
    puStack_178 = (undefined *)0x0;
    uStack_190 = 0;
    uStack_198 = 0;
    puStack_1a0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    puStack_1d8 = (undefined1 *)0x0;
    puStack_1e0 = (undefined *)0x0;
    uStack_1e7 = 0;
    uStack_1e8 = 0;
    puStack_200 = (undefined1 *)0x0;
    puStack_208 = (undefined *)0x0;
    uStack_220 = 0;
    uStack_228 = 0;
    puStack_230 = (undefined1 *)0x0;
    puStack_238 = (undefined *)0x0;
    puStack_248 = puStack_288;
    puStack_240 = puStack_298;
    puStack_218 = puStack_288;
    puStack_210 = puStack_298;
    puStack_1f8 = puStack_168;
    puStack_1f0 = puStack_160;
    puStack_1b8 = puStack_288;
    puStack_1b0 = puStack_298;
    puStack_188 = puStack_288;
    puStack_180 = puStack_298;
    func_0x000107c61434();
    func_0x000101054270(&puStack_248,&puStack_110);
    func_0x0001010542ac(&puStack_1b8);
    uStack_b0 = CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,uStack_1e8));
    puStack_a8 = puStack_1e0;
    uStack_98 = uStack_1d0;
    puStack_a0 = puStack_1d8;
    uStack_88 = uStack_1c0;
    uStack_90 = uStack_1c8;
    puStack_e8 = (undefined *)uStack_220;
    pcStack_f0 = (code *)uStack_228;
    puStack_d8 = puStack_210;
    puStack_e0 = puStack_218;
    puStack_c8 = puStack_200;
    puStack_d0 = puStack_208;
    puStack_b8 = puStack_1f0;
    puStack_c0 = puStack_1f8;
    puStack_108 = puStack_240;
    puStack_110 = puStack_248;
    puStack_f8 = puStack_230;
    pcStack_100 = (code *)puStack_238;
    func_0x0001010543cc(&puStack_110);
    param_1[0xd] = puStack_a8;
    param_1[0xc] = uStack_b0;
    param_1[0xf] = uStack_98;
    param_1[0xe] = puStack_a0;
    param_1[0x11] = uStack_88;
    param_1[0x10] = uStack_90;
    param_1[5] = puStack_e8;
    param_1[4] = pcStack_f0;
    param_1[7] = puStack_d8;
    param_1[6] = puStack_e0;
    param_1[9] = puStack_c8;
    param_1[8] = puStack_d0;
    param_1[0xb] = puStack_b8;
    param_1[10] = puStack_c0;
    param_1[1] = puStack_108;
    *param_1 = puStack_110;
    param_1[3] = puStack_f8;
    param_1[2] = pcStack_100;
    return;
  }
  puVar5 = puVar4;
  func_0x000107d227d0();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c61170(puVar4);
    goto LAB_10104ef1c;
  }
  puStack_2b8 = puVar4;
  puStack_2b0 = puVar5;
  func_0x000107c61170(puVar12);
  uStack_258 = 0;
  uStack_250 = 0;
  puStack_268 = (undefined *)0x0;
  puStack_260 = (undefined *)0x0;
  puVar12 = puVar16;
  func_0x000107c3e37c();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
    puStack_2a8 = (undefined *)0x0;
    puStack_2a0 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11037a880;
    func_0x000107c613fc(&UNK_11037a880,0x20,7);
    *(ulong **)(puVar4 + 0x10) = &uStack_258;
    *(undefined ***)(puVar4 + 0x18) = &puStack_268;
    puVar5 = &UNK_11037a8a8;
    func_0x000107c613fc(&UNK_11037a8a8,0x20,7);
    puStack_2a8 = (undefined *)0x1010543e0;
    *(undefined8 *)(puVar5 + 0x10) = 0x1010543e0;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_f0 = FUN_1010543e8;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uVar18 = 0x42000000;
    puStack_108 = (undefined *)0x42000000;
    pcStack_100 = FUN_10104dcb8;
    puStack_f8 = &UNK_11037a8c0;
    ppuVar8 = &puStack_110;
    puStack_2a0 = puVar4;
    puStack_e8 = puVar5;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_e8);
    func_0x000107c4c7a0(puVar12);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar12);
  }
  puVar12 = puStack_290;
  puVar17 = auStack_280;
  uVar6 = 0;
  func_0x000107c61428(puStack_290 + 0x10,puVar17,0,0);
  puVar12 = puVar12 + 0x10;
  func_0x000107c61618();
  if (puVar12 == (undefined *)0x0) {
    puStack_2c8 = (undefined1 *)0x0;
    puStack_2c0 = (undefined *)0x0;
    uStack_2d0 = 0;
    uVar18 = 0;
  }
  else {
    puVar4 = puVar15;
    FUN_101052a4c();
    uStack_2d0 = uVar6;
    puStack_2c8 = puVar17;
    puStack_2c0 = puVar4;
    func_0x000107c61170(puVar12);
  }
  puVar12 = puVar16;
  func_0x000107c3e37c();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
LAB_10104f0f0:
    uStack_2d4 = 0;
  }
  else {
    puVar4 = puVar12;
    func_0x000107c3e1d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    if (puVar4 == (undefined *)0x0) goto LAB_10104f0f0;
    puVar12 = puVar4;
    func_0x000107c4a038();
    uStack_2d4 = SUB84(puVar12,0);
    func_0x000107c61170(puVar4);
  }
  puVar12 = puVar16;
  func_0x000107c3e37c();
  func_0x000107c61180();
  if (puVar12 != (undefined *)0x0) {
    puVar4 = puVar12;
    func_0x000107c3e1d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    if (puVar4 != (undefined *)0x0) {
      puVar12 = puVar4;
      func_0x000107c42768();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar12 == (undefined *)0x0) {
        uStack_2d8 = 0;
      }
      else {
        puVar4 = puVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar12);
        func_0x000107c610f8(PTR_PTR_1126c9298);
        func_0x00010006c00c(puVar4,puVar17);
        puVar12 = puVar4;
        FUN_101052d68(puVar4,puVar17);
        if (unaff_x21 != 0) {
          func_0x00010006c090(puVar4,puVar17);
          func_0x000107c61170(puStack_2b8);
          func_0x00010006c090(puVar4,puVar17);
          func_0x000107c6142c(puVar15);
          func_0x000107c6142c(puStack_298);
          func_0x000107c61170(puStack_2b0);
          func_0x000107c614ac(unaff_x21);
          FUN_1010543b0(&puStack_110);
          param_1[0xd] = puStack_a8;
          param_1[0xc] = uStack_b0;
          param_1[0xf] = uStack_98;
          param_1[0xe] = puStack_a0;
          param_1[0x11] = uStack_88;
          param_1[0x10] = uStack_90;
          param_1[5] = puStack_e8;
          param_1[4] = pcStack_f0;
          param_1[7] = puStack_d8;
          param_1[6] = puStack_e0;
          param_1[9] = puStack_c8;
          param_1[8] = puStack_d0;
          param_1[0xb] = puStack_b8;
          param_1[10] = puStack_c0;
          param_1[1] = puStack_108;
          *param_1 = puStack_110;
          param_1[3] = puStack_f8;
          param_1[2] = pcStack_100;
          func_0x000107c6142c(puStack_260);
          func_0x000107c6142c(uStack_250);
          func_0x0001010543d0(puStack_2a8,puStack_2a0);
          return;
        }
        func_0x00010006c090(puVar4,puVar17);
        puVar5 = puVar12;
        func_0x000107c5bd00();
        func_0x000107c61170(puVar12);
        func_0x00010006c090(puVar4);
        uStack_2d8 = (uint)((int)puVar5 == 2);
      }
      goto LAB_10104f544;
    }
  }
  uStack_2d8 = 0;
LAB_10104f544:
  puVar12 = puVar16;
  func_0x000107c51fa4();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
    puStack_2e8 = (undefined1 *)0x0;
    puStack_2e0 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar12;
    func_0x000107c5faec();
    puStack_2e8 = puVar17;
    puStack_2e0 = puVar4;
    func_0x000107c61170(puVar12);
  }
  uVar6 = uStack_250;
  uVar1 = uStack_258;
  puVar4 = puStack_260;
  puVar12 = puStack_268;
  puStack_290 = puVar15;
  func_0x000107c61434(puStack_260);
  func_0x000107c61434(uVar6);
  func_0x000107c40d14();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
    func_0x000107c61170(puStack_2b8);
    puVar15 = (undefined *)0x0;
    puVar17 = (undefined1 *)0x0;
  }
  else {
    puVar15 = puVar16;
    func_0x000107c5faec();
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puStack_2b8);
  }
  puVar16 = puStack_288;
  puVar5 = puStack_298;
  puStack_210 = puVar4;
  puStack_218 = puVar12;
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61434();
    puStack_210 = puVar5;
    puStack_218 = puVar16;
  }
  puStack_248 = puVar16;
  puStack_238 = puStack_2e0;
  puStack_230 = puStack_2e8;
  uStack_228 = uVar1;
  uStack_220 = uVar6;
  puStack_1f8 = puStack_290;
  puStack_1f0 = puStack_2b0;
  uStack_1e8 = (undefined1)uStack_2d4;
  uStack_1e7 = (undefined1)uStack_2d8;
  puStack_1e0 = puStack_2c0;
  puStack_1d8 = puStack_2c8;
  uStack_1d0 = uStack_2d0;
  puStack_1b8 = puVar16;
  puStack_1a8 = puStack_2e0;
  puStack_1a0 = puStack_2e8;
  uStack_198 = uVar1;
  uStack_190 = uVar6;
  puStack_168 = puStack_290;
  puStack_160 = puStack_2b0;
  uStack_158 = CONCAT11(uStack_1e7,uStack_1e8);
  puStack_150 = puStack_2c0;
  puStack_148 = puStack_2c8;
  uStack_140 = uStack_2d0;
  puStack_240 = puVar5;
  puStack_208 = puVar15;
  puStack_200 = puVar17;
  uStack_1c8 = uVar18;
  puStack_1b0 = puVar5;
  puStack_188 = puStack_218;
  puStack_180 = puStack_210;
  puStack_178 = puVar15;
  puStack_170 = puVar17;
  uStack_138 = uVar18;
  func_0x000101054270(&puStack_248,&puStack_110);
  func_0x0001010542ac(&puStack_1b8);
  uStack_b0 = CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,uStack_1e8));
  puStack_a8 = puStack_1e0;
  uStack_98 = uStack_1d0;
  puStack_a0 = puStack_1d8;
  uStack_88 = uStack_1c0;
  uStack_90 = uStack_1c8;
  puStack_e8 = (undefined *)uStack_220;
  pcStack_f0 = (code *)uStack_228;
  puStack_d8 = puStack_210;
  puStack_e0 = puStack_218;
  puStack_c8 = puStack_200;
  puStack_d0 = puStack_208;
  puStack_b8 = puStack_1f0;
  puStack_c0 = puStack_1f8;
  puStack_108 = puStack_240;
  puStack_110 = puStack_248;
  puStack_f8 = puStack_230;
  pcStack_100 = (code *)puStack_238;
  func_0x0001010543cc(&puStack_110);
  param_1[0xd] = puStack_a8;
  param_1[0xc] = uStack_b0;
  param_1[0xf] = uStack_98;
  param_1[0xe] = puStack_a0;
  param_1[0x11] = uStack_88;
  param_1[0x10] = uStack_90;
  param_1[5] = puStack_e8;
  param_1[4] = pcStack_f0;
  param_1[7] = puStack_d8;
  param_1[6] = puStack_e0;
  param_1[9] = puStack_c8;
  param_1[8] = puStack_d0;
  param_1[0xb] = puStack_b8;
  param_1[10] = puStack_c0;
  param_1[1] = puStack_108;
  *param_1 = puStack_110;
  param_1[3] = puStack_f8;
  param_1[2] = pcStack_100;
  func_0x000107c6142c(puStack_260);
  func_0x000107c6142c(uStack_250);
  func_0x0001010543d0(puStack_2a8,puStack_2a0);
  return;
}



/* Entry: 10104f750; end: 10104f92b;  */

/* WARNING: Possible PIC construction at 0x00010104f7ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104f7b0) */
/* WARNING: Removing unreachable block (ram,0x00010104f7e0) */
/* WARNING: Removing unreachable block (ram,0x00010104f7c4) */
/* WARNING: Removing unreachable block (ram,0x00010104f7e8) */

void FUN_10104f750(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_2;
  func_0x000107c42c98();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = param_2[1];
  *param_2 = lVar2;
  param_2[1] = (long)plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 10104f92c; end: 10104fed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104f92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar12;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  uStack_c0 = param_5;
  func_0x000107c5f7fc();
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar12 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_b8 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar3 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126c0dd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126d67d8;
  func_0x000107c610f8(PTR_PTR_1126d67d8);
  func_0x000107c453e4();
  func_0x000107c54424();
  func_0x000107c56b8c(puVar5);
  func_0x000107c5ee20(param_3,param_4);
  func_0x000107c54004(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c53ff8(puVar4);
  puVar6 = PTR_PTR_1126b1080;
  func_0x000107c61168(PTR_PTR_1126b1080);
  func_0x000107c4e0ec();
  func_0x000107c61180();
  func_0x000107c53714(puVar4);
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126d5c50;
  func_0x000107c610f8(PTR_PTR_1126d5c50);
  func_0x000107c453e4();
  func_0x000107c54634(puVar4);
  func_0x000107c61170(puVar6);
  puVar6 = puVar4;
  func_0x000107c429ec();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c54950();
    func_0x000107c61170();
    func_0x000101064d70();
    func_0x000107c613fc();
    *(undefined8 *)(puVar6 + 0x18) = 3;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    uStack_c8 = *(undefined8 *)(unaff_x20 + _DAT_112d56df8);
    puVar7 = &UNK_11037a6a0;
    func_0x000107c613fc(&UNK_11037a6a0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_11037a8f8;
    func_0x000107c613fc(&UNK_11037a8f8,0x40,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    *(undefined8 *)(puVar8 + 0x20) = param_2;
    puVar8[0x28] = 0;
    *(undefined8 *)(puVar8 + 0x30) = uStack_c0;
    *(undefined8 *)(puVar8 + 0x38) = param_6;
    uStack_70 = 0x101054498;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11037a910;
    ppuVar9 = &puStack_90;
    puStack_68 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61174(puVar4);
    func_0x000107c6157c(puVar7);
    func_0x000107c6157c(puVar6);
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_6);
    func_0x000107c5f808(lVar3);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar10 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar11 = uVar10;
    func_0x0001001c7f30();
    lVar1 = lStack_a0;
    func_0x000107c60264(puVar12,&puStack_98,uVar10,uVar11,lStack_a0,param_6);
    func_0x000107c5ffe8(0,lVar3,puVar12,ppuVar9);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61574(puVar6);
    (**(code **)(lStack_a8 + 8))(puVar12,lVar1);
    (**(code **)(lStack_b8 + 8))(lVar3,lStack_b0);
    puVar4 = puStack_68;
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10104fcb4);
  (*pcVar2)();
}



/* Entry: 10104fed8; end: 10104fffb;  */

void FUN_10104fed8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101052e28(param_1,param_4,param_5);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10104fffc; end: 101050027;  */

void FUN_10104fffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(param_1 + 0x20))(param_2,param_3,param_4);
  return;
}



/* Entry: 101050028; end: 101050087; -[_TtC19SpotlightManagement32SpotlightManagementDataRequester init] */

void FUN_101050028(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightManagement.SpotlightManagementDataRequester",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101050054);
  (*pcVar1)();
}



/* Entry: 101050088; end: 10105015f; -[_TtC19SpotlightManagement32SpotlightManagementDataRequester .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101050088(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56da8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56db0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d56db8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d56dc0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d56dc8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d56dd0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d56dd8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d56de0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d56de8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d56df0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d56df8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d56e00));
  return;
}



/* Entry: 101050160; end: 10105017f;  */

void FUN_101050160(void)

{
  func_0x000107c61168(&PTR_PTR_1127aacb8);
  return;
}



/* Entry: 101050180; end: 101050413;  */

void FUN_101050180(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar3 = &UNK_11037a6a0;
  func_0x000107c613fc(&UNK_11037a6a0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_11037a6c8;
  func_0x000107c613fc(&UNK_11037a6c8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101050508;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_101050510;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101050414;
  puStack_58 = &UNK_11037a6e0;
  ppuVar5 = &puStack_70;
  puStack_48 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c650(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x7e,0x255,0x2b,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010502c0);
  (*pcVar2)();
}



/* Entry: 101050414; end: 1010504b7;  */

void FUN_101050414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar4 = uVar3;
  func_0x000107c5faec(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,uVar3,param_3,uVar4,param_4,param_5);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1010504b8; end: 101050507; -[_TtC19SpotlightManagement32SpotlightManagementDataRequester didUpdateMyStoriesDataRequest:] */

/* WARNING: Possible PIC construction at 0x0001010504f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010504f4) */

void FUN_1010504b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101050180(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101050508; end: 10105050f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101050508(undefined **param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 auStack_a0 [7];
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110e43098;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_1 == ppuVar2 && param_2 == lVar3) {
    func_0x000107c6142c(lVar3);
  }
  else {
    func_0x000107c605b8(param_1,param_2,ppuVar2,lVar3,0);
    func_0x000107c6142c(lVar3);
    if (((ulong)param_1 & 1) == 0) {
      return;
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d56e00;
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112d56e00,auStack_a0,0x21,0);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61558(uVar4);
    uStack_60 = *(undefined8 *)(lVar3 + lVar1);
    *(undefined8 *)(lVar3 + lVar1) = 0x8000000000000000;
    FUN_101051f2c(param_6,param_3,param_4,uVar4);
    uVar4 = uStack_60;
    *(undefined8 *)(lVar3 + lVar1) = uStack_60;
    func_0x000107c614a8(auStack_a0);
    auStack_a0[0] = uVar4;
    uStack_68 = 0x10;
    func_0x000107c6157c(uVar4);
    func_0x0001002a64a8(auStack_a0);
    FUN_101052098(auStack_a0);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101050510; end: 10105052f;  */

void FUN_101050510(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101050530; end: 10105054b;  */

void FUN_101050530(long param_1,long param_2)

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



/* Entry: 10105054c; end: 10105065b;  */

void FUN_10105054c(ulong *param_1)

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
    func_0x0001010528d0();
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
      func_0x000101054230(0,0x112d56e50,&PTR_PTR_1126cc4e0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_101050758(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1010511b4(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10105065c; end: 101050757;  */

void FUN_10105065c(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    func_0x0001010528e4();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,&UNK_11037b170);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_101050d30(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_10105130c(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 101050758; end: 101050d2f;  */

void FUN_101050758(double param_1,long *param_2,undefined8 param_3,long *param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x21;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_4[1];
  if (0 < lVar18) {
    lVar11 = 0;
    do {
      lVar5 = lVar11 + 1;
      if (lVar5 < lVar18) {
        lVar16 = *param_4;
        lVar4 = *(long *)(lVar16 + lVar5 * 8);
        lVar20 = *(long *)(lVar16 + lVar11 * 8);
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar4;
        func_0x000107c5c9d4();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar20);
          bVar3 = false;
          dVar22 = param_1;
        }
        else {
          func_0x000107c5ca64();
          dVar22 = param_1;
          func_0x000107c61170(lVar5);
          lVar5 = lVar20;
          func_0x000107c5c9d4();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar20);
            bVar3 = true;
          }
          else {
            func_0x000107c5ca64();
            dVar23 = dVar22;
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar20);
            func_0x000107c61170(lVar5);
            bVar3 = param_1 < dVar22;
            dVar22 = dVar23;
          }
        }
        lVar5 = lVar11 + 2;
        lVar4 = lVar5;
        param_1 = dVar22;
        if (lVar5 < lVar18) {
          plVar19 = (long *)(lVar16 + lVar11 * 8 + 0x10);
          do {
            lVar4 = plVar19[-1];
            lVar20 = *plVar19;
            func_0x000107c61174();
            func_0x000107c61174();
            lVar16 = lVar20;
            func_0x000107c5c9d4();
            func_0x000107c61180();
            if (lVar16 == 0) {
              func_0x000107c61170(lVar20);
              func_0x000107c61170(lVar4);
              param_1 = dVar22;
              if (bVar3) goto joined_r0x000101050ba4;
            }
            else {
              func_0x000107c5ca64();
              param_1 = dVar22;
              func_0x000107c61170(lVar16);
              lVar16 = lVar4;
              func_0x000107c5c9d4();
              func_0x000107c61180();
              if (lVar16 == 0) {
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar4);
                dVar22 = param_1;
                if (bVar3 == false) goto LAB_1010509d8;
              }
              else {
                func_0x000107c5ca64();
                dVar23 = param_1;
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar16);
                bVar2 = param_1 <= dVar22;
                lVar4 = lVar5;
                dVar22 = dVar23;
                param_1 = dVar23;
                if (bVar3 == bVar2) break;
              }
            }
            plVar19 = plVar19 + 1;
            lVar5 = lVar5 + 1;
            lVar4 = lVar18;
            param_1 = dVar22;
          } while (lVar18 != lVar5);
        }
        lVar5 = lVar4;
        if (bVar3) {
joined_r0x000101050ba4:
          if (lVar5 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101050d04);
            (*pcVar1)();
          }
          if (lVar11 < lVar5) {
            lVar20 = *param_4;
            puVar12 = (undefined8 *)(lVar20 + lVar5 * 8);
            puVar13 = (undefined8 *)(lVar20 + lVar11 * 8);
            lVar4 = lVar5;
            lVar18 = lVar11;
            do {
              puVar12 = puVar12 + -1;
              lVar4 = lVar4 + -1;
              if (lVar18 != lVar4) {
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101050d24);
                  (*pcVar1)();
                }
                uVar14 = *puVar13;
                *puVar13 = *puVar12;
                *puVar12 = uVar14;
              }
              lVar18 = lVar18 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar18 < lVar4);
          }
        }
      }
LAB_1010509d8:
      lVar18 = param_4[1];
      lVar4 = lVar5;
      if (lVar5 < lVar18) {
        if (SBORROW8(lVar5,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101050d00);
          (*pcVar1)();
        }
        if (lVar5 - lVar11 < param_5) {
          if (SCARRY8(lVar11,param_5)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101050d08);
            (*pcVar1)();
          }
          lVar20 = lVar11 + param_5;
          if (lVar18 <= lVar11 + param_5) {
            lVar20 = lVar18;
          }
          if (lVar20 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101050d0c);
            (*pcVar1)();
          }
          if (lVar5 != lVar20) {
            lVar18 = *param_4;
            plVar19 = (long *)(lVar18 + lVar5 * 8 + -8);
            lVar16 = lVar11 - lVar5;
            do {
              lVar6 = *(long *)(lVar18 + lVar5 * 8);
              lVar4 = lVar16;
              plVar17 = plVar19;
              do {
                lVar21 = *plVar17;
                func_0x000107c61174();
                func_0x000107c61174();
                lVar7 = lVar6;
                func_0x000107c5c9d4();
                func_0x000107c61180();
                if (lVar7 == 0) {
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar21);
                  break;
                }
                func_0x000107c5ca64();
                dVar22 = param_1;
                func_0x000107c61170(lVar7);
                lVar7 = lVar21;
                func_0x000107c5c9d4();
                func_0x000107c61180();
                if (lVar7 == 0) {
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar21);
                  param_1 = dVar22;
                }
                else {
                  func_0x000107c5ca64();
                  dVar23 = dVar22;
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar21);
                  func_0x000107c61170(lVar7);
                  bVar3 = dVar22 <= param_1;
                  param_1 = dVar23;
                  if (bVar3) break;
                }
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101050d10);
                  (*pcVar1)();
                }
                lVar7 = *plVar17;
                lVar6 = plVar17[1];
                *plVar17 = lVar6;
                plVar17[1] = lVar7;
                bVar3 = lVar4 != -1;
                lVar4 = lVar4 + 1;
                plVar17 = plVar17 + -1;
              } while (bVar3);
              lVar5 = lVar5 + 1;
              plVar19 = plVar19 + 1;
              lVar16 = lVar16 + -1;
              lVar4 = lVar20;
            } while (lVar5 != lVar20);
          }
        }
      }
      puVar10 = puStack_58;
      if (lVar4 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101050cf4);
        (*pcVar1)();
      }
      puVar8 = puStack_58;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar15 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar15) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x0001000a91e0(puVar10,uVar15 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar15 + 1;
      *(long *)(puVar10 + uVar15 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar10 + uVar15 * 0x10 + 0x28) = lVar4;
      puStack_58 = puVar10;
      if (*param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101050d28);
        (*pcVar1)();
      }
      FUN_1010513f4(&puStack_58,*param_2,param_4);
      puVar10 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101050cc0;
      lVar18 = param_4[1];
      lVar11 = lVar4;
    } while (lVar4 < lVar18);
  }
  puVar10 = puStack_58;
  lVar18 = *param_2;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101050d30);
    (*pcVar1)();
  }
  puVar8 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar8 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar15 = *(ulong *)(puVar10 + 0x10);
  while (puStack_58 = puVar10, 1 < uVar15) {
    lVar11 = *param_4;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101050d2c);
      (*pcVar1)();
    }
    lVar20 = uVar15 - 1;
    lVar4 = *(long *)(puVar10 + uVar15 * 0x10);
    lVar5 = *(long *)(puVar10 + lVar20 * 0x10 + 0x28);
    FUN_1010518d0(lVar11 + lVar4 * 8,lVar11 + *(long *)(puVar10 + lVar20 * 0x10 + 0x20) * 8,
                  lVar11 + lVar5 * 8,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar5 < lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101050cf8);
      (*pcVar1)();
    }
    puVar8 = puVar10;
    func_0x000107c61558();
    if (((ulong)puVar8 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar10 + 0x10) <= uVar15 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101050cfc);
      (*pcVar1)();
    }
    *(long *)(puVar10 + uVar15 * 0x10) = lVar4;
    *(long *)((long)(puVar10 + uVar15 * 0x10) + 8) = lVar5;
    puStack_58 = puVar10;
    func_0x0001000a97cc(lVar20);
    puVar10 = puStack_58;
    uVar15 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_101050cc0:
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 101050d30; end: 1010511b3;  */

void FUN_101050d30(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  double *pdVar18;
  long unaff_x21;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  double dVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  double dVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  double dVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar9 = 0;
    do {
      puVar7 = puStack_58;
      lVar19 = lVar9 + 1;
      if (lVar19 < lVar10) {
        lVar8 = *param_3;
        dVar22 = *(double *)(lVar8 + lVar19 * 0x90 + 0x88);
        lVar19 = lVar8 + lVar9 * 0x90;
        dVar35 = *(double *)(lVar19 + 0x88);
        lVar16 = lVar9 + 2;
        pdVar18 = (double *)(lVar19 + 0x1a8);
        dVar46 = dVar22;
        do {
          lVar17 = lVar16;
          lVar19 = lVar10;
          if (lVar10 == lVar17) break;
          dVar49 = *pdVar18;
          bVar4 = dVar49 <= dVar46;
          lVar16 = lVar17 + 1;
          pdVar18 = pdVar18 + 0x12;
          dVar46 = dVar49;
          lVar19 = lVar17;
        } while (dVar35 < dVar22 != bVar4);
        if (dVar35 < dVar22) {
          if (lVar19 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101051188);
            (*pcVar3)();
          }
          if (lVar9 < lVar19) {
            puVar15 = (undefined8 *)(lVar8 + lVar9 * 0x90);
            lVar16 = lVar19;
            lVar10 = lVar9;
            puVar12 = (undefined8 *)(lVar8 + lVar19 * 0x90);
            do {
              puVar11 = puVar12 + -0x12;
              lVar16 = lVar16 + -1;
              if (lVar10 != lVar16) {
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010511a8);
                  (*pcVar3)();
                }
                uVar29 = puVar15[0xd];
                uVar23 = puVar15[0xc];
                uVar41 = puVar15[0xf];
                uVar36 = puVar15[0xe];
                uVar30 = puVar15[0x11];
                uVar24 = puVar15[0x10];
                uVar31 = puVar15[5];
                uVar25 = puVar15[4];
                uVar42 = puVar15[7];
                uVar37 = puVar15[6];
                uVar43 = puVar15[9];
                uVar38 = puVar15[8];
                uVar32 = puVar15[0xb];
                uVar26 = puVar15[10];
                uVar44 = puVar15[1];
                uVar39 = *puVar15;
                uVar33 = puVar15[3];
                uVar27 = puVar15[2];
                uVar34 = puVar12[-0x11];
                uVar28 = *puVar11;
                uVar45 = puVar12[-0xf];
                uVar40 = puVar12[-0x10];
                uVar48 = puVar12[-0xd];
                uVar47 = puVar12[-0xe];
                uVar51 = puVar12[-0xb];
                uVar50 = puVar12[-0xc];
                uVar53 = puVar12[-9];
                uVar52 = puVar12[-10];
                uVar55 = puVar12[-7];
                uVar54 = puVar12[-8];
                uVar57 = puVar12[-5];
                uVar56 = puVar12[-6];
                uVar58 = puVar12[-4];
                uVar60 = puVar12[-1];
                uVar59 = puVar12[-2];
                puVar15[0xf] = puVar12[-3];
                puVar15[0xe] = uVar58;
                puVar15[0x11] = uVar60;
                puVar15[0x10] = uVar59;
                puVar15[0xb] = uVar55;
                puVar15[10] = uVar54;
                puVar15[0xd] = uVar57;
                puVar15[0xc] = uVar56;
                puVar15[7] = uVar51;
                puVar15[6] = uVar50;
                puVar15[9] = uVar53;
                puVar15[8] = uVar52;
                puVar15[3] = uVar45;
                puVar15[2] = uVar40;
                puVar15[5] = uVar48;
                puVar15[4] = uVar47;
                puVar15[1] = uVar34;
                *puVar15 = uVar28;
                puVar12[-5] = uVar29;
                puVar12[-6] = uVar23;
                puVar12[-3] = uVar41;
                puVar12[-4] = uVar36;
                puVar12[-1] = uVar30;
                puVar12[-2] = uVar24;
                puVar12[-0xd] = uVar31;
                puVar12[-0xe] = uVar25;
                puVar12[-0xb] = uVar42;
                puVar12[-0xc] = uVar37;
                puVar12[-9] = uVar43;
                puVar12[-10] = uVar38;
                puVar12[-7] = uVar32;
                puVar12[-8] = uVar26;
                puVar12[-0x11] = uVar44;
                *puVar11 = uVar39;
                puVar12[-0xf] = uVar33;
                puVar12[-0x10] = uVar27;
              }
              lVar10 = lVar10 + 1;
              puVar15 = puVar15 + 0x12;
              puVar12 = puVar11;
            } while (lVar10 < lVar16);
            lVar10 = param_3[1];
          }
        }
      }
      lVar16 = lVar19;
      if (lVar19 < lVar10) {
        if (SBORROW8(lVar19,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101051184);
          (*pcVar3)();
        }
        if (lVar19 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10105118c);
            (*pcVar3)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar10 <= lVar9 + param_4) {
            lVar8 = lVar10;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101051190);
            (*pcVar3)();
          }
          if (lVar19 != lVar8) {
            lVar13 = *param_3;
            puVar15 = (undefined8 *)(lVar13 + lVar19 * 0x90);
            lVar10 = lVar9 - lVar19;
            lVar17 = lVar10;
            puVar12 = puVar15;
LAB_101050f30:
            do {
              if ((double)puVar15[-1] < (double)puVar15[0x11]) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101051194);
                  (*pcVar3)();
                }
                puVar11 = puVar15 + -0x12;
                uVar28 = puVar15[0xd];
                uVar23 = puVar15[0xc];
                uVar38 = puVar15[0xf];
                uVar33 = puVar15[0xe];
                uVar29 = puVar15[0x11];
                uVar24 = puVar15[0x10];
                uVar30 = puVar15[5];
                uVar25 = puVar15[4];
                uVar39 = puVar15[7];
                uVar34 = puVar15[6];
                uVar40 = puVar15[9];
                uVar36 = puVar15[8];
                uVar31 = puVar15[0xb];
                uVar26 = puVar15[10];
                uVar41 = puVar15[1];
                uVar37 = *puVar15;
                uVar32 = puVar15[3];
                uVar27 = puVar15[2];
                puVar15[9] = puVar15[-9];
                puVar15[8] = puVar15[-10];
                puVar15[0xb] = puVar15[-7];
                puVar15[10] = puVar15[-8];
                puVar15[0xd] = puVar15[-5];
                puVar15[0xc] = puVar15[-6];
                puVar15[0xf] = puVar15[-3];
                puVar15[0xe] = puVar15[-4];
                puVar15[0x11] = puVar15[-1];
                puVar15[0x10] = puVar15[-2];
                puVar15[5] = puVar15[-0xd];
                puVar15[4] = puVar15[-0xe];
                puVar15[7] = puVar15[-0xb];
                puVar15[6] = puVar15[-0xc];
                puVar15[1] = puVar15[-0x11];
                *puVar15 = *puVar11;
                puVar15[3] = puVar15[-0xf];
                puVar15[2] = puVar15[-0x10];
                puVar15[-9] = uVar40;
                puVar15[-10] = uVar36;
                puVar15[-7] = uVar31;
                puVar15[-8] = uVar26;
                puVar15[-5] = uVar28;
                puVar15[-6] = uVar23;
                puVar15[-3] = uVar38;
                puVar15[-4] = uVar33;
                puVar15[-1] = uVar29;
                puVar15[-2] = uVar24;
                puVar15[-0xd] = uVar30;
                puVar15[-0xe] = uVar25;
                puVar15[-0xb] = uVar39;
                puVar15[-0xc] = uVar34;
                puVar15[-0x11] = uVar41;
                *puVar11 = uVar37;
                puVar15[-0xf] = uVar32;
                puVar15[-0x10] = uVar27;
                bVar4 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                puVar15 = puVar11;
                if (bVar4) goto LAB_101050f30;
              }
              lVar19 = lVar19 + 1;
              puVar15 = puVar12 + 0x12;
              lVar10 = lVar17 + -1;
              lVar16 = lVar8;
              lVar17 = lVar10;
              puVar12 = puVar15;
            } while (lVar19 != lVar8);
          }
        }
      }
      if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101051174);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar21 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar21) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar21 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar21 + 1;
      *(long *)(puVar7 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar21 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010511ac);
        (*pcVar3)();
      }
      FUN_10105165c(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101051144;
      lVar10 = param_3[1];
      lVar9 = lVar16;
    } while (lVar16 < lVar10);
  }
  puVar7 = puStack_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010511b4);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar20 = (ulong *)(puVar7 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010511b0);
      (*pcVar3)();
    }
    plVar1 = (long *)(puVar7 + uVar21 * 0x10);
    lVar19 = *plVar1;
    puVar2 = puVar20 + uVar21 * 2;
    uVar14 = puVar2[1];
    FUN_101051c8c(lVar9 + lVar19 * 0x90,lVar9 + *puVar2 * 0x90,lVar9 + uVar14 * 0x90,lVar10);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar19) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101051178);
      (*pcVar3)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10105117c);
      (*pcVar3)();
    }
    *plVar1 = lVar19;
    plVar1[1] = uVar14;
    uVar14 = *puVar20;
    lVar9 = uVar14 - uVar21;
    if (uVar14 < uVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101051180);
      (*pcVar3)();
    }
    uVar21 = uVar14 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_101051144:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 1010511b4; end: 10105130b;  */

void FUN_1010511b4(double param_1,long param_2,long param_3,long param_4,long *param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  if (param_4 != param_3) {
    lVar7 = *param_5;
    plVar5 = (long *)(lVar7 + param_4 * 8 + -8);
    param_2 = param_2 - param_4;
    do {
      lVar3 = *(long *)(lVar7 + param_4 * 8);
      plVar8 = plVar5;
      lVar9 = param_2;
      do {
        lVar6 = *plVar8;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c5c9d4();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar6);
          break;
        }
        func_0x000107c5ca64();
        dVar10 = param_1;
        func_0x000107c61170(lVar4);
        lVar4 = lVar6;
        func_0x000107c5c9d4();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar6);
          param_1 = dVar10;
        }
        else {
          func_0x000107c5ca64();
          dVar11 = dVar10;
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar4);
          bVar2 = dVar10 <= param_1;
          param_1 = dVar11;
          if (bVar2) break;
        }
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10105130c);
          (*pcVar1)();
        }
        lVar4 = *plVar8;
        lVar3 = plVar8[1];
        *plVar8 = lVar3;
        plVar8[1] = lVar4;
        bVar2 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        plVar8 = plVar8 + -1;
      } while (bVar2);
      param_4 = param_4 + 1;
      plVar5 = plVar5 + 1;
      param_2 = param_2 + -1;
    } while (param_4 != param_3);
  }
  return;
}



/* Entry: 10105130c; end: 1010513f3;  */

void FUN_10105130c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar4 = (undefined8 *)(lVar3 + param_3 * 0x90);
    param_1 = param_1 - param_3;
    lVar6 = param_1;
    puVar5 = puVar4;
LAB_101051350:
    do {
      if ((double)puVar4[-1] < (double)puVar4[0x11]) {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010513f4);
          (*pcVar1)();
        }
        puVar7 = puVar4 + -0x12;
        uVar13 = puVar4[0xd];
        uVar8 = puVar4[0xc];
        uVar22 = puVar4[0xf];
        uVar18 = puVar4[0xe];
        uVar14 = puVar4[0x11];
        uVar9 = puVar4[0x10];
        uVar15 = puVar4[5];
        uVar10 = puVar4[4];
        uVar23 = puVar4[7];
        uVar19 = puVar4[6];
        uVar24 = puVar4[9];
        uVar20 = puVar4[8];
        uVar16 = puVar4[0xb];
        uVar11 = puVar4[10];
        uVar25 = puVar4[1];
        uVar21 = *puVar4;
        uVar17 = puVar4[3];
        uVar12 = puVar4[2];
        puVar4[9] = puVar4[-9];
        puVar4[8] = puVar4[-10];
        puVar4[0xb] = puVar4[-7];
        puVar4[10] = puVar4[-8];
        puVar4[0xd] = puVar4[-5];
        puVar4[0xc] = puVar4[-6];
        puVar4[0xf] = puVar4[-3];
        puVar4[0xe] = puVar4[-4];
        puVar4[0x11] = puVar4[-1];
        puVar4[0x10] = puVar4[-2];
        puVar4[5] = puVar4[-0xd];
        puVar4[4] = puVar4[-0xe];
        puVar4[7] = puVar4[-0xb];
        puVar4[6] = puVar4[-0xc];
        puVar4[1] = puVar4[-0x11];
        *puVar4 = *puVar7;
        puVar4[3] = puVar4[-0xf];
        puVar4[2] = puVar4[-0x10];
        puVar4[-9] = uVar24;
        puVar4[-10] = uVar20;
        puVar4[-7] = uVar16;
        puVar4[-8] = uVar11;
        puVar4[-5] = uVar13;
        puVar4[-6] = uVar8;
        puVar4[-3] = uVar22;
        puVar4[-4] = uVar18;
        puVar4[-1] = uVar14;
        puVar4[-2] = uVar9;
        puVar4[-0xd] = uVar15;
        puVar4[-0xe] = uVar10;
        puVar4[-0xb] = uVar23;
        puVar4[-0xc] = uVar19;
        puVar4[-0x11] = uVar25;
        *puVar7 = uVar21;
        puVar4[-0xf] = uVar17;
        puVar4[-0x10] = uVar12;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar4 = puVar7;
        if (bVar2) goto LAB_101051350;
      }
      param_3 = param_3 + 1;
      puVar4 = puVar5 + 0x12;
      param_1 = lVar6 + -1;
      lVar6 = param_1;
      puVar5 = puVar4;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1010513f4; end: 10105165b;  */

undefined8 FUN_1010513f4(ulong *param_1,undefined8 param_2,long *param_3)

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
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1010514c8;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101051644);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_10105152c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101051634);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10105163c);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10105161c);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101051620);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101051628);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101051630);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1010514c8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101051624);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10105162c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101051638);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101051640);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_10105152c;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101051648);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101051610);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10105165c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1010518d0(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101051614);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101051618);
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



/* Entry: 10105165c; end: 1010518cf;  */

undefined8 FUN_10105165c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    func_0x000107c61558();
    if ((uVar10 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_101051734;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010518b0);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_101051794:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010518a0);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010518a8);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101051888);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10105188c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101051894);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10105189c);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_101051734:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101051890);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101051898);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1010518a4);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1010518ac);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_101051794;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1010518b4);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101051878);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1010518d0);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      FUN_101051c8c(lVar8 + lVar12 * 0x90,lVar8 + *plVar3 * 0x90,lVar8 + lVar9 * 0x90,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10105187c);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101051880);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101051884);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Entry: 1010518d0; end: 101051c8b;  */

undefined8 FUN_1010518d0(double param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  double dVar13;
  double dVar14;
  
  lVar10 = (long)param_3 - (long)param_2;
  lVar3 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 3;
  lVar11 = (long)param_4 - (long)param_3;
  lVar5 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar5 = lVar11;
  }
  lVar5 = lVar5 >> 3;
  if (lVar3 < lVar5) {
    if ((param_5 < param_2) || ((param_2 + lVar3 <= param_5 || (param_5 != param_2)))) {
      func_0x000107c610b8(param_5,param_2,lVar3 << 3);
    }
    plVar7 = param_5 + lVar3;
    plVar8 = param_2;
    if (7 < lVar10) {
      do {
        if (param_4 <= param_3) break;
        lVar10 = *param_3;
        lVar5 = *param_5;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar3 = lVar10;
        func_0x000107c5c9d4();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar10);
          func_0x000107c61170(lVar5);
LAB_101051a5c:
          plVar9 = param_5 + 1;
          plVar6 = param_5;
        }
        else {
          func_0x000107c5ca64();
          dVar13 = param_1;
          func_0x000107c61170(lVar3);
          lVar3 = lVar5;
          func_0x000107c5c9d4();
          func_0x000107c61180();
          if (lVar3 == 0) {
            func_0x000107c61170(lVar10);
            func_0x000107c61170(lVar5);
            dVar14 = dVar13;
          }
          else {
            func_0x000107c5ca64();
            dVar14 = dVar13;
            func_0x000107c61170(lVar10);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar3);
            bVar2 = dVar13 <= param_1;
            param_1 = dVar14;
            if (bVar2) goto LAB_101051a5c;
          }
          plVar9 = param_5;
          plVar6 = param_3;
          param_3 = param_3 + 1;
          param_1 = dVar14;
        }
        param_5 = plVar9;
        if (plVar8 != plVar6) {
          *plVar8 = *plVar6;
        }
        plVar8 = plVar8 + 1;
      } while (param_5 < plVar7);
    }
  }
  else {
    if (((param_5 < param_3) || (param_3 + lVar5 <= param_5)) || (param_5 != param_3)) {
      func_0x000107c610b8(param_5,param_3,lVar5 << 3);
    }
    plVar6 = param_5 + lVar5;
    plVar7 = plVar6;
    plVar8 = param_3;
    if ((param_2 < param_3) && (7 < lVar11)) {
      do {
        plVar12 = param_3 + -1;
        dVar13 = param_1;
        plVar9 = param_4;
LAB_101051ae0:
        param_4 = plVar9 + -1;
        plVar7 = plVar6 + -1;
        lVar10 = *plVar7;
        lVar5 = *plVar12;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar3 = lVar10;
        func_0x000107c5c9d4();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar10);
          func_0x000107c61170(lVar5);
LAB_101051ba8:
          if (plVar9 != plVar6) {
            *param_4 = *plVar7;
          }
          plVar8 = param_3;
          plVar6 = plVar7;
          plVar9 = param_4;
          if (plVar7 <= param_5) break;
          goto LAB_101051ae0;
        }
        func_0x000107c5ca64();
        dVar14 = dVar13;
        func_0x000107c61170(lVar3);
        lVar3 = lVar5;
        func_0x000107c5c9d4();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c5ca64();
          param_1 = dVar14;
          func_0x000107c61170(lVar10);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar3);
          bVar2 = dVar13 < dVar14;
          dVar13 = param_1;
          if (bVar2) goto LAB_101051be8;
          goto LAB_101051ba8;
        }
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar5);
        param_1 = dVar14;
LAB_101051be8:
        if (plVar9 != param_3) {
          *param_4 = *plVar12;
        }
        plVar7 = plVar6;
        plVar8 = plVar12;
      } while ((param_2 < plVar12) && (param_3 = plVar12, param_5 < plVar6));
    }
  }
  uVar4 = (long)plVar7 - (long)param_5;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_5) || ((long *)((long)param_5 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_5,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 101051c8c; end: 101051f2b;  */

undefined8
FUN_101051c8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x90;
  lVar2 = ((long)param_3 - (long)param_2) / 0x90;
  if (lVar1 < lVar2) {
    if ((param_4 < param_1) || ((param_1 + lVar1 * 0x12 <= param_4 || (param_4 != param_1)))) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x90);
    }
    puVar4 = param_4 + lVar1 * 0x12;
    puVar5 = param_1;
    if (0x8f < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if ((double)param_2[0x11] <= (double)param_4[0x11]) {
          puVar6 = param_4 + 0x12;
          puVar3 = param_4;
        }
        else {
          puVar6 = param_4;
          puVar3 = param_2;
          param_2 = param_2 + 0x12;
        }
        param_4 = puVar6;
        if (puVar5 != puVar3) {
          uVar8 = puVar3[1];
          uVar7 = *puVar3;
          uVar10 = puVar3[3];
          uVar9 = puVar3[2];
          uVar12 = puVar3[5];
          uVar11 = puVar3[4];
          uVar14 = puVar3[7];
          uVar13 = puVar3[6];
          uVar16 = puVar3[9];
          uVar15 = puVar3[8];
          uVar18 = puVar3[0xb];
          uVar17 = puVar3[10];
          uVar20 = puVar3[0xd];
          uVar19 = puVar3[0xc];
          uVar21 = puVar3[0xe];
          uVar23 = puVar3[0x11];
          uVar22 = puVar3[0x10];
          puVar5[0xf] = puVar3[0xf];
          puVar5[0xe] = uVar21;
          puVar5[0x11] = uVar23;
          puVar5[0x10] = uVar22;
          puVar5[0xb] = uVar18;
          puVar5[10] = uVar17;
          puVar5[0xd] = uVar20;
          puVar5[0xc] = uVar19;
          puVar5[7] = uVar14;
          puVar5[6] = uVar13;
          puVar5[9] = uVar16;
          puVar5[8] = uVar15;
          puVar5[3] = uVar10;
          puVar5[2] = uVar9;
          puVar5[5] = uVar12;
          puVar5[4] = uVar11;
          puVar5[1] = uVar8;
          *puVar5 = uVar7;
        }
        puVar5 = puVar5 + 0x12;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 0x12 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x90);
    }
    puVar3 = param_4 + lVar2 * 0x12;
    puVar4 = puVar3;
    puVar5 = param_2;
    if ((param_1 < param_2) && (0x8f < (long)param_3 - (long)param_2)) {
      do {
        while (puVar6 = param_3 + -0x12, (double)param_2[-1] < (double)puVar3[-1]) {
          puVar5 = param_2 + -0x12;
          if (param_3 != param_2) {
            uVar8 = param_2[-0x11];
            uVar7 = *puVar5;
            uVar10 = param_2[-0xf];
            uVar9 = param_2[-0x10];
            uVar12 = param_2[-0xd];
            uVar11 = param_2[-0xe];
            uVar14 = param_2[-0xb];
            uVar13 = param_2[-0xc];
            uVar16 = param_2[-9];
            uVar15 = param_2[-10];
            uVar18 = param_2[-7];
            uVar17 = param_2[-8];
            uVar20 = param_2[-5];
            uVar19 = param_2[-6];
            uVar21 = param_2[-4];
            uVar23 = param_2[-1];
            uVar22 = param_2[-2];
            param_3[-3] = param_2[-3];
            param_3[-4] = uVar21;
            param_3[-1] = uVar23;
            param_3[-2] = uVar22;
            param_3[-7] = uVar18;
            param_3[-8] = uVar17;
            param_3[-5] = uVar20;
            param_3[-6] = uVar19;
            param_3[-0xb] = uVar14;
            param_3[-0xc] = uVar13;
            param_3[-9] = uVar16;
            param_3[-10] = uVar15;
            param_3[-0xf] = uVar10;
            param_3[-0x10] = uVar9;
            param_3[-0xd] = uVar12;
            param_3[-0xe] = uVar11;
            param_3[-0x11] = uVar8;
            *puVar6 = uVar7;
          }
          puVar4 = puVar3;
          if ((puVar5 <= param_1) || (param_3 = puVar6, param_2 = puVar5, puVar3 <= param_4))
          goto LAB_101051ecc;
        }
        puVar4 = puVar3 + -0x12;
        if (param_3 != puVar3) {
          uVar8 = puVar3[-0x11];
          uVar7 = *puVar4;
          uVar10 = puVar3[-0xf];
          uVar9 = puVar3[-0x10];
          uVar12 = puVar3[-0xd];
          uVar11 = puVar3[-0xe];
          uVar14 = puVar3[-0xb];
          uVar13 = puVar3[-0xc];
          uVar16 = puVar3[-9];
          uVar15 = puVar3[-10];
          uVar18 = puVar3[-7];
          uVar17 = puVar3[-8];
          uVar20 = puVar3[-5];
          uVar19 = puVar3[-6];
          uVar21 = puVar3[-4];
          uVar23 = puVar3[-1];
          uVar22 = puVar3[-2];
          param_3[-3] = puVar3[-3];
          param_3[-4] = uVar21;
          param_3[-1] = uVar23;
          param_3[-2] = uVar22;
          param_3[-7] = uVar18;
          param_3[-8] = uVar17;
          param_3[-5] = uVar20;
          param_3[-6] = uVar19;
          param_3[-0xb] = uVar14;
          param_3[-0xc] = uVar13;
          param_3[-9] = uVar16;
          param_3[-10] = uVar15;
          param_3[-0xf] = uVar10;
          param_3[-0x10] = uVar9;
          param_3[-0xd] = uVar12;
          param_3[-0xe] = uVar11;
          param_3[-0x11] = uVar8;
          *puVar6 = uVar7;
        }
        puVar3 = puVar4;
        puVar5 = param_2;
        param_3 = puVar6;
      } while (param_4 < puVar4);
    }
  }
LAB_101051ecc:
  lVar1 = ((long)puVar4 - (long)param_4) / 0x90;
  if ((puVar5 != param_4) || (param_4 + lVar1 * 0x12 <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,lVar1 * 0x90);
  }
  return 1;
}



/* Entry: 101051f2c; end: 101052097;  */

void FUN_101051f2c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10105200c);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    func_0x000101052630(lVar6,param_4 & 1,0x112d56d80,&UNK_10d91d910);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101051fdc);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010105223c(0x112d56d80,&UNK_10d91d910);
    lVar6 = *unaff_x20;
    goto joined_r0x000101052034;
  }
  lVar6 = *unaff_x20;
joined_r0x000101052034:
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101052098);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101052098; end: 1010520cb;  */

undefined8 FUN_101052098(undefined8 param_1)

{
  FUN_10104d018();
  return param_1;
}



/* Entry: 1010520cc; end: 101052393;  */

void FUN_1010520cc(void)

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
  
  func_0x0001000285a8(0x112d56d78,&UNK_10d91d9b0);
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
    if (uVar8 == 0) goto LAB_1010521a8;
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
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_1010521a8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10105223c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101052214;
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
LAB_101052214:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101052394; end: 1010528bf;  */

void FUN_101052394(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
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
  uVar6 = 0x112d56d78;
  func_0x0001000285a8(0x112d56d78,&UNK_10d91d9b0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1010525fc:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10105262c);
          (*pcVar5)();
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
          goto LAB_1010525fc;
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
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101052630);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
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
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1010528c0; end: 1010528f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010528c0(undefined1 (*param_1) [16])

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_120 [64];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  undefined1 auStack_58 [24];
  
  if (param_1[3][9] != '\x01') {
    pauVar1 = param_1 + 1;
    uVar11 = *(undefined8 *)*pauVar1;
    auVar7 = *pauVar1;
    auVar6 = *pauVar1;
    pauVar1 = param_1 + 2;
    uVar3 = *(undefined8 *)*pauVar1;
    auVar14 = *pauVar1;
    auVar13 = *pauVar1;
    uVar12 = *(undefined8 *)*param_1;
    auVar5 = *param_1;
    auVar4 = *param_1;
    uVar10 = *(undefined8 *)param_1[3];
    bVar2 = param_1[3][8];
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar8 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar8 != 0) {
      auVar15 = NEON_ext(auVar13,auVar14,8,1);
      auVar13 = NEON_ext(auVar6,auVar7,8,1);
      auVar14 = NEON_ext(auVar4,auVar5,8,1);
      uVar9 = *(undefined8 *)(lVar8 + _DAT_112d56da8);
      func_0x000107c6157c(uVar9);
      func_0x000107c61170(lVar8);
      bStack_a8 = bVar2 & 1 | 0x50;
      uStack_98 = *(undefined8 *)(*param_1 + 8);
      uStack_a0 = *(undefined8 *)*param_1;
      uStack_90 = *(undefined8 *)param_1[1];
      uStack_88 = *(undefined8 *)(param_1[1] + 8);
      uStack_80 = *(undefined8 *)param_1[2];
      uStack_78 = (undefined2)*(undefined8 *)(param_1[2] + 8);
      uStack_6e = *(undefined8 *)(param_1[3] + 2);
      uStack_76 = (undefined6)*(undefined8 *)(param_1[2] + 10);
      uStack_70 = (undefined2)((ulong)*(undefined8 *)(param_1[2] + 10) >> 0x30);
      uStack_e0 = uVar12;
      uStack_d8 = auVar14._0_8_;
      uStack_d0 = uVar11;
      uStack_c8 = auVar13._0_8_;
      uStack_c0 = uVar3;
      uStack_b8 = auVar15._0_8_;
      uStack_b0 = uVar10;
      func_0x0001010542e0(&uStack_a0,auStack_120);
      func_0x0001002a64a8(&uStack_e0);
      func_0x000107c61574(uVar9);
      FUN_101052098(&uStack_e0);
    }
  }
  return;
}



/* Entry: 1010528f8; end: 101052a2f;  */

long FUN_1010528f8(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_170 [144];
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
  
  lVar2 = *(long *)(param_4 + 0x10);
  lVar3 = lVar2;
  if (param_2 == (undefined8 *)0x0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101052a30);
      (*pcVar1)();
    }
    if (lVar2 == 0) {
      lVar3 = 0;
      param_3 = lVar2;
    }
    else {
      lVar3 = 0;
      puVar4 = (undefined8 *)(param_4 + lVar2 * 0x90 + -0x70);
      do {
        if (*(long *)(param_4 + 0x10) < lVar2 + lVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101052a20);
          (*pcVar1)();
        }
        uVar8 = puVar4[0xb];
        uVar7 = puVar4[10];
        uStack_78 = puVar4[0xd];
        uStack_80 = puVar4[0xc];
        uVar11 = puVar4[0xd];
        uVar10 = puVar4[0xc];
        uStack_68 = puVar4[0xf];
        uStack_70 = puVar4[0xe];
        uVar9 = puVar4[0xe];
        uStack_58 = puVar4[0x11];
        uStack_60 = puVar4[0x10];
        uVar13 = puVar4[3];
        uVar12 = puVar4[2];
        uStack_b8 = puVar4[5];
        uStack_c0 = puVar4[4];
        uVar17 = puVar4[5];
        uVar16 = puVar4[4];
        uStack_a8 = puVar4[7];
        uStack_b0 = puVar4[6];
        uVar15 = puVar4[7];
        uVar14 = puVar4[6];
        uStack_98 = puVar4[9];
        uStack_a0 = puVar4[8];
        uVar19 = puVar4[9];
        uVar18 = puVar4[8];
        uStack_88 = puVar4[0xb];
        uStack_90 = puVar4[10];
        uStack_d8 = puVar4[1];
        uStack_e0 = *puVar4;
        uStack_c8 = puVar4[3];
        uStack_d0 = puVar4[2];
        uVar21 = puVar4[1];
        uVar20 = *puVar4;
        uVar6 = puVar4[0x11];
        uVar5 = puVar4[0x10];
        param_2[0xf] = puVar4[0xf];
        param_2[0xe] = uVar9;
        param_2[0x11] = uVar6;
        param_2[0x10] = uVar5;
        param_2[0xb] = uVar8;
        param_2[10] = uVar7;
        param_2[0xd] = uVar11;
        param_2[0xc] = uVar10;
        param_2[7] = uVar15;
        param_2[6] = uVar14;
        param_2[9] = uVar19;
        param_2[8] = uVar18;
        param_2[3] = uVar13;
        param_2[2] = uVar12;
        param_2[5] = uVar17;
        param_2[4] = uVar16;
        param_2[1] = uVar21;
        *param_2 = uVar20;
        if (param_3 + lVar3 == 1) {
          func_0x000101054270(&uStack_e0,auStack_170);
          lVar3 = lVar2 + lVar3 + -1;
          goto LAB_1010529f8;
        }
        func_0x000101054270(&uStack_e0,auStack_170);
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + -0x12;
        param_2 = param_2 + 0x12;
      } while (lVar2 + lVar3 != 0);
      lVar3 = 0;
      param_3 = lVar2;
    }
  }
LAB_1010529f8:
  *param_1 = param_4;
  param_1[1] = lVar3;
  return param_3;
}



/* Entry: 101052a30; end: 101052a4b;  */

void FUN_101052a30(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101052a4c; end: 101052d67;  */

ulong FUN_101052a4c(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_78;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    uVar1 = param_1 & 0xc000000000000001;
    if (uVar1 == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101052d68);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = 0;
      FUN_101059128(0,param_1);
    }
    uVar4 = uVar3;
    func_0x000107c5b8d0();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 != 0) {
      uStack_78 = uVar4;
      func_0x000107c3ebec();
      uVar10 = param_1 & 0xffffffffffffff8;
      uVar3 = 0;
      do {
        while( true ) {
          if (uVar1 == 0) {
            if (*(ulong *)(uVar10 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101052cf4);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(param_1 + uVar3 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar3;
            FUN_101059128(uVar3,param_1);
          }
          uVar8 = uVar3 + 1;
          if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101052ce8);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c5b8d0();
          func_0x000107c61180();
          if (uVar6 != 0) break;
          func_0x000107c61170(uVar5);
          uVar3 = uVar3 + 1;
          if (uVar8 == uVar9) goto LAB_101052b7c;
        }
        uVar7 = uVar6;
        func_0x000107c3ebec();
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
        if ((long)uVar7 <= (long)uStack_78) {
          uVar7 = uStack_78;
        }
        uVar3 = uVar8;
        uStack_78 = uVar7;
      } while (uVar8 != uVar9);
LAB_101052b7c:
      uVar3 = uVar4;
      func_0x000107c5a94c();
      uVar5 = 0;
      do {
        while( true ) {
          if (uVar1 == 0) {
            if (*(ulong *)(uVar10 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101052cf8);
              (*pcVar2)();
            }
            uVar8 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar5;
            FUN_101059128(uVar5,param_1);
          }
          uVar6 = uVar5 + 1;
          if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101052cec);
            (*pcVar2)();
          }
          uVar7 = uVar8;
          func_0x000107c5b8d0();
          func_0x000107c61180();
          if (uVar7 != 0) break;
          func_0x000107c61170(uVar8);
          uVar5 = uVar5 + 1;
          if (uVar6 == uVar9) goto LAB_101052c20;
        }
        uVar5 = uVar7;
        func_0x000107c5a94c();
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar7);
        if ((long)uVar5 <= (long)uVar3) {
          uVar5 = uVar3;
        }
        uVar3 = uVar5;
        uVar5 = uVar6;
      } while (uVar6 != uVar9);
LAB_101052c20:
      uVar3 = uVar4;
      func_0x000107c5de98();
      uVar5 = 0;
      do {
        while( true ) {
          if (uVar1 == 0) {
            if (*(ulong *)(uVar10 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101052cfc);
              (*pcVar2)();
            }
            uVar8 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar5;
            FUN_101059128(uVar5,param_1);
          }
          uVar6 = uVar5 + 1;
          if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101052cf0);
            (*pcVar2)();
          }
          uVar7 = uVar8;
          func_0x000107c5b8d0();
          func_0x000107c61180();
          if (uVar7 != 0) break;
          func_0x000107c61170(uVar8);
          uVar5 = uVar5 + 1;
          if (uVar6 == uVar9) goto LAB_101052cc4;
        }
        uVar5 = uVar7;
        func_0x000107c5de98();
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar7);
        if ((long)uVar5 <= (long)uVar3) {
          uVar5 = uVar3;
        }
        uVar3 = uVar5;
        uVar5 = uVar6;
      } while (uVar6 != uVar9);
LAB_101052cc4:
      func_0x000107c5ca68(uVar4);
      func_0x000107c61170(uVar4);
      return uStack_78;
    }
  }
  return 0;
}



/* Entry: 101052d68; end: 101052e27;  */

/* WARNING: Removing unreachable block (ram,0x0001010541f8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ******* FUN_101052d68(undefined8 param_1,code *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  undefined8 *******pppppppuVar24;
  undefined8 ******ppppppuVar25;
  char *pcVar26;
  undefined8 *******pppppppuVar27;
  undefined8 *******pppppppuVar28;
  undefined8 *****pppppuVar29;
  long lVar30;
  ulong uVar31;
  undefined8 *******pppppppuVar32;
  undefined8 *******pppppppuVar33;
  undefined8 *******unaff_x20;
  undefined8 *******pppppppuVar34;
  undefined8 *****pppppuVar35;
  undefined8 *******pppppppuVar36;
  undefined8 *******pppppppuVar37;
  undefined8 *******pppppppuVar38;
  undefined8 *******pppppppuVar39;
  undefined8 *******pppppppuVar40;
  undefined8 *******pppppppuVar41;
  undefined8 *******pppppppuStack_3a0;
  undefined8 *******pppppppuStack_388;
  undefined8 *******pppppppuStack_380;
  undefined8 *******pppppppuStack_378;
  undefined8 *******pppppppuStack_370;
  undefined8 *******pppppppuStack_368;
  undefined8 ******ppppppuStack_320;
  undefined8 *******pppppppuStack_310;
  undefined8 *******pppppppuStack_308;
  undefined8 *******pppppppuStack_300;
  undefined8 *******pppppppuStack_2b8;
  ulong uStack_2a0;
  undefined8 *******pppppppuStack_280;
  undefined8 *******pppppppuStack_278;
  undefined8 *******pppppppuStack_270;
  undefined8 *******pppppppuStack_268;
  undefined8 ******ppppppuStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined8 *******pppppppuStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined8 *******pppppppuStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined8 *******pppppppuStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******pppppppuStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined8 *******pppppppuStack_198;
  byte bStack_190;
  byte bStack_18f;
  undefined6 uStack_18e;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  undefined8 *****pppppuStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 *******pppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *******pppppppuStack_150;
  undefined8 *******pppppppuStack_148;
  undefined8 *******pppppppuStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined6 uStack_126;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  byte bStack_100;
  byte bStack_ff;
  undefined8 *******pppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *******apppppppuStack_c8 [3];
  
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  pppppppuVar3 = (undefined8 *******)0x0;
  if (unaff_x20 == (undefined8 *******)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  if (pppppppuVar3 == (undefined8 *******)0x0) {
    return (undefined8 *******)0x0;
  }
  func_0x000107c61174();
  pppppppuVar4 = pppppppuVar3;
  func_0x000107c5bf84();
  func_0x000107c61180();
  if (pppppppuVar4 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541cc);
    (*pcVar2)();
  }
  pppppppuVar5 = pppppppuVar4;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(pppppppuVar4);
  if (pppppppuVar5 == (undefined8 *******)0x0) {
    pppppppuStack_1e8 = (undefined8 *******)0x0;
    pppppppuStack_1f0 = (undefined8 *******)0x0;
    pppppppuStack_1d8 = (undefined8 *******)0x0;
    pppppppuStack_1e0 = (undefined8 *******)0x0;
  }
  else {
    func_0x000107c60234(&pppppppuStack_1f0,pppppppuVar5);
    func_0x000107c615e8(pppppppuVar5);
  }
  pppppppuStack_158 = pppppppuStack_1e8;
  pppppppuStack_160 = pppppppuStack_1f0;
  pppppppuStack_148 = pppppppuStack_1d8;
  pppppppuStack_150 = pppppppuStack_1e0;
  if (pppppppuStack_1d8 == (undefined8 *******)0x0) {
    func_0x000107c61170(pppppppuVar3);
    pppppppuVar3 = &pppppppuStack_160;
    FUN_101054370(pppppppuVar3,0x112d387f8,&UNK_10d902650);
    return pppppppuVar3;
  }
  uVar6 = 0;
  func_0x000101054230(0,0x112d56e38,&PTR_PTR_1126b7600);
  pppppppuVar4 = &pppppppuStack_280;
  func_0x000107c6147c(pppppppuVar4,&pppppppuStack_160,PTR___sypN_11034f1a8 + 8,uVar6,6);
  pppppppuVar5 = pppppppuStack_280;
  if (((ulong)pppppppuVar4 & 1) != 0) {
    pppppppuVar4 = pppppppuStack_280;
    func_0x000107c449f8();
    if ((int)pppppppuVar4 == 0) {
      func_0x000107c61170(pppppppuVar3);
      pppppppuVar3 = pppppppuStack_280;
      goto LAB_101053174;
    }
    pppppppuVar4 = pppppppuStack_280;
    func_0x000107c4e064();
    func_0x000107c61180();
    if (pppppppuVar4 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541d8);
      (*pcVar2)();
    }
    pppppppuVar40 = pppppppuVar4;
    func_0x000107c3f654();
    func_0x000107c61180();
    func_0x000107c61170(pppppppuVar4);
    if (pppppppuVar40 != (undefined8 *******)0x0) {
      pppppppuStack_160 = (undefined8 *******)0x0;
      uVar6 = 0;
      func_0x000101054230(0,0x112d56e40,&PTR_PTR_1126b0ef0);
      func_0x000107c5fc50(pppppppuVar40,&pppppppuStack_160,uVar6);
      func_0x000107c61170(pppppppuVar40);
      pppppppuVar4 = pppppppuStack_160;
      if (pppppppuStack_160 != (undefined8 *******)0x0) {
        pppppppuVar40 = (undefined8 *******)((ulong)pppppppuStack_160 & 0xffffffffffffff8);
        if ((ulong)pppppppuStack_160 >> 0x3e == 0) {
          pppppppuVar34 = (undefined8 *******)pppppppuVar40[2];
        }
        else {
          pppppppuVar34 = pppppppuStack_160;
          if (-1 < (long)pppppppuStack_160) {
            pppppppuVar34 = pppppppuVar40;
          }
          func_0x000107c60480();
        }
        if (pppppppuVar34 == (undefined8 *******)0x0) {
          func_0x000107c61170(pppppppuVar3);
          func_0x000107c61170(pppppppuStack_280);
          func_0x000107c6142c(pppppppuVar4);
          return pppppppuVar4;
        }
        pppppppuVar36 = (undefined8 *******)0x0;
        do {
          if (((ulong)pppppppuVar4 & 0xc000000000000001) == 0) {
            if (pppppppuVar40[2] <= pppppppuVar36) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101053f9c);
              (*pcVar2)();
            }
            pppppppuVar7 = (undefined8 *******)pppppppuVar4[(long)((long)pppppppuVar36 + 4)];
            func_0x000107c61174();
          }
          else {
            pppppppuVar7 = pppppppuVar36;
            FUN_10105930c(pppppppuVar36,pppppppuVar4);
          }
          if (SCARRY8((long)pppppppuVar36,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101053020);
            (*pcVar2)();
          }
          pppppppuVar32 = (undefined8 *******)((long)pppppppuVar36 + 1);
          pppppppuVar8 = pppppppuVar7;
          func_0x000107c4004c();
          func_0x000107c61180();
          if (pppppppuVar8 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541d4);
            (*pcVar2)();
          }
          pppppppuVar38 = pppppppuVar8;
          func_0x000107c4a14c();
          func_0x000107c61170(pppppppuVar8);
          if (((ulong)pppppppuVar38 & 1) != 0) goto LAB_10105306c;
          func_0x000107c61170(pppppppuVar7);
          pppppppuVar36 = (undefined8 *******)((long)pppppppuVar36 + 1);
        } while (pppppppuVar32 != pppppppuVar34);
        if (((ulong)pppppppuVar4 & 0xc000000000000001) == 0) {
          if (pppppppuVar40[2] == (undefined8 ******)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101053ff8);
            (*pcVar2)();
          }
          pppppppuVar7 = (undefined8 *******)pppppppuVar4[4];
          func_0x000107c61174();
        }
        else {
          pppppppuVar7 = (undefined8 *******)0x0;
          FUN_10105930c(0,pppppppuVar4);
        }
LAB_10105306c:
        func_0x000107c6142c(pppppppuVar4);
        pppppppuVar4 = pppppppuVar7;
        func_0x000107c5daa8();
        func_0x000107c61180();
        if (pppppppuVar4 == (undefined8 *******)0x0) {
          func_0x000107c61170(pppppppuVar3);
          func_0x000107c61170(pppppppuStack_280);
          pppppppuVar3 = pppppppuVar7;
          goto LAB_101053174;
        }
        pppppppuVar40 = pppppppuVar4;
        func_0x000107c5b53c();
        func_0x000107c61180();
        if (pppppppuVar40 != (undefined8 *******)0x0) {
          pppppppuStack_160 = (undefined8 *******)0x0;
          uVar6 = 0;
          func_0x000101054230(0,0x112d56e48,&PTR_PTR_1126b7678);
          pppppppuVar34 = &pppppppuStack_160;
          func_0x000107c5fc50(pppppppuVar40,pppppppuVar34,uVar6);
          func_0x000107c61170(pppppppuVar40);
          pppppppuVar40 = pppppppuStack_160;
          if (pppppppuStack_160 != (undefined8 *******)0x0) {
            pppppppuVar36 = pppppppuVar7;
            func_0x000107c5bfec();
            func_0x000107c61180();
            if (pppppppuVar36 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541dc);
              (*pcVar2)();
            }
            pppppppuVar8 = pppppppuVar36;
            func_0x000107c5faec();
            pppppppuStack_310 = pppppppuVar34;
            func_0x000107c61170(pppppppuVar36);
            pppppppuVar36 = pppppppuVar7;
            func_0x000107c4004c();
            func_0x000107c61180();
            pcVar26 = (char *)pppppppuStack_310;
            if (pppppppuVar36 != (undefined8 *******)0x0) {
              pppppppuVar32 = pppppppuVar36;
              func_0x000107c44fd8();
              func_0x000107c61180();
              func_0x000107c61170(pppppppuVar36);
              pcVar26 = (char *)pppppppuStack_310;
              if (pppppppuVar32 != (undefined8 *******)0x0) {
                pppppppuStack_308 = pppppppuVar32;
                func_0x000107c5faec();
                pcVar26 = (char *)pppppppuStack_310;
                func_0x000107c61170(pppppppuVar32);
                goto LAB_1010531bc;
              }
            }
            pppppppuStack_310 = (undefined8 *******)0xe000000000000000;
            pppppppuStack_308 = (undefined8 *******)0x0;
LAB_1010531bc:
            pppppuStack_d0 = (undefined8 *****)PTR___swiftEmptySetSingleton_11034f1d8;
            apppppppuStack_c8[0] = (undefined8 *******)PTR___swiftEmptySetSingleton_11034f1d8;
            pppppppuVar36 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x0001001830b8();
            pppppppuVar32 = (undefined8 *******)((ulong)pppppppuVar40 & 0xffffffffffffff8);
            if ((ulong)pppppppuVar40 >> 0x3e == 0) {
              pppppppuVar38 = (undefined8 *******)pppppppuVar32[2];
            }
            else {
              pppppppuVar38 = pppppppuVar40;
              if (-1 < (long)pppppppuVar40) {
                pppppppuVar38 = pppppppuVar32;
              }
              func_0x000107c60480();
            }
            pppppppuVar17 = (undefined8 *******)pcVar26;
            if (pppppppuVar38 != (undefined8 *******)0x0) {
              pppppppuVar37 = (undefined8 *******)0x0;
              do {
                while( true ) {
                  if (((ulong)pppppppuVar40 & 0xc000000000000001) == 0) {
                    if (pppppppuVar32[2] <= pppppppuVar37) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x101053fa4);
                      (*pcVar2)();
                    }
                    pppppppuVar9 = (undefined8 *******)
                                   pppppppuVar40[(long)((long)pppppppuVar37 + 4)];
                    func_0x000107c61174();
                    pppppppuVar17 = (undefined8 *******)pcVar26;
                  }
                  else {
                    pppppppuVar9 = pppppppuVar37;
                    pppppppuVar17 = pppppppuVar40;
                    func_0x00010105913c();
                  }
                  pppppppuVar27 = (undefined8 *******)((long)pppppppuVar37 + 1);
                  if (SCARRY8((long)pppppppuVar37,1)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101053fa0);
                    (*pcVar2)();
                  }
                  pppppppuVar18 = pppppppuVar9;
                  func_0x000107c4f914();
                  func_0x000107c61180();
                  if (pppppppuVar18 != (undefined8 *******)0x0) break;
                  func_0x000107c61170(pppppppuVar9);
                  pcVar26 = (char *)pppppppuVar17;
                  pppppppuVar37 = (undefined8 *******)((long)pppppppuVar37 + 1);
                  if (pppppppuVar27 == pppppppuVar38) goto LAB_1010534d8;
                }
                pppppppuVar37 = pppppppuVar18;
                func_0x000107c5faec();
                pppppppuVar13 = pppppppuVar17;
                func_0x000107c61170(pppppppuVar18);
                pppppppuVar18 = pppppppuVar9;
                func_0x000107c42c98();
                func_0x000107c61180();
                if (pppppppuVar18 != (undefined8 *******)0x0) {
                  pppppppuVar10 = pppppppuVar18;
                  func_0x000107c5faec();
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c61434(pppppppuVar17);
                  pppppppuVar18 = pppppppuVar36;
                  func_0x000107c61558(pppppppuVar36);
                  pppppppuStack_160 = pppppppuVar36;
                  func_0x00010018433c(pppppppuVar10,pppppppuVar13,pppppppuVar37,pppppppuVar17,
                                      pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar17);
                  pppppppuVar36 = pppppppuStack_160;
                }
                pppppppuVar18 = pppppppuVar9;
                func_0x000107c4e0f0();
                func_0x000107c61180();
                if (pppppppuVar18 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541e8);
                  (*pcVar2)();
                }
                puVar11 = &UNK_11037a7e0;
                func_0x000107c613fc(&UNK_11037a7e0,0x28,7);
                *(undefined8 *********)(puVar11 + 0x10) = apppppppuStack_c8;
                *(undefined8 ********)(puVar11 + 0x18) = pppppppuVar37;
                *(undefined8 ********)(puVar11 + 0x20) = pppppppuVar17;
                puVar12 = &UNK_11037a808;
                func_0x000107c613fc(&UNK_11037a808,0x20,7);
                *(code **)(puVar12 + 0x10) = FUN_101054204;
                *(undefined **)(puVar12 + 0x18) = puVar11;
                pppppppuStack_140 = (undefined8 *******)0x101054210;
                uStack_138 = SUB81(puVar12,0);
                uStack_137 = (undefined7)((ulong)puVar12 >> 8);
                pppppppuStack_160 = (undefined8 *******)PTR___NSConcreteStackBlock_11034bd00;
                pppppppuStack_158 = (undefined8 *******)0x42000000;
                pppppppuStack_150 = (undefined8 *******)FUN_10104fffc;
                pppppppuStack_148 = (undefined8 *******)&UNK_11037a820;
                pppppppuVar13 = &pppppppuStack_160;
                func_0x000107c60bc4(pppppppuVar13);
                uVar6 = CONCAT71(uStack_137,uStack_138);
                func_0x000107c61434(pppppppuVar17);
                func_0x000107c6157c(puVar12);
                func_0x000107c61574(uVar6);
                func_0x000107c429d8(pppppppuVar18);
                func_0x000107c60bd0(pppppppuVar13);
                func_0x000107c61170(pppppppuVar18);
                pcVar26 = "";
                puVar14 = puVar12;
                func_0x000107c61544(puVar12,"",0x7e,0x1e8,0x41,1);
                func_0x000107c61574(puVar12);
                if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541c0);
                  (*pcVar2)();
                }
                pppppppuVar18 = pppppppuVar9;
                func_0x000107c40484();
                func_0x000107c61180();
                if (pppppppuVar18 == (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar9);
                  func_0x000107c61574(puVar11);
                  func_0x000107c6142c(pppppppuVar17);
                }
                else {
                  pppppppuVar13 = pppppppuVar18;
                  func_0x000107c5bd00();
                  if ((int)pppppppuVar13 == 2) {
                    func_0x000100403b00(&pppppppuStack_160,pppppppuVar37,pppppppuVar17);
                    func_0x000107c61170(pppppppuVar18);
                    pppppppuVar17 = pppppppuStack_158;
                    func_0x000107c61170(pppppppuVar9);
                    func_0x000107c61574(puVar11);
                    pcVar26 = (char *)pppppppuVar37;
                  }
                  else {
                    func_0x000107c61170(pppppppuVar9);
                    func_0x000107c61574(puVar11);
                    func_0x000107c61170(pppppppuVar18);
                  }
                  func_0x000107c6142c(pppppppuVar17);
                }
                pppppppuVar17 = (undefined8 *******)pcVar26;
                pppppppuVar37 = pppppppuVar27;
              } while (pppppppuVar27 != pppppppuVar38);
            }
LAB_1010534d8:
            pppppppuStack_300 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x0001001830b8();
            if (pppppppuVar38 != (undefined8 *******)0x0) {
              pppppppuVar37 = (undefined8 *******)0x0;
              do {
                while( true ) {
                  if (((ulong)pppppppuVar40 & 0xc000000000000001) == 0) {
                    if (pppppppuVar32[2] <= pppppppuVar37) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x101053fac);
                      (*pcVar2)();
                    }
                    pppppppuVar9 = (undefined8 *******)
                                   pppppppuVar40[(long)((long)pppppppuVar37 + 4)];
                    func_0x000107c61174();
                    pppppppuVar27 = pppppppuVar17;
                  }
                  else {
                    pppppppuVar9 = pppppppuVar37;
                    pppppppuVar27 = pppppppuVar40;
                    func_0x00010105913c();
                  }
                  pppppppuVar18 = (undefined8 *******)((long)pppppppuVar37 + 1);
                  if (SCARRY8((long)pppppppuVar37,1)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101053fa8);
                    (*pcVar2)();
                  }
                  pppppppuVar17 = pppppppuVar9;
                  func_0x000107c4f914();
                  func_0x000107c61180();
                  pppppppuVar13 = pppppppuVar27;
                  if (pppppppuVar17 != (undefined8 *******)0x0) break;
LAB_1010534fc:
                  func_0x000107c61170(pppppppuVar9);
                  pppppppuVar17 = pppppppuVar13;
                  pppppppuVar37 = (undefined8 *******)((long)pppppppuVar37 + 1);
                  if (pppppppuVar18 == pppppppuVar38) goto LAB_101053718;
                }
                pppppppuVar10 = pppppppuVar17;
                func_0x000107c5faec();
                pppppppuVar13 = pppppppuVar27;
                func_0x000107c61170(pppppppuVar17);
                pppppppuVar17 = pppppppuVar9;
                func_0x000107c4e0bc();
                func_0x000107c61180();
                if (pppppppuVar17 == (undefined8 *******)0x0) {
                  func_0x000107c6142c(pppppppuVar27);
                  goto LAB_1010534fc;
                }
                pppppppuVar37 = pppppppuVar17;
                func_0x000107c5faec();
                func_0x000107c61170(pppppppuVar17);
                pppppppuVar15 = pppppppuStack_300;
                func_0x000107c61558();
                pppppppuStack_160 = pppppppuStack_300;
                pppppppuVar16 = pppppppuVar10;
                pppppppuVar17 = pppppppuVar27;
                func_0x000100029284();
                uVar31 = (ulong)~(uint)pppppppuVar17 & 1;
                lVar30 = (long)pppppppuStack_300[2] + uVar31;
                if (SCARRY8((long)pppppppuStack_300[2],uVar31)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541c4);
                  (*pcVar2)();
                }
                if ((long)pppppppuStack_300[3] < lVar30) {
                  func_0x0001001833c8(lVar30,pppppppuVar15);
                  pppppppuVar16 = pppppppuVar10;
                  pppppppuVar15 = pppppppuVar27;
                  func_0x000100029284();
                  if (((uint)pppppppuVar17 & 1) != ((uint)pppppppuVar15 & 1)) {
                    func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541f8);
                    (*pcVar2)();
                  }
                }
                else if (((ulong)pppppppuVar15 & 1) == 0) {
                  func_0x000100184498();
                }
                pppppppuVar15 = pppppppuStack_160;
                pppppppuStack_300 = pppppppuStack_160;
                if (((ulong)pppppppuVar17 & 1) == 0) {
                  pppppppuStack_160[((ulong)pppppppuVar16 >> 6) + 8] =
                       (undefined8 ******)
                       ((ulong)pppppppuStack_160[((ulong)pppppppuVar16 >> 6) + 8] |
                       1L << ((ulong)pppppppuVar16 & 0x3f));
                  ppppppuVar25 = pppppppuStack_160[6];
                  ppppppuVar25[(long)pppppppuVar16 * 2] = pppppppuVar10;
                  (ppppppuVar25 + (long)pppppppuVar16 * 2)[1] = pppppppuVar27;
                  ppppppuVar25 = pppppppuStack_160[7];
                  ppppppuVar25[(long)pppppppuVar16 * 2] = pppppppuVar37;
                  (ppppppuVar25 + (long)pppppppuVar16 * 2)[1] = pppppppuVar13;
                  func_0x000107c61170(pppppppuVar9);
                  ppppppuVar25 = pppppppuVar15[2];
                  if (SCARRY8((long)ppppppuVar25,1)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541d0);
                    (*pcVar2)();
                  }
                  pppppppuVar15[2] = (undefined8 ******)((long)ppppppuVar25 + 1);
                }
                else {
                  ppppppuVar25 = pppppppuStack_160[7] + (long)pppppppuVar16 * 2;
                  pppppuVar35 = ppppppuVar25[1];
                  *ppppppuVar25 = pppppppuVar37;
                  ppppppuVar25[1] = pppppppuVar13;
                  func_0x000107c6142c(pppppppuVar27);
                  func_0x000107c61170(pppppppuVar9);
                  func_0x000107c6142c(pppppuVar35);
                }
                pppppppuVar37 = pppppppuVar18;
              } while (pppppppuVar18 != pppppppuVar38);
            }
LAB_101053718:
            func_0x000107c6142c(pppppppuVar40);
            pppppppuVar40 = pppppppuStack_308;
            func_0x000107c5fadc(pppppppuStack_308,pppppppuStack_310);
            uVar6 = *(undefined8 *)((long)unaff_x20 + _DAT_112d56df0);
            func_0x000107c4f38c(uVar6);
            func_0x000107c61180();
            pppppppuVar32 = pppppppuVar4;
            func_0x000108f0b9b8(pppppppuVar4,pppppppuVar40,uVar6);
            func_0x000107c61180();
            func_0x000107c61170(pppppppuVar40);
            func_0x000107c61170(uVar6);
            pppppppuVar17 = (undefined8 *******)0x0;
            func_0x000101054230(0,0x112d56e50,&PTR_PTR_1126cc4e0);
            pppppppuVar38 = pppppppuVar32;
            pppppppuVar40 = pppppppuVar17;
            func_0x000107c5fc54();
            func_0x000107c61170(pppppppuVar32);
            pppppppuVar32 = pppppppuVar38;
            FUN_10104d670();
            if ((ulong)pppppppuVar38 >> 0x3e == 0) {
              pppppppuVar37 =
                   *(undefined8 ********)(((ulong)pppppppuVar38 & 0xffffffffffffff8) + 0x10);
              lVar30 = _DAT_112d56de0;
              lVar1 = _DAT_112d56de8;
            }
            else {
              pppppppuVar37 = (undefined8 *******)((ulong)pppppppuVar38 & 0xffffffffffffff8);
              if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar38) {
                pppppppuVar37 = pppppppuVar38;
              }
              func_0x000107c60480();
              lVar30 = _DAT_112d56de0;
              lVar1 = _DAT_112d56de8;
            }
            _DAT_112d56de0 = lVar30;
            _DAT_112d56de8 = lVar1;
            ppppppuStack_320 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
            if (pppppppuVar37 != (undefined8 *******)0x0) {
              uStack_2a0 = (ulong)pppppppuVar38 & 0xffffffffffffff8;
              pppppppuStack_3a0 = (undefined8 *******)0x1;
              pppppppuVar9 = (undefined8 *******)0x0;
              pppppppuVar27 = (undefined8 *******)0x1;
              do {
                while( true ) {
                  if (((ulong)pppppppuVar38 & 0xc000000000000001) == 0) {
                    if (*(undefined8 ********)(uStack_2a0 + 0x10) <= pppppppuVar9) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x101053fb4);
                      (*pcVar2)();
                    }
                    pppppppuVar18 =
                         (undefined8 *******)pppppppuVar38[(long)((long)pppppppuVar9 + 4)];
                    func_0x000107c61174();
                  }
                  else {
                    pppppppuVar18 = pppppppuVar9;
                    pppppppuVar40 = pppppppuVar38;
                    FUN_101059128();
                  }
                  pppppppuVar13 = (undefined8 *******)((long)pppppppuVar9 + 1);
                  if (SCARRY8((long)pppppppuVar9,1)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101053fb0);
                    (*pcVar2)();
                  }
                  pppppppuVar10 = pppppppuVar18;
                  func_0x000107c51fa4();
                  func_0x000107c61180();
                  if (pppppppuVar10 != (undefined8 *******)0x0) break;
                  func_0x000107c61170(pppppppuVar18);
LAB_101053820:
                  pppppppuVar9 = (undefined8 *******)((long)pppppppuVar9 + 1);
                  if (pppppppuVar13 == pppppppuVar37) goto LAB_101054034;
                }
                pppppppuVar15 = pppppppuVar10;
                func_0x000107c5faec();
                pppppppuVar16 = pppppppuVar40;
                func_0x000107c61170(pppppppuVar10);
                pppppppuVar10 = pppppppuVar18;
                func_0x000107c3fb8c();
                func_0x000107c61180();
                if (pppppppuVar10 == (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar40);
                  pppppppuVar40 = pppppppuVar16;
                  goto LAB_101053820;
                }
                pppppppuVar19 = pppppppuVar10;
                func_0x000107c5faec();
                pppppppuVar33 = *(undefined8 ********)((long)unaff_x20 + lVar30);
                pppppppuVar20 = pppppppuVar33;
                pppppppuVar24 = pppppppuVar16;
                func_0x000107c5b068();
                func_0x000107c61180();
                if (pppppppuVar20 != (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar16);
                  func_0x000107c6142c(pppppppuVar40);
                  func_0x000107c61170(pppppppuVar10);
                  pppppppuVar10 = pppppppuVar20;
LAB_1010539f4:
                  func_0x000107c61170(pppppppuVar10);
                  pppppppuVar40 = pppppppuVar24;
                  goto LAB_101053820;
                }
                pppppppuVar20 = pppppppuVar18;
                func_0x000107c5c910();
                func_0x000107c61180();
                if (pppppppuVar20 == (undefined8 *******)0x0) {
LAB_1010539dc:
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar40);
                  func_0x000107c6142c(pppppppuVar16);
                  goto LAB_1010539f4;
                }
                pppppppuVar21 = pppppppuVar20;
                func_0x000107d227d0();
                func_0x000107c61180();
                if (pppppppuVar21 == (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar18);
                  pppppppuVar18 = pppppppuVar20;
                  goto LAB_1010539dc;
                }
                pppppppuVar39 = pppppppuVar18;
                func_0x000107c5c9d4();
                func_0x000107c61180();
                if (pppppppuVar39 == (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar16);
                  func_0x000107c6142c(pppppppuVar40);
                  func_0x000107c61170(pppppppuVar21);
                  func_0x000107c61170(pppppppuVar20);
                  goto LAB_1010539f4;
                }
                func_0x000107c5ca64();
                pppppppuVar41 = pppppppuVar27;
                func_0x000107c61170(pppppppuVar39);
                if (pppppppuVar36[2] == (undefined8 ******)0x0) {
LAB_101053a3c:
                  func_0x000107c61434(pppppppuVar40);
                  pppppppuStack_378 = pppppppuVar15;
                  pppppppuStack_368 = pppppppuVar40;
                }
                else {
                  func_0x000107c61434(pppppppuVar36);
                  pppppppuVar39 = pppppppuVar15;
                  pppppppuVar24 = pppppppuVar40;
                  func_0x000100029284();
                  if (((ulong)pppppppuVar24 & 1) == 0) {
                    func_0x000107c6142c(pppppppuVar36);
                    goto LAB_101053a3c;
                  }
                  pppppppuStack_378 = (undefined8 *******)pppppppuVar36[7][(long)pppppppuVar39 * 2];
                  pppppppuStack_368 =
                       (undefined8 *******)(pppppppuVar36[7] + (long)pppppppuVar39 * 2)[1];
                  func_0x000107c61434();
                  func_0x000107c6142c(pppppppuVar36);
                }
                if (pppppppuStack_300[2] == (undefined8 ******)0x0) {
LAB_101053aac:
                  func_0x000107c61434(pppppppuVar40);
                  pppppppuStack_380 = pppppppuVar15;
                  pppppppuStack_370 = pppppppuVar40;
                }
                else {
                  func_0x000107c61434(pppppppuStack_300);
                  pppppppuVar39 = pppppppuVar15;
                  pppppppuVar24 = pppppppuVar40;
                  func_0x000100029284();
                  if (((ulong)pppppppuVar24 & 1) == 0) {
                    func_0x000107c6142c(pppppppuStack_300);
                    goto LAB_101053aac;
                  }
                  pppppppuStack_380 =
                       (undefined8 *******)pppppppuStack_300[7][(long)pppppppuVar39 * 2];
                  pppppppuStack_370 =
                       (undefined8 *******)(pppppppuStack_300[7] + (long)pppppppuVar39 * 2)[1];
                  func_0x000107c61434();
                  func_0x000107c6142c(pppppppuStack_300);
                }
                pppppppuVar39 = pppppppuVar18;
                func_0x000107c4d1b8();
                func_0x000107c61180();
                if (pppppppuVar39 == (undefined8 *******)0x0) {
LAB_101053ce0:
                  func_0x000101064d4c();
                  func_0x000107c613fc();
                  pppppppuVar39[3] = (undefined8 ******)0x3;
                  pppppppuVar39[2] = (undefined8 ******)0x1;
                  pppppppuVar39[4] = pppppppuVar18;
                  pppppppuVar41 = pppppppuStack_3a0;
                  func_0x000107c61174(pppppppuVar18);
                }
                else {
                  pppppppuVar22 = pppppppuVar39;
                  func_0x000107c3ee04();
                  func_0x000107c61180();
                  func_0x000107c61170();
                  if (pppppppuVar22 == (undefined8 *******)0x0) goto LAB_101053ce0;
                  pppppppuVar23 = pppppppuVar22;
                  func_0x000107c5faec();
                  func_0x000107c61170(pppppppuVar22);
                  pppppppuVar39 = pppppppuVar24;
                  if (pppppppuVar32[2] == (undefined8 ******)0x0) {
LAB_101053cd8:
                    func_0x000107c6142c();
                    goto LAB_101053ce0;
                  }
                  func_0x000107c61434(pppppppuVar32);
                  func_0x000100029284();
                  if (((ulong)pppppppuVar39 & 1) == 0) {
                    func_0x000107c6142c(pppppppuVar24);
                    pppppppuVar39 = pppppppuVar32;
                    goto LAB_101053cd8;
                  }
                  pppppppuVar39 = (undefined8 *******)pppppppuVar32[7][(long)pppppppuVar23];
                  func_0x000107c61434(pppppppuVar39);
                  func_0x000107c6142c(pppppppuVar24);
                  func_0x000107c6142c(pppppppuVar32);
                  if ((ulong)pppppppuVar39 >> 0x3e == 0) {
                    pppppppuVar24 =
                         *(undefined8 ********)(((ulong)pppppppuVar39 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    pppppppuVar24 = (undefined8 *******)((ulong)pppppppuVar39 & 0xffffffffffffff8);
                    if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar39) {
                      pppppppuVar24 = pppppppuVar39;
                    }
                    func_0x000107c60480();
                  }
                  if (pppppppuVar24 == (undefined8 *******)0x0) {
                    pppppppuVar27 = pppppppuVar39;
                    func_0x000107c61170(pppppppuVar18);
                    func_0x000107c6142c(pppppppuStack_368);
                    func_0x000107c6142c(pppppppuStack_370);
                    func_0x000107c6142c(pppppppuVar39);
                    func_0x000107c61170(pppppppuVar21);
                    func_0x000107c61170(pppppppuVar20);
                    func_0x000107c6142c(pppppppuVar16);
                    func_0x000107c6142c(pppppppuVar40);
                    func_0x000107c61170(pppppppuVar10);
                    pppppppuVar40 = pppppppuVar27;
                    pppppppuVar27 = pppppppuVar41;
                    goto LAB_101053820;
                  }
                  if (((ulong)pppppppuVar39 & 0xc000000000000001) == 0) {
                    if (*(long *)(((ulong)pppppppuVar39 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541c8);
                      (*pcVar2)();
                    }
                    pppppppuVar24 = (undefined8 *******)pppppppuVar39[4];
                    func_0x000107c61174();
                  }
                  else {
                    pppppppuVar24 = (undefined8 *******)0x0;
                    FUN_101059128();
                  }
                  pppppppuVar22 = pppppppuVar18;
                  func_0x000107c61174();
                  pppppppuVar23 = pppppppuVar22;
                  pppppppuVar28 = pppppppuVar24;
                  func_0x000107c60118();
                  func_0x000107c61170(pppppppuVar22);
                  func_0x000107c61170(pppppppuVar24);
                  if (((ulong)pppppppuVar23 & 1) == 0) {
                    func_0x000107c61170(pppppppuVar22);
                    func_0x000107c6142c(pppppppuStack_368);
                    func_0x000107c6142c(pppppppuStack_370);
                    func_0x000107c6142c(pppppppuVar39);
                    func_0x000107c61170(pppppppuVar21);
                    func_0x000107c61170(pppppppuVar20);
                    func_0x000107c6142c(pppppppuVar16);
                    func_0x000107c6142c(pppppppuVar40);
                    func_0x000107c61170(pppppppuVar10);
                    pppppppuVar40 = pppppppuVar28;
                    pppppppuVar27 = pppppppuVar41;
                    goto LAB_101053820;
                  }
                }
                func_0x000107c57d44(*(undefined8 *)((long)unaff_x20 + lVar1));
                pppppppuVar9 = pppppppuVar39;
                pppppppuStack_388 = pppppppuVar17;
                func_0x000107c5fc48(pppppppuVar39);
                func_0x000107c4fca8(pppppppuVar33);
                func_0x000107c61170(pppppppuVar9);
                func_0x000107c61170(pppppppuVar10);
                pppppppuVar9 = pppppppuVar18;
                func_0x000107c40d14();
                func_0x000107c61180();
                if (pppppppuVar9 == (undefined8 *******)0x0) {
                  pppppppuStack_2b8 = (undefined8 *******)0x0;
                  pppppppuStack_388 = (undefined8 *******)0x0;
                }
                else {
                  pppppppuStack_2b8 = pppppppuVar9;
                  func_0x000107c5faec();
                  func_0x000107c61170(pppppppuVar9);
                }
                pppppppuVar9 = apppppppuStack_c8[0];
                func_0x000107c61434(apppppppuStack_c8[0]);
                pppppppuVar10 = pppppppuVar15;
                func_0x0001000f66f0(pppppppuVar15,pppppppuVar40,pppppppuVar9);
                func_0x000107c6142c(pppppppuVar9);
                pppppuVar35 = pppppuStack_d0;
                func_0x000107c61434(pppppuStack_d0);
                pppppppuVar9 = pppppppuVar15;
                pppppppuVar33 = pppppppuVar40;
                pppppuVar29 = pppppuVar35;
                func_0x0001000f66f0();
                func_0x000107c6142c(pppppuVar35);
                pppppppuVar24 = pppppppuVar39;
                FUN_101052a4c();
                func_0x000107c61170(pppppppuVar20);
                bStack_190 = (byte)pppppppuVar10 & 1;
                bStack_18f = (byte)pppppppuVar9 & 1;
                pppppppuStack_1d0 = pppppppuStack_378;
                pppppppuStack_1c8 = pppppppuStack_368;
                pppppppuStack_1c0 = pppppppuStack_380;
                pppppppuStack_1b8 = pppppppuStack_370;
                pppppppuStack_1b0 = pppppppuStack_2b8;
                pppppppuStack_1a8 = pppppppuStack_388;
                pppppppuStack_140 = pppppppuStack_378;
                uStack_138 = SUB81(pppppppuStack_368,0);
                uStack_137 = (undefined7)((ulong)pppppppuStack_368 >> 8);
                uStack_130 = SUB81(pppppppuStack_380,0);
                uStack_12f = (undefined7)((ulong)pppppppuStack_380 >> 8);
                uStack_128 = SUB81(pppppppuStack_370,0);
                uStack_127 = (undefined1)((ulong)pppppppuStack_370 >> 8);
                uStack_126 = (undefined6)((ulong)pppppppuStack_370 >> 0x10);
                pppppppuStack_120 = pppppppuStack_2b8;
                pppppppuStack_118 = pppppppuStack_388;
                pppppppuVar9 = &pppppppuStack_280;
                pppppppuStack_1f0 = pppppppuVar19;
                pppppppuStack_1e8 = pppppppuVar16;
                pppppppuStack_1e0 = pppppppuVar15;
                pppppppuStack_1d8 = pppppppuVar40;
                pppppppuStack_1a0 = pppppppuVar39;
                pppppppuStack_198 = pppppppuVar21;
                pppppppuStack_188 = pppppppuVar24;
                pppppppuStack_180 = pppppppuVar33;
                pppppuStack_178 = pppppuVar29;
                pppppppuStack_170 = pppppppuVar41;
                pppppppuStack_168 = pppppppuVar27;
                pppppppuStack_160 = pppppppuVar19;
                pppppppuStack_158 = pppppppuVar16;
                pppppppuStack_150 = pppppppuVar15;
                pppppppuStack_148 = pppppppuVar40;
                pppppppuStack_110 = pppppppuVar39;
                pppppppuStack_108 = pppppppuVar21;
                bStack_100 = bStack_190;
                bStack_ff = bStack_18f;
                pppppppuStack_f8 = pppppppuVar24;
                pppppppuStack_f0 = pppppppuVar33;
                pppppuStack_e8 = pppppuVar29;
                pppppppuStack_e0 = pppppppuVar41;
                pppppppuStack_d8 = pppppppuVar27;
                func_0x000101054270(&pppppppuStack_1f0);
                func_0x0001010542ac(&pppppppuStack_160);
                func_0x000107c61170(pppppppuVar18);
                ppppppuVar25 = ppppppuStack_320;
                func_0x000107c61558();
                pppppppuVar40 = pppppppuVar9;
                if (((ulong)ppppppuVar25 & 1) == 0) {
                  pppppppuVar40 = (undefined8 *******)((long)ppppppuStack_320[2] + 1);
                  ppppppuStack_320 = (undefined8 ******)0x0;
                  FUN_101055f44(0,pppppppuVar40,1);
                }
                pppppuVar35 = ppppppuStack_320[2];
                pppppppuVar9 = (undefined8 *******)((long)pppppuVar35 + 1);
                if ((undefined8 *****)((ulong)ppppppuStack_320[3] >> 1) <= pppppuVar35) {
                  ppppppuVar25 = (undefined8 ******)
                                 (ulong)((undefined8 *****)0x1 < ppppppuStack_320[3]);
                  pppppppuVar40 = pppppppuVar9;
                  FUN_101055f44(ppppppuVar25,pppppppuVar9,1,ppppppuStack_320);
                  ppppppuStack_320 = ppppppuVar25;
                }
                ppppppuStack_320[2] = pppppppuVar9;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 5] = pppppppuStack_1e8;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 4] = pppppppuStack_1f0;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0xb] = pppppppuStack_1b8;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 10] = pppppppuStack_1c0;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0xd] = pppppppuStack_1a8;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0xc] = pppppppuStack_1b0;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 7] = pppppppuStack_1d8;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 6] = pppppppuStack_1e0;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 9] = pppppppuStack_1c8;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 8] = pppppppuStack_1d0;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0x13] = pppppuStack_178;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0x12] = pppppppuStack_180;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0x15] = pppppppuStack_168;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0x14] = pppppppuStack_170;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0xf] = pppppppuStack_198;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0xe] = pppppppuStack_1a0;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0x11] = pppppppuStack_188;
                ppppppuStack_320[(long)pppppuVar35 * 0x12 + 0x10] =
                     (undefined8 *****)CONCAT62(uStack_18e,CONCAT11(bStack_18f,bStack_190));
                pppppppuVar9 = pppppppuVar13;
                pppppppuVar27 = pppppppuStack_1a0;
              } while (pppppppuVar13 != pppppppuVar37);
            }
LAB_101054034:
            func_0x000107c6142c(pppppppuVar38);
            func_0x000107c6142c(pppppppuVar32);
            func_0x000107c6142c(pppppppuStack_300);
            func_0x000107c6142c(pppppppuVar36);
            pppppppuStack_160 = (undefined8 *******)ppppppuStack_320;
            func_0x000107c61434(ppppppuStack_320);
            FUN_10105065c(&pppppppuStack_160);
            func_0x000107c6142c(ppppppuStack_320);
            pppppppuVar36 = pppppppuStack_160;
            pppppppuVar32 = pppppppuVar4;
            func_0x000107c41774();
            func_0x000107c61180();
            if (pppppppuVar32 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541e0);
              (*pcVar2)();
            }
            pppppppuVar38 = pppppppuVar32;
            func_0x000107c41794();
            func_0x000107c61180();
            func_0x000107c61170(pppppppuVar32);
            if (pppppppuVar38 == (undefined8 *******)0x0) {
              pppppppuVar32 = (undefined8 *******)0x0;
              pppppppuVar40 = (undefined8 *******)0xf000000000000000;
            }
            else {
              pppppppuVar32 = pppppppuVar38;
              func_0x000107c5ee30();
              func_0x000107c61170(pppppppuVar38);
            }
            pppppppuVar38 = pppppppuVar4;
            func_0x000107c41774();
            func_0x000107c61180();
            if (pppppppuVar38 != (undefined8 *******)0x0) {
              pppppppuVar17 = pppppppuVar38;
              func_0x000107c49b84();
              func_0x000107c61170(pppppppuVar38);
              func_0x0001000b44c0(0,0xf000000000000000);
              pppppppuStack_270 = pppppppuStack_308;
              pppppppuStack_268 = pppppppuStack_310;
              ppppppuStack_260 = pppppppuVar36;
              uStack_258 = SUB81(pppppppuVar32,0);
              uStack_257 = (undefined7)((ulong)pppppppuVar32 >> 8);
              uStack_250 = SUB81(pppppppuVar40,0);
              uStack_24f = (undefined7)((ulong)pppppppuVar40 >> 8);
              uStack_248 = SUB81(pppppppuVar17,0);
              pppppppuStack_1e0 = pppppppuStack_308;
              pppppppuStack_1d8 = pppppppuStack_310;
              pppppppuStack_1d0 = pppppppuVar36;
              pppppppuStack_1b8 = (undefined8 *******)CONCAT71(pppppppuStack_1b8._1_7_,uStack_248);
              pppppppuStack_280 = pppppppuVar8;
              pppppppuStack_278 = pppppppuVar34;
              pppppppuStack_1f0 = pppppppuVar8;
              pppppppuStack_1e8 = pppppppuVar34;
              pppppppuStack_1c8 = pppppppuVar32;
              pppppppuStack_1c0 = pppppppuVar40;
              func_0x0001010542e0(&pppppppuStack_280,&pppppppuStack_160);
              func_0x00010105431c(&pppppppuStack_1f0);
              pppppppuStack_158 = pppppppuStack_278;
              pppppppuStack_160 = pppppppuStack_280;
              pppppppuStack_148 = pppppppuStack_268;
              pppppppuStack_150 = pppppppuStack_270;
              uStack_138 = uStack_258;
              pppppppuStack_140 = (undefined8 *******)ppppppuStack_260;
              uStack_12f = uStack_24f;
              uStack_128 = uStack_248;
              uStack_137 = uStack_257;
              uStack_130 = uStack_250;
              uStack_127 = 0;
              (*param_2)(&pppppppuStack_160);
              func_0x000107c61170(pppppppuVar4);
              func_0x000107c61170(pppppppuVar7);
              func_0x000107c61170(pppppppuVar5);
              func_0x000107c61170(pppppppuVar3);
              func_0x00010105431c(&pppppppuStack_280);
              func_0x000107c6142c(pppppuStack_d0);
              func_0x000107c6142c(apppppppuStack_c8[0]);
              return apppppppuStack_c8[0];
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010541e4);
            (*pcVar2)();
          }
        }
        func_0x000107c61170(pppppppuVar4);
        func_0x000107c61170(pppppppuVar7);
      }
    }
    func_0x000107c61170(pppppppuStack_280);
  }
LAB_101053174:
  func_0x000107c61170(pppppppuVar3);
  return pppppppuVar3;
}



/* Entry: 101052e28; end: 101054203;  */

/* WARNING: Removing unreachable block (ram,0x0001010541f8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101052e28(undefined8 *******param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  undefined8 *******pppppppuVar24;
  undefined8 ******ppppppuVar25;
  char *pcVar26;
  undefined8 *******pppppppuVar27;
  undefined8 *******pppppppuVar28;
  undefined8 *****pppppuVar29;
  ulong uVar30;
  undefined8 *******pppppppuVar31;
  undefined8 *******pppppppuVar32;
  long unaff_x20;
  undefined8 *******pppppppuVar33;
  undefined8 *****pppppuVar34;
  undefined8 *******pppppppuVar35;
  undefined8 *******pppppppuVar36;
  undefined8 *******pppppppuVar37;
  undefined8 *******pppppppuVar38;
  undefined8 *******pppppppuVar39;
  undefined8 *******pppppppuVar40;
  undefined8 *******pppppppuStack_360;
  undefined8 *******pppppppuStack_348;
  undefined8 *******pppppppuStack_340;
  undefined8 *******pppppppuStack_338;
  undefined8 *******pppppppuStack_330;
  undefined8 *******pppppppuStack_328;
  undefined8 ******ppppppuStack_2e0;
  undefined8 *******pppppppuStack_2d0;
  undefined8 *******pppppppuStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  undefined8 *******pppppppuStack_278;
  ulong uStack_260;
  undefined8 *******pppppppuStack_240;
  undefined8 *******pppppppuStack_238;
  undefined8 *******pppppppuStack_230;
  undefined8 *******pppppppuStack_228;
  undefined8 ******ppppppuStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******pppppppuStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  undefined8 *******pppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 *******pppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  byte bStack_150;
  byte bStack_14f;
  undefined6 uStack_14e;
  undefined8 *******pppppppuStack_148;
  undefined8 *******pppppppuStack_140;
  undefined8 *****pppppuStack_138;
  undefined8 *******pppppppuStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 *******pppppppuStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined6 uStack_e6;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined *apuStack_88 [3];
  
  if (param_1 == (undefined8 *******)0x0) {
    return;
  }
  func_0x000107c61174();
  pppppppuVar4 = param_1;
  func_0x000107c5bf84();
  func_0x000107c61180();
  if (pppppppuVar4 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541cc);
    (*pcVar3)();
  }
  pppppppuVar5 = pppppppuVar4;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(pppppppuVar4);
  if (pppppppuVar5 == (undefined8 *******)0x0) {
    pppppppuStack_1a8 = (undefined8 *******)0x0;
    pppppppuStack_1b0 = (undefined8 *******)0x0;
    pppppppuStack_198 = (undefined8 *******)0x0;
    pppppppuStack_1a0 = (undefined8 *******)0x0;
  }
  else {
    func_0x000107c60234(&pppppppuStack_1b0,pppppppuVar5);
    func_0x000107c615e8(pppppppuVar5);
  }
  pppppppuStack_118 = pppppppuStack_1a8;
  pppppppuStack_120 = pppppppuStack_1b0;
  pppppppuStack_108 = pppppppuStack_198;
  pppppppuStack_110 = pppppppuStack_1a0;
  if (pppppppuStack_198 == (undefined8 *******)0x0) {
    func_0x000107c61170(param_1);
    FUN_101054370(&pppppppuStack_120,0x112d387f8,&UNK_10d902650);
    return;
  }
  uVar6 = 0;
  func_0x000101054230(0,0x112d56e38,&PTR_PTR_1126b7600);
  pppppppuVar4 = &pppppppuStack_240;
  func_0x000107c6147c(pppppppuVar4,&pppppppuStack_120,PTR___sypN_11034f1a8 + 8,uVar6,6);
  pppppppuVar5 = pppppppuStack_240;
  if (((ulong)pppppppuVar4 & 1) != 0) {
    pppppppuVar4 = pppppppuStack_240;
    func_0x000107c449f8();
    if ((int)pppppppuVar4 == 0) {
      func_0x000107c61170(param_1);
      param_1 = pppppppuStack_240;
      goto LAB_101053174;
    }
    pppppppuVar4 = pppppppuStack_240;
    func_0x000107c4e064();
    func_0x000107c61180();
    if (pppppppuVar4 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541d8);
      (*pcVar3)();
    }
    pppppppuVar39 = pppppppuVar4;
    func_0x000107c3f654();
    func_0x000107c61180();
    func_0x000107c61170(pppppppuVar4);
    if (pppppppuVar39 != (undefined8 *******)0x0) {
      pppppppuStack_120 = (undefined8 *******)0x0;
      uVar6 = 0;
      func_0x000101054230(0,0x112d56e40,&PTR_PTR_1126b0ef0);
      func_0x000107c5fc50(pppppppuVar39,&pppppppuStack_120,uVar6);
      func_0x000107c61170(pppppppuVar39);
      pppppppuVar4 = pppppppuStack_120;
      if (pppppppuStack_120 != (undefined8 *******)0x0) {
        pppppppuVar39 = (undefined8 *******)((ulong)pppppppuStack_120 & 0xffffffffffffff8);
        if ((ulong)pppppppuStack_120 >> 0x3e == 0) {
          pppppppuVar33 = (undefined8 *******)pppppppuVar39[2];
        }
        else {
          pppppppuVar33 = pppppppuStack_120;
          if (-1 < (long)pppppppuStack_120) {
            pppppppuVar33 = pppppppuVar39;
          }
          func_0x000107c60480();
        }
        if (pppppppuVar33 == (undefined8 *******)0x0) {
          func_0x000107c61170(param_1);
          func_0x000107c61170(pppppppuStack_240);
          func_0x000107c6142c(pppppppuVar4);
          return;
        }
        pppppppuVar35 = (undefined8 *******)0x0;
        do {
          if (((ulong)pppppppuVar4 & 0xc000000000000001) == 0) {
            if (pppppppuVar39[2] <= pppppppuVar35) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101053f9c);
              (*pcVar3)();
            }
            pppppppuVar7 = (undefined8 *******)pppppppuVar4[(long)((long)pppppppuVar35 + 4)];
            func_0x000107c61174();
          }
          else {
            pppppppuVar7 = pppppppuVar35;
            FUN_10105930c(pppppppuVar35,pppppppuVar4);
          }
          if (SCARRY8((long)pppppppuVar35,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101053020);
            (*pcVar3)();
          }
          pppppppuVar31 = (undefined8 *******)((long)pppppppuVar35 + 1);
          pppppppuVar8 = pppppppuVar7;
          func_0x000107c4004c();
          func_0x000107c61180();
          if (pppppppuVar8 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541d4);
            (*pcVar3)();
          }
          pppppppuVar37 = pppppppuVar8;
          func_0x000107c4a14c();
          func_0x000107c61170(pppppppuVar8);
          if (((ulong)pppppppuVar37 & 1) != 0) goto LAB_10105306c;
          func_0x000107c61170(pppppppuVar7);
          pppppppuVar35 = (undefined8 *******)((long)pppppppuVar35 + 1);
        } while (pppppppuVar31 != pppppppuVar33);
        if (((ulong)pppppppuVar4 & 0xc000000000000001) == 0) {
          if (pppppppuVar39[2] == (undefined8 ******)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101053ff8);
            (*pcVar3)();
          }
          pppppppuVar7 = (undefined8 *******)pppppppuVar4[4];
          func_0x000107c61174();
        }
        else {
          pppppppuVar7 = (undefined8 *******)0x0;
          FUN_10105930c(0,pppppppuVar4);
        }
LAB_10105306c:
        func_0x000107c6142c(pppppppuVar4);
        pppppppuVar4 = pppppppuVar7;
        func_0x000107c5daa8();
        func_0x000107c61180();
        if (pppppppuVar4 == (undefined8 *******)0x0) {
          func_0x000107c61170(param_1);
          func_0x000107c61170(pppppppuStack_240);
          param_1 = pppppppuVar7;
          goto LAB_101053174;
        }
        pppppppuVar39 = pppppppuVar4;
        func_0x000107c5b53c();
        func_0x000107c61180();
        if (pppppppuVar39 != (undefined8 *******)0x0) {
          pppppppuStack_120 = (undefined8 *******)0x0;
          uVar6 = 0;
          func_0x000101054230(0,0x112d56e48,&PTR_PTR_1126b7678);
          pppppppuVar33 = &pppppppuStack_120;
          func_0x000107c5fc50(pppppppuVar39,pppppppuVar33,uVar6);
          func_0x000107c61170(pppppppuVar39);
          pppppppuVar39 = pppppppuStack_120;
          if (pppppppuStack_120 != (undefined8 *******)0x0) {
            pppppppuVar35 = pppppppuVar7;
            func_0x000107c5bfec();
            func_0x000107c61180();
            if (pppppppuVar35 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541dc);
              (*pcVar3)();
            }
            pppppppuVar8 = pppppppuVar35;
            func_0x000107c5faec();
            pppppppuStack_2d0 = pppppppuVar33;
            func_0x000107c61170(pppppppuVar35);
            pppppppuVar35 = pppppppuVar7;
            func_0x000107c4004c();
            func_0x000107c61180();
            pcVar26 = (char *)pppppppuStack_2d0;
            if (pppppppuVar35 != (undefined8 *******)0x0) {
              pppppppuVar31 = pppppppuVar35;
              func_0x000107c44fd8();
              func_0x000107c61180();
              func_0x000107c61170(pppppppuVar35);
              pcVar26 = (char *)pppppppuStack_2d0;
              if (pppppppuVar31 != (undefined8 *******)0x0) {
                pppppppuStack_2c8 = pppppppuVar31;
                func_0x000107c5faec();
                pcVar26 = (char *)pppppppuStack_2d0;
                func_0x000107c61170(pppppppuVar31);
                goto LAB_1010531bc;
              }
            }
            pppppppuStack_2d0 = (undefined8 *******)0xe000000000000000;
            pppppppuStack_2c8 = (undefined8 *******)0x0;
LAB_1010531bc:
            pppppuStack_90 = (undefined8 *****)PTR___swiftEmptySetSingleton_11034f1d8;
            apuStack_88[0] = PTR___swiftEmptySetSingleton_11034f1d8;
            pppppppuVar35 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x0001001830b8();
            pppppppuVar31 = (undefined8 *******)((ulong)pppppppuVar39 & 0xffffffffffffff8);
            if ((ulong)pppppppuVar39 >> 0x3e == 0) {
              pppppppuVar37 = (undefined8 *******)pppppppuVar31[2];
            }
            else {
              pppppppuVar37 = pppppppuVar39;
              if (-1 < (long)pppppppuVar39) {
                pppppppuVar37 = pppppppuVar31;
              }
              func_0x000107c60480();
            }
            pppppppuVar17 = (undefined8 *******)pcVar26;
            if (pppppppuVar37 != (undefined8 *******)0x0) {
              pppppppuVar36 = (undefined8 *******)0x0;
              do {
                while( true ) {
                  if (((ulong)pppppppuVar39 & 0xc000000000000001) == 0) {
                    if (pppppppuVar31[2] <= pppppppuVar36) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101053fa4);
                      (*pcVar3)();
                    }
                    pppppppuVar9 = (undefined8 *******)
                                   pppppppuVar39[(long)((long)pppppppuVar36 + 4)];
                    func_0x000107c61174();
                    pppppppuVar17 = (undefined8 *******)pcVar26;
                  }
                  else {
                    pppppppuVar9 = pppppppuVar36;
                    pppppppuVar17 = pppppppuVar39;
                    func_0x00010105913c();
                  }
                  pppppppuVar27 = (undefined8 *******)((long)pppppppuVar36 + 1);
                  if (SCARRY8((long)pppppppuVar36,1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101053fa0);
                    (*pcVar3)();
                  }
                  pppppppuVar18 = pppppppuVar9;
                  func_0x000107c4f914();
                  func_0x000107c61180();
                  if (pppppppuVar18 != (undefined8 *******)0x0) break;
                  func_0x000107c61170(pppppppuVar9);
                  pcVar26 = (char *)pppppppuVar17;
                  pppppppuVar36 = (undefined8 *******)((long)pppppppuVar36 + 1);
                  if (pppppppuVar27 == pppppppuVar37) goto LAB_1010534d8;
                }
                pppppppuVar36 = pppppppuVar18;
                func_0x000107c5faec();
                pppppppuVar13 = pppppppuVar17;
                func_0x000107c61170(pppppppuVar18);
                pppppppuVar18 = pppppppuVar9;
                func_0x000107c42c98();
                func_0x000107c61180();
                if (pppppppuVar18 != (undefined8 *******)0x0) {
                  pppppppuVar10 = pppppppuVar18;
                  func_0x000107c5faec();
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c61434(pppppppuVar17);
                  pppppppuVar18 = pppppppuVar35;
                  func_0x000107c61558(pppppppuVar35);
                  pppppppuStack_120 = pppppppuVar35;
                  func_0x00010018433c(pppppppuVar10,pppppppuVar13,pppppppuVar36,pppppppuVar17,
                                      pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar17);
                  pppppppuVar35 = pppppppuStack_120;
                }
                pppppppuVar18 = pppppppuVar9;
                func_0x000107c4e0f0();
                func_0x000107c61180();
                if (pppppppuVar18 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541e8);
                  (*pcVar3)();
                }
                puVar11 = &UNK_11037a7e0;
                func_0x000107c613fc(&UNK_11037a7e0,0x28,7);
                *(undefined ***)(puVar11 + 0x10) = apuStack_88;
                *(undefined8 ********)(puVar11 + 0x18) = pppppppuVar36;
                *(undefined8 ********)(puVar11 + 0x20) = pppppppuVar17;
                puVar12 = &UNK_11037a808;
                func_0x000107c613fc(&UNK_11037a808,0x20,7);
                *(code **)(puVar12 + 0x10) = FUN_101054204;
                *(undefined **)(puVar12 + 0x18) = puVar11;
                pppppppuStack_100 = (undefined8 *******)0x101054210;
                uStack_f8 = SUB81(puVar12,0);
                uStack_f7 = (undefined7)((ulong)puVar12 >> 8);
                pppppppuStack_120 = (undefined8 *******)PTR___NSConcreteStackBlock_11034bd00;
                pppppppuStack_118 = (undefined8 *******)0x42000000;
                pppppppuStack_110 = (undefined8 *******)FUN_10104fffc;
                pppppppuStack_108 = (undefined8 *******)&UNK_11037a820;
                pppppppuVar13 = &pppppppuStack_120;
                func_0x000107c60bc4(pppppppuVar13);
                uVar6 = CONCAT71(uStack_f7,uStack_f8);
                func_0x000107c61434(pppppppuVar17);
                func_0x000107c6157c(puVar12);
                func_0x000107c61574(uVar6);
                func_0x000107c429d8(pppppppuVar18);
                func_0x000107c60bd0(pppppppuVar13);
                func_0x000107c61170(pppppppuVar18);
                pcVar26 = "";
                puVar14 = puVar12;
                func_0x000107c61544(puVar12,"",0x7e,0x1e8,0x41,1);
                func_0x000107c61574(puVar12);
                if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541c0);
                  (*pcVar3)();
                }
                pppppppuVar18 = pppppppuVar9;
                func_0x000107c40484();
                func_0x000107c61180();
                if (pppppppuVar18 == (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar9);
                  func_0x000107c61574(puVar11);
                  func_0x000107c6142c(pppppppuVar17);
                }
                else {
                  pppppppuVar13 = pppppppuVar18;
                  func_0x000107c5bd00();
                  if ((int)pppppppuVar13 == 2) {
                    func_0x000100403b00(&pppppppuStack_120,pppppppuVar36,pppppppuVar17);
                    func_0x000107c61170(pppppppuVar18);
                    pppppppuVar17 = pppppppuStack_118;
                    func_0x000107c61170(pppppppuVar9);
                    func_0x000107c61574(puVar11);
                    pcVar26 = (char *)pppppppuVar36;
                  }
                  else {
                    func_0x000107c61170(pppppppuVar9);
                    func_0x000107c61574(puVar11);
                    func_0x000107c61170(pppppppuVar18);
                  }
                  func_0x000107c6142c(pppppppuVar17);
                }
                pppppppuVar17 = (undefined8 *******)pcVar26;
                pppppppuVar36 = pppppppuVar27;
              } while (pppppppuVar27 != pppppppuVar37);
            }
LAB_1010534d8:
            pppppppuStack_2c0 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x0001001830b8();
            if (pppppppuVar37 != (undefined8 *******)0x0) {
              pppppppuVar36 = (undefined8 *******)0x0;
              do {
                while( true ) {
                  if (((ulong)pppppppuVar39 & 0xc000000000000001) == 0) {
                    if (pppppppuVar31[2] <= pppppppuVar36) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101053fac);
                      (*pcVar3)();
                    }
                    pppppppuVar9 = (undefined8 *******)
                                   pppppppuVar39[(long)((long)pppppppuVar36 + 4)];
                    func_0x000107c61174();
                    pppppppuVar27 = pppppppuVar17;
                  }
                  else {
                    pppppppuVar9 = pppppppuVar36;
                    pppppppuVar27 = pppppppuVar39;
                    func_0x00010105913c();
                  }
                  pppppppuVar18 = (undefined8 *******)((long)pppppppuVar36 + 1);
                  if (SCARRY8((long)pppppppuVar36,1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101053fa8);
                    (*pcVar3)();
                  }
                  pppppppuVar17 = pppppppuVar9;
                  func_0x000107c4f914();
                  func_0x000107c61180();
                  pppppppuVar13 = pppppppuVar27;
                  if (pppppppuVar17 != (undefined8 *******)0x0) break;
LAB_1010534fc:
                  func_0x000107c61170(pppppppuVar9);
                  pppppppuVar17 = pppppppuVar13;
                  pppppppuVar36 = (undefined8 *******)((long)pppppppuVar36 + 1);
                  if (pppppppuVar18 == pppppppuVar37) goto LAB_101053718;
                }
                pppppppuVar10 = pppppppuVar17;
                func_0x000107c5faec();
                pppppppuVar13 = pppppppuVar27;
                func_0x000107c61170(pppppppuVar17);
                pppppppuVar17 = pppppppuVar9;
                func_0x000107c4e0bc();
                func_0x000107c61180();
                if (pppppppuVar17 == (undefined8 *******)0x0) {
                  func_0x000107c6142c(pppppppuVar27);
                  goto LAB_1010534fc;
                }
                pppppppuVar36 = pppppppuVar17;
                func_0x000107c5faec();
                func_0x000107c61170(pppppppuVar17);
                pppppppuVar15 = pppppppuStack_2c0;
                func_0x000107c61558();
                pppppppuStack_120 = pppppppuStack_2c0;
                pppppppuVar16 = pppppppuVar10;
                pppppppuVar17 = pppppppuVar27;
                func_0x000100029284();
                uVar30 = (ulong)~(uint)pppppppuVar17 & 1;
                lVar1 = (long)pppppppuStack_2c0[2] + uVar30;
                if (SCARRY8((long)pppppppuStack_2c0[2],uVar30)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541c4);
                  (*pcVar3)();
                }
                if ((long)pppppppuStack_2c0[3] < lVar1) {
                  func_0x0001001833c8(lVar1,pppppppuVar15);
                  pppppppuVar16 = pppppppuVar10;
                  pppppppuVar15 = pppppppuVar27;
                  func_0x000100029284();
                  if (((uint)pppppppuVar17 & 1) != ((uint)pppppppuVar15 & 1)) {
                    func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541f8);
                    (*pcVar3)();
                  }
                }
                else if (((ulong)pppppppuVar15 & 1) == 0) {
                  func_0x000100184498();
                }
                pppppppuVar15 = pppppppuStack_120;
                pppppppuStack_2c0 = pppppppuStack_120;
                if (((ulong)pppppppuVar17 & 1) == 0) {
                  pppppppuStack_120[((ulong)pppppppuVar16 >> 6) + 8] =
                       (undefined8 ******)
                       ((ulong)pppppppuStack_120[((ulong)pppppppuVar16 >> 6) + 8] |
                       1L << ((ulong)pppppppuVar16 & 0x3f));
                  ppppppuVar25 = pppppppuStack_120[6];
                  ppppppuVar25[(long)pppppppuVar16 * 2] = pppppppuVar10;
                  (ppppppuVar25 + (long)pppppppuVar16 * 2)[1] = pppppppuVar27;
                  ppppppuVar25 = pppppppuStack_120[7];
                  ppppppuVar25[(long)pppppppuVar16 * 2] = pppppppuVar36;
                  (ppppppuVar25 + (long)pppppppuVar16 * 2)[1] = pppppppuVar13;
                  func_0x000107c61170(pppppppuVar9);
                  ppppppuVar25 = pppppppuVar15[2];
                  if (SCARRY8((long)ppppppuVar25,1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541d0);
                    (*pcVar3)();
                  }
                  pppppppuVar15[2] = (undefined8 ******)((long)ppppppuVar25 + 1);
                }
                else {
                  ppppppuVar25 = pppppppuStack_120[7] + (long)pppppppuVar16 * 2;
                  pppppuVar34 = ppppppuVar25[1];
                  *ppppppuVar25 = pppppppuVar36;
                  ppppppuVar25[1] = pppppppuVar13;
                  func_0x000107c6142c(pppppppuVar27);
                  func_0x000107c61170(pppppppuVar9);
                  func_0x000107c6142c(pppppuVar34);
                }
                pppppppuVar36 = pppppppuVar18;
              } while (pppppppuVar18 != pppppppuVar37);
            }
LAB_101053718:
            func_0x000107c6142c(pppppppuVar39);
            pppppppuVar39 = pppppppuStack_2c8;
            func_0x000107c5fadc(pppppppuStack_2c8,pppppppuStack_2d0);
            uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d56df0);
            func_0x000107c4f38c(uVar6);
            func_0x000107c61180();
            pppppppuVar31 = pppppppuVar4;
            func_0x000108f0b9b8(pppppppuVar4,pppppppuVar39,uVar6);
            func_0x000107c61180();
            func_0x000107c61170(pppppppuVar39);
            func_0x000107c61170(uVar6);
            pppppppuVar17 = (undefined8 *******)0x0;
            func_0x000101054230(0,0x112d56e50,&PTR_PTR_1126cc4e0);
            pppppppuVar37 = pppppppuVar31;
            pppppppuVar39 = pppppppuVar17;
            func_0x000107c5fc54();
            func_0x000107c61170(pppppppuVar31);
            pppppppuVar31 = pppppppuVar37;
            FUN_10104d670();
            if ((ulong)pppppppuVar37 >> 0x3e == 0) {
              pppppppuVar36 =
                   *(undefined8 ********)(((ulong)pppppppuVar37 & 0xffffffffffffff8) + 0x10);
              lVar1 = _DAT_112d56de0;
              lVar2 = _DAT_112d56de8;
            }
            else {
              pppppppuVar36 = (undefined8 *******)((ulong)pppppppuVar37 & 0xffffffffffffff8);
              if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar37) {
                pppppppuVar36 = pppppppuVar37;
              }
              func_0x000107c60480();
              lVar1 = _DAT_112d56de0;
              lVar2 = _DAT_112d56de8;
            }
            _DAT_112d56de0 = lVar1;
            _DAT_112d56de8 = lVar2;
            ppppppuStack_2e0 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
            if (pppppppuVar36 != (undefined8 *******)0x0) {
              uStack_260 = (ulong)pppppppuVar37 & 0xffffffffffffff8;
              pppppppuStack_360 = (undefined8 *******)0x1;
              pppppppuVar9 = (undefined8 *******)0x0;
              pppppppuVar27 = (undefined8 *******)0x1;
              do {
                while( true ) {
                  if (((ulong)pppppppuVar37 & 0xc000000000000001) == 0) {
                    if (*(undefined8 ********)(uStack_260 + 0x10) <= pppppppuVar9) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101053fb4);
                      (*pcVar3)();
                    }
                    pppppppuVar18 =
                         (undefined8 *******)pppppppuVar37[(long)((long)pppppppuVar9 + 4)];
                    func_0x000107c61174();
                  }
                  else {
                    pppppppuVar18 = pppppppuVar9;
                    pppppppuVar39 = pppppppuVar37;
                    FUN_101059128();
                  }
                  pppppppuVar13 = (undefined8 *******)((long)pppppppuVar9 + 1);
                  if (SCARRY8((long)pppppppuVar9,1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101053fb0);
                    (*pcVar3)();
                  }
                  pppppppuVar10 = pppppppuVar18;
                  func_0x000107c51fa4();
                  func_0x000107c61180();
                  if (pppppppuVar10 != (undefined8 *******)0x0) break;
                  func_0x000107c61170(pppppppuVar18);
LAB_101053820:
                  pppppppuVar9 = (undefined8 *******)((long)pppppppuVar9 + 1);
                  if (pppppppuVar13 == pppppppuVar36) goto LAB_101054034;
                }
                pppppppuVar15 = pppppppuVar10;
                func_0x000107c5faec();
                pppppppuVar16 = pppppppuVar39;
                func_0x000107c61170(pppppppuVar10);
                pppppppuVar10 = pppppppuVar18;
                func_0x000107c3fb8c();
                func_0x000107c61180();
                if (pppppppuVar10 == (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar39);
                  pppppppuVar39 = pppppppuVar16;
                  goto LAB_101053820;
                }
                pppppppuVar19 = pppppppuVar10;
                func_0x000107c5faec();
                pppppppuVar32 = *(undefined8 ********)(unaff_x20 + lVar1);
                pppppppuVar20 = pppppppuVar32;
                pppppppuVar24 = pppppppuVar16;
                func_0x000107c5b068();
                func_0x000107c61180();
                if (pppppppuVar20 != (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar16);
                  func_0x000107c6142c(pppppppuVar39);
                  func_0x000107c61170(pppppppuVar10);
                  pppppppuVar10 = pppppppuVar20;
LAB_1010539f4:
                  func_0x000107c61170(pppppppuVar10);
                  pppppppuVar39 = pppppppuVar24;
                  goto LAB_101053820;
                }
                pppppppuVar20 = pppppppuVar18;
                func_0x000107c5c910();
                func_0x000107c61180();
                if (pppppppuVar20 == (undefined8 *******)0x0) {
LAB_1010539dc:
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar39);
                  func_0x000107c6142c(pppppppuVar16);
                  goto LAB_1010539f4;
                }
                pppppppuVar21 = pppppppuVar20;
                func_0x000107d227d0();
                func_0x000107c61180();
                if (pppppppuVar21 == (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar18);
                  pppppppuVar18 = pppppppuVar20;
                  goto LAB_1010539dc;
                }
                pppppppuVar38 = pppppppuVar18;
                func_0x000107c5c9d4();
                func_0x000107c61180();
                if (pppppppuVar38 == (undefined8 *******)0x0) {
                  func_0x000107c61170(pppppppuVar18);
                  func_0x000107c6142c(pppppppuVar16);
                  func_0x000107c6142c(pppppppuVar39);
                  func_0x000107c61170(pppppppuVar21);
                  func_0x000107c61170(pppppppuVar20);
                  goto LAB_1010539f4;
                }
                func_0x000107c5ca64();
                pppppppuVar40 = pppppppuVar27;
                func_0x000107c61170(pppppppuVar38);
                if (pppppppuVar35[2] == (undefined8 ******)0x0) {
LAB_101053a3c:
                  func_0x000107c61434(pppppppuVar39);
                  pppppppuStack_338 = pppppppuVar15;
                  pppppppuStack_328 = pppppppuVar39;
                }
                else {
                  func_0x000107c61434(pppppppuVar35);
                  pppppppuVar38 = pppppppuVar15;
                  pppppppuVar24 = pppppppuVar39;
                  func_0x000100029284();
                  if (((ulong)pppppppuVar24 & 1) == 0) {
                    func_0x000107c6142c(pppppppuVar35);
                    goto LAB_101053a3c;
                  }
                  pppppppuStack_338 = (undefined8 *******)pppppppuVar35[7][(long)pppppppuVar38 * 2];
                  pppppppuStack_328 =
                       (undefined8 *******)(pppppppuVar35[7] + (long)pppppppuVar38 * 2)[1];
                  func_0x000107c61434();
                  func_0x000107c6142c(pppppppuVar35);
                }
                if (pppppppuStack_2c0[2] == (undefined8 ******)0x0) {
LAB_101053aac:
                  func_0x000107c61434(pppppppuVar39);
                  pppppppuStack_340 = pppppppuVar15;
                  pppppppuStack_330 = pppppppuVar39;
                }
                else {
                  func_0x000107c61434(pppppppuStack_2c0);
                  pppppppuVar38 = pppppppuVar15;
                  pppppppuVar24 = pppppppuVar39;
                  func_0x000100029284();
                  if (((ulong)pppppppuVar24 & 1) == 0) {
                    func_0x000107c6142c(pppppppuStack_2c0);
                    goto LAB_101053aac;
                  }
                  pppppppuStack_340 =
                       (undefined8 *******)pppppppuStack_2c0[7][(long)pppppppuVar38 * 2];
                  pppppppuStack_330 =
                       (undefined8 *******)(pppppppuStack_2c0[7] + (long)pppppppuVar38 * 2)[1];
                  func_0x000107c61434();
                  func_0x000107c6142c(pppppppuStack_2c0);
                }
                pppppppuVar38 = pppppppuVar18;
                func_0x000107c4d1b8();
                func_0x000107c61180();
                if (pppppppuVar38 == (undefined8 *******)0x0) {
LAB_101053ce0:
                  func_0x000101064d4c();
                  func_0x000107c613fc();
                  pppppppuVar38[3] = (undefined8 ******)0x3;
                  pppppppuVar38[2] = (undefined8 ******)0x1;
                  pppppppuVar38[4] = pppppppuVar18;
                  pppppppuVar40 = pppppppuStack_360;
                  func_0x000107c61174(pppppppuVar18);
                }
                else {
                  pppppppuVar22 = pppppppuVar38;
                  func_0x000107c3ee04();
                  func_0x000107c61180();
                  func_0x000107c61170();
                  if (pppppppuVar22 == (undefined8 *******)0x0) goto LAB_101053ce0;
                  pppppppuVar23 = pppppppuVar22;
                  func_0x000107c5faec();
                  func_0x000107c61170(pppppppuVar22);
                  pppppppuVar38 = pppppppuVar24;
                  if (pppppppuVar31[2] == (undefined8 ******)0x0) {
LAB_101053cd8:
                    func_0x000107c6142c();
                    goto LAB_101053ce0;
                  }
                  func_0x000107c61434(pppppppuVar31);
                  func_0x000100029284();
                  if (((ulong)pppppppuVar38 & 1) == 0) {
                    func_0x000107c6142c(pppppppuVar24);
                    pppppppuVar38 = pppppppuVar31;
                    goto LAB_101053cd8;
                  }
                  pppppppuVar38 = (undefined8 *******)pppppppuVar31[7][(long)pppppppuVar23];
                  func_0x000107c61434(pppppppuVar38);
                  func_0x000107c6142c(pppppppuVar24);
                  func_0x000107c6142c(pppppppuVar31);
                  if ((ulong)pppppppuVar38 >> 0x3e == 0) {
                    pppppppuVar24 =
                         *(undefined8 ********)(((ulong)pppppppuVar38 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    pppppppuVar24 = (undefined8 *******)((ulong)pppppppuVar38 & 0xffffffffffffff8);
                    if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar38) {
                      pppppppuVar24 = pppppppuVar38;
                    }
                    func_0x000107c60480();
                  }
                  if (pppppppuVar24 == (undefined8 *******)0x0) {
                    pppppppuVar27 = pppppppuVar38;
                    func_0x000107c61170(pppppppuVar18);
                    func_0x000107c6142c(pppppppuStack_328);
                    func_0x000107c6142c(pppppppuStack_330);
                    func_0x000107c6142c(pppppppuVar38);
                    func_0x000107c61170(pppppppuVar21);
                    func_0x000107c61170(pppppppuVar20);
                    func_0x000107c6142c(pppppppuVar16);
                    func_0x000107c6142c(pppppppuVar39);
                    func_0x000107c61170(pppppppuVar10);
                    pppppppuVar39 = pppppppuVar27;
                    pppppppuVar27 = pppppppuVar40;
                    goto LAB_101053820;
                  }
                  if (((ulong)pppppppuVar38 & 0xc000000000000001) == 0) {
                    if (*(long *)(((ulong)pppppppuVar38 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541c8);
                      (*pcVar3)();
                    }
                    pppppppuVar24 = (undefined8 *******)pppppppuVar38[4];
                    func_0x000107c61174();
                  }
                  else {
                    pppppppuVar24 = (undefined8 *******)0x0;
                    FUN_101059128();
                  }
                  pppppppuVar22 = pppppppuVar18;
                  func_0x000107c61174();
                  pppppppuVar23 = pppppppuVar22;
                  pppppppuVar28 = pppppppuVar24;
                  func_0x000107c60118();
                  func_0x000107c61170(pppppppuVar22);
                  func_0x000107c61170(pppppppuVar24);
                  if (((ulong)pppppppuVar23 & 1) == 0) {
                    func_0x000107c61170(pppppppuVar22);
                    func_0x000107c6142c(pppppppuStack_328);
                    func_0x000107c6142c(pppppppuStack_330);
                    func_0x000107c6142c(pppppppuVar38);
                    func_0x000107c61170(pppppppuVar21);
                    func_0x000107c61170(pppppppuVar20);
                    func_0x000107c6142c(pppppppuVar16);
                    func_0x000107c6142c(pppppppuVar39);
                    func_0x000107c61170(pppppppuVar10);
                    pppppppuVar39 = pppppppuVar28;
                    pppppppuVar27 = pppppppuVar40;
                    goto LAB_101053820;
                  }
                }
                func_0x000107c57d44(*(undefined8 *)(unaff_x20 + lVar2));
                pppppppuVar9 = pppppppuVar38;
                pppppppuStack_348 = pppppppuVar17;
                func_0x000107c5fc48(pppppppuVar38);
                func_0x000107c4fca8(pppppppuVar32);
                func_0x000107c61170(pppppppuVar9);
                func_0x000107c61170(pppppppuVar10);
                pppppppuVar9 = pppppppuVar18;
                func_0x000107c40d14();
                func_0x000107c61180();
                if (pppppppuVar9 == (undefined8 *******)0x0) {
                  pppppppuStack_278 = (undefined8 *******)0x0;
                  pppppppuStack_348 = (undefined8 *******)0x0;
                }
                else {
                  pppppppuStack_278 = pppppppuVar9;
                  func_0x000107c5faec();
                  func_0x000107c61170(pppppppuVar9);
                }
                puVar11 = apuStack_88[0];
                func_0x000107c61434(apuStack_88[0]);
                pppppppuVar9 = pppppppuVar15;
                func_0x0001000f66f0(pppppppuVar15,pppppppuVar39,puVar11);
                func_0x000107c6142c(puVar11);
                pppppuVar34 = pppppuStack_90;
                func_0x000107c61434(pppppuStack_90);
                pppppppuVar10 = pppppppuVar15;
                pppppppuVar32 = pppppppuVar39;
                pppppuVar29 = pppppuVar34;
                func_0x0001000f66f0();
                func_0x000107c6142c(pppppuVar34);
                pppppppuVar24 = pppppppuVar38;
                FUN_101052a4c();
                func_0x000107c61170(pppppppuVar20);
                bStack_150 = (byte)pppppppuVar9 & 1;
                bStack_14f = (byte)pppppppuVar10 & 1;
                pppppppuStack_190 = pppppppuStack_338;
                pppppppuStack_188 = pppppppuStack_328;
                pppppppuStack_180 = pppppppuStack_340;
                pppppppuStack_178 = pppppppuStack_330;
                pppppppuStack_170 = pppppppuStack_278;
                pppppppuStack_168 = pppppppuStack_348;
                pppppppuStack_100 = pppppppuStack_338;
                uStack_f8 = SUB81(pppppppuStack_328,0);
                uStack_f7 = (undefined7)((ulong)pppppppuStack_328 >> 8);
                uStack_f0 = SUB81(pppppppuStack_340,0);
                uStack_ef = (undefined7)((ulong)pppppppuStack_340 >> 8);
                uStack_e8 = SUB81(pppppppuStack_330,0);
                uStack_e7 = (undefined1)((ulong)pppppppuStack_330 >> 8);
                uStack_e6 = (undefined6)((ulong)pppppppuStack_330 >> 0x10);
                pppppppuStack_e0 = pppppppuStack_278;
                pppppppuStack_d8 = pppppppuStack_348;
                pppppppuVar9 = &pppppppuStack_240;
                pppppppuStack_1b0 = pppppppuVar19;
                pppppppuStack_1a8 = pppppppuVar16;
                pppppppuStack_1a0 = pppppppuVar15;
                pppppppuStack_198 = pppppppuVar39;
                pppppppuStack_160 = pppppppuVar38;
                pppppppuStack_158 = pppppppuVar21;
                pppppppuStack_148 = pppppppuVar24;
                pppppppuStack_140 = pppppppuVar32;
                pppppuStack_138 = pppppuVar29;
                pppppppuStack_130 = pppppppuVar40;
                pppppppuStack_128 = pppppppuVar27;
                pppppppuStack_120 = pppppppuVar19;
                pppppppuStack_118 = pppppppuVar16;
                pppppppuStack_110 = pppppppuVar15;
                pppppppuStack_108 = pppppppuVar39;
                pppppppuStack_d0 = pppppppuVar38;
                pppppppuStack_c8 = pppppppuVar21;
                bStack_c0 = bStack_150;
                bStack_bf = bStack_14f;
                pppppppuStack_b8 = pppppppuVar24;
                pppppppuStack_b0 = pppppppuVar32;
                pppppuStack_a8 = pppppuVar29;
                pppppppuStack_a0 = pppppppuVar40;
                pppppppuStack_98 = pppppppuVar27;
                func_0x000101054270(&pppppppuStack_1b0);
                func_0x0001010542ac(&pppppppuStack_120);
                func_0x000107c61170(pppppppuVar18);
                ppppppuVar25 = ppppppuStack_2e0;
                func_0x000107c61558();
                pppppppuVar39 = pppppppuVar9;
                if (((ulong)ppppppuVar25 & 1) == 0) {
                  pppppppuVar39 = (undefined8 *******)((long)ppppppuStack_2e0[2] + 1);
                  ppppppuStack_2e0 = (undefined8 ******)0x0;
                  FUN_101055f44(0,pppppppuVar39,1);
                }
                pppppuVar34 = ppppppuStack_2e0[2];
                pppppppuVar9 = (undefined8 *******)((long)pppppuVar34 + 1);
                if ((undefined8 *****)((ulong)ppppppuStack_2e0[3] >> 1) <= pppppuVar34) {
                  ppppppuVar25 = (undefined8 ******)
                                 (ulong)((undefined8 *****)0x1 < ppppppuStack_2e0[3]);
                  pppppppuVar39 = pppppppuVar9;
                  FUN_101055f44(ppppppuVar25,pppppppuVar9,1,ppppppuStack_2e0);
                  ppppppuStack_2e0 = ppppppuVar25;
                }
                ppppppuStack_2e0[2] = pppppppuVar9;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 5] = pppppppuStack_1a8;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 4] = pppppppuStack_1b0;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0xb] = pppppppuStack_178;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 10] = pppppppuStack_180;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0xd] = pppppppuStack_168;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0xc] = pppppppuStack_170;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 7] = pppppppuStack_198;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 6] = pppppppuStack_1a0;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 9] = pppppppuStack_188;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 8] = pppppppuStack_190;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0x13] = pppppuStack_138;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0x12] = pppppppuStack_140;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0x15] = pppppppuStack_128;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0x14] = pppppppuStack_130;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0xf] = pppppppuStack_158;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0xe] = pppppppuStack_160;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0x11] = pppppppuStack_148;
                ppppppuStack_2e0[(long)pppppuVar34 * 0x12 + 0x10] =
                     (undefined8 *****)CONCAT62(uStack_14e,CONCAT11(bStack_14f,bStack_150));
                pppppppuVar9 = pppppppuVar13;
                pppppppuVar27 = pppppppuStack_160;
              } while (pppppppuVar13 != pppppppuVar36);
            }
LAB_101054034:
            func_0x000107c6142c(pppppppuVar37);
            func_0x000107c6142c(pppppppuVar31);
            func_0x000107c6142c(pppppppuStack_2c0);
            func_0x000107c6142c(pppppppuVar35);
            pppppppuStack_120 = (undefined8 *******)ppppppuStack_2e0;
            func_0x000107c61434(ppppppuStack_2e0);
            FUN_10105065c(&pppppppuStack_120);
            func_0x000107c6142c(ppppppuStack_2e0);
            pppppppuVar35 = pppppppuStack_120;
            pppppppuVar31 = pppppppuVar4;
            func_0x000107c41774();
            func_0x000107c61180();
            if (pppppppuVar31 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541e0);
              (*pcVar3)();
            }
            pppppppuVar37 = pppppppuVar31;
            func_0x000107c41794();
            func_0x000107c61180();
            func_0x000107c61170(pppppppuVar31);
            if (pppppppuVar37 == (undefined8 *******)0x0) {
              pppppppuVar31 = (undefined8 *******)0x0;
              pppppppuVar39 = (undefined8 *******)0xf000000000000000;
            }
            else {
              pppppppuVar31 = pppppppuVar37;
              func_0x000107c5ee30();
              func_0x000107c61170(pppppppuVar37);
            }
            pppppppuVar37 = pppppppuVar4;
            func_0x000107c41774();
            func_0x000107c61180();
            if (pppppppuVar37 != (undefined8 *******)0x0) {
              pppppppuVar17 = pppppppuVar37;
              func_0x000107c49b84();
              func_0x000107c61170(pppppppuVar37);
              func_0x0001000b44c0(0,0xf000000000000000);
              pppppppuStack_230 = pppppppuStack_2c8;
              pppppppuStack_228 = pppppppuStack_2d0;
              ppppppuStack_220 = pppppppuVar35;
              uStack_218 = SUB81(pppppppuVar31,0);
              uStack_217 = (undefined7)((ulong)pppppppuVar31 >> 8);
              uStack_210 = SUB81(pppppppuVar39,0);
              uStack_20f = (undefined7)((ulong)pppppppuVar39 >> 8);
              uStack_208 = SUB81(pppppppuVar17,0);
              pppppppuStack_1a0 = pppppppuStack_2c8;
              pppppppuStack_198 = pppppppuStack_2d0;
              pppppppuStack_190 = pppppppuVar35;
              pppppppuStack_178 = (undefined8 *******)CONCAT71(pppppppuStack_178._1_7_,uStack_208);
              pppppppuStack_240 = pppppppuVar8;
              pppppppuStack_238 = pppppppuVar33;
              pppppppuStack_1b0 = pppppppuVar8;
              pppppppuStack_1a8 = pppppppuVar33;
              pppppppuStack_188 = pppppppuVar31;
              pppppppuStack_180 = pppppppuVar39;
              func_0x0001010542e0(&pppppppuStack_240,&pppppppuStack_120);
              func_0x00010105431c(&pppppppuStack_1b0);
              pppppppuStack_118 = pppppppuStack_238;
              pppppppuStack_120 = pppppppuStack_240;
              pppppppuStack_108 = pppppppuStack_228;
              pppppppuStack_110 = pppppppuStack_230;
              uStack_f8 = uStack_218;
              pppppppuStack_100 = (undefined8 *******)ppppppuStack_220;
              uStack_ef = uStack_20f;
              uStack_e8 = uStack_208;
              uStack_f7 = uStack_217;
              uStack_f0 = uStack_210;
              uStack_e7 = 0;
              (*param_2)(&pppppppuStack_120);
              func_0x000107c61170(pppppppuVar4);
              func_0x000107c61170(pppppppuVar7);
              func_0x000107c61170(pppppppuVar5);
              func_0x000107c61170(param_1);
              func_0x00010105431c(&pppppppuStack_240);
              func_0x000107c6142c(pppppuStack_90);
              func_0x000107c6142c(apuStack_88[0]);
              return;
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010541e4);
            (*pcVar3)();
          }
        }
        func_0x000107c61170(pppppppuVar4);
        func_0x000107c61170(pppppppuVar7);
      }
    }
    func_0x000107c61170(pppppppuStack_240);
  }
LAB_101053174:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101054204; end: 10105420f;  */

void FUN_101054204(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_1 == 1) {
    func_0x000107c61434(uVar2,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000100403b00(auStack_40,uVar1,uVar2);
    func_0x000107c6142c(uStack_38);
  }
  return;
}



/* Entry: 101054210; end: 10105434f;  */

void FUN_101054210(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101054350; end: 10105436f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101054350(undefined *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  long unaff_x20;
  undefined8 ******ppppppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 ****ppppuStack_1a0;
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
  undefined8 *****pppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
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
  ulong auStack_78 [3];
  
  if (param_1 != (undefined *)0x0) {
    func_0x000107c61174();
    puVar3 = param_1;
    func_0x000107c5c068();
    func_0x000107c61180();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar3 != (undefined *)0x0) {
      uVar4 = 0;
      func_0x000101054230(0,0x112d56e50,&PTR_PTR_1126cc4e0);
      puVar5 = puVar3;
      func_0x000107c5fc54(puVar3,uVar4);
      func_0x000107c61170(puVar3);
    }
    puVar3 = puVar5;
    FUN_10104d670();
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar15 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar15 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar15 = puVar5;
      }
      func_0x000107c60480();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (puVar15 != (undefined *)0x0) {
      uVar16 = 0;
      do {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10104e99c);
            (*pcVar1)();
          }
          uVar6 = *(ulong *)(puVar5 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar16;
          FUN_101059128(uVar16,puVar5);
        }
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10104e998);
          (*pcVar1)();
        }
        puVar14 = (undefined *)(uVar16 + 1);
        auStack_78[0] = uVar6;
        FUN_10104eae0(&pppppuStack_108,auStack_78,puVar3,unaff_x20);
        func_0x000107c61170(uVar6);
        iVar2 = (int)&pppppuStack_108;
        func_0x000101054358();
        if (iVar2 == 1) {
          FUN_101054370(&pppppuStack_108,0x112d56e58,&UNK_10d91d9c0);
        }
        else {
          uStack_138 = uStack_a0;
          uStack_140 = uStack_a8;
          uStack_128 = uStack_90;
          uStack_130 = uStack_98;
          uStack_118 = uStack_80;
          uStack_120 = uStack_88;
          uStack_168 = CONCAT71(uStack_cf,uStack_d0);
          uStack_178 = uStack_e0;
          uStack_180 = uStack_e8;
          uStack_170 = uStack_d8;
          uStack_158 = uStack_c0;
          uStack_160 = uStack_c8;
          uStack_148 = uStack_b0;
          uStack_150 = uStack_b8;
          uStack_198 = uStack_100;
          ppppuStack_1a0 = pppppuStack_108;
          uStack_188 = uStack_f0;
          uStack_190 = uStack_f8;
          puVar7 = puVar9;
          func_0x000107c61558();
          puVar8 = puVar9;
          if (((ulong)puVar7 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_101055f44(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar6 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar6) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_101055f44(puVar9,uVar6 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x28) = uStack_198;
          *(undefined8 *****)(puVar9 + uVar6 * 0x90 + 0x20) = ppppuStack_1a0;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x58) = uStack_168;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x50) = uStack_170;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x68) = uStack_158;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x60) = uStack_160;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x38) = uStack_188;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x30) = uStack_190;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x48) = uStack_178;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x40) = uStack_180;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x98) = uStack_128;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x90) = uStack_130;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0xa8) = uStack_118;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0xa0) = uStack_120;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x78) = uStack_148;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x70) = uStack_150;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x88) = uStack_138;
          *(undefined8 *)(puVar9 + uVar6 * 0x90 + 0x80) = uStack_140;
        }
        uVar16 = uVar16 + 1;
      } while (puVar14 != puVar15);
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar3);
    func_0x000107c61428(unaff_x20 + 0x10,&ppppuStack_1a0,0,0);
    lVar10 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar10 == 0) {
      func_0x000107c6142c(puVar9);
      func_0x000107c61170(param_1);
    }
    else {
      uVar4 = *(undefined8 *)(lVar10 + _DAT_112d56da8);
      func_0x000107c6157c(uVar4);
      func_0x000107c61170(lVar10);
      ppppppuVar13 = *(undefined8 *******)(puVar9 + 0x10);
      if (ppppppuVar13 == (undefined8 ******)0x0) {
        func_0x000107c6142c(puVar9);
        pppppuStack_108 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppppppuVar11 = ppppppuVar13;
        func_0x0001010560ec(ppppppuVar13,0);
        ppppppuVar12 = &pppppuStack_108;
        FUN_1010528f8(ppppppuVar12,ppppppuVar11 + 4,ppppppuVar13,puVar9);
        func_0x000107c61434(puVar9);
        func_0x000107c6142c(pppppuStack_108);
        if (ppppppuVar12 != ppppppuVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10104eae0);
          (*pcVar1)();
        }
        func_0x000107c6142c(puVar9);
        pppppuStack_108 = ppppppuVar11;
      }
      uStack_d0 = 0x40;
      func_0x0001002a64a8(&pppppuStack_108);
      func_0x000107c61574(uVar4);
      func_0x000107c61170(param_1);
      FUN_101052098(&pppppuStack_108);
    }
  }
  return;
}



/* Entry: 101054370; end: 1010543af;  */

undefined8 FUN_101054370(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1010543b0; end: 1010543e7;  */

void FUN_1010543b0(undefined8 *param_1)

{
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 1010543e8; end: 101054407;  */

void FUN_1010543e8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101054408; end: 101054443;  */

void FUN_101054408(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


