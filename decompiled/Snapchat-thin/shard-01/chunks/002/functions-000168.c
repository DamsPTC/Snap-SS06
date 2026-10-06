/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100dfa9e8; end: 100dfaa03;  */

void FUN_100dfa9e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Entry: 100dfaa04; end: 100dfaa77;  */

undefined8 * FUN_100dfaa04(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 100dfaa78; end: 100dfab23;  */

int FUN_100dfaa78(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100dfab24; end: 100dfab47;  */

void FUN_100dfab24(void)

{
  FUN_100dfab48(0x112d377f8,&UNK_10dc2bd40);
  return;
}



/* Entry: 100dfab48; end: 100dfab87;  */

void FUN_100dfab48(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_100dfa6ec(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100dfab88; end: 100dfabcf;  */

void FUN_100dfab88(void)

{
  FUN_100dfab48(0x112d37800,&UNK_10d9ee980);
  return;
}



/* Entry: 100dfabd0; end: 100dfabfb;  */

void FUN_100dfabd0(long param_1,long param_2)

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



/* Entry: 100dfabfc; end: 100dfae2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100dfabfc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113046c80);
  func_0x000107c61174();
  uVar4 = param_4;
  func_0x000107c43b5c();
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c3d984();
  func_0x000107c61180();
  if (lVar5 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar5;
    func_0x000107c5f9e8();
    func_0x000107c61170(lVar5);
  }
  uVar8 = *(undefined8 *)(param_5 + _DAT_113045ee0);
  lVar6 = 0;
  FUN_100df9228();
  lVar5 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d37728);
  *puVar1 = 0xd000000000000019;
  puVar1[1] = 0x800000010ef11080;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d37760);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112d37768) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d37730) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d37738) = param_3;
  *(undefined8 *)(lVar5 + _DAT_112d37740) = uVar4;
  *(long *)(lVar5 + _DAT_112d37748) = lVar9;
  *(undefined8 *)(lVar5 + _DAT_112d37750) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_112d37758) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar6;
  func_0x000107c6157c(uVar8);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  plVar7 = &lStack_70;
  func_0x000107c61154(plVar7,puVar2);
  lVar5 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(lVar5);
  return unaff_x20;
}



/* Entry: 100dfae2c; end: 100dfae47;  */

void FUN_100dfae2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100dfae48; end: 100dfae67;  */

void FUN_100dfae48(void)

{
  func_0x000107c61168(&PTR_PTR_112d37858);
  return;
}



/* Entry: 100dfae68; end: 100dfb26f;  */

undefined1  [16] FUN_100dfae68(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6b6361626c6c6166;
  func_0x000107c5fadc(0x6b6361626c6c6166,0xee00656c7469745f);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef110a0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfaf38);
  (*pcVar1)();
}



/* Entry: 100dfb270; end: 100dfb27b; -[SCComplianceRestrictedFSTProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb270(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d378b0;
  func_0x000107c61428(param_1 + _DAT_112d378b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfb27c; end: 100dfb287; -[SCComplianceRestrictedFSTProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d378b0;
  func_0x000107c61428(param_1 + _DAT_112d378b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfb288; end: 100dfb293; -[SCComplianceRestrictedFSTProviderEntryPoint complianceRestrictedAppExperienceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb288(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d378b8;
  func_0x000107c61428(param_1 + _DAT_112d378b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfb294; end: 100dfb29f; -[SCComplianceRestrictedFSTProviderEntryPoint setComplianceRestrictedAppExperienceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb294(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d378b8;
  func_0x000107c61428(param_1 + _DAT_112d378b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfb2a0; end: 100dfb2ab; -[SCComplianceRestrictedFSTProviderEntryPoint complianceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb2a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d378c0;
  func_0x000107c61428(param_1 + _DAT_112d378c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfb2ac; end: 100dfb2b7; -[SCComplianceRestrictedFSTProviderEntryPoint setComplianceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d378c0;
  func_0x000107c61428(param_1 + _DAT_112d378c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfb2b8; end: 100dfb2c3; -[SCComplianceRestrictedFSTProviderEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb2b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d378c8;
  func_0x000107c61428(param_1 + _DAT_112d378c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfb2c4; end: 100dfb2cf; -[SCComplianceRestrictedFSTProviderEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d378c8;
  func_0x000107c61428(param_1 + _DAT_112d378c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfb2d0; end: 100dfb2db; -[SCComplianceRestrictedFSTProviderEntryPoint challengeProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb2d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d378d0;
  func_0x000107c61428(param_1 + _DAT_112d378d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfb2dc; end: 100dfb31f;  */

void FUN_100dfb2dc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100dfb320; end: 100dfb32b; -[SCComplianceRestrictedFSTProviderEntryPoint setChallengeProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d378d0;
  func_0x000107c61428(param_1 + _DAT_112d378d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfb32c; end: 100dfb37f;  */

void FUN_100dfb32c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfb380; end: 100dfb3c7; -[SCComplianceRestrictedFSTProviderEntryPoint ageVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb380(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d378d8;
  func_0x000107c61428(param_1 + _DAT_112d378d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100dfb3c8; end: 100dfb42b; -[SCComplianceRestrictedFSTProviderEntryPoint setAgeVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d378d8;
  func_0x000107c61428(param_1 + _DAT_112d378d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100dfb42c; end: 100dfb77f;  */

/* WARNING: Possible PIC construction at 0x000100dfb560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb71c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb73c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb58c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfb5b0) */
/* WARNING: Removing unreachable block (ram,0x000100dfb5a0) */
/* WARNING: Removing unreachable block (ram,0x000100dfb5d0) */
/* WARNING: Removing unreachable block (ram,0x000100dfb5c0) */
/* WARNING: Removing unreachable block (ram,0x000100dfb740) */
/* WARNING: Removing unreachable block (ram,0x000100dfb730) */
/* WARNING: Removing unreachable block (ram,0x000100dfb720) */
/* WARNING: Removing unreachable block (ram,0x000100dfb710) */
/* WARNING: Removing unreachable block (ram,0x000100dfb564) */
/* WARNING: Removing unreachable block (ram,0x000100dfb590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfb42c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c3ff38();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c3ff24();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = unaff_x20;
        func_0x000107c3e8cc();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar8 = unaff_x20;
          func_0x000107c3f788();
          func_0x000107c61180();
          if (lVar8 != 0) {
            func_0x000107c3da38();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_100dfae48();
              func_0x000107c613fc();
              uVar7 = *(undefined8 *)(lVar4 + _DAT_113046c80);
              func_0x000107c61174();
              func_0x000107c43b5c();
              func_0x000107c61180();
              lVar4 = lVar3;
              func_0x000107c3d984();
              func_0x000107c61180();
              if (lVar4 == 0) {
                uVar9 = *(undefined8 *)(lVar8 + _DAT_113045ee0);
                lVar8 = 0;
                FUN_100df9228();
                lVar4 = lVar8;
                func_0x000107c610f8();
                puVar1 = (undefined8 *)(lVar4 + _DAT_112d37728);
                *puVar1 = 0xd000000000000019;
                puVar1[1] = 0x800000010ef11080;
                puVar1 = (undefined8 *)(lVar4 + _DAT_112d37760);
                *puVar1 = 0;
                puVar1[1] = 0;
                *(undefined8 *)(lVar4 + _DAT_112d37768) = 0;
                *(undefined8 *)(lVar4 + _DAT_112d37730) = uVar7;
                *(long *)(lVar4 + _DAT_112d37738) = lVar5;
                *(long *)(lVar4 + _DAT_112d37740) = lVar6;
                *(undefined8 *)(lVar4 + _DAT_112d37748) = 0;
                *(undefined8 *)(lVar4 + _DAT_112d37750) = uVar9;
                *(long *)(lVar4 + _DAT_112d37758) = unaff_x20;
                puVar2 = PTR_s_init_1125d9248;
                lStack_70 = lVar4;
                lStack_68 = lVar8;
                func_0x000107c6157c(uVar9);
                func_0x000107c61174(unaff_x20);
                func_0x000107c61174(lVar5);
                func_0x000107c61154(&lStack_70,puVar2);
                func_0x000107c4e9e4(lVar3);
                func_0x000107c61180();
                func_0x000107c4fba8();
              }
              else {
                func_0x000107c5f9e8();
                lVar3 = lVar4;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 100dfb780; end: 100dfb7a7; -[SCComplianceRestrictedFSTProviderEntryPoint begin] */

void FUN_100dfb780(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100dfb42c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dfb7a8; end: 100dfb7eb; -[SCComplianceRestrictedFSTProviderEntryPoint end] */

void FUN_100dfb7a8(undefined8 param_1)

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



/* Entry: 100dfb7ec; end: 100dfbb33;  */

void FUN_100dfb7ec(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000029;
    if (((param_2 == -0x2fffffffffffffd7) && (param_3 == -0x7ffffffef10ef0b0)) ||
       (func_0x000107c605b8(0xd000000000000029,0x800000010ef10f50,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53650();
    }
    else {
      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10eeec0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef11140,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000019;
          if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
             (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52c50();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10f0480)) ||
               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef0fb80,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c532ec();
            }
            else {
              uVar2 = 0xd00000000000001b;
              if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10f0460)) &&
                 (func_0x000107c605b8(0xd00000000000001b,0x800000010ef0fba0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "ComplianceRestrictedFSTProvider/SCComplianceRestrictedFSTProviderEntryPoint.swift"
                                    ,0x51,2,0x3a,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfbb34);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c52594();
            }
          }
          goto LAB_100dfb878;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53640();
    }
  }
LAB_100dfb878:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100dfbb34; end: 100dfbbdf; -[SCComplianceRestrictedFSTProviderEntryPoint setValue:forIvarName:] */

void FUN_100dfbb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100dfb7ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100dfbbe0; end: 100dfbc9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfbbe0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d378b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d378b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d378c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d378c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d378d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d378d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d378e0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100dfbc9c; end: 100dfbcbb; -[SCComplianceRestrictedFSTProviderEntryPoint init] */

void FUN_100dfbc9c(void)

{
  FUN_100dfbbe0();
  return;
}



/* Entry: 100dfbcbc; end: 100dfbcef;  */

void FUN_100dfbcbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100dfbcf0; end: 100dfbd77; -[SCComplianceRestrictedFSTProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfbcf0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d378b0);
  func_0x000107c61610(param_1 + _DAT_112d378b8);
  func_0x000107c61610(param_1 + _DAT_112d378c0);
  func_0x000107c61610(param_1 + _DAT_112d378c8);
  func_0x000107c61610(param_1 + _DAT_112d378d0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d378d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d378e0));
  return;
}



/* Entry: 100dfbd78; end: 100dfbd97;  */

void FUN_100dfbd78(void)

{
  func_0x000107c61168(&PTR_PTR_1127981d0);
  return;
}



/* Entry: 100dfbd98; end: 100dfbd9f; -[_TtC37ComplianceRestrictedFSTSignalProvider37ComplianceRestrictedFSTSignalProvider preCheckSource] */

undefined8 FUN_100dfbd98(void)

{
  return 0x2e;
}



/* Entry: 100dfbda0; end: 100dfbdd3; -[_TtC37ComplianceRestrictedFSTSignalProvider37ComplianceRestrictedFSTSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_100dfbda0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100dfbe64();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100dfbdd4; end: 100dfbe33; -[_TtC37ComplianceRestrictedFSTSignalProvider37ComplianceRestrictedFSTSignalProvider init] */

void FUN_100dfbdd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComplianceRestrictedFSTSignalProvider.ComplianceRestrictedFSTSignalProvider",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfbe00);
  (*pcVar1)();
}



/* Entry: 100dfbe34; end: 100dfbe43; -[_TtC37ComplianceRestrictedFSTSignalProvider37ComplianceRestrictedFSTSignalProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfbe34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d37910));
  return;
}



/* Entry: 100dfbe44; end: 100dfbe63;  */

void FUN_100dfbe44(void)

{
  func_0x000107c61168(&PTR_PTR_1127982b8);
  return;
}



/* Entry: 100dfbe64; end: 100dfbf4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100dfbe64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d37910);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar2,param_2,puVar3);
    func_0x000107c61180();
  }
  else {
    func_0x000107c4a348();
    func_0x000107c446c4(lVar1);
    puVar2 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar2,param_2,puVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 100dfbf50; end: 100dfc02b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100dfbf50(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_2 + _DAT_113046c80);
  lVar2 = 0;
  FUN_100dfbe44();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d37910) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_50,puVar1);
  uVar5 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar5);
  return unaff_x20;
}



/* Entry: 100dfc02c; end: 100dfc047;  */

void FUN_100dfc02c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100dfc048; end: 100dfc067;  */

void FUN_100dfc048(void)

{
  func_0x000107c61168(&PTR_PTR_112d37980);
  return;
}



/* Entry: 100dfc068; end: 100dfc073; -[SCComplianceRestrictedFSTSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfc068(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d379d8;
  func_0x000107c61428(param_1 + _DAT_112d379d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfc074; end: 100dfc07f; -[SCComplianceRestrictedFSTSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfc074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d379d8;
  func_0x000107c61428(param_1 + _DAT_112d379d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfc080; end: 100dfc08b; -[SCComplianceRestrictedFSTSignalProviderEntryPoint complianceRestrictedAppExperienceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfc080(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d379e0;
  func_0x000107c61428(param_1 + _DAT_112d379e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfc08c; end: 100dfc0cf;  */

void FUN_100dfc08c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100dfc0d0; end: 100dfc0db; -[SCComplianceRestrictedFSTSignalProviderEntryPoint setComplianceRestrictedAppExperienceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfc0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d379e0;
  func_0x000107c61428(param_1 + _DAT_112d379e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfc0dc; end: 100dfc12f;  */

void FUN_100dfc0dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfc130; end: 100dfc27b; -[SCComplianceRestrictedFSTSignalProviderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100dfc204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfc214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfc234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfc25c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfc218) */
/* WARNING: Removing unreachable block (ram,0x000100dfc208) */
/* WARNING: Removing unreachable block (ram,0x000100dfc238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfc130(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar5 = param_1;
  if (lVar2 != 0) {
    func_0x000107c3ff38();
    func_0x000107c61180();
    lVar5 = lVar2;
    if (param_1 != 0) {
      FUN_100dfc048(0);
      func_0x000107c613fc();
      uVar6 = *(undefined8 *)(param_1 + _DAT_113046c80);
      lVar3 = 0;
      FUN_100dfbe44();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(undefined8 *)(lVar4 + _DAT_112d37910) = uVar6;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar4;
      lStack_48 = lVar3;
      func_0x000107c61174(uVar6);
      func_0x000107c61154(&lStack_50,puVar1);
      func_0x000107c4e9e4(lVar2);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 100dfc27c; end: 100dfc2bf; -[SCComplianceRestrictedFSTSignalProviderEntryPoint end] */

void FUN_100dfc27c(undefined8 param_1)

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



/* Entry: 100dfc2c0; end: 100dfc457;  */

void FUN_100dfc2c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef10ef0b0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010ef10f50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ComplianceRestrictedFSTSignalProvider/SCComplianceRestrictedFSTSignalProviderEntryPoint.swift"
                            ,0x5d,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfc458);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53650();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100dfc458; end: 100dfc503; -[SCComplianceRestrictedFSTSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_100dfc458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100dfc2c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100dfc504; end: 100dfc577; -[SCComplianceRestrictedFSTSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfc504(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d379d8,0);
  func_0x000107c61614(param_1 + _DAT_112d379e0,0);
  *(undefined8 *)(param_1 + _DAT_112d379e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100dfc578; end: 100dfc5ab;  */

void FUN_100dfc578(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100dfc5ac; end: 100dfc5f3; -[SCComplianceRestrictedFSTSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfc5ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d379d8);
  func_0x000107c61610(param_1 + _DAT_112d379e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d379e8));
  return;
}



/* Entry: 100dfc5f4; end: 100dfc613;  */

void FUN_100dfc5f4(void)

{
  func_0x000107c61168(&PTR_PTR_112798378);
  return;
}



/* Entry: 100dfc614; end: 100dfc61b; -[_TtC50BillboardIncentiveCampaignGrantRewardActionHandler50BillboardIncentiveCampaignGrantRewardActionHandler actionHandlerType] */

undefined8 FUN_100dfc614(void)

{
  return 0x22;
}



/* Entry: 100dfc61c; end: 100dfc737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfc61c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&lStack_60);
  if (lStack_60 != 0) {
    uVar1 = 0xe2cf55a2420447ce;
    uVar3 = 0x81f59a02709205b4;
    func_0x000103ee3894();
    puVar2 = &UNK_110353d28;
    func_0x000107c613fc(&UNK_110353d28,0x40,7);
    *(long *)(puVar2 + 0x10) = lStack_60;
    *(undefined8 *)(puVar2 + 0x18) = uStack_58;
    *(undefined8 *)(puVar2 + 0x20) = uVar1;
    *(undefined8 *)(puVar2 + 0x28) = uVar3;
    *(undefined8 *)(puVar2 + 0x30) = param_1;
    *(undefined8 *)(puVar2 + 0x38) = unaff_x20;
    func_0x000107c615f0(lStack_60);
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    uVar1 = 10;
    func_0x0001001ca524(10,0,100,4,0,0,&UNK_10d901930,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lStack_60);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100dfc738; end: 100dfc7cf;  */

void FUN_100dfc738(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  func_0x000107c614f0(param_2);
  piVar3 = *(int **)(param_3 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100dfc7d0;
                    /* WARNING: Could not recover jumptable at 0x000100dfc7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_4,param_5,param_2,param_3);
  return;
}



/* Entry: 100dfc7d0; end: 100dfc81f;  */

void FUN_100dfc7d0(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100dfc820,0,0);
  return;
}



/* Entry: 100dfc820; end: 100dfca63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfc820(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  if (*(byte *)(unaff_x22 + 0x58) - 2 < 3) {
    func_0x000100dfd018();
LAB_100dfc85c:
    bVar1 = *(byte *)(unaff_x22 + 0x58);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    pcVar2 = "displayErrorMessage(for:)";
    func_0x0001000c10c0("displayErrorMessage(for:)");
    func_0x000107c61180();
    puVar3 = &UNK_110353d50;
    func_0x000107c613fc(&UNK_110353d50,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = uVar9;
    *(code **)(unaff_x22 + 0x30) = FUN_100dfcd78;
    *(undefined **)(unaff_x22 + 0x38) = puVar3;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_110353d68;
    lVar6 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar6);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61174(uVar9);
    func_0x000107c61574(uVar8);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(lVar6);
    func_0x000107c615e8(pcVar2);
    if (3 < bVar1 - 1) goto LAB_100dfca48;
  }
  else {
    if (*(byte *)(unaff_x22 + 0x58) == 0) {
      func_0x000100dfcf48();
      goto LAB_100dfc85c;
    }
    lVar6 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c5c47c();
    uVar7 = lVar6 - 1;
    if (uVar7 < 3) {
      uVar9 = *(undefined8 *)(&UNK_10d901940 + uVar7 * 8);
      uVar8 = *(undefined8 *)(&UNK_10d901958 + uVar7 * 8);
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar8 = 0xffffffffffffffff;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar6 = *(long *)(unaff_x22 + 0x48);
    uVar4 = 0;
    func_0x00010439c014(0);
    func_0x000107c610f8();
    func_0x00010439b9d8(uVar4,uVar8,0,0,uVar9,0,0,0xffffffffffffffff,0);
    func_0x000103929b80(0);
    func_0x000107c5d17c(uVar5);
    func_0x000107c61180();
    func_0x000107c61174(uVar8);
    func_0x000107c61174();
    func_0x0001039297f0(uVar5,uVar8,lVar6,1);
    func_0x000107c42c1c(*(undefined8 *)(lVar6 + _DAT_112d37a28));
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
  }
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0x48) + _DAT_112d37a20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c55350();
    func_0x000107c61170(lVar6);
  }
LAB_100dfca48:
                    /* WARNING: Could not recover jumptable at 0x000100dfca60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100dfca64; end: 100dfcb57; -[_TtC50BillboardIncentiveCampaignGrantRewardActionHandler50BillboardIncentiveCampaignGrantRewardActionHandler handleOnTapActionWithContext:] */

/* WARNING: Possible PIC construction at 0x000100dfca9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfcaa0) */

void FUN_100dfca64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100dfc61c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100dfcb58; end: 100dfcbb3; -[_TtC50BillboardIncentiveCampaignGrantRewardActionHandler50BillboardIncentiveCampaignGrantRewardActionHandler init] */

void FUN_100dfcb58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BillboardIncentiveCampaignGrantRewardActionHandler.BillboardIncentiveCampaignGrantRewardActionHandler"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfcb84);
  (*pcVar1)();
}



/* Entry: 100dfcbb4; end: 100dfcc0b; -[_TtC50BillboardIncentiveCampaignGrantRewardActionHandler50BillboardIncentiveCampaignGrantRewardActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100dfcbe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfcbe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfcbb4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d37a18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d37a20));
  return;
}



/* Entry: 100dfcc0c; end: 100dfcc8f; -[_TtC50BillboardIncentiveCampaignGrantRewardActionHandler50BillboardIncentiveCampaignGrantRewardActionHandler plusManagementDidDismiss] */

/* WARNING: Possible PIC construction at 0x000100dfcc48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfcc64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfcc4c) */
/* WARNING: Removing unreachable block (ram,0x000100dfcc68) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfcc0c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100dfcc90; end: 100dfccaf;  */

void FUN_100dfcc90(void)

{
  func_0x000107c61168(&PTR_PTR_112798440);
  return;
}



/* Entry: 100dfccb0; end: 100dfcd3b;  */

void FUN_100dfccb0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100dfcd3c;
  plVar9[8] = lVar3;
  plVar9[9] = lVar6;
  func_0x000107c614f0(uVar7);
  piVar10 = *(int **)(lVar4 + 8);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  plVar9[10] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_100dfc7d0;
                    /* WARNING: Could not recover jumptable at 0x000100dfc7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(uVar2,uVar5,uVar7,lVar4);
  return;
}



/* Entry: 100dfcd3c; end: 100dfcd77;  */

void FUN_100dfcd3c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100dfcd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100dfcd78; end: 100dfcd9f;  */

/* WARNING: Possible PIC construction at 0x000100dfcb10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfcb14) */
/* WARNING: Removing unreachable block (ram,0x000100dfcb30) */
/* WARNING: Removing unreachable block (ram,0x000100dfcb44) */

void FUN_100dfcd78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0,uVar1,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c409d8(puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100dfcda0; end: 100dfcf0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100dfcda0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  long lStack_70;
  long lStack_68;
  
  plVar6 = &lStack_70;
  func_0x000107c613fc();
  uVar7 = *(undefined8 *)(param_2 + _DAT_112d737a0);
  func_0x000107c6157c(uVar7);
  lVar2 = param_3;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61174();
    uVar3 = param_5;
    func_0x000107c4d80c();
    func_0x000107c61180();
    lVar4 = 0;
    FUN_100dfcc90();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112d37a18) = uVar7;
    *(long *)(lVar5 + _DAT_112d37a20) = lVar2;
    *(undefined8 *)(lVar5 + _DAT_112d37a28) = param_4;
    *(undefined8 *)(lVar5 + _DAT_112d37a30) = uVar3;
    lStack_70 = lVar5;
    lStack_68 = lVar4;
    func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
    uVar7 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(plVar6);
    func_0x000107c61170(uVar7);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfcf0c);
  (*pcVar1)();
}



/* Entry: 100dfcf0c; end: 100dfcf27;  */

void FUN_100dfcf0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100dfcf28; end: 100dfcf47;  */

void FUN_100dfcf28(void)

{
  func_0x000107c61168(&PTR_PTR_112d37aa0);
  return;
}



/* Entry: 100dfcf48; end: 100dfd0e3;  */

undefined1  [16] FUN_100dfcf48(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe0;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef11340);
  uVar3 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010d9019a0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfd018);
  (*pcVar1)();
}



/* Entry: 100dfd0e4; end: 100dfd0f3;  */

undefined1  [16] FUN_100dfd0e4(void)

{
  return ZEXT816(0x110353dc0);
}



/* Entry: 100dfd0f4; end: 100dfd0ff; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd0f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37af8;
  func_0x000107c61428(param_1 + _DAT_112d37af8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfd100; end: 100dfd10b; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd100(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37af8;
  func_0x000107c61428(param_1 + _DAT_112d37af8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfd10c; end: 100dfd117; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint incentiveCampaignGrantRewardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd10c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37b00;
  func_0x000107c61428(param_1 + _DAT_112d37b00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfd118; end: 100dfd123; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint setIncentiveCampaignGrantRewardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd118(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37b00;
  func_0x000107c61428(param_1 + _DAT_112d37b00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfd124; end: 100dfd12f; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37b08;
  func_0x000107c61428(param_1 + _DAT_112d37b08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfd130; end: 100dfd13b; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd130(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37b08;
  func_0x000107c61428(param_1 + _DAT_112d37b08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfd13c; end: 100dfd147; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd13c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37b10;
  func_0x000107c61428(param_1 + _DAT_112d37b10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100dfd148; end: 100dfd18b;  */

void FUN_100dfd148(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100dfd18c; end: 100dfd197; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37b10;
  func_0x000107c61428(param_1 + _DAT_112d37b10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfd198; end: 100dfd1eb;  */

void FUN_100dfd198(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100dfd1ec; end: 100dfd233; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint plusManagementScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd1ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37b18;
  func_0x000107c61428(param_1 + _DAT_112d37b18,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100dfd234; end: 100dfd297; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint setPlusManagementScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd234(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37b18;
  func_0x000107c61428(param_1 + _DAT_112d37b18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100dfd298; end: 100dfd4eb;  */

/* WARNING: Possible PIC construction at 0x000100dfd410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfd420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfd430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfd440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfd4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfd4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfd4a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfd4c4) */
/* WARNING: Removing unreachable block (ram,0x000100dfd4b4) */
/* WARNING: Removing unreachable block (ram,0x000100dfd444) */
/* WARNING: Removing unreachable block (ram,0x000100dfd434) */
/* WARNING: Removing unreachable block (ram,0x000100dfd424) */
/* WARNING: Removing unreachable block (ram,0x000100dfd414) */
/* WARNING: Removing unreachable block (ram,0x000100dfd4a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd298(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c452c8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c42eb0();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c4ea64();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        func_0x000107c4d840();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          FUN_100dfcf28();
          func_0x000107c613fc();
          uVar7 = *(undefined8 *)(lVar3 + _DAT_112d737a0);
          func_0x000107c6157c(uVar7);
          func_0x000107c42eac();
          func_0x000107c61180();
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfd4ec);
            (*pcVar1)();
          }
          func_0x000107c61174();
          func_0x000107c4d80c();
          func_0x000107c61180();
          lVar6 = 0;
          FUN_100dfcc90();
          lVar3 = lVar6;
          func_0x000107c610f8();
          *(undefined8 *)(lVar3 + _DAT_112d37a18) = uVar7;
          *(long *)(lVar3 + _DAT_112d37a20) = lVar4;
          *(long *)(lVar3 + _DAT_112d37a28) = lVar5;
          *(long *)(lVar3 + _DAT_112d37a30) = unaff_x20;
          lStack_70 = lVar3;
          lStack_68 = lVar6;
          func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
          func_0x000107c4e9e4(lVar2);
          func_0x000107c61180();
          func_0x000107c4fba8();
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100dfd4ec; end: 100dfd513; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint begin] */

void FUN_100dfd4ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100dfd298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dfd514; end: 100dfd557; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint end] */

void FUN_100dfd514(undefined8 param_1)

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



/* Entry: 100dfd558; end: 100dfd833;  */

void FUN_100dfd558(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10eec90)) ||
       (func_0x000107c605b8(0xd000000000000024,0x800000010ef11370,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5534c();
    }
    else {
      uVar2 = 0xd000000000000017;
      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ef230)) ||
         (func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5491c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10eec60)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10eec40)) &&
               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef113c0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "BillboardIncentiveCampaignGrantRewardActionHandler/SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint.swift"
                                  ,0x77,2,0x38,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100dfd834);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57570();
            goto LAB_100dfd5e4;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56b34();
      }
    }
  }
LAB_100dfd5e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100dfd834; end: 100dfd8df; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint setValue:forIvarName:] */

void FUN_100dfd834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100dfd558(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100dfd8e0; end: 100dfd987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd8e0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d37af8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d37b00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d37b08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d37b10,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d37b18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d37b20) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100dfd988; end: 100dfd9a7; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint init] */

void FUN_100dfd988(void)

{
  FUN_100dfd8e0();
  return;
}



/* Entry: 100dfd9a8; end: 100dfd9db;  */

void FUN_100dfd9a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100dfd9dc; end: 100dfda53; -[SCBillboardIncentiveCampaignGrantRewardActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfd9dc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d37af8);
  func_0x000107c61610(param_1 + _DAT_112d37b00);
  func_0x000107c61610(param_1 + _DAT_112d37b08);
  func_0x000107c61610(param_1 + _DAT_112d37b10);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d37b18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d37b20));
  return;
}



/* Entry: 100dfda54; end: 100dfda73;  */

void FUN_100dfda54(void)

{
  func_0x000107c61168(&PTR_PTR_112798538);
  return;
}



/* Entry: 100dfda74; end: 100dfda7b; -[_TtC28BillboardLogoutActionHandler28BillboardLogoutActionHandler actionHandlerType] */

undefined8 FUN_100dfda74(void)

{
  return 0x25;
}



/* Entry: 100dfda7c; end: 100dfdb8b;  */

/* WARNING: Possible PIC construction at 0x000100dfdb5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfdb60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfda7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  if (param_1 != 0) {
    lVar5 = param_1;
    func_0x000107c4db74();
    func_0x000107c61180();
    if (lVar5 == 0) {
      uVar7 = 0;
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = &UNK_110353f00;
      func_0x000107c613fc(&UNK_110353f00,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar5;
      uVar7 = 0x100dfe1ec;
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d37b70);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = uVar7;
    puVar1[1] = puVar6;
    func_0x00010058d43c(uVar2,uVar3);
    func_0x000107c5d17c(param_1);
    func_0x000107c61180();
    func_0x000107c61604(unaff_x20 + _DAT_112d37b68,param_1);
    func_0x000107c615e8(param_1);
    puVar6 = PTR_PTR_1126af4a0;
    func_0x000107c610f8(PTR_PTR_1126af4a0);
    func_0x000107c4757c();
    func_0x00010430dc6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100dfdb8c);
  (*pcVar4)();
}


