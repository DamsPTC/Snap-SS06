/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101eccadc; end: 101eccb0b;  */

void FUN_101eccadc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 101eccb0c; end: 101eccb1b;  */

undefined1  [16] FUN_101eccb0c(void)

{
  return ZEXT816(0x110497c28);
}



/* Entry: 101eccb1c; end: 101ecce67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eccb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_PTR_1126a9818;
  func_0x000107c610f8(PTR_PTR_1126a9818);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  uVar7 = param_1;
  func_0x000100576e9c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c57d58(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(param_3,param_4);
  uVar7 = param_3;
  func_0x000100576e9c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c57d68(puVar1);
  func_0x000107c61170(uVar7);
  puVar2 = PTR_PTR_1126a9820;
  func_0x000107c610f8(PTR_PTR_1126a9820);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c593e4(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c5fadc(param_7,param_8);
  uVar7 = param_7;
  func_0x000100576e9c();
  func_0x000107c61180();
  func_0x000107c61170(param_7);
  func_0x000107c59434(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(param_9,param_10);
  uVar7 = param_9;
  func_0x000100576e9c();
  func_0x000107c61180();
  func_0x000107c61170(param_9);
  func_0x000107c54f60(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(param_11,param_12);
  uVar7 = param_11;
  func_0x000100576e9c();
  func_0x000107c61180();
  func_0x000107c61170(param_11);
  func_0x000107c570a4(puVar2);
  func_0x000107c61170(uVar7);
  puVar3 = PTR_PTR_1126a9828;
  func_0x000107c610f8(PTR_PTR_1126a9828);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_13,param_14);
  func_0x000107c57d88(puVar3);
  func_0x000107c61170(param_13);
  func_0x000107c57d98(puVar3);
  func_0x000107c57d9c(puVar3);
  func_0x000107c5fadc(param_15,param_16);
  func_0x000107c57d80(puVar3);
  func_0x000107c61170(param_15);
  puVar4 = PTR_PTR_1126a9830;
  func_0x000107c610f8(PTR_PTR_1126a9830);
  func_0x000107c453e4();
  func_0x000107c57d74();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e39a50);
  func_0x000107c61174(puVar4);
  puVar5 = puVar4;
  func_0x000101ecd2ec();
  pcStack_78 = FUN_101ecce68;
  uStack_70 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_101ecce6c;
  puStack_80 = &UNK_110497c38;
  ppuVar6 = &puStack_98;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c50234(uVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(puVar5);
  return;
}



/* Entry: 101ecce68; end: 101ecce6b;  */

void FUN_101ecce68(void)

{
  return;
}



/* Entry: 101ecce6c; end: 101eccee3;  */

/* WARNING: Possible PIC construction at 0x000101eccec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eccecc) */

void FUN_101ecce6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101eccee4; end: 101ecd037; -[_TtC35SCCommunitiesOrgNetworkServicesImpl43CommunitiesStoryCommentNetworkRequesterImpl reportCommunityStoryCommentRequestWithReplyId:replyPosterId:snapId:snapPosterId:groupId:orgId:reportReasonId:reportMessage:] */

/* WARNING: Possible PIC construction at 0x000101eccfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eccff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ecd000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ecd010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ecd004) */
/* WARNING: Removing unreachable block (ram,0x000101eccff4) */
/* WARNING: Removing unreachable block (ram,0x000101eccfe4) */
/* WARNING: Removing unreachable block (ram,0x000101ecd014) */

void FUN_101eccee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c5faec();
  uVar1 = param_2;
  func_0x000107c5faec();
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c5faec();
  uVar6 = uVar5;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61174(param_1);
  FUN_101eccb1c(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,uVar3,param_7,uVar4,param_8,
                uVar5,param_9,uVar6,param_10,uVar7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ecd038; end: 101ecd093; -[_TtC35SCCommunitiesOrgNetworkServicesImpl43CommunitiesStoryCommentNetworkRequesterImpl init] */

void FUN_101ecd038(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommunitiesOrgNetworkServicesImpl.CommunitiesStoryCommentNetworkRequesterImpl"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ecd064);
  (*pcVar1)();
}



/* Entry: 101ecd094; end: 101ecd0db; -[_TtC35SCCommunitiesOrgNetworkServicesImpl43CommunitiesStoryCommentNetworkRequesterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecd094(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e39a40));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e39a48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e39a50));
  return;
}



/* Entry: 101ecd0dc; end: 101ecd0fb;  */

void FUN_101ecd0dc(void)

{
  func_0x000107c61168(&PTR_PTR_112808b70);
  return;
}



/* Entry: 101ecd0fc; end: 101ecd443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecd0fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e39a40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e39a48) = param_2;
  func_0x000107c615f0();
  func_0x000107c615f0(param_2);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f018ce0);
  func_0x000107c4e60c(param_2);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
  puVar2 = puVar1;
  func_0x000107c545b8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c57f3c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f018ba0);
  func_0x000107c40a28(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126a9800;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + _DAT_112e39a50) = puVar1;
  FUN_101ecd0dc();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ecd444; end: 101ecd45f;  */

void FUN_101ecd444(long param_1,long param_2)

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



/* Entry: 101ecd460; end: 101ecd547;  */

/* WARNING: Possible PIC construction at 0x000101ecd530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ecd534) */

void FUN_101ecd460(char param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0x646e65697266;
  if (param_2 != '\x01') {
    uVar1 = 0x666c6573;
  }
  uVar4 = 0xe600000000000000;
  if (param_2 != '\x01') {
    uVar4 = 0xe400000000000000;
  }
  func_0x000107c5fadc(uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  if (param_1 == '\0') {
    uVar4 = 0xe700000000000000;
    uVar2 = 0x73736563637573;
  }
  else {
    uVar2 = 0x726f727265;
    if (param_1 != '\x01') {
      uVar2 = 0x7974706d65;
    }
    uVar4 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x00010655fabc(uVar3,uVar1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101ecd548; end: 101ecd58b;  */

void FUN_101ecd548(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ecd58c; end: 101ecd5c7;  */

void FUN_101ecd58c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 101ecd5c8; end: 101ecd5d3;  */

void FUN_101ecd5c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 101ecd5d4; end: 101ecd6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecd5d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar6 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_110497cf0;
  func_0x000107c613fc(&UNK_110497cf0,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  pcStack_40 = FUN_101ecd7a0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101ecd7ac;
  puStack_48 = &UNK_110497d08;
  puStack_38 = puVar5;
  func_0x000107c60bc4(&puStack_60);
  puVar5 = puStack_38;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x0001002a8888(0);
  func_0x000107c610f8();
  func_0x000103b05bb4(puVar4);
  return;
}



/* Entry: 101ecd6f0; end: 101ecd79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101ecd6f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_1130227b0);
  uVar2 = *(undefined8 *)(param_3 + _DAT_1130227a8);
  FUN_101ed0d54(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  FUN_101ed0b90(param_1,param_2,uVar1,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 101ecd7a0; end: 101ecd7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101ecd7a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130227b0);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130227a8);
  FUN_101ed0d54(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  FUN_101ed0b90(uVar2,uVar1,uVar3,uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return uVar2;
}



/* Entry: 101ecd7ac; end: 101ecd7e3;  */

void FUN_101ecd7ac(long param_1)

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



/* Entry: 101ecd7e4; end: 101ecd7ff;  */

void FUN_101ecd7e4(long param_1,long param_2)

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



/* Entry: 101ecd800; end: 101ecd81b;  */

/* WARNING: Possible PIC construction at 0x000101ecd80c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ecd810) */

void FUN_101ecd800(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ecd81c; end: 101ecd867;  */

void FUN_101ecd81c(void)

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



/* Entry: 101ecd868; end: 101ecd8e3;  */

void FUN_101ecd868(undefined8 param_1)

{
  if (lRam0000000112e39b48 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6985e4);
  return;
}



/* Entry: 101ecd8e4; end: 101ecd907;  */

void FUN_101ecd8e4(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ecd5d4();
  *param_1 = param_2;
  return;
}



/* Entry: 101ecd908; end: 101ecd977;  */

undefined8
FUN_101ecd908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  FUN_101ed0b90(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 101ecd978; end: 101ecdb1b; -[SCSaturnStatusProvider initWithCurrentUserId:atlasMyDataProvider:atlasFriendsDataProvider:] */

undefined8
FUN_101ecd978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  FUN_101ed0b90(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return param_3;
}



/* Entry: 101ecdb1c; end: 101ecdb3f; -[SCSaturnStatusProvider dealloc] */

void FUN_101ecdb1c(void)

{
  func_0x000107c61174();
  func_0x000101ecda04();
  return;
}



/* Entry: 101ecdb40; end: 101ecdbef; -[SCSaturnStatusProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecdb40(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e39c00 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e39c08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e39c10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e39c18));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e39c20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e39bf8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e39c28));
  FUN_101ed1694(param_1 + _DAT_112e39c30,0x112d3bc20,&UNK_10d904ef0);
  return;
}



/* Entry: 101ecdbf0; end: 101ecdd0f;  */

undefined * FUN_101ecdbf0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar2 = &UNK_110497da8;
    func_0x000107c613fc(&UNK_110497da8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_110497dd0;
    func_0x000107c613fc(&UNK_110497dd0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(ulong *)(puVar3 + 0x20) = param_2;
    uStack_50 = 0x101ed0d40;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1004725e8;
    puStack_58 = &UNK_110497de8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c408f0(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
  }
  return puVar5;
}



/* Entry: 101ecdd10; end: 101ece863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecdd10(undefined8 param_1,long param_2,code *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  code *pcVar16;
  long extraout_x12;
  long extraout_x12_00;
  uint uVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  code *pcStack_180;
  ulong uStack_178;
  long lStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  code *pcStack_150;
  long lStack_148;
  uint uStack_13c;
  ulong uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  code *pcStack_118;
  long lStack_110;
  code *pcStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  pcStack_108 = param_3;
  lStack_100 = param_4;
  func_0x000107c5eea4();
  lVar20 = *(long *)(lVar4 + -8);
  uVar26 = *(ulong *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)&pcStack_180 - (uVar26 + 0xf & 0xfffffffffffffff0);
  lStack_f0 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12;
  lVar5 = 0;
  lStack_d0 = lVar15;
  func_0x000107c5eec8();
  lVar21 = *(long *)(lVar5 + -8);
  lVar22 = *(long *)(lVar21 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar15 - extraout_x12_00;
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000107c610f8(PTR_PTR_1126b0418);
    func_0x000107c453e4();
    return;
  }
  uVar23 = *(undefined8 *)(param_2 + _DAT_112e39c08);
  puVar6 = &UNK_110497e20;
  uStack_138 = uVar26;
  lStack_f8 = lVar20;
  lStack_e8 = lVar4;
  func_0x000107c613fc(&UNK_110497e20,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  pcStack_a0 = FUN_101ed0e44;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = (code *)0x101ed17fc;
  puStack_a8 = &UNK_110497e38;
  ppuVar7 = &puStack_c0;
  puStack_98 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_98;
  func_0x000107c61174();
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar6);
  uVar8 = uVar23;
  func_0x000107c5c320();
  func_0x000107c61180();
  uStack_130 = uVar8;
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar23);
  func_0x000107c5eec4(lVar18);
  pcVar9 = "requestStatusUpdates(userId:)";
  func_0x0001000c10c0("requestStatusUpdates(userId:)");
  func_0x000107c61180();
  puVar6 = &UNK_110497da8;
  func_0x000107c613fc(&UNK_110497da8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_2);
  pcStack_e0 = *(code **)(lVar21 + 0x10);
  lStack_d8 = lVar18;
  (*pcStack_e0)(lVar15,lVar18,lVar5);
  bVar1 = *(byte *)(lVar21 + 0x50);
  pcVar19 = (code *)(ulong)bVar1;
  uVar24 = ~(ulong)pcVar19;
  uVar26 = (ulong)(pcVar19 + 0x18) & ((ulong)pcVar19 ^ 0xffffffffffffffff);
  puVar10 = &UNK_110497e70;
  lStack_110 = lVar22;
  lStack_c8 = lVar5;
  func_0x000107c613fc(&UNK_110497e70,uVar26 + lVar22,(ulong)pcVar19 | 7);
  lVar18 = lStack_c8;
  *(undefined **)(puVar10 + 0x10) = puVar6;
  pcStack_118 = *(code **)(lVar21 + 0x20);
  lStack_128 = lVar21;
  lStack_120 = lVar15;
  (*pcStack_118)(puVar10 + uVar26,lVar15,lStack_c8);
  pcStack_a0 = (code *)0x101ed0e50;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = (code *)&UNK_1000f6b44;
  puStack_a8 = &UNK_110497e88;
  ppuVar7 = &puStack_c0;
  puStack_98 = puVar10;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_98;
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  func_0x000107c4e590(pcVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(pcVar9);
  lVar15 = lStack_d0;
  lVar5 = lStack_100;
  pcVar12 = pcStack_108;
  pcVar16 = *(code **)(param_2 + _DAT_112e39c00);
  lVar4 = ((long *)(param_2 + _DAT_112e39c00))[1];
  if ((pcStack_108 == pcVar16) && (lStack_100 == lVar4)) {
    func_0x000107c5eea0(lStack_d0);
    uVar17 = 0;
LAB_101ece088:
    lVar4 = *(long *)(param_2 + _DAT_112e39c10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(param_2);
      func_0x000107c610f8(PTR_PTR_1126b0418);
      func_0x000107c453e4();
      func_0x000107c61170(param_2);
      func_0x000107c61170(uStack_130);
      (**(code **)(lStack_f8 + 8))(lVar15,lStack_e8);
      pcVar16 = *(code **)(lStack_128 + 8);
      lVar4 = lStack_d8;
      goto LAB_101ece7dc;
    }
    puVar6 = &UNK_110497da8;
    lStack_148 = lVar4;
    func_0x000107c613fc(&UNK_110497da8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,param_2);
    lVar21 = lStack_e8;
    lVar5 = lStack_f8;
    pcStack_150 = *(code **)(lStack_f8 + 0x10);
    uStack_13c = uVar17;
    (*pcStack_150)(lStack_f0,lVar15,lStack_e8);
    lStack_100 = param_2;
    (*pcStack_e0)(lStack_120,lStack_d8,lVar18);
    lVar18 = lStack_110;
    bVar2 = *(byte *)(lVar5 + 0x50);
    uVar25 = (ulong)bVar2 + 0x18 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    lVar4 = uVar25 + uStack_138;
    uVar26 = (ulong)(pcVar19 + lVar4 + 1) & uVar24;
    ppuStack_160 = (undefined **)(ulong)(bVar1 | bVar2);
    puVar10 = &UNK_110497fb0;
    lStack_170 = lVar4;
    uStack_138 = uVar24;
    pcStack_108 = pcVar19;
    func_0x000107c613fc(&UNK_110497fb0,uVar26 + lStack_110,(ulong)ppuStack_160 | 7);
    lVar20 = lStack_f0;
    *(undefined **)(puVar10 + 0x10) = puVar6;
    pcStack_168 = *(code **)(lVar5 + 0x20);
    (*pcStack_168)(puVar10 + uVar25,lStack_f0,lVar21);
    pcVar16 = pcStack_118;
    lVar5 = lStack_120;
    puVar10[lVar4] = (char)uVar17;
    (*pcStack_118)(puVar10 + uVar26,lStack_120,lStack_c8);
    pcStack_a0 = FUN_101ed0f10;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_101eceb9c;
    puStack_a8 = &UNK_110497fc8;
    ppuVar7 = &puStack_c0;
    puStack_98 = puVar10;
    func_0x000107c60bc4();
    ppuStack_158 = ppuVar7;
    func_0x000107c61574(puStack_98);
    puVar6 = &UNK_110497da8;
    func_0x000107c613fc(&UNK_110497da8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lStack_100);
    (*pcStack_150)(lVar20,lVar15,lVar21);
    (*pcStack_e0)(lVar5,lStack_d8,lStack_c8);
    puVar10 = &UNK_110498000;
    func_0x000107c613fc(&UNK_110498000,uVar26 + lVar18,(ulong)ppuStack_160 | 7);
    lVar18 = lStack_c8;
    *(undefined **)(puVar10 + 0x10) = puVar6;
    (*pcStack_168)(puVar10 + uVar25,lVar20,lVar21);
    puVar10[lStack_170] = (char)uStack_13c;
    (*pcVar16)(puVar10 + uVar26,lVar5,lVar18);
    pcStack_a0 = FUN_101ed0fd4;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)&UNK_10125bb68;
    puStack_a8 = &UNK_110498018;
    ppuVar13 = &puStack_c0;
    puStack_98 = puVar10;
    func_0x000107c60bc4(ppuVar13);
    func_0x000107c61574(puStack_98);
    lVar4 = lStack_148;
    ppuVar7 = ppuStack_158;
    func_0x000107c44160(lStack_148);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(lVar4);
  }
  else {
    pcVar11 = pcStack_108;
    func_0x000107c605b8(pcStack_108,lStack_100,pcVar16,lVar4,0);
    lVar15 = lStack_d0;
    uVar17 = ((uint)pcVar11 ^ 0xffffffff) & 1;
    func_0x000107c5eea0(lStack_d0);
    if ((~(uint)pcVar11 & 1) == 0) goto LAB_101ece088;
    lVar4 = *(long *)(param_2 + _DAT_112e39c18);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar26 = uStack_138;
    if (lVar4 == 0) {
      func_0x000107c61170(param_2);
      func_0x000107c610f8(PTR_PTR_1126b0418);
      func_0x000107c453e4();
      func_0x000107c61170(param_2);
      func_0x000107c61170(uStack_130);
      (**(code **)(lStack_f8 + 8))(lVar15,lStack_e8);
      pcVar16 = *(code **)(lStack_128 + 8);
      lVar4 = lStack_d8;
      goto LAB_101ece7dc;
    }
    lStack_148 = lVar4;
    func_0x000107c5fadc(pcVar12,lVar5);
    puVar6 = &UNK_110497da8;
    pcStack_150 = pcVar12;
    func_0x000107c613fc(&UNK_110497da8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,param_2);
    lVar20 = lStack_f0;
    lVar18 = lStack_f8;
    ppuStack_158 = *(undefined ***)(lStack_f8 + 0x10);
    (*(code *)ppuStack_158)(lStack_f0,lVar15,lStack_e8);
    lVar22 = lStack_d8;
    lVar5 = lStack_120;
    uStack_13c = uVar17;
    lStack_100 = param_2;
    (*pcStack_e0)(lStack_120,lStack_d8,lStack_c8);
    lVar15 = lStack_110;
    bVar2 = *(byte *)(lVar18 + 0x50);
    uVar25 = (ulong)bVar2 + 0x18 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    lVar4 = uVar25 + uVar26;
    uVar26 = (ulong)(pcVar19 + lVar4 + 1) & uVar24;
    pcStack_168 = (code *)(ulong)(bVar1 | bVar2);
    puVar10 = &UNK_110497ec0;
    uStack_178 = uVar25;
    lStack_170 = lVar4;
    uStack_138 = uVar24;
    pcStack_108 = pcVar19;
    func_0x000107c613fc(&UNK_110497ec0,uVar26 + lStack_110,(ulong)pcStack_168 | 7);
    lVar21 = lStack_e8;
    *(undefined **)(puVar10 + 0x10) = puVar6;
    pcStack_180 = *(code **)(lVar18 + 0x20);
    (*pcStack_180)(puVar10 + uVar25,lVar20,lStack_e8);
    pcVar16 = pcStack_118;
    uVar3 = (undefined1)uStack_13c;
    puVar10[lVar4] = uVar3;
    (*pcStack_118)(puVar10 + uVar26,lVar5,lStack_c8);
    pcStack_a0 = (code *)0x101ed1800;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_101eceb9c;
    puStack_a8 = &UNK_110497ed8;
    ppuVar7 = &puStack_c0;
    puStack_98 = puVar10;
    func_0x000107c60bc4();
    ppuStack_160 = ppuVar7;
    func_0x000107c61574(puStack_98);
    puVar6 = &UNK_110497da8;
    func_0x000107c613fc(&UNK_110497da8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lStack_100);
    (*(code *)ppuStack_158)(lVar20,lStack_d0,lVar21);
    lVar18 = lStack_c8;
    (*pcStack_e0)(lVar5,lVar22,lStack_c8);
    puVar10 = &UNK_110497f10;
    func_0x000107c613fc(&UNK_110497f10,uVar26 + lVar15,(ulong)pcStack_168 | 7);
    *(undefined **)(puVar10 + 0x10) = puVar6;
    (*pcStack_180)(puVar10 + uStack_178,lVar20,lVar21);
    puVar10[lStack_170] = uVar3;
    (*pcVar16)(puVar10 + uVar26,lVar5,lVar18);
    pcStack_a0 = (code *)0x101ed1804;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = (code *)&UNK_10125bb68;
    puStack_a8 = &UNK_110497f28;
    ppuVar13 = &puStack_c0;
    puStack_98 = puVar10;
    func_0x000107c60bc4(ppuVar13);
    func_0x000107c61574(puStack_98);
    lVar4 = lStack_148;
    pcVar16 = pcStack_150;
    ppuVar7 = ppuStack_160;
    func_0x000107c4409c(lStack_148);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(pcVar16);
  }
  puVar14 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar6 = &UNK_110497da8;
  func_0x000107c613fc(&UNK_110497da8,0x18,7);
  lVar15 = lStack_100;
  func_0x000107c61614(puVar6 + 0x10,lStack_100);
  func_0x000107c61170(lVar15);
  lVar4 = lStack_d8;
  (*pcStack_e0)(lVar5,lStack_d8,lVar18);
  uVar26 = (ulong)(pcStack_108 + 0x20) & uStack_138;
  puVar10 = &UNK_110497f60;
  func_0x000107c613fc(&UNK_110497f60,uVar26 + lStack_110,(ulong)pcStack_108 | 7);
  uVar8 = uStack_130;
  *(undefined8 *)(puVar10 + 0x10) = uStack_130;
  *(undefined **)(puVar10 + 0x18) = puVar6;
  (*pcStack_118)(puVar10 + uVar26,lVar5,lVar18);
  pcStack_a0 = FUN_101ed0ee0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = (code *)&UNK_1000f6b44;
  puStack_a8 = &UNK_110497f78;
  ppuVar7 = &puStack_c0;
  puStack_98 = puVar10;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_98;
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c408f0(puVar14);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(uVar8);
  (**(code **)(lStack_f8 + 8))(lStack_d0,lStack_e8);
  pcVar16 = *(code **)(lStack_128 + 8);
LAB_101ece7dc:
  (*pcVar16)(lVar4,lVar18);
  return;
}



/* Entry: 101ece864; end: 101ecea07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ece864(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e39c38;
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112e39c38) = 0;
    lVar3 = _DAT_112e39bf8;
    uVar2 = 0;
    if (*(long *)(param_1 + _DAT_112e39bf8) != 0) {
      func_0x000107c498f8();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
    }
    *(undefined8 *)(param_1 + lVar3) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e39c28);
    *(undefined **)(param_1 + _DAT_112e39c28) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar2);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112e39c08);
    func_0x000103b06114(0);
    func_0x000107c610f8();
    uVar2 = 0;
    func_0x000103b06138(0,0xe000000000000000,0,0xe000000000000000);
    func_0x000107c4d664(uVar5);
    func_0x000107c61170(uVar2);
    lVar3 = 0;
    func_0x000107c5eec8();
    lVar6 = *(long *)(lVar3 + -8);
    (**(code **)(lVar6 + 0x10))(puVar4,param_2,lVar3);
    (**(code **)(lVar6 + 0x38))(puVar4,0,1,lVar3);
    lVar3 = _DAT_112e39c30;
    func_0x000107c61428(param_1 + _DAT_112e39c30,auStack_70,0x21,0);
    func_0x0001000c90cc(puVar4,param_1 + lVar3);
    func_0x000107c614a8(auStack_70);
    *(undefined1 *)(param_1 + lVar1) = 1;
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101ecea08; end: 101eceb9b;  */

void FUN_101ecea08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)&puStack_90 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  pcVar2 = "processEvents(_:sessionId:)";
  func_0x0001000c10c0("processEvents(_:sessionId:)");
  func_0x000107c61180();
  puVar3 = &UNK_110497da8;
  func_0x000107c613fc(&UNK_110497da8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  (**(code **)(lVar11 + 0x10))(lVar7,param_2,lVar1);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_1104980a0;
  func_0x000107c613fc(&UNK_1104980a0,uVar10 + 8,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar8,lVar7,lVar1);
  *(undefined8 *)(puVar4 + uVar10) = param_1;
  uStack_70 = 0x101ed1098;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104980b8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_68;
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e590(pcVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 101eceb9c; end: 101ecebf7;  */

void FUN_101eceb9c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_101ed171c(0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ecebf8; end: 101eced63;  */

void FUN_101ecebf8(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&puStack_80 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  pcVar2 = "emitNoStatusOnMain(sessionId:)";
  func_0x0001000c10c0("emitNoStatusOnMain(sessionId:)");
  func_0x000107c61180();
  puVar3 = &UNK_110497da8;
  func_0x000107c613fc(&UNK_110497da8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  (**(code **)(lVar10 + 0x10))(lVar9,param_1,lVar1);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar7 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &UNK_110498050;
  func_0x000107c613fc(&UNK_110498050,uVar7 + lVar8,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar7,lVar9,lVar1);
  pcStack_60 = FUN_101ed104c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110498068;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_58);
  func_0x000107c4e590(pcVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 101eced64; end: 101ecf1af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eced64(double param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  long extraout_x8;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c5eea0(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_4);
    (**(code **)(lVar9 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    lVar4 = _DAT_112e39c20;
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ecef60);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ecef64);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ecef68);
      (*pcVar2)();
    }
    lVar9 = *(long *)(param_3 + _DAT_112e39c20);
    uVar8 = *(undefined8 *)(lVar9 + 0x10);
    bVar3 = ((uint)param_5 & 0xff) != 1;
    uVar6 = 0x646e65697266;
    if (bVar3) {
      uVar6 = 0x666c6573;
    }
    uVar1 = 0xe600000000000000;
    if (bVar3) {
      uVar1 = 0xe400000000000000;
    }
    func_0x000107c6157c(lVar9);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x00010655fcec(uVar8,uVar6,(long)param_1);
    func_0x000107c61574(lVar9);
    func_0x000107c61170(uVar6);
    uVar6 = *(undefined8 *)(param_3 + lVar4);
    if (param_2 >> 0x3e == 0) {
      uVar7 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar7 = param_2;
      }
      func_0x000107c60480();
    }
    func_0x000107c6157c(uVar6);
    uVar5 = 2;
    if (uVar7 != 0) {
      uVar5 = 0;
    }
    FUN_101ecd460(uVar5,param_5);
    func_0x000107c61574(uVar6);
    FUN_101ecea08(param_2,param_6);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 101ecf1b0; end: 101ecf2bb;  */

void FUN_101ecf1b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_60 + -extraout_x8;
  func_0x000107c4218c(param_1);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = 0;
    func_0x000107c5eec8();
    lVar3 = *(long *)(lVar1 + -8);
    (**(code **)(lVar3 + 0x10))(puVar2,param_3,lVar1);
    (**(code **)(lVar3 + 0x38))(puVar2,0,1,lVar1);
    FUN_101ecf2bc(puVar2);
    func_0x000107c61170(param_2);
    FUN_101ed1694(puVar2,0x112d3bc20,&UNK_10d904ef0);
  }
  return;
}



/* Entry: 101ecf2bc; end: 101ecf41b;  */

void FUN_101ecf2bc(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar7 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  lVar8 = *(long *)(lVar7 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar7 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = "stopObserving(sessionId:)";
  func_0x0001000c10c0("stopObserving(sessionId:)");
  func_0x000107c61180();
  puVar2 = &UNK_110497da8;
  func_0x000107c613fc(&UNK_110497da8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x0001000c78e8(param_1,(long)&puStack_80 - extraout_x8);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_110498118;
  func_0x000107c613fc(&UNK_110498118,uVar6 + lVar7,uVar5 | 7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  func_0x0001018cb0e8((long)&puStack_80 - extraout_x8,puVar3 + uVar6);
  uStack_60 = 0x101ed1760;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110498130;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101ecf41c; end: 101ecf483; -[SCSaturnStatusProvider requestStatusUpdatesWithUserId:] */

void FUN_101ecf41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101ecdbf0(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ecf484; end: 101ecf4df;  */

void FUN_101ecf484(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101ecf4e0(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101ecf4e0; end: 101ed0797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecf4e0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  undefined1 auStack_c0 [8];
  code *pcStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_c0 + -extraout_x8;
  lVar7 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = lVar7 - extraout_x12;
  uStack_a0 = uVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = uVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar14 - extraout_x12_01;
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_02;
  func_0x0001000c78e8(param_1,lVar10);
  pcVar16 = *(code **)(lVar13 + 0x30);
  lVar7 = lVar10;
  (*pcVar16)(lVar10,1,lVar3);
  if ((int)lVar7 == 1) {
    FUN_101ed1694(lVar10,0x112d3bc20,&UNK_10d904ef0);
    pcVar15 = *(code **)(lVar13 + 0x38);
  }
  else {
    pcStack_b0 = *(code **)(lVar13 + 0x20);
    (*pcStack_b0)(lVar9,lVar10,lVar3);
    lVar7 = _DAT_112e39c30;
    func_0x000107c61428(unaff_x20 + _DAT_112e39c30,auStack_90,0,0);
    (**(code **)(lVar13 + 0x10))(lVar14,lVar9,lVar3);
    pcVar15 = *(code **)(lVar13 + 0x38);
    (*pcVar15)(lVar14,0,1,lVar3);
    iVar1 = *(int *)(lVar2 + 0x30);
    func_0x0001000c78e8(unaff_x20 + lVar7,puVar12);
    func_0x0001000c78e8(lVar14,puVar12 + iVar1);
    puVar5 = puVar12;
    (*pcVar16)(puVar12,1,lVar3);
    uVar8 = uStack_a0;
    if ((int)puVar5 == 1) {
      FUN_101ed1694(lVar14,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lVar13 + 8))(lVar9,lVar3);
      puVar5 = puVar12 + iVar1;
      (*pcVar16)(puVar5,1,lVar3);
      if ((int)puVar5 != 1) {
LAB_101ecf8a8:
        FUN_101ed1694(puVar12,0x112d68090,&UNK_10da24400);
        return;
      }
      FUN_101ed1694(puVar12,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      pcStack_b8 = pcVar15;
      func_0x0001000c78e8(puVar12,uStack_a0);
      puVar5 = puVar12 + iVar1;
      (*pcVar16)(puVar5,1,lVar3);
      lVar2 = lStack_a8;
      if ((int)puVar5 == 1) {
        FUN_101ed1694(lVar14,0x112d3bc20,&UNK_10d904ef0);
        pcVar16 = *(code **)(lVar13 + 8);
        (*pcVar16)(lVar9,lVar3);
        (*pcVar16)(uVar8,lVar3);
        goto LAB_101ecf8a8;
      }
      (*pcStack_b0)(lStack_a8,puVar12 + iVar1,lVar3);
      uVar4 = 0x112d68098;
      FUN_101ed16dc(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                    PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar6 = uVar8;
      func_0x000107c5fab8(uVar8,lVar2,lVar3,uVar4);
      pcVar16 = *(code **)(lVar13 + 8);
      (*pcVar16)(lVar2,lVar3);
      FUN_101ed1694(lVar14,0x112d3bc20,&UNK_10d904ef0);
      (*pcVar16)(lVar9,lVar3);
      (*pcVar16)(uVar8,lVar3);
      FUN_101ed1694(puVar12,0x112d3bc20,&UNK_10d904ef0);
      pcVar15 = pcStack_b8;
      if ((uVar6 & 1) == 0) {
        return;
      }
    }
  }
  lVar7 = lStack_98;
  *(undefined1 *)(unaff_x20 + _DAT_112e39c38) = 0;
  (*pcVar15)(lStack_98,1,1,lVar3);
  lVar2 = _DAT_112e39c30;
  func_0x000107c61428(unaff_x20 + _DAT_112e39c30,auStack_78,0x21,0);
  func_0x0001000c90cc(lVar7,unaff_x20 + lVar2);
  func_0x000107c614a8(auStack_78);
  lVar2 = _DAT_112e39bf8;
  uVar4 = 0;
  if (*(long *)(unaff_x20 + _DAT_112e39bf8) != 0) {
    func_0x000107c498f8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e39c28);
  *(undefined **)(unaff_x20 + _DAT_112e39c28) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar4);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e39c08);
  func_0x000103b06114(0);
  func_0x000107c610f8();
  uVar4 = 0;
  func_0x000103b06138(0,0xe000000000000000,0,0xe000000000000000);
  func_0x000107c4d664(uVar11);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101ed0798; end: 101ed07fb;  */

void FUN_101ed0798(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000107c498f8(param_1);
  }
  else {
    FUN_101ed07fc();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101ed07fc; end: 101ed0963;  */

/* WARNING: Possible PIC construction at 0x000101ed0908: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ed07fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar2 = _DAT_112e39c28;
  lVar1 = _DAT_112e39bf8;
  if (*(char *)(unaff_x20 + _DAT_112e39c38) == '\x01') {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112e39c28);
    if (uVar5 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar3 = uVar5;
      }
      func_0x000107c60480();
      lVar1 = _DAT_112e39bf8;
    }
    _DAT_112e39bf8 = lVar1;
    if (uVar3 == 0) {
      uVar4 = 0;
      if (*(long *)(unaff_x20 + lVar1) != 0) {
        func_0x000107c498f8();
        uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      }
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
      uVar4 = uVar6;
      func_0x000107c61434(uVar6);
      FUN_101ed1500();
      func_0x000107c6142c(uVar6);
      if (param_2 == 0) {
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e39c08);
        func_0x000103b06114(0);
        func_0x000107c610f8();
        uVar4 = 0;
        func_0x000103b06138(0,0xe000000000000000,0,0xe000000000000000);
        func_0x000107c4d664(uVar6);
      }
      else {
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e39c08);
        func_0x000103b06114(0);
        func_0x000107c610f8();
        func_0x000103b06138(uVar4,param_2,param_3,param_4);
        func_0x000107c4d664(uVar6);
      }
    }
  }
  else {
    uVar4 = 0;
    if (*(long *)(unaff_x20 + _DAT_112e39bf8) != 0) {
      func_0x000107c498f8();
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 101ed0964; end: 101ed098f; -[SCSaturnStatusProvider init] */

void FUN_101ed0964(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnChatHeaderServicesImpl.SaturnStatusProvider",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ed0990);
  (*pcVar1)();
}



/* Entry: 101ed0990; end: 101ed0b8f;  */

void FUN_101ed0990(long param_1,undefined8 param_2)

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



/* Entry: 101ed0b90; end: 101ed0d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ed0b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112e39c20;
  lVar3 = 0;
  func_0x000101ecd56c();
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126cb368;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x10) = puVar4;
  *(long *)(unaff_x20 + lVar2) = lVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e39bf8) = 0;
  *(undefined **)(unaff_x20 + _DAT_112e39c28) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112e39c38) = 0;
  lVar2 = _DAT_112e39c30;
  lVar3 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e39c00);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e39c10) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e39c18) = param_4;
  func_0x000103b06114(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar5 = 0;
  func_0x000103b06138(0,0xe000000000000000,0,0xe000000000000000);
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + _DAT_112e39c08) = puVar4;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ed0d1c; end: 101ed0d53;  */

void FUN_101ed0d1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 101ed0d54; end: 101ed0d8b;  */

void FUN_101ed0d54(undefined8 param_1)

{
  if (lRam0000000112e39c68 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e698648);
  return;
}



/* Entry: 101ed0d8c; end: 101ed0e43;  */

void FUN_101ed0d8c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_60 = PTR___sBOWV_11034d658 + 0x40;
  puStack_68 = &UNK_10da243b8;
  puStack_48 = PTR___sBoWV_11034d678 + 0x40;
  puStack_40 = &UNK_10da243d0;
  puStack_38 = PTR___sBbWV_11034d660 + 0x40;
  puStack_30 = &UNK_10da243e8;
  lVar1 = 0x13f;
  puStack_58 = puStack_60;
  puStack_50 = puStack_60;
  func_0x0001000b88b8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 101ed0e44; end: 101ed0e5b;  */

void FUN_101ed0e44(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 101ed0e5c; end: 101ed0edf;  */

void FUN_101ed0e5c(undefined8 param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar4 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  lVar1 = uVar4 + *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar2 = 0;
  func_0x000107c5eec8();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  (*param_2)(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar4,
             *(undefined1 *)(unaff_x20 + lVar1),
             unaff_x20 + (lVar1 + uVar3 + 1 & (uVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 101ed0ee0; end: 101ed0f0f;  */

void FUN_101ed0ee0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar3 = 0;
  func_0x000107c5eec8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + -extraout_x8;
  func_0x000107c4218c(uVar1);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = 0;
    func_0x000107c5eec8();
    lVar6 = *(long *)(lVar3 + -8);
    (**(code **)(lVar6 + 0x10))
              (puVar5,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),lVar3);
    (**(code **)(lVar6 + 0x38))(puVar5,0,1,lVar3);
    FUN_101ecf2bc(puVar5);
    func_0x000107c61170(lVar2);
    FUN_101ed1694(puVar5,0x112d3bc20,&UNK_10d904ef0);
  }
  return;
}



/* Entry: 101ed0f10; end: 101ed0f1b;  */

void FUN_101ed0f10(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar4 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  lVar1 = uVar4 + *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar2 = 0;
  func_0x000107c5eec8();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  FUN_101eced64(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar4,
                *(undefined1 *)(unaff_x20 + lVar1),
                unaff_x20 + (lVar1 + uVar3 + 1 & (uVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 101ed0f1c; end: 101ed0fd3;  */

void FUN_101ed0f1c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  lVar6 = *(long *)(lVar4 + 0x40);
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar4 + 8))(unaff_x20 + uVar5,lVar1);
  (**(code **)(lVar7 + 8))
            (unaff_x20 + (lVar6 + uVar3 + uVar5 + 1 & (uVar3 ^ 0xffffffffffffffff)),lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ed0fd4; end: 101ed0fdf;  */

void FUN_101ed0fd4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar4 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  lVar1 = uVar4 + *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar2 = 0;
  func_0x000107c5eec8();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  (*(code *)0x101ecef80)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar4,
             *(undefined1 *)(unaff_x20 + lVar1),
             unaff_x20 + (lVar1 + uVar3 + 1 & (uVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 101ed0fe0; end: 101ed104b;  */

void FUN_101ed0fe0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ed104c; end: 101ed1057;  */

void FUN_101ed104c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000101ed1094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101ecf99c)
            (*(undefined8 *)(unaff_x20 + 0x10),
             unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 101ed1058; end: 101ed10db;  */

void FUN_101ed1058(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000101ed1094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),
             unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 101ed10dc; end: 101ed12c7;  */

undefined1  [16] FUN_101ed10dc(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  if (0.0 < param_1) {
    puVar2 = PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a190();
    func_0x000107c52688(puVar2);
    func_0x000107c5a820(puVar2);
    puVar3 = puVar2;
    func_0x000107c5c1c8((double)(long)(param_1 / 60.0) * 60.0);
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
      lVar5 = -0x2fffffffffffffeb;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f018df0);
      uVar10 = 0xd000000000000018;
      func_0x000107c5fadc(0xd000000000000018,0x800000010f018e10);
      uVar6 = 0;
      func_0x000107c5fe40(0);
      lVar7 = lVar5;
      uVar9 = uVar10;
      func_0x0001000f6108(lVar5,uVar10,uVar6);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar6);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ed12c8);
        (*pcVar1)();
      }
      lVar5 = lVar7;
      func_0x000107c5faec(lVar7);
      func_0x000107c61170(lVar7);
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
      lVar8 = lVar7;
      func_0x00010075bbf0();
      *(long *)(lVar7 + 0x40) = lVar8;
      *(undefined **)(lVar7 + 0x20) = puVar4;
      *(undefined8 *)(lVar7 + 0x28) = param_3;
      uVar10 = uVar9;
      func_0x000107c5fb00(lVar5,uVar9,lVar7);
      func_0x000107c61170(puVar2);
      func_0x000107c6142c(uVar9);
      goto LAB_101ed12a8;
    }
    func_0x000107c61170(puVar2);
  }
  lVar5 = 0;
  uVar10 = 0;
LAB_101ed12a8:
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = lVar5;
  return auVar11;
}



/* Entry: 101ed12c8; end: 101ed14ff;  */

undefined8 FUN_101ed12c8(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(uVar1 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(lVar7);
  func_0x000107c5ee8c();
  (**(code **)(lVar8 + 8))(lVar7);
  uVar2 = param_2;
  func_0x000107c5bbec(param_2);
  uVar3 = param_2;
  func_0x000107c4237c(param_2);
  FUN_101ed10dc(((double)(long)uVar2 + (double)(long)uVar3) - param_1);
  if (uVar1 == 0) {
    uStack_60 = 0;
  }
  else {
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    uVar2 = param_2;
    uVar5 = uVar1;
    func_0x000107c424f8();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar6 = uVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar5);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar2 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_2;
      func_0x000107c424f8();
      func_0x000107c61180();
      uVar4 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      uStack_70 = uVar4;
      uStack_68 = uVar6;
      func_0x000107c61434(uVar6);
      func_0x000107c5fb78(0x20,0xe100000000000000);
      func_0x000107c6142c(uVar6);
      uVar2 = uStack_68;
      uVar6 = uStack_68;
      func_0x000107c5fb78(uStack_70);
      func_0x000107c6142c(uVar2);
    }
    uVar2 = param_2;
    func_0x000107c5cab0();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5faec();
    uVar5 = uVar6;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar6);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar2 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x000107c5cab0(param_2);
      func_0x000107c61180();
      uVar2 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      func_0x000107c5fb78(uVar2,uVar5);
      func_0x000107c6142c(uVar5);
    }
    uStack_70 = 0x20b7c220;
    uStack_68 = 0xa400000000000000;
    func_0x000107c5fb78(uVar3,uVar1);
    func_0x000107c6142c(uVar1);
  }
  return uStack_60;
}



/* Entry: 101ed1500; end: 101ed1693;  */

ulong FUN_101ed1500(double param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  if (param_2 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar7 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    lVar4 = 4;
    do {
      uVar8 = lVar4 - 4;
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ed1678);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_2 + lVar4 * 8);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar8;
        func_0x000101ed09dc(uVar8,param_2);
      }
      uVar1 = lVar4 - 3;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ed1674);
        (*pcVar2)();
      }
      uVar8 = uVar5;
      func_0x000107c5bbec();
      uVar6 = uVar5;
      func_0x000107c4237c();
      dVar10 = (double)(long)uVar8 + (double)(long)uVar6;
      bVar3 = false;
      if (((double)(long)uVar8 <= param_1) && (bVar3 = false, !NAN(param_1) && !NAN(dVar10))) {
        bVar3 = param_1 < dVar10;
      }
      if (bVar3) {
        uVar7 = uVar5;
        FUN_101ed12c8(uVar5);
        func_0x000107c61170(uVar5);
        return uVar7;
      }
      func_0x000107c61170(uVar5);
      lVar4 = lVar4 + 1;
    } while (uVar1 != uVar7);
  }
  return 0;
}



/* Entry: 101ed1694; end: 101ed16d3;  */

undefined8 FUN_101ed1694(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101ed16d4; end: 101ed16db;  */

void FUN_101ed16d4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c498f8(param_1);
  }
  else {
    FUN_101ed07fc();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101ed16dc; end: 101ed171b;  */

void FUN_101ed16dc(long *param_1,code *param_2,long param_3)

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



/* Entry: 101ed171c; end: 101ed179b;  */

void FUN_101ed171c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d6c340 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b4a30;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d6c340 = puVar1;
  return;
}



/* Entry: 101ed179c; end: 101ed1817;  */

void FUN_101ed179c(long param_1,long param_2)

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



/* Entry: 101ed1818; end: 101ed2353;  */

void FUN_101ed1818(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x0001002a5998();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  puVar1 = PTR_PTR_1126a9838;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar12 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef1b9a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar12 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef34000);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef35640);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f018e50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar1);
  func_0x000107c61174();
  puVar13 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar1);
  *(undefined **)(param_2 + 0x60) = puVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 101ed2354; end: 101ed23df;  */

void FUN_101ed2354(void)

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
  return;
}



/* Entry: 101ed23e0; end: 101ed242f;  */

void FUN_101ed23e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ed2430; end: 101ed2473;  */

undefined1  [16] FUN_101ed2430(void)

{
  return ZEXT816(0x110498248);
}



/* Entry: 101ed2474; end: 101ed249b;  */

void FUN_101ed2474(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ed249c; end: 101ed24e7;  */

undefined8 FUN_101ed249c(void)

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



/* Entry: 101ed24e8; end: 101ed25bb;  */

void FUN_101ed24e8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x0001002833ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_102209530(0);
  func_0x000107c610f8();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000102208fac();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  func_0x000107c61174();
  func_0x0001022090a0();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 101ed25bc; end: 101ed25c3;  */

void FUN_101ed25bc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x0001002833ec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_102209530(0);
  func_0x000107c610f8();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000102208fac();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  func_0x000107c61174();
  func_0x0001022090a0();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  *param_1 = lVar1;
  return;
}



/* Entry: 101ed25c4; end: 101ed2663;  */

long FUN_101ed25c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_102209530(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102208fac();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  func_0x0001022090a0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 101ed2664; end: 101ed268f;  */

void FUN_101ed2664(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ed2690; end: 101ed26c3;  */

undefined1  [16] FUN_101ed2690(void)

{
  return ZEXT816(0x110498390);
}



/* Entry: 101ed26c4; end: 101ed2717;  */

void FUN_101ed26c4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ed2718; end: 101ed27ab;  */

void FUN_101ed2718(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100297520();
  func_0x000107c613fc();
  FUN_101ed280c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101ed27ac; end: 101ed27b7;  */

void FUN_101ed27ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100297520();
  func_0x000107c613fc();
  FUN_101ed280c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ed27b8; end: 101ed280b;  */

undefined8 FUN_101ed27b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101ed280c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101ed280c; end: 101ed29eb;  */

void FUN_101ed280c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9840;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efbb410);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101ed29ec; end: 101ed2a27;  */

void FUN_101ed29ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ed2a28; end: 101ed2a7b;  */

void FUN_101ed2a28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ed2a7c; end: 101ed2a83;  */

void FUN_101ed2a7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ed2a84; end: 101ed2ad3;  */

undefined8 FUN_101ed2a84(void)

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



/* Entry: 101ed2ad4; end: 101ed2b17;  */

undefined1  [16] FUN_101ed2ad4(void)

{
  return ZEXT816(0x110498438);
}



/* Entry: 101ed2b18; end: 101ed2b3f;  */

void FUN_101ed2b18(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ed2b40; end: 101ed2b47;  */

undefined8 FUN_101ed2b40(void)

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



/* Entry: 101ed2b48; end: 101ed2e83;  */

void FUN_101ed2b48(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
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
  func_0x0001002a3f98();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a9848;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 101ed2e84; end: 101ed2e93;  */

void FUN_101ed2e84(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001002a3f98();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a9848;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 101ed2e94; end: 101ed3177;  */

long FUN_101ed2e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a9848;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 101ed3178; end: 101ed31c3;  */

void FUN_101ed3178(void)

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



/* Entry: 101ed31c4; end: 101ed3217;  */

void FUN_101ed31c4(undefined8 *param_1)

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



/* Entry: 101ed3218; end: 101ed321f;  */

void FUN_101ed3218(undefined8 *param_1)

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



/* Entry: 101ed3220; end: 101ed326f;  */

undefined8 FUN_101ed3220(void)

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



/* Entry: 101ed3270; end: 101ed32b3;  */

undefined1  [16] FUN_101ed3270(void)

{
  return ZEXT816(0x110498500);
}



/* Entry: 101ed32b4; end: 101ed32db;  */

void FUN_101ed32b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ed32dc; end: 101ed32e3;  */

undefined8 FUN_101ed32dc(void)

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



/* Entry: 101ed32e4; end: 101ed33c7;  */

void FUN_101ed32e4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x0001002adac0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x000101ed99a4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000101ed977c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_101ed97a4();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 101ed33c8; end: 101ed33cf;  */

void FUN_101ed33c8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x0001002adac0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x000101ed99a4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000101ed977c();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_101ed97a4();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}


