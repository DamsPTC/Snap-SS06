/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10132af70; end: 10132af8f; -[_TtC31SCIncentiveCampaignDetailsScope31SCIncentiveCampaignDetailsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132af70(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d73590));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132af90; end: 10132b11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10132af90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_112d73598;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d73590) = param_1;
  func_0x000107c61428();
  *(undefined8 *)(lVar1 + 8) = param_3;
  func_0x000107c61604(lVar1,param_2);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 10132b120; end: 10132b17f; -[_TtC31SCIncentiveCampaignDetailsScope31SCIncentiveCampaignDetailsScope init] */

void FUN_10132b120(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCIncentiveCampaignDetailsScope.SCIncentiveCampaignDetailsScope",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10132b14c);
  (*pcVar1)();
}



/* Entry: 10132b180; end: 10132b1b7; -[_TtC31SCIncentiveCampaignDetailsScope31SCIncentiveCampaignDetailsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10132b180(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d73590));
  param_1 = param_1 + _DAT_112d73598;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10132b1b8; end: 10132b1d7;  */

void FUN_10132b1b8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8678);
  return;
}



/* Entry: 10132b1d8; end: 10132b25b; -[_TtC39IncentiveCampaignRedeemTakeoverProvider39IncentiveCampaignRedeemTakeoverProvider canShowCampaign:] */

uint FUN_10132b1d8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if ((param_3 == -0x2fffffffffffffcd) && (param_2 == -0x7ffffffef10c8ed0)) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)param_3;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 10132b25c; end: 10132b50f;  */

/* WARNING: Possible PIC construction at 0x00010132b374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132b3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132b3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132b4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132b4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010132b400) */
/* WARNING: Removing unreachable block (ram,0x00010132b434) */
/* WARNING: Removing unreachable block (ram,0x00010132b460) */
/* WARNING: Removing unreachable block (ram,0x00010132b3bc) */
/* WARNING: Removing unreachable block (ram,0x00010132b378) */
/* WARNING: Removing unreachable block (ram,0x00010132b4b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132b25c(undefined *param_1)

{
  ulong *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  if (param_1 == (undefined *)0x0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d735d0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = (ulong *)PTR_PTR_1130c6138;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d735c8);
    FUN_10132d1b8(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c615f0(uVar3);
    func_0x00010132d138(puVar1,uVar3);
    pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x70);
    func_0x000107c615f0();
    (*pcVar4)();
    param_1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10132b510; end: 10132b5d7; -[_TtC39IncentiveCampaignRedeemTakeoverProvider39IncentiveCampaignRedeemTakeoverProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x00010132b5b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010132b5b8) */

void FUN_10132b510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1103a3918;
    func_0x000107c613fc(&UNK_1103a3918,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    pcVar3 = FUN_10132be5c;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_10132b25c(param_3,param_4,pcVar3,puVar2);
  func_0x00010058d43c(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10132b5d8; end: 10132b633; -[_TtC39IncentiveCampaignRedeemTakeoverProvider39IncentiveCampaignRedeemTakeoverProvider init] */

void FUN_10132b5d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("IncentiveCampaignRedeemTakeoverProvider.IncentiveCampaignRedeemTakeoverProvider"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10132b604);
  (*pcVar1)();
}



/* Entry: 10132b634; end: 10132b6cf; -[_TtC39IncentiveCampaignRedeemTakeoverProvider39IncentiveCampaignRedeemTakeoverProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010132b670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010132b674) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132b634(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d735c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d735d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d735d8));
  return;
}



/* Entry: 10132b6d0; end: 10132b8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132b6d0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar6 = *(long *)(param_1 + _DAT_112d735f0);
  if ((lVar6 != 0) && (*(long *)(param_1 + _DAT_112d735e8) != 0)) {
    func_0x000107c615f0(lVar6);
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 == 0) {
      func_0x000107c615e8(lVar6);
    }
    else {
      uVar1 = 0xe2cf55a2420447ce;
      uVar4 = 0x81f59a02709205b4;
      func_0x000103ee3894();
      puVar2 = &UNK_1103a38f0;
      func_0x000107c613fc(&UNK_1103a38f0,0x40,7);
      *(long *)(puVar2 + 0x10) = lStack_60;
      *(undefined8 *)(puVar2 + 0x18) = uStack_58;
      *(undefined8 *)(puVar2 + 0x20) = uVar1;
      *(undefined8 *)(puVar2 + 0x28) = uVar4;
      *(long *)(puVar2 + 0x30) = lVar6;
      *(long *)(puVar2 + 0x38) = param_1;
      func_0x000107c615f0(lVar6);
      func_0x000107c615f0(lStack_60);
      func_0x000107c61174(param_1);
      uVar1 = 10;
      func_0x0001001ca524(10,0,100,4,0,0,&UNK_10d933b00,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar6);
      func_0x000107c615e8(lStack_60);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar1);
    }
  }
  lVar6 = *(long *)(param_1 + _DAT_112d735e8);
  if (lVar6 != 0) {
    lVar5 = *(long *)(param_1 + _DAT_112d735d0);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar3 = puVar2;
      func_0x000107c5f9dc();
      func_0x000107c6142c(puVar2);
      func_0x000107c4c4c0(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10132b8c0; end: 10132b9e3;  */

/* WARNING: Possible PIC construction at 0x00010132b96c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132b998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010132b99c) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132b8c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112d735e8);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(param_1 + _DAT_112d735d0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    pcVar4 = *(code **)(param_1 + _DAT_112d73600);
    if (pcVar4 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(param_1 + _DAT_112d73600))[1]);
      (*pcVar4)();
    }
  }
  else {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4b8(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10132b9e4; end: 10132ba7b;  */

void FUN_10132b9e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_7;
  func_0x000107c614f0(param_2);
  piVar3 = *(int **)(param_3 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10132ba7c;
                    /* WARNING: Could not recover jumptable at 0x00010132ba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_4,param_5,param_2,param_3);
  return;
}



/* Entry: 10132ba7c; end: 10132bacb;  */

void FUN_10132ba7c(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10132bacc,0,0);
  return;
}



/* Entry: 10132bacc; end: 10132bbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132bacc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x28) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
    lVar2 = *(long *)(unaff_x22 + 0x18);
    func_0x00010439c014(0);
    func_0x000107c610f8();
    uVar1 = 0x51;
    func_0x00010439b9d8(0x51,0,0,0x98,0,0,0xffffffffffffffff,0);
    func_0x000103929b80(0);
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(uVar1);
    func_0x000107c61174();
    func_0x0001039297f0(uVar3,uVar1,lVar2,1);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112d735e0));
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010132bbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10132bbb8; end: 10132bbef;  */

void FUN_10132bbb8(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &UNK_1103a38a0;
  ppuVar2 = &puStack_60;
  func_0x000107c613fc(&UNK_1103a38a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  uStack_40 = 0x10132bd8c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103a38b8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10132bbf0; end: 10132bc97;  */

void FUN_10132bbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = unaff_x20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  uStack_48 = param_6;
  uStack_40 = param_5;
  lStack_38 = param_4;
  func_0x000107c60bc4(&puStack_60);
  lVar1 = lStack_38;
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10132bc98; end: 10132bd1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132bc98(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d735e0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  pcVar3 = *(code **)(unaff_x20 + _DAT_112d73600);
  if (pcVar3 != (code *)0x0) {
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d73600))[1];
    func_0x000107c6157c(uVar4);
    (*pcVar3)();
    if (pcVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10132bd20; end: 10132bd47; -[_TtC39IncentiveCampaignRedeemTakeoverProvider39IncentiveCampaignRedeemTakeoverProvider plusManagementDidDismiss] */

void FUN_10132bd20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10132bc98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10132bd48; end: 10132bd67;  */

void FUN_10132bd48(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8740);
  return;
}



/* Entry: 10132bd68; end: 10132bd93;  */

/* WARNING: Possible PIC construction at 0x00010132b96c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132b998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010132b99c) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132bd68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined **)(lVar3 + _DAT_112d735e8);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar4 = *(long *)(lVar3 + _DAT_112d735d0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    pcVar5 = *(code **)(lVar3 + _DAT_112d73600);
    if (pcVar5 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(lVar3 + _DAT_112d73600))[1]);
      (*pcVar5)();
    }
  }
  else {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4b8(lVar4);
    func_0x000107c615e8(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10132bd94; end: 10132be1f;  */

void FUN_10132bd94(void)

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
  plVar9 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_10132be20;
  plVar9[2] = lVar3;
  plVar9[3] = lVar6;
  func_0x000107c614f0(uVar7);
  piVar10 = *(int **)(lVar4 + 8);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  plVar9[4] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_10132ba7c;
                    /* WARNING: Could not recover jumptable at 0x00010132ba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(uVar2,uVar5,uVar7,lVar4);
  return;
}



/* Entry: 10132be20; end: 10132be5b;  */

void FUN_10132be20(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010132be58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10132be5c; end: 10132be6f;  */

void FUN_10132be5c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010132be64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10132be70; end: 10132c053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10132be70(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_70;
  func_0x000107c613fc();
  lVar3 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    uVar5 = param_3;
    func_0x000107c43b5c();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_4 + _DAT_112d737a0);
    lVar6 = 0;
    FUN_10132bd48();
    lVar3 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112d735e8) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d735f0) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d735f8) = 0;
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d73600);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(long *)(lVar3 + _DAT_112d735c8) = lVar4;
    *(undefined8 *)(lVar3 + _DAT_112d735d0) = uVar5;
    *(undefined8 *)(lVar3 + _DAT_112d735d8) = uVar8;
    *(undefined8 *)(lVar3 + _DAT_112d735e0) = param_5;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar3;
    lStack_68 = lVar6;
    func_0x000107c6157c(uVar8);
    func_0x000107c61174(param_5);
    func_0x000107c61154(&lStack_70,puVar2);
    uVar5 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c61174(plVar7);
    func_0x000107c4fba8(uVar5);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(plVar7);
    func_0x000107c61170(plVar7);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  return unaff_x20;
}



/* Entry: 10132c054; end: 10132c06f;  */

void FUN_10132c054(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10132c070; end: 10132c08f;  */

void FUN_10132c070(void)

{
  func_0x000107c61168(&PTR_PTR_112d73670);
  return;
}



/* Entry: 10132c090; end: 10132c09b; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c090(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d736c8;
  func_0x000107c61428(param_1 + _DAT_112d736c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132c09c; end: 10132c0a7; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c09c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d736c8;
  func_0x000107c61428(param_1 + _DAT_112d736c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132c0a8; end: 10132c0b3; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c0a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d736d0;
  func_0x000107c61428(param_1 + _DAT_112d736d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132c0b4; end: 10132c0bf; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c0b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d736d0;
  func_0x000107c61428(param_1 + _DAT_112d736d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132c0c0; end: 10132c0cb; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c0c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d736d8;
  func_0x000107c61428(param_1 + _DAT_112d736d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132c0cc; end: 10132c0d7; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d736d8;
  func_0x000107c61428(param_1 + _DAT_112d736d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132c0d8; end: 10132c0e3; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint grantRewardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c0d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d736e0;
  func_0x000107c61428(param_1 + _DAT_112d736e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132c0e4; end: 10132c127;  */

void FUN_10132c0e4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10132c128; end: 10132c133; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint setGrantRewardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d736e0;
  func_0x000107c61428(param_1 + _DAT_112d736e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132c134; end: 10132c187;  */

void FUN_10132c134(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132c188; end: 10132c1cf; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint plusManagementScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c188(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d736e8;
  func_0x000107c61428(param_1 + _DAT_112d736e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10132c1d0; end: 10132c233; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint setPlusManagementScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c1d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d736e8;
  func_0x000107c61428(param_1 + _DAT_112d736e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10132c234; end: 10132c4ff;  */

/* WARNING: Possible PIC construction at 0x00010132c30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132c420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132c434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132c444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132c454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132c4c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132c4d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132c4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010132c4dc) */
/* WARNING: Removing unreachable block (ram,0x00010132c4cc) */
/* WARNING: Removing unreachable block (ram,0x00010132c458) */
/* WARNING: Removing unreachable block (ram,0x00010132c448) */
/* WARNING: Removing unreachable block (ram,0x00010132c424) */
/* WARNING: Removing unreachable block (ram,0x00010132c310) */
/* WARNING: Removing unreachable block (ram,0x00010132c438) */
/* WARNING: Removing unreachable block (ram,0x00010132c314) */
/* WARNING: Removing unreachable block (ram,0x00010132c4bc) */

void FUN_10132c234(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3e8cc();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4447c();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c4ea64();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_10132c070(0);
            func_0x000107c613fc();
            func_0x000107c5dbd4(lVar2);
            func_0x000107c61180();
            func_0x000107c5c734();
            func_0x000107c61180();
            lVar1 = lVar2;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10132c500; end: 10132c527; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint begin] */

void FUN_10132c500(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10132c234();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10132c528; end: 10132c56b; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint end] */

void FUN_10132c528(undefined8 param_1)

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



/* Entry: 10132c56c; end: 10132c843;  */

void FUN_10132c56c(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
    }
    else {
      uVar2 = 0xd000000000000019;
      if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
         (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52c50();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10c8e90)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef37170,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10eec40)) &&
               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef113c0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "IncentiveCampaignRedeemTakeoverProvider/SCIncentiveCampaignRedeemTakeoverProviderEntryPoint.swift"
                                  ,0x61,2,0x37,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10132c844);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57570();
            goto LAB_10132c5f8;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c54f24();
      }
    }
  }
LAB_10132c5f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10132c844; end: 10132c8ef; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint setValue:forIvarName:] */

void FUN_10132c844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10132c56c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10132c8f0; end: 10132c997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c8f0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d736c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d736d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d736d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d736e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d736e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d736f0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10132c998; end: 10132c9b7; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint init] */

void FUN_10132c998(void)

{
  FUN_10132c8f0();
  return;
}



/* Entry: 10132c9b8; end: 10132c9eb;  */

void FUN_10132c9b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10132c9ec; end: 10132ca63; -[SCIncentiveCampaignRedeemTakeoverProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132c9ec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d736c8);
  func_0x000107c61610(param_1 + _DAT_112d736d0);
  func_0x000107c61610(param_1 + _DAT_112d736d8);
  func_0x000107c61610(param_1 + _DAT_112d736e0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d736e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d736f0));
  return;
}



/* Entry: 10132ca64; end: 10132cad3;  */

void FUN_10132ca64(void)

{
  func_0x000107c61168(&PTR_PTR_1127c88a8);
  return;
}



/* Entry: 10132cad4; end: 10132cadb;  */

void FUN_10132cad4(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 10132cadc; end: 10132cc4f;  */

void FUN_10132cadc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 10132cc50; end: 10132cc77;  */

void FUN_10132cc50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 10132cc78; end: 10132cce3;  */

void FUN_10132cc78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d73740;
  FUN_10132cebc(0x112d73740,&UNK_10d933ce4);
  uVar2 = 0x112d73748;
  FUN_10132cebc(0x112d73748,&UNK_10d933c8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 10132cce4; end: 10132cd2b;  */

void FUN_10132cce4(void)

{
  FUN_10132cebc(0x112d73728,&UNK_10d933c54);
  return;
}



/* Entry: 10132cd2c; end: 10132cda3;  */

undefined8 FUN_10132cd2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 10132cda4; end: 10132ce97;  */

undefined1 * FUN_10132cda4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 10132ce98; end: 10132cebb;  */

void FUN_10132ce98(void)

{
  FUN_10132cebc(0x112d73738,&UNK_10d933cbc);
  return;
}



/* Entry: 10132cebc; end: 10132cf47;  */

void FUN_10132cebc(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x00010132ca84(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10132cf48; end: 10132d1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132cf48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112d73750;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10132d1b8; end: 10132d1d7;  */

void FUN_10132d1b8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8988);
  return;
}



/* Entry: 10132d1d8; end: 10132d247; -[_TtC34IncentiveCampaignFSTCustomTakeover48IncentiveCampaignFSTCustomTakeoverViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132d1d8(long param_1)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112d73750;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "IncentiveCampaignFSTCustomTakeover/IncentiveCampaignFSTCustomTakeoverViewController.swift"
                      ,0x59,2,0x18,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10132d248);
  (*pcVar1)();
}



/* Entry: 10132d248; end: 10132d64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132d248(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  FUN_10132d1b8();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_loadView_112604be0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d73760);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126a6ab0;
    func_0x000107c610f8(PTR_PTR_1126a6ab0);
    func_0x000107c453e4();
    func_0x00010132da78(0,0x112d73768,&PTR_PTR_1126a6ab8);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d73758);
    puVar5 = &UNK_1103a3ac0;
    puVar4 = puVar5;
    func_0x000107c613fc(&UNK_1103a3ac0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    func_0x000107c613fc(&UNK_1103a3ac0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    func_0x000107c61174(uVar12);
    FUN_10132d8a4();
    puVar5 = PTR_PTR_1126a6ac0;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61180();
    func_0x000107c5a050();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10132d63c);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 9;
    *(undefined8 *)(lVar6 + 0x10) = 4;
    puVar4 = puVar5;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10132d640);
      (*pcVar1)();
    }
    lVar8 = lVar7;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar9 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar8);
    *(undefined **)(lVar6 + 0x20) = puVar9;
    puVar4 = puVar5;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10132d644);
      (*pcVar1)();
    }
    lVar8 = lVar7;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar9 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar8);
    *(undefined **)(lVar6 + 0x28) = puVar9;
    puVar4 = puVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10132d648);
      (*pcVar1)();
    }
    lVar8 = lVar7;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar9 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar8);
    *(undefined **)(lVar6 + 0x30) = puVar9;
    puVar4 = puVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10132d64c);
      (*pcVar1)();
    }
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar7 = unaff_x20;
    func_0x000107c3ec1c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    puVar10 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar6 + 0x38) = puVar10;
    uVar11 = 0;
    func_0x00010132da78(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar7 = lVar6;
    func_0x000107c5fc48(lVar6,uVar11);
    func_0x000107c61574(lVar6);
    func_0x000107c3d048(puVar9);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 10132d64c; end: 10132d673;  */

void FUN_10132d64c(void)

{
  func_0x00010132d720();
  return;
}



/* Entry: 10132d674; end: 10132d7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132d674(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112d73750;
    func_0x000107c61428(lVar2,auStack_60,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      lVar2 = lVar1;
      func_0x000107c614f0();
      (**(code **)(lVar3 + 8))(param_1,lVar2,lVar3);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10132d7d0; end: 10132d7f7;  */

void FUN_10132d7d0(void)

{
  func_0x00010132d720();
  return;
}



/* Entry: 10132d7f8; end: 10132d8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132d7f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112d73750;
    func_0x000107c61428(lVar2,auStack_60,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      lVar2 = lVar1;
      func_0x000107c614f0();
      (**(code **)(lVar3 + 0x10))(param_1,lVar2,lVar3);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10132d8a4; end: 10132d9ab;  */

undefined8
FUN_10132d8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_c0;
  func_0x000107c614e8();
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103a3ad8;
  ppuVar2 = &puStack_90;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1103a3b00;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c48c18(unaff_x20);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 10132d9ac; end: 10132d9d3; -[_TtC34IncentiveCampaignFSTCustomTakeover48IncentiveCampaignFSTCustomTakeoverViewController loadView] */

void FUN_10132d9ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10132d248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10132d9d4; end: 10132da2f; -[_TtC34IncentiveCampaignFSTCustomTakeover48IncentiveCampaignFSTCustomTakeoverViewController initWithNibName:bundle:] */

void FUN_10132d9d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("IncentiveCampaignFSTCustomTakeover.IncentiveCampaignFSTCustomTakeoverViewController"
                      ,0x53,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10132da00);
  (*pcVar1)();
}



/* Entry: 10132da30; end: 10132dadb; -[_TtC34IncentiveCampaignFSTCustomTakeover48IncentiveCampaignFSTCustomTakeoverViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10132da30(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d73758));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d73760));
  param_1 = param_1 + _DAT_112d73750;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10132dadc; end: 10132db1f;  */

void FUN_10132dadc(long param_1,long param_2)

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



/* Entry: 10132db20; end: 10132dd83;  */

void FUN_10132db20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10132dd84; end: 10132dd97;  */

bool FUN_10132dd84(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10132dd98; end: 10132de43;  */

void FUN_10132dd98(void)

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



/* Entry: 10132de44; end: 10132de47;  */

void FUN_10132de44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933e40;
  func_0x000107c61520(&UNK_10d933e40,&UNK_1103a3d78);
  puRam0000000112d73798 = puVar1;
  return;
}



/* Entry: 10132de48; end: 10132de87;  */

void FUN_10132de48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933e40;
  func_0x000107c61520(&UNK_10d933e40,&UNK_1103a3d78);
  puRam0000000112d73798 = puVar1;
  return;
}



/* Entry: 10132de88; end: 10132dfeb;  */

int FUN_10132de88(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10132df04;
        goto LAB_10132dee8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10132dee8:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_10132df04:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10132dfec; end: 10132e083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132dfec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d737a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10132e084; end: 10132e0e3; -[_TtC36IncentiveCampaignGrantRewardServices36IncentiveCampaignGrantRewardServices init] */

void FUN_10132e084(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("IncentiveCampaignGrantRewardServices.IncentiveCampaignGrantRewardServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10132e0b0);
  (*pcVar1)();
}



/* Entry: 10132e0e4; end: 10132e0f3; -[_TtC36IncentiveCampaignGrantRewardServices36IncentiveCampaignGrantRewardServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e0e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d737a0));
  return;
}



/* Entry: 10132e0f4; end: 10132e113;  */

void FUN_10132e0f4(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8a80);
  return;
}



/* Entry: 10132e114; end: 10132e15f; -[SCIncentiveCampaignGrantRewardRequest campaignId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e114(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d737d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d737d0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10132e160; end: 10132e163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e160(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d737d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10132e164; end: 10132e223; -[SCIncentiveCampaignGrantRewardRequest initWithCampaignId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d737d0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10132e224; end: 10132e227; -[SCIncentiveCampaignGrantRewardRequest copyWithZone:] */

void FUN_10132e224(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10132e228; end: 10132e243; -[SCIncentiveCampaignGrantRewardRequest description] */

void FUN_10132e228(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132e244; end: 10132e2bf; -[SCIncentiveCampaignGrantRewardRequest init] */

void FUN_10132e244(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "IncentiveCampaignGrantRewardServices/IncentiveCampaignGrantRewardRequestWrapper.swift"
                      ,0x55,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10132e28c);
  (*pcVar1)();
}



/* Entry: 10132e2c0; end: 10132e2d3; -[SCIncentiveCampaignGrantRewardRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d737d0 + 8))
  ;
  return;
}



/* Entry: 10132e2d4; end: 10132e2f3;  */

void FUN_10132e2d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8b40);
  return;
}



/* Entry: 10132e2f4; end: 10132e2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e2f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d737d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10132e2f8; end: 10132e307; -[SCIncentiveCampaignGrantRewardResponse status] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e2f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d73800));
  return;
}



/* Entry: 10132e308; end: 10132e353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e308(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d73800) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10132e354; end: 10132e3ab; -[SCIncentiveCampaignGrantRewardResponse initWithStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d73800) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10132e3ac; end: 10132e40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e3ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  FUN_10132e728();
  *(undefined8 *)(unaff_x20 + _DAT_112d73800) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10132e40c; end: 10132e40f; -[SCIncentiveCampaignGrantRewardResponse copyWithZone:] */

void FUN_10132e40c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10132e410; end: 10132e42b; -[SCIncentiveCampaignGrantRewardResponse description] */

void FUN_10132e410(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132e42c; end: 10132e4a7; -[SCIncentiveCampaignGrantRewardResponse init] */

void FUN_10132e42c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "IncentiveCampaignGrantRewardServices/IncentiveCampaignGrantRewardResponseWrapper.swift"
                      ,0x56,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10132e474);
  (*pcVar1)();
}



/* Entry: 10132e4a8; end: 10132e4b7; -[SCIncentiveCampaignGrantRewardResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132e4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d73800));
  return;
}



/* Entry: 10132e4b8; end: 10132e4d7;  */

void FUN_10132e4b8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8c08);
  return;
}



/* Entry: 10132e4d8; end: 10132e5ab;  */

void FUN_10132e4d8(void)

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


