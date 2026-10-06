/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10028d048; end: 10028d06b;  */

void FUN_10028d048(void)

{
  return;
}



/* Entry: 10028d06c; end: 10028d093;  */

long FUN_10028d06c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10028d094; end: 10028d0a3;  */

void FUN_10028d094(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10028d0a4; end: 10028d11b;  */

void FUN_10028d0a4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cd1738;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10028d094();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_10028d148);
  func_0x000107c61180();
  func_0x00010028d2ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10028d11c; end: 10028d147;  */

void FUN_10028d11c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10028d0a4();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10028d148; end: 10028d1bb;  */

void FUN_10028d148(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e01a0;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10028d094();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010028d278(&uStack_30);
  return;
}



/* Entry: 10028d1bc; end: 10028d1ff; -[SCNClientSwitchboardClientSwitchboardConfigFetcher .cxx_construct] */

undefined8 * FUN_10028d1bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10028d094();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10028d200; end: 10028d29f; -[SCNClientSwitchboardClientSwitchboardConfigFetcher initWithCpp:] */

undefined1 * FUN_10028d200(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706388;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10028d094();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010028d278(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10028d2a0; end: 10028d2cb;  */

void FUN_10028d2a0(void)

{
  return;
}



/* Entry: 10028d2cc; end: 10028d363;  */

void FUN_10028d2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fad4f8,&UNK_10dc20340);
  puVar1 = &UNK_1106a9268;
  func_0x000107c613fc(&UNK_1106a9268,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1038ef888,puVar1);
  return;
}



/* Entry: 10028d364; end: 10028d397;  */

void FUN_10028d364(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10028d398; end: 10028d3e3;  */

void FUN_10028d398(undefined8 param_1)

{
  FUN_1000285a8(0x112fda0b8,&UNK_10dc444b0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103a75ec4,param_1);
  return;
}



/* Entry: 10028d3e4; end: 10028d403;  */

void FUN_10028d3e4(void)

{
  func_0x000107c61168(&PTR_PTR_112919af8);
  return;
}



/* Entry: 10028d404; end: 10028d483;  */

void FUN_10028d404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e22e90,&UNK_10da07a40);
  puVar1 = &UNK_110476b38;
  func_0x000107c613fc(&UNK_110476b38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1006f5eac,puVar1);
  return;
}



/* Entry: 10028d484; end: 10028d4f7; +[SCNetworkServicesImplementationFactory httpMetadataServiceWithRequestManager:clientSwitchboardConfigFetcher:] */

void FUN_10028d484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8228;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c48384();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10028d4f8; end: 10028d517;  */

void FUN_10028d4f8(void)

{
  func_0x000107c61168(&PTR_PTR_112e22f08);
  return;
}



/* Entry: 10028d518; end: 10028d533;  */

void FUN_10028d518(undefined8 param_1)

{
  FUN_1000285a8(0x112e22e98,&UNK_10da07a48);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f5e50,param_1);
  return;
}



/* Entry: 10028d534; end: 10028d583;  */

void FUN_10028d534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10028d584; end: 10028d5a3;  */

void FUN_10028d584(void)

{
  func_0x000107c61168(&PTR_PTR_112975828);
  return;
}



/* Entry: 10028d5a4; end: 10028d6a3; -[SCRequestManagerHTTPMetadataService initWithRequestManager:clientSwitchboardConfigFetcher:requestKeyGenerator:] */

undefined1 *
FUN_10028d5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112705f30;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10028d6a4; end: 10028d6bf;  */

void FUN_10028d6a4(undefined8 param_1)

{
  FUN_1000285a8(0x112e23068,&UNK_10da07dd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10079998c,param_1);
  return;
}



/* Entry: 10028d6c0; end: 10028d70f;  */

void FUN_10028d6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10028d710; end: 10028d72f;  */

void FUN_10028d710(void)

{
  func_0x000107c61168(&PTR_PTR_112e230e0);
  return;
}



/* Entry: 10028d730; end: 10028d767;  */

void FUN_10028d730(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8270;
  func_0x000107c61168();
  func_0x000107c5bcf0();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 10028d768; end: 10028d81f; +[SCNetworkServicesImplementationFactory staticAuthedRequestModifier] */

void FUN_10028d768(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b8238;
  func_0x000107c5bcf4(PTR_PTR_1126b8238);
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_10028d8a8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126b8240;
  func_0x000107c5a9d0(PTR_PTR_1126b8240);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b8248;
  func_0x000107c610f4(PTR_PTR_1126b8248);
  func_0x000107c4682c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10028d820; end: 10028d83b;  */

void FUN_10028d820(undefined8 param_1)

{
  FUN_1000285a8(0x112e23070,&UNK_10da07dd8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100799930,param_1);
  return;
}



/* Entry: 10028d83c; end: 10028d85b;  */

void FUN_10028d83c(void)

{
  func_0x000107c61168(&PTR_PTR_11291a0b8);
  return;
}



/* Entry: 10028d85c; end: 10028d89b;  */

void FUN_10028d85c(void)

{
  FUN_1000285a8(0x112e30928,&UNK_10da195f0);
  FUN_1000823a8(&UNK_101e232b8,0);
  return;
}



/* Entry: 10028d89c; end: 10028d8a7; +[SCAPIAuth staticFSNAuthToken] */

undefined ** FUN_10028d89c(void)

{
  return &PTR____CFConstantStringClassReference_110f632f8;
}



/* Entry: 10028d8a8; end: 10028d97b;  */

void FUN_10028d8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_1053bc3ac;
  puStack_50 = &UNK_110881f70;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  ppuVar1 = &puStack_68;
  func_0x000107c61184(ppuVar1);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10028d97c; end: 10028d9c7;  */

void FUN_10028d97c(undefined8 param_1)

{
  FUN_1000285a8(0x112e5dbc8,&UNK_10da64aa0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102173b18,param_1);
  return;
}



/* Entry: 10028d9c8; end: 10028da1b; +[SCAPIClient sharedClient] */

void FUN_10028d9c8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4628 != -1) {
    FUN_10002a2fc(0x1137f4628,&PTR___NSConcreteGlobalBlock_110ccc568);
  }
  uVar1 = uRam00000001137f4608;
  func_0x000107c61174(uRam00000001137f4608);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10028da1c; end: 10028daaf;  */

/* WARNING: Possible PIC construction at 0x00010028da90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010028da94) */

void FUN_10028da1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b8240;
  func_0x000107c610f4();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR_PTR_1126b4968;
  func_0x000107c428b8(PTR_PTR_1126b4968);
  func_0x000107c61180();
  func_0x000107c3ac40(puVar4,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c45950(puVar2,param_2,puVar4);
  uVar1 = puRam00000001137f4608;
  puRam00000001137f4608 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10028dab0; end: 10028dad3; +[SCAPIUtil endpointURL] */

void FUN_10028dab0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4968,PTR_s_endpointURLForKey_defaultURL__1125c3140,
             &PTR____CFConstantStringClassReference_110f636b8,
             &PTR____CFConstantStringClassReference_110dd1f18);
  return;
}



/* Entry: 10028dad4; end: 10028dafb; +[SCAPIUtil endpointURLForKey:defaultURL:] */

void FUN_10028dad4(void)

{
  undefined8 in_x3;
  
  func_0x000107c61174(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x3);
  return;
}



/* Entry: 10028dafc; end: 10028db1b;  */

void FUN_10028dafc(void)

{
  func_0x000107c61168(&PTR_PTR_1128222d0);
  return;
}



/* Entry: 10028db1c; end: 10028db83;  */

void FUN_10028db1c(undefined8 *param_1)

{
  FUN_100029df0(param_1[1],*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 10028db84; end: 10028dc9f;  */

void FUN_10028db84(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 auStack_60 [2];
  undefined1 auStack_58 [24];
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    func_0x000107c60d88(param_1 + 0xc0);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x18))();
    auStack_60[0] = SUB84(plVar1,0);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x10))(auStack_58,param_2);
    func_0x000107c316e8();
    plVar2 = plVar1;
    FUN_10028bb78();
    (**(code **)(*param_2 + 0x28))(param_2);
    plVar3 = param_2;
    func_0x000107c316e8();
    plVar4 = plVar3;
    FUN_10028bb78();
    func_0x000107c31478(param_1 + 0xa8,auStack_60,param_2,(long)plVar3 - (long)plVar1,
                        (long)plVar4 - (long)plVar2);
    func_0x000107c60ca0(auStack_58);
    func_0x000107c60d8c(param_1 + 0xc0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010028dc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2);
  return;
}



/* Entry: 10028dca0; end: 10028dca7;  */

int FUN_10028dca0(long param_1,long *****param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  long lVar15;
  long extraout_x8;
  int iVar16;
  long *****ppppplVar17;
  long *****ppppplVar18;
  ulong uVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  undefined8 auStack_788 [12];
  undefined8 auStack_728 [196];
  long ****pppplStack_108;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
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
  
  plVar8 = (long *)(param_1 + -8);
  lVar15 = 0;
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  do {
    *(undefined **)((long)auStack_788 + lVar15) = &UNK_1053a6a3c;
    *(undefined ***)((long)auStack_788 + lVar15 + 8) = &PTR_DAT_110d9a7a0;
    *(undefined8 *)((long)auStack_728 + lVar15) = 0;
    lVar15 = lVar15 + 0x68;
  } while (lVar15 != 0x680);
  plVar9 = plVar8;
  FUN_10028e1c0(*(undefined8 *)(param_1 + 0xa8));
  iVar16 = 0;
  *plVar9 = extraout_x8;
  puVar1 = (uint *)(param_1 + 0xa0);
  do {
    func_0x000107c60d88(param_1 + 0x60);
    uVar2 = 0x10U - iVar16;
    if ((int)*(uint *)(param_1 + 0x58) <= (int)(0x10U - iVar16)) {
      uVar2 = *(uint *)(param_1 + 0x58);
    }
    ppppplVar18 = (long *****)(param_1 + 0x30);
    FUN_10028e250();
    ppppplVar13 = (long *****)(long)(int)uVar2;
    ppppplVar17 = &pppplStack_108;
    pppplStack_108 = (long ****)ppppplVar18;
    pppplStack_100 = (long ****)param_2;
    FUN_10028e310();
    puVar10 = auStack_788;
    ppppplVar20 = param_2;
    ppppplVar12 = ppppplVar18;
    while (ppppplVar20 != ppppplVar13) {
      func_0x00010028e3fc(puVar10,ppppplVar20);
      ppppplVar20 = ppppplVar20 + 0xd;
      if ((long)ppppplVar20 - (long)*ppppplVar12 == 0xfd8) {
        ppppplVar12 = ppppplVar12 + 1;
        ppppplVar20 = (long *****)*ppppplVar12;
      }
      puVar10 = puVar10 + 0xd;
    }
    FUN_10028e428(ppppplVar17,ppppplVar13,ppppplVar18,param_2);
    ppppplVar20 = (long *****)(param_1 + 0x30);
    FUN_10028e250();
    pppplStack_e8 = (long ****)ppppplVar20;
    pppplStack_e0 = (long ****)ppppplVar13;
    FUN_10028e428(ppppplVar18,param_2,ppppplVar20,ppppplVar13);
    ppppplVar11 = &pppplStack_e8;
    param_2 = ppppplVar18;
    FUN_10028e310();
    ppppplVar12 = (long *****)(param_1 + 0x10);
    pppplStack_f8 = (long ****)ppppplVar11;
    pppplStack_f0 = (long ****)param_2;
    if (0 < (long)ppppplVar17) {
      lVar15 = *(long *)(param_1 + 0x58);
      ppppplVar12 = &pppplStack_f8;
      ppppplVar21 = ppppplVar17;
      FUN_10028e310();
      if ((long *****)((ulong)(lVar15 - (long)ppppplVar17) >> 1) < ppppplVar18) {
        ppppplVar18 = (long *****)(param_1 + 0x30);
        ppppplVar20 = ppppplVar21;
        FUN_10028c914();
        pppplStack_d8 = (long ****)&pppplStack_d0;
        pppplStack_d0 = (long ****)ppppplVar11;
        pppplStack_c8 = (long ****)param_2;
        if (ppppplVar12 != ppppplVar18) {
          ppppplVar13 = (long *****)*ppppplVar12;
          do {
            func_0x000107c314b4(&pppplStack_d8,ppppplVar21,ppppplVar13 + 0x1fb);
            ppppplVar12 = ppppplVar12 + 1;
            ppppplVar21 = (long *****)*ppppplVar12;
            ppppplVar13 = ppppplVar21;
          } while (ppppplVar12 != ppppplVar18);
        }
        func_0x000107c314b4(&pppplStack_d8,ppppplVar21,ppppplVar20);
        ppppplVar18 = (long *****)pppplStack_c8;
        ppppplVar20 = (long *****)pppplStack_d0;
        FUN_10028c914(param_1 + 0x30);
        param_2 = ppppplVar21;
LAB_10028deb4:
        ppppplVar12 = ppppplVar18 + -0x1fb;
LAB_10028deb8:
        if (ppppplVar18 != ppppplVar21) goto code_r0x00010028dec0;
        FUN_10028e554();
        while( true ) {
          uVar19 = param_1 + 0x30;
          FUN_10028c83c();
          if (uVar19 < 0x4e) break;
          func_0x000107c60e14(*(undefined8 *)(*(long *)(param_1 + 0x40) + -8));
          param_2 = (long *****)(*(long *)(param_1 + 0x40) + -8);
          func_0x000107c31498(param_1 + 0x30);
        }
        goto LAB_10028dffc;
      }
      ppppplVar18 = param_2;
      if (ppppplVar20 != ppppplVar11) {
        pppplVar14 = *ppppplVar11;
        while( true ) {
          ppppplVar11 = ppppplVar11 + -1;
          FUN_10028e470(&pppplStack_d0,pppplVar14,param_2,ppppplVar12,ppppplVar21);
          ppppplVar21 = (long *****)pppplStack_c0;
          ppppplVar12 = (long *****)pppplStack_c8;
          if (ppppplVar11 == ppppplVar20) break;
          pppplVar14 = *ppppplVar11;
          param_2 = (long *****)(pppplVar14 + 0x1fb);
        }
        ppppplVar18 = (long *****)(*ppppplVar11 + 0x1fb);
      }
      param_2 = ppppplVar13;
      FUN_10028e470(&pppplStack_d0,ppppplVar13,ppppplVar18,ppppplVar12,ppppplVar21);
      pppplVar14 = pppplStack_c0;
LAB_10028df8c:
      ppppplVar12 = ppppplVar13 + -0x1fb;
LAB_10028df90:
      if (ppppplVar13 != (long *****)pppplVar14) goto code_r0x00010028df98;
      FUN_10028e554();
      while (uVar19 = *(long *)(param_1 + 0x50) + (long)ppppplVar17,
            *(ulong *)(param_1 + 0x50) = uVar19, 0x4d < uVar19) {
        func_0x000107c60e14(**(undefined8 **)(param_1 + 0x38));
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
        ppppplVar17 = (long *****)0xffffffffffffffd9;
      }
    }
LAB_10028dffc:
    func_0x000107c60d8c(param_1 + 0x60);
    puVar10 = auStack_788;
    for (uVar19 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
        uVar19 = uVar19 - 1) {
      if (((*(byte *)(puVar10[1] + 8) & 1) == 0) && (*(char *)(param_1 + 0xa5) == '\x01')) {
        lVar15 = (long)*(char *)(param_1 + 0x27);
        ppppplVar18 = ppppplVar12;
        if (lVar15 < 0) {
          lVar15 = *(long *)(param_1 + 0x18);
          ppppplVar18 = *(long ******)(param_1 + 0x10);
        }
        FUN_10028e588(&pppplStack_d0,ppppplVar18,lVar15,puVar10[0xc]);
        (*(code *)*puVar10)(puVar10);
        FUN_100078bd8(&pppplStack_d0);
      }
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      pppplStack_c0 = (long ****)0x0;
      pppplStack_d0 = (long ****)&UNK_1053a6a3c;
      pppplStack_c8 = (long ****)&PTR_DAT_110d9a7a0;
      param_2 = &pppplStack_d0;
      func_0x00010028e3d4(puVar10);
      (*(code *)*pppplStack_c8)(&pppplStack_c8);
      puVar10 = puVar10 + 0xd;
    }
    iVar16 = uVar2 + iVar16;
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 - uVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  } while ((uVar3 - uVar2 != 0 && (int)uVar2 <= (int)uVar3) && iVar16 < 0x10);
  uVar7 = uVar3 == uVar2;
  if ((int)uVar2 < (int)uVar3) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),param_1);
  }
  else if (*(char *)(param_1 + 0xa4) != '\0') {
    uVar7 = uVar3 == uVar2;
    if (!(bool)uVar7) goto LAB_10028e144;
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  FUN_1002adff0();
  FUN_10028d048(uStack_70);
  if ((bool)uVar7) {
    return iVar16;
  }
  func_0x000107c60e78();
LAB_10028e144:
  func_0x000107c316d8(&pppplStack_d0,&UNK_10f82fc35,0x21,&DAT_10f6842c6);
  func_0x000107c316dc(&pppplStack_d0,"unknown",0x89);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10028e188);
  (*pcVar6)();
code_r0x00010028dec0:
  (*(code *)*ppppplVar18[1])(ppppplVar18 + 1);
  ppppplVar12 = ppppplVar12 + 0xd;
  ppppplVar18 = ppppplVar18 + 0xd;
  if ((long *****)*ppppplVar20 == ppppplVar12) goto code_r0x00010028dee4;
  goto LAB_10028deb8;
code_r0x00010028dee4:
  ppppplVar20 = ppppplVar20 + 1;
  ppppplVar18 = (long *****)*ppppplVar20;
  goto LAB_10028deb4;
code_r0x00010028df98:
  (*(code *)*ppppplVar13[1])(ppppplVar13 + 1);
  ppppplVar12 = ppppplVar12 + 0xd;
  ppppplVar13 = ppppplVar13 + 0xd;
  if ((long *****)*ppppplVar20 == ppppplVar12) goto code_r0x00010028dfbc;
  goto LAB_10028df90;
code_r0x00010028dfbc:
  ppppplVar20 = ppppplVar20 + 1;
  ppppplVar13 = (long *****)*ppppplVar20;
  goto LAB_10028df8c;
}



/* Entry: 10028dca8; end: 10028e1bf;  */

int FUN_10028dca8(long *param_1,long *****param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long lVar14;
  long extraout_x8;
  int iVar15;
  long *****ppppplVar16;
  long *****ppppplVar17;
  ulong uVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  undefined8 auStack_788 [12];
  undefined8 auStack_728 [196];
  long ****pppplStack_108;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
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
  
  lVar14 = 0;
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  do {
    *(undefined **)((long)auStack_788 + lVar14) = &UNK_1053a6a3c;
    *(undefined ***)((long)auStack_788 + lVar14 + 8) = &PTR_DAT_110d9a7a0;
    *(undefined8 *)((long)auStack_728 + lVar14) = 0;
    lVar14 = lVar14 + 0x68;
  } while (lVar14 != 0x680);
  plVar8 = param_1;
  FUN_10028e1c0(param_1[0x16]);
  iVar15 = 0;
  *plVar8 = extraout_x8;
  puVar1 = (uint *)(param_1 + 0x15);
  do {
    func_0x000107c60d88(param_1 + 0xd);
    uVar2 = 0x10U - iVar15;
    if ((int)*(uint *)(param_1 + 0xc) <= (int)(0x10U - iVar15)) {
      uVar2 = *(uint *)(param_1 + 0xc);
    }
    ppppplVar17 = (long *****)(param_1 + 7);
    FUN_10028e250();
    ppppplVar12 = (long *****)(long)(int)uVar2;
    ppppplVar16 = &pppplStack_108;
    pppplStack_108 = (long ****)ppppplVar17;
    pppplStack_100 = (long ****)param_2;
    FUN_10028e310();
    puVar9 = auStack_788;
    ppppplVar19 = param_2;
    ppppplVar11 = ppppplVar17;
    while (ppppplVar19 != ppppplVar12) {
      func_0x00010028e3fc(puVar9,ppppplVar19);
      ppppplVar19 = ppppplVar19 + 0xd;
      if ((long)ppppplVar19 - (long)*ppppplVar11 == 0xfd8) {
        ppppplVar11 = ppppplVar11 + 1;
        ppppplVar19 = (long *****)*ppppplVar11;
      }
      puVar9 = puVar9 + 0xd;
    }
    FUN_10028e428(ppppplVar16,ppppplVar12,ppppplVar17,param_2);
    ppppplVar19 = (long *****)(param_1 + 7);
    FUN_10028e250();
    pppplStack_e8 = (long ****)ppppplVar19;
    pppplStack_e0 = (long ****)ppppplVar12;
    FUN_10028e428(ppppplVar17,param_2,ppppplVar19,ppppplVar12);
    ppppplVar10 = &pppplStack_e8;
    param_2 = ppppplVar17;
    FUN_10028e310();
    ppppplVar11 = (long *****)(param_1 + 3);
    pppplStack_f8 = (long ****)ppppplVar10;
    pppplStack_f0 = (long ****)param_2;
    if (0 < (long)ppppplVar16) {
      lVar14 = param_1[0xc];
      ppppplVar11 = &pppplStack_f8;
      ppppplVar20 = ppppplVar16;
      FUN_10028e310();
      if ((long *****)((ulong)(lVar14 - (long)ppppplVar16) >> 1) < ppppplVar17) {
        ppppplVar17 = (long *****)(param_1 + 7);
        ppppplVar19 = ppppplVar20;
        FUN_10028c914();
        pppplStack_d8 = (long ****)&pppplStack_d0;
        pppplStack_d0 = (long ****)ppppplVar10;
        pppplStack_c8 = (long ****)param_2;
        if (ppppplVar11 != ppppplVar17) {
          ppppplVar12 = (long *****)*ppppplVar11;
          do {
            func_0x000107c314b4(&pppplStack_d8,ppppplVar20,ppppplVar12 + 0x1fb);
            ppppplVar11 = ppppplVar11 + 1;
            ppppplVar20 = (long *****)*ppppplVar11;
            ppppplVar12 = ppppplVar20;
          } while (ppppplVar11 != ppppplVar17);
        }
        func_0x000107c314b4(&pppplStack_d8,ppppplVar20,ppppplVar19);
        ppppplVar17 = (long *****)pppplStack_c8;
        ppppplVar19 = (long *****)pppplStack_d0;
        FUN_10028c914(param_1 + 7);
        param_2 = ppppplVar20;
LAB_10028deb4:
        ppppplVar11 = ppppplVar17 + -0x1fb;
LAB_10028deb8:
        if (ppppplVar17 != ppppplVar20) goto code_r0x00010028dec0;
        FUN_10028e554();
        while( true ) {
          plVar8 = param_1 + 7;
          FUN_10028c83c();
          if (plVar8 < (long *)0x4e) break;
          func_0x000107c60e14(*(undefined8 *)(param_1[9] + -8));
          param_2 = (long *****)(param_1[9] + -8);
          func_0x000107c31498(param_1 + 7);
        }
        goto LAB_10028dffc;
      }
      ppppplVar17 = param_2;
      if (ppppplVar19 != ppppplVar10) {
        pppplVar13 = *ppppplVar10;
        while( true ) {
          ppppplVar10 = ppppplVar10 + -1;
          FUN_10028e470(&pppplStack_d0,pppplVar13,param_2,ppppplVar11,ppppplVar20);
          ppppplVar20 = (long *****)pppplStack_c0;
          ppppplVar11 = (long *****)pppplStack_c8;
          if (ppppplVar10 == ppppplVar19) break;
          pppplVar13 = *ppppplVar10;
          param_2 = (long *****)(pppplVar13 + 0x1fb);
        }
        ppppplVar17 = (long *****)(*ppppplVar10 + 0x1fb);
      }
      param_2 = ppppplVar12;
      FUN_10028e470(&pppplStack_d0,ppppplVar12,ppppplVar17,ppppplVar11,ppppplVar20);
      pppplVar13 = pppplStack_c0;
LAB_10028df8c:
      ppppplVar11 = ppppplVar12 + -0x1fb;
LAB_10028df90:
      if (ppppplVar12 != (long *****)pppplVar13) goto code_r0x00010028df98;
      FUN_10028e554();
      while (lVar14 = param_1[0xb], param_1[0xb] = lVar14 + (long)ppppplVar16,
            0x4d < (ulong)(lVar14 + (long)ppppplVar16)) {
        func_0x000107c60e14(*(undefined8 *)param_1[8]);
        param_1[8] = param_1[8] + 8;
        ppppplVar16 = (long *****)0xffffffffffffffd9;
      }
    }
LAB_10028dffc:
    func_0x000107c60d8c(param_1 + 0xd);
    puVar9 = auStack_788;
    for (uVar18 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar18 != 0;
        uVar18 = uVar18 - 1) {
      if (((*(byte *)(puVar9[1] + 8) & 1) == 0) && (*(char *)((long)param_1 + 0xad) == '\x01')) {
        lVar14 = (long)*(char *)((long)param_1 + 0x2f);
        ppppplVar17 = ppppplVar11;
        if (lVar14 < 0) {
          lVar14 = param_1[4];
          ppppplVar17 = (long *****)param_1[3];
        }
        FUN_10028e588(&pppplStack_d0,ppppplVar17,lVar14,puVar9[0xc]);
        (*(code *)*puVar9)(puVar9);
        FUN_100078bd8(&pppplStack_d0);
      }
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      pppplStack_c0 = (long ****)0x0;
      pppplStack_d0 = (long ****)&UNK_1053a6a3c;
      pppplStack_c8 = (long ****)&PTR_DAT_110d9a7a0;
      param_2 = &pppplStack_d0;
      func_0x00010028e3d4(puVar9);
      (*(code *)*pppplStack_c8)(&pppplStack_c8);
      puVar9 = puVar9 + 0xd;
    }
    iVar15 = uVar2 + iVar15;
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 - uVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  } while ((uVar3 - uVar2 != 0 && (int)uVar2 <= (int)uVar3) && iVar15 < 0x10);
  uVar7 = uVar3 == uVar2;
  if ((int)uVar2 < (int)uVar3) {
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],param_1 + 1);
  }
  else if (*(char *)((long)param_1 + 0xac) != '\0') {
    uVar7 = uVar3 == uVar2;
    if (!(bool)uVar7) goto LAB_10028e144;
    (**(code **)(*param_1 + 8))(param_1);
  }
  FUN_1002adff0();
  FUN_10028d048(uStack_70);
  if ((bool)uVar7) {
    return iVar15;
  }
  func_0x000107c60e78();
LAB_10028e144:
  func_0x000107c316d8(&pppplStack_d0,&UNK_10f82fc35,0x21,&DAT_10f6842c6);
  func_0x000107c316dc(&pppplStack_d0,"unknown",0x89);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10028e188);
  (*pcVar6)();
code_r0x00010028dec0:
  (*(code *)*ppppplVar17[1])(ppppplVar17 + 1);
  ppppplVar11 = ppppplVar11 + 0xd;
  ppppplVar17 = ppppplVar17 + 0xd;
  if ((long *****)*ppppplVar19 == ppppplVar11) goto code_r0x00010028dee4;
  goto LAB_10028deb8;
code_r0x00010028dee4:
  ppppplVar19 = ppppplVar19 + 1;
  ppppplVar17 = (long *****)*ppppplVar19;
  goto LAB_10028deb4;
code_r0x00010028df98:
  (*(code *)*ppppplVar12[1])(ppppplVar12 + 1);
  ppppplVar11 = ppppplVar11 + 0xd;
  ppppplVar12 = ppppplVar12 + 0xd;
  if ((long *****)*ppppplVar19 == ppppplVar11) goto code_r0x00010028dfbc;
  goto LAB_10028df90;
code_r0x00010028dfbc:
  ppppplVar19 = ppppplVar19 + 1;
  ppppplVar12 = (long *****)*ppppplVar19;
  goto LAB_10028df8c;
}



/* Entry: 10028e1c0; end: 10028e1cf;  */

void FUN_10028e1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010028e1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  return;
}



/* Entry: 10028e1d0; end: 10028e24f;  */

void FUN_10028e1d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0d0b8,&UNK_10d9e75a0);
  puVar1 = &UNK_11045f410;
  func_0x000107c613fc(&UNK_11045f410,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100abeda8,puVar1);
  return;
}



/* Entry: 10028e250; end: 10028e277;  */

void FUN_10028e250(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10028e278; end: 10028e30f;  */

void FUN_10028e278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e30a28,&UNK_10da19880);
  puVar1 = &UNK_11048b4a8;
  func_0x000107c613fc(&UNK_11048b4a8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1006ece44,puVar1);
  return;
}



/* Entry: 10028e310; end: 10028e393;  */

void FUN_10028e310(undefined8 *param_1,long param_2)

{
  if ((param_2 != 0) && (0 < (param_1[1] - *(long *)*param_1) / 0x68 + param_2)) {
    return;
  }
  return;
}



/* Entry: 10028e394; end: 10028e427;  */

undefined8 * FUN_10028e394(undefined8 *param_1,long *param_2)

{
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 0x10))(param_1,param_2);
  return param_1;
}



/* Entry: 10028e428; end: 10028e46f;  */

long FUN_10028e428(long *param_1,long param_2,long *param_3,long param_4)

{
  if (param_2 == param_4) {
    return 0;
  }
  return (param_2 - *param_1) / 0x68 + ((long)param_1 - (long)param_3 >> 3) * 0x27 +
         (param_4 - *param_3) / -0x68;
}



/* Entry: 10028e470; end: 10028e553;  */

void FUN_10028e470(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    lVar2 = *param_4;
    lVar3 = param_3;
    while( true ) {
      lVar1 = (param_5 - lVar2) / 0x68;
      lVar2 = (lVar3 - param_2) / 0x68;
      if (lVar1 <= lVar2) {
        lVar2 = lVar1;
      }
      lVar1 = lVar3 + lVar2 * -0x68;
      for (lVar2 = lVar2 * -0x68; lVar2 != 0; lVar2 = lVar2 + 0x68) {
        lVar3 = lVar3 + -0x68;
        param_5 = param_5 + -0x68;
        func_0x00010028e3fc(param_5,lVar3);
      }
      if (param_2 == lVar1) break;
      param_4 = param_4 + -1;
      lVar2 = *param_4;
      param_5 = lVar2 + 0xfd8;
      lVar3 = lVar1;
    }
    param_2 = param_3;
    if (param_5 == *param_4 + 0xfd8) {
      param_4 = param_4 + 1;
      param_5 = *param_4;
    }
  }
  *param_1 = param_2;
  param_1[1] = (long)param_4;
  param_1[2] = param_5;
  return;
}



/* Entry: 10028e554; end: 10028e567;  */

void FUN_10028e554(void)

{
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x20 + 0x60) = *(long *)(unaff_x20 + 0x60) - unaff_x22;
  return;
}



/* Entry: 10028e568; end: 10028e587;  */

void FUN_10028e568(void)

{
  func_0x000107c61168(&PTR_PTR_112e30aa0);
  return;
}



/* Entry: 10028e588; end: 10028e5c7;  */

void FUN_10028e588(void)

{
  long *plVar1;
  long unaff_x19;
  
  FUN_1000784e0();
  plVar1 = plRam0000000113847390;
  *(long **)(unaff_x19 + 8) = plRam0000000113847390;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    *(long **)(unaff_x19 + 0x10) = plVar1;
  }
  return;
}



/* Entry: 10028e5c8; end: 10028e5cf;  */

void FUN_10028e5c8(long param_1)

{
  long lStack_28;
  undefined8 **ppuStack_20;
  long *plStack_18;
  
  lStack_28 = *(long *)(param_1 + 0x10);
  if (*(long *)(lStack_28 + 0x108) != -1) {
    plStack_18 = &lStack_28;
    ppuStack_20 = &plStack_18;
    func_0x000107c60c38((long *)(lStack_28 + 0x108),&ppuStack_20,FUN_10028e6c0);
  }
  return;
}



/* Entry: 10028e5d0; end: 10028e61f;  */

void FUN_10028e5d0(long param_1)

{
  long lStack_28;
  undefined8 **ppuStack_20;
  long *plStack_18;
  
  if (*(long *)(param_1 + 0x108) != -1) {
    plStack_18 = &lStack_28;
    ppuStack_20 = &plStack_18;
    lStack_28 = param_1;
    func_0x000107c60c38((long *)(param_1 + 0x108),&ppuStack_20,FUN_10028e6c0);
  }
  return;
}



/* Entry: 10028e620; end: 10028e6bf;  */

undefined8 FUN_10028e620(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam000000011383a458 & 1) == 0) {
    iVar1 = 0x1383a458;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10028f278(auStack_68);
      puVar2 = auStack_68;
      FUN_10028f4b0();
      puRam000000011383a450 = puVar2;
      FUN_100164334(auStack_68);
      func_0x000107c60e4c(0x11383a458);
    }
  }
  return 0x11383a450;
}



/* Entry: 10028e6c0; end: 10028f277;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10028e6c0(undefined8 *param_1)

{
  undefined8 *******pppppppuVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined ***pppuVar10;
  byte bVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined8 *******pppppppuStack_5d0;
  ulong uStack_5c8;
  byte bStack_5b9;
  undefined1 auStack_5b8 [24];
  long *plStack_5a0;
  undefined **ppuStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  ulong uStack_580;
  undefined4 uStack_578;
  ulong uStack_430;
  ulong uStack_428;
  undefined1 uStack_420;
  undefined8 uStack_418;
  int iStack_410;
  long lStack_408;
  undefined1 auStack_400 [40];
  long lStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_388;
  undefined1 auStack_378 [24];
  undefined1 uStack_360;
  undefined1 auStack_358 [32];
  undefined1 auStack_338 [32];
  undefined1 auStack_318 [24];
  undefined **ppuStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [32];
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 auStack_188 [24];
  undefined1 uStack_170;
  undefined1 auStack_168 [24];
  undefined1 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined **ppuStack_b8;
  int iStack_b0;
  undefined1 auStack_a8 [56];
  
  lVar12 = **(long **)*param_1;
  FUN_10028e620();
  FUN_10028fb10(&plStack_5a0,0x48);
  if (plStack_5a0 != (long *)0x0) {
    lVar4 = plStack_5a0[1];
    for (lVar18 = *plStack_5a0; lVar18 != lVar4; lVar18 = lVar18 + 0x20) {
      FUN_1002a2358(auStack_5b8,lVar18);
      lVar19 = lVar18;
      FUN_1002a23a8();
      if ((int)lVar19 == 0) {
        func_0x000107c35608();
        FUN_10002b838(auStack_5e8,&UNK_10f741e71);
        func_0x000107c60c94(auStack_600,auStack_5b8);
        FUN_1002a7f28(&ppuStack_300,auStack_5e8,auStack_600);
        FUN_10002b838(auStack_618,&UNK_10f741ecc);
        func_0x000107c2c500(&ppuStack_300,auStack_618);
        FUN_1002a7f5c();
        func_0x000100602fa4();
        func_0x000100602fac();
        func_0x000107c60ca0(auStack_5e8);
        func_0x0001002a7fc0();
        func_0x0001002a8004(*(undefined8 *)(*(long *)*param_1 + 8));
        func_0x0001002a81a0();
        goto LAB_10028ef90;
      }
      FUN_1002a25dc(&pppppppuStack_5d0,lVar18);
      uVar20 = uStack_5c8;
      if (-1 < (char)bStack_5b9) {
        uVar20 = (ulong)bStack_5b9;
      }
      if (uVar20 == 0) goto LAB_10028ef88;
      uStack_120 = 0;
      ppuStack_128 = &PTR_DAT_110d12608;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      puStack_f8 = &DAT_11383d918;
      puStack_f0 = &DAT_11383d918;
      puStack_e8 = &DAT_11383d918;
      iStack_b0 = 0;
      lStack_d8 = 0;
      lStack_e0 = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      pppppppuVar1 = pppppppuStack_5d0;
      if (-1 < (char)bStack_5b9) {
        pppppppuVar1 = &pppppppuStack_5d0;
      }
      uStack_c3 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      pppuVar10 = &ppuStack_128;
      FUN_1001a3c94(pppuVar10,pppppppuVar1);
      if (((ulong)pppuVar10 & 1) == 0) goto LAB_10028ef80;
      FUN_10028e620();
      uVar20 = (ulong)puStack_f8 & 0xfffffffffffffffc;
      if (*(char *)(uVar20 + 0x17) < '\0') {
        if (*(long *)(uVar20 + 8) == 0) goto LAB_10028e900;
      }
      else if (*(char *)(uVar20 + 0x17) == '\0') {
LAB_10028e900:
        func_0x000107c35608();
        func_0x0001002a7f08();
        func_0x000107c3560c(puStack_f8);
        func_0x0001002a7f18();
        FUN_10002b838(&uStack_1b0,&UNK_10f741e7b);
        func_0x000107c35630();
        FUN_1002a7f5c();
        func_0x000107c35620();
        FUN_1002a7fb0();
        func_0x0001002a7fb8();
        func_0x0001002a7fc0();
        FUN_1002a7ff4();
        func_0x0001002a8004();
        func_0x0001002a81a0();
        goto LAB_10028ef80;
      }
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      ppuStack_300 = &PTR_DAT_110cd1960;
      uStack_2e0 = 1;
      func_0x0001002a7f08();
      func_0x000107c60c94(auStack_a8);
      func_0x0001002a7f18();
      FUN_1002a7f5c();
      FUN_1002a7fb0();
      func_0x0001002a7fb8();
      func_0x0001002a7fc0();
      FUN_1002a7ff4();
      func_0x0001002a8004();
      func_0x0001002a81a0();
      auStack_148[0] = 0;
      uStack_130 = 0;
      auStack_168[0] = 0;
      uStack_150 = 0;
      auStack_188[0] = 0;
      uStack_170 = 0;
      if (iStack_b0 == 0) {
        func_0x000107c35608();
        func_0x0001002a7f08();
        func_0x000107c3560c(puStack_f8);
        func_0x0001002a7f18();
        FUN_10002b838(&uStack_1b0,&UNK_10f741e89);
        func_0x000107c35630();
        FUN_1002a7f5c();
        func_0x000107c35620();
        FUN_1002a7fb0();
        func_0x0001002a7fb8();
        func_0x0001002a7fc0();
        FUN_1002a7ff4();
        func_0x0001002a8004();
        func_0x0001002a81a0();
        goto LAB_10028ef68;
      }
      if (iStack_b0 == 0xc) {
        func_0x0001002a81a8();
        lVar19 = extraout_x8_00;
        if (extraout_x8_00 < 0) {
          lVar19 = *(long *)(uVar20 + 8);
        }
        if (lVar19 == 0) {
LAB_10028e9dc:
          ppuStack_598 = (undefined **)((ulong)ppuStack_598 & 0xffffffffffffff00);
          uStack_580 = uStack_580 & 0xffffffffffffff00;
        }
        else {
          FUN_1002ab180();
        }
LAB_10028e9e4:
        func_0x0001002a81b8();
        FUN_1002a822c();
      }
      else if (iStack_b0 == 7) {
        func_0x0001002a81a8();
        if (extraout_x8_01 < 0) {
          if (*(long *)(uVar20 + 8) == 0) goto LAB_10028e9f8;
LAB_10028e968:
          FUN_1002ab180();
        }
        else {
          if (extraout_x8_01 != 0) goto LAB_10028e968;
LAB_10028e9f8:
          ppuStack_598 = (undefined **)((ulong)ppuStack_598 & 0xffffffffffffff00);
          uStack_580 = uStack_580 & 0xffffffffffffff00;
        }
        func_0x0001002a81b8();
        FUN_1002a822c();
        ppuVar3 = ppuStack_b8;
        if (iStack_b0 != 7) {
          ppuVar3 = &PTR_PTR_1133a68c8;
        }
        func_0x000107c60c94(&ppuStack_300,(ulong)ppuVar3[3] & 0xfffffffffffffffc);
        ppuVar3 = ppuStack_b8;
        if (iStack_b0 != 7) {
          ppuVar3 = &PTR_PTR_1133a68c8;
        }
        FUN_1002a8234(auStack_168,(ulong)ppuVar3[2] & 0xfffffffffffffffc);
        uVar20 = uStack_2f8;
        if (-1 < (long)uStack_2f0) {
          uVar20 = uStack_2f0 >> 0x38;
        }
        if (uVar20 == 0) {
          func_0x0001002a969c(auStack_188,auStack_168);
        }
        else {
          func_0x0001002a82b4(&ppuStack_598,&ppuStack_300);
          FUN_1002a8208(auStack_188,&ppuStack_598);
          FUN_1002a822c();
        }
        func_0x000107c60ca0(&ppuStack_300);
      }
      else if (iStack_b0 == 6) {
        func_0x0001002a81a8();
        lVar19 = extraout_x8;
        if (extraout_x8 < 0) {
          lVar19 = *(long *)(uVar20 + 8);
        }
        if (lVar19 == 0) goto LAB_10028e9dc;
        FUN_1002ab180();
        goto LAB_10028e9e4;
      }
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_190 = 0x3f800000;
      puVar2 = &uStack_110;
      if ((uStack_110 & 1) != 0) {
        puVar2 = (ulong *)(uStack_110 + 7);
      }
      for (lVar19 = (long)(int)uStack_108 << 3; lVar19 != 0; lVar19 = lVar19 + -8) {
        uVar20 = *(ulong *)(*puVar2 + 0x10) & 0xfffffffffffffffc;
        lVar13 = (long)*(char *)(uVar20 + 0x17);
        if (lVar13 < 0) {
          lVar13 = *(long *)(uVar20 + 8);
        }
        if (lVar13 == 0) {
LAB_10028eb74:
          func_0x000107c35608();
          func_0x0001002a7f08();
          func_0x000107c3560c(puStack_f8);
          func_0x0001002a7f18();
          FUN_10002b838(auStack_338,&UNK_10f741e98);
          func_0x000107c2c500(&ppuStack_300,auStack_338);
          FUN_1002a7f5c();
          func_0x000107c60ca0(auStack_338);
          FUN_1002a7fb0();
          func_0x0001002a7fb8();
          func_0x0001002a7fc0();
          FUN_1002a7ff4();
          func_0x0001002a8004();
          func_0x0001002a81a0();
          goto LAB_10028ef60;
        }
        uVar20 = *(ulong *)(*puVar2 + 0x18) & 0xfffffffffffffffc;
        lVar13 = (long)*(char *)(uVar20 + 0x17);
        if (lVar13 < 0) {
          lVar13 = *(long *)(uVar20 + 8);
        }
        if (lVar13 == 0) goto LAB_10028eb74;
        FUN_1002a9bd4(&ppuStack_598);
        func_0x0001002a9e14(&uStack_1b0,&ppuStack_598);
        FUN_1002aa0bc(&ppuStack_598);
        puVar2 = puVar2 + 1;
      }
      func_0x000107c60c94(auStack_318,(ulong)puStack_f8 & 0xfffffffffffffffc);
      FUN_10028af84(auStack_338,auStack_148);
      FUN_10028af84(auStack_358,auStack_188);
      cVar5 = *(char *)(((ulong)puStack_f0 & 0xfffffffffffffffc) + 0x17);
      if (cVar5 < '\0') {
        if (*(long *)(((ulong)puStack_f0 & 0xfffffffffffffffc) + 8) == 0) goto LAB_10028ebd4;
LAB_10028eb68:
        func_0x0001002a8308(auStack_378);
      }
      else {
        if (cVar5 != '\0') goto LAB_10028eb68;
LAB_10028ebd4:
        auStack_378[0] = 0;
        uStack_360 = 0;
      }
      lVar19 = lStack_e0;
      uVar20 = uStack_118;
      if ((uStack_118 & 1) == 0) {
        uStack_3d0 = uStack_3d0 & 0xffffffffffffff00;
        uStack_388 = 0;
      }
      else {
        iVar8 = *(int *)(lStack_e0 + 0x28) + -1;
        if (2 < *(int *)(lStack_e0 + 0x28) - 2U) {
          iVar8 = 0;
        }
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3b0 = 0x3f800000;
        if ((*(byte *)(lStack_e0 + 0x10) & 1) != 0) {
          lVar13 = *(long *)(*(long *)(lStack_e0 + 0x18) + 0x18);
          FUN_1002a9704(auStack_a8,lVar13,
                        lVar13 + (long)*(int *)(*(long *)(lStack_e0 + 0x18) + 0x10) * 4);
          func_0x0001002a9850(&uStack_3d0,auStack_a8);
          FUN_1001ba7c0(auStack_a8);
        }
        iVar6 = *(int *)(lVar19 + 0x2c);
        uVar21 = *(undefined8 *)(lVar19 + 0x20);
        FUN_10028aa7c(auStack_a8,&uStack_3d0);
        iVar7 = *(int *)(lVar19 + 0x34);
        uStack_418 = NEON_rev64(uVar21,4);
        iStack_410 = iVar8;
        lStack_408 = (long)iVar6;
        FUN_10028aa7c(auStack_400,auStack_a8);
        lStack_3d8 = (long)iVar7;
        FUN_1001ba7c0(auStack_a8);
        FUN_1001ba7c0(&uStack_3d0);
        FUN_10028ab2c(&uStack_3d0,&uStack_418);
      }
      FUN_10028acf0(auStack_a8,&uStack_1b0);
      if ((uStack_118 & 1) == 0) {
        bVar11 = 0;
        if (((uint)uStack_118 >> 1 & 1) != 0) goto LAB_10028ecdc;
LAB_10028ed3c:
        uVar14 = 0;
        uVar16 = 0;
        if (((uint)uStack_118 >> 2 & 1) == 0) goto LAB_10028ed48;
LAB_10028ed00:
        if (*(int *)(lStack_d0 + 0x1c) == 2) {
          if (*(uint *)(lStack_d0 + 0x14) == 0) goto LAB_10028ed6c;
          uVar17 = 0;
          uStack_430 = 0;
          uStack_428 = (ulong)*(uint *)(lStack_d0 + 0x14) | 0x100000000;
        }
        else if (*(int *)(lStack_d0 + 0x1c) == 3) {
          uStack_428 = 0;
          uVar17 = (ulong)*(uint *)(lStack_d0 + 0x14);
          uStack_430 = 0;
          if (*(uint *)(lStack_d0 + 0x14) != 0) {
            uStack_430 = 0x100000000;
          }
        }
        else {
LAB_10028ed6c:
          uStack_428 = 0;
          uVar17 = 0;
          uStack_430 = 0;
        }
        uStack_430 = uStack_430 | uVar17;
        uStack_420 = 1;
      }
      else {
        bVar11 = *(byte *)(lStack_e0 + 0x30);
        if (((uint)uStack_118 >> 1 & 1) == 0) goto LAB_10028ed3c;
LAB_10028ecdc:
        uVar9 = *(int *)(lStack_d8 + 0x10) - 1;
        uVar14 = 0;
        if (uVar9 < 3) {
          uVar14 = (ulong)uVar9 + 1;
        }
        uVar14 = uVar14 | (ulong)*(uint *)(lStack_d8 + 0x14) << 0x20;
        uVar16 = (ulong)*(uint *)(lStack_d8 + 0x18) | 0x100000000;
        if (((uint)uStack_118 >> 2 & 1) != 0) goto LAB_10028ed00;
LAB_10028ed48:
        uStack_420 = 0;
        uStack_430 = uStack_430 & 0xffffffffffffff00;
      }
      FUN_10028ab48(&ppuStack_598,auStack_318,auStack_338,auStack_358,auStack_378,&uStack_3d0,
                    auStack_a8,bVar11 & 1,uVar14,uVar16,&uStack_430,uStack_bc);
      func_0x00010028b354(&ppuStack_300,&ppuStack_598);
      uStack_1e0 = 1;
      func_0x0001002a8308(auStack_1d8,auStack_5b8);
      uStack_1b8 = uStack_c0;
      FUN_10028b28c(&ppuStack_598);
      func_0x00010028ad98(auStack_a8);
      func_0x00010028adfc(&uStack_3d0);
      if ((uVar20 & 1) != 0) {
        FUN_1001ba7c0(auStack_400);
      }
      FUN_1001148fc(auStack_378);
      FUN_1001148fc(auStack_358);
      FUN_1001148fc(auStack_338);
      func_0x000107c60ca0(auStack_318);
      switch(iStack_b0) {
      case 6:
        FUN_1002aaea8(&ppuStack_598,(ulong)puStack_f8 & 0xfffffffffffffffc);
        FUN_1002a8324(lVar12 + 0x68);
        FUN_1002a8548();
        ppuVar3 = ppuStack_b8;
        if (iStack_b0 != 6) {
          ppuVar3 = &PTR_PTR_1133a6880;
        }
        lVar19 = (long)*(char *)(((ulong)ppuVar3[2] & 0xfffffffffffffffc) + 0x17);
        if (lVar19 < 0) {
          lVar19 = *(long *)(((ulong)ppuVar3[2] & 0xfffffffffffffffc) + 8);
        }
        if (lVar19 != 0) {
          FUN_1002aaea8(&ppuStack_598);
          FUN_1002a8324(lVar12 + 0xb8);
          goto code_r0x00010028ef54;
        }
        break;
      case 7:
        func_0x000107c60c94(&ppuStack_598,auStack_168);
        FUN_10028b544(&uStack_580,&ppuStack_300);
        FUN_1002a8324(lVar12 + 0x40);
        goto code_r0x00010028ef54;
      case 0xc:
        puVar15 = ppuStack_b8[2];
        ppuVar3 = ppuStack_b8 + 2;
        if (((ulong)puVar15 & 1) != 0) {
          ppuVar3 = (undefined **)(puVar15 + 7);
        }
        for (lVar19 = (long)*(int *)(ppuStack_b8 + 3) << 3; lVar19 != 0; lVar19 = lVar19 + -8) {
          FUN_1002aaea8(&ppuStack_598,*ppuVar3);
          FUN_1002a8324(lVar12 + 0x90);
          FUN_1002a8548();
          ppuVar3 = ppuVar3 + 1;
        }
        break;
      case 0xf:
        FUN_1002aaea8(&ppuStack_598,(ulong)puStack_f8 & 0xfffffffffffffffc);
        FUN_1002a8324(lVar12 + 0xe0);
code_r0x00010028ef54:
        FUN_1002a8548();
      }
      func_0x00010028b7fc(&ppuStack_300);
LAB_10028ef60:
      func_0x00010028ad98(&uStack_1b0);
LAB_10028ef68:
      FUN_1001148fc(auStack_188);
      FUN_1001148fc(auStack_168);
      FUN_1001148fc(auStack_148);
LAB_10028ef80:
      FUN_1002a8550(&ppuStack_128);
LAB_10028ef88:
      func_0x000107c60ca0(&pppppppuStack_5d0);
LAB_10028ef90:
      func_0x000107c60ca0(auStack_5b8);
    }
  }
  uStack_588 = 0;
  uStack_580 = 0;
  ppuStack_598 = &PTR_DAT_110cd1960;
  uStack_590 = 0;
  uStack_578 = 1;
  lVar12 = lVar12 + 0x118;
  func_0x0001002acb3c(lVar12);
  (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,&ppuStack_598,lVar12);
  func_0x0001002a81a0();
  FUN_1002acc14(&plStack_5a0);
  return;
}



/* Entry: 10028f278; end: 10028f423;  */

void FUN_10028f278(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10002b838(&uStack_98,&UNK_10f741ed9);
  FUN_10002b838(&uStack_b0,"");
  FUN_10002b838(auStack_80,&UNK_10f741eef);
  FUN_10002b838(auStack_68,&UNK_10f741f05);
  FUN_10002b838(auStack_50,&UNK_10f741f18);
  FUN_1000e3098(&uStack_d0,auStack_80,3);
  param_1[1] = uStack_90;
  *param_1 = uStack_98;
  param_1[2] = uStack_88;
  uStack_90 = 0;
  uStack_88 = 0;
  param_1[4] = uStack_a8;
  param_1[3] = uStack_b0;
  param_1[5] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = uStack_c0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  FUN_1000e30f4(&uStack_d0);
  lVar3 = 0x30;
  do {
    func_0x000107c60ca0(auStack_80 + lVar3);
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0x18);
  func_0x000107c60ca0(&uStack_b0);
  puVar1 = &uStack_98;
  func_0x000107c60ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puVar2 = auStack_50;
  lVar3 = -0x48;
  do {
    func_0x000107c60ca0(puVar2);
    puVar2 = puVar2 + -0x18;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0);
  func_0x000107c60ca0(&uStack_b0);
  func_0x000107c60ca0(&uStack_98);
  func_0x000107c60bd8(puVar1);
  FUN_1000285a8(0x112e30a30,&UNK_10da19888);
  func_0x000107c6157c(puVar1);
  FUN_1000823a8(FUN_1006ecde8,puVar1);
  return;
}



/* Entry: 10028f424; end: 10028f43f;  */

void FUN_10028f424(undefined8 param_1)

{
  FUN_1000285a8(0x112e30a30,&UNK_10da19888);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006ecde8,param_1);
  return;
}



/* Entry: 10028f440; end: 10028f48f;  */

void FUN_10028f440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10028f490; end: 10028f4af;  */

void FUN_10028f490(void)

{
  func_0x000107c61168(&PTR_PTR_11292ac80);
  return;
}



/* Entry: 10028f4b0; end: 10028fa8f;  */

undefined8 * FUN_10028f4b0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam00000001137f70b0 & 1) == 0) {
    iVar2 = 0x137f70b0;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      plRam00000001137f70c8 = (long *)0x0;
      lRam00000001137f70c0 = 0;
      uRam00000001137f70d8 = 0;
      plRam00000001137f70d0 = (long *)0x0;
      fRam00000001137f70e0 = 1.0;
      func_0x000107c60e4c(0x1137f70b0);
    }
  }
  if ((bRam00000001137f70b8 & 1) == 0) {
    iVar2 = 0x137f70b8;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uRam00000001137f70e8 = 0x32aaaba7;
      uRam00000001137f70f8 = 0;
      uRam00000001137f70f0 = 0;
      uRam00000001137f7108 = 0;
      uRam00000001137f7100 = 0;
      uRam00000001137f7118 = 0;
      uRam00000001137f7110 = 0;
      uRam00000001137f7120 = 0;
      func_0x000107c60e4c(0x1137f70b8);
    }
  }
  func_0x000107c60d88(0x1137f70e8);
  FUN_10015b950(param_1,0x20);
  plVar8 = plRam00000001137f70c8;
  plVar12 = (long *)0x1137f70c8;
  if ((plRam00000001137f70c8 != (long *)0x0) && (uRam00000001137f70d8 != 0)) {
    plVar3 = (long *)0x1137f70d8;
    FUN_100102e7c(0x1137f70d8,param_1);
    uVar13 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar13) == 0) {
      plVar14 = (long *)((ulong)plVar3 & uVar13);
    }
    else {
      plVar14 = plVar3;
      if (plVar8 <= plVar3) {
        uVar7 = 0;
        if (plVar8 != (long *)0x0) {
          uVar7 = (ulong)plVar3 / (ulong)plVar8;
        }
        plVar14 = (long *)((long)plVar3 - uVar7 * (long)plVar8);
      }
    }
    plVar15 = *(long **)(lRam00000001137f70c0 + (long)plVar14 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10028f5bc;
          plVar6 = (long *)plVar15[1];
          if (plVar6 != plVar3) break;
          uVar7 = (ulong)(plVar15 + 2);
          FUN_1000e107c(uVar7,param_1);
          if ((uVar7 & 1) != 0) {
            puVar11 = (undefined8 *)plVar15[5];
            goto LAB_10028f9a4;
          }
        }
        if (((ulong)plVar8 & uVar13) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar13);
        }
        else if (plVar8 <= plVar6) {
          uVar7 = 0;
          if (plVar8 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar8;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar8);
        }
      } while (plVar6 == plVar14);
    }
  }
LAB_10028f5bc:
  func_0x000107c60c94(&lStack_80,param_1);
  FUN_100077f84();
  uVar4 = uRam000000011383d810;
  FUN_1001639ac(uRam000000011383d810,param_1,1);
  FUN_100077f84();
  puVar11 = (undefined8 *)0x18;
  func_0x000107c60e20();
  *puVar11 = &PTR_FUN_110cf0340;
  puVar11[1] = 0x11383d788;
  *(int *)(puVar11 + 2) = (int)uVar4;
  plVar8 = (long *)0x1137f70d8;
  FUN_100102e7c(0x1137f70d8,&lStack_80);
  plVar14 = plRam00000001137f70c8;
  plVar3 = plVar8;
  if (plRam00000001137f70c8 != (long *)0x0) {
    uVar13 = (long)plRam00000001137f70c8 - 1;
    if (((ulong)plRam00000001137f70c8 & uVar13) == 0) {
      plVar12 = (long *)(uVar13 & (ulong)plVar8);
    }
    else {
      plVar12 = plVar8;
      if (plRam00000001137f70c8 <= plVar8) {
        uVar7 = 0;
        if (plRam00000001137f70c8 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plRam00000001137f70c8;
        }
        plVar12 = (long *)((long)plVar8 - uVar7 * (long)plRam00000001137f70c8);
      }
    }
    plVar15 = *(long **)(lRam00000001137f70c0 + (long)plVar12 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10028f6b0;
          plVar6 = (long *)plVar15[1];
          if (plVar6 != plVar8) break;
          plVar3 = plVar15 + 2;
          FUN_1000e107c(plVar3,&lStack_80);
          if (((ulong)plVar3 & 1) != 0) goto LAB_10028f988;
        }
        if (((ulong)plVar14 & uVar13) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar13);
        }
        else if (plVar14 <= plVar6) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar14;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar14);
        }
      } while (plVar6 == plVar12);
    }
  }
LAB_10028f6b0:
  FUN_10007e4c4();
  lVar5 = lStack_70;
  uStack_60 = 0x1137f70d0;
  uStack_58 = 1;
  *plVar3 = 0;
  plVar3[1] = (long)plVar8;
  plVar3[3] = lStack_78;
  plVar3[2] = lStack_80;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  plVar3[4] = lVar5;
  plVar3[5] = 0;
  if ((plVar14 != (long *)0x0) &&
     ((float)(uRam00000001137f70d8 + 1) <= fRam00000001137f70e0 * (float)plVar14))
  goto LAB_10028f90c;
  uVar13 = 1;
  if ((long *)0x2 < plVar14) {
    uVar13 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
  }
  plVar12 = (long *)(uVar13 | (long)plVar14 << 1);
  plVar14 = (long *)(long)((float)(uRam00000001137f70d8 + 1) / fRam00000001137f70e0);
  if (plVar12 <= plVar14) {
    plVar12 = plVar14;
  }
  plStack_68 = plVar3;
  if ((long)plVar12 - 1U == 0) {
    plVar12 = (long *)0x2;
  }
  else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
    func_0x000107c60c44();
  }
  plVar15 = plRam00000001137f70c8;
  if (plRam00000001137f70c8 < plVar12) {
LAB_10028f770:
    if ((ulong)plVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10028fa40);
      (*pcVar1)();
    }
    func_0x000107c60e20((long)plVar12 << 3);
    FUN_10028fa90();
    lVar5 = lRam00000001137f70c0;
    plRam00000001137f70c8 = plVar12;
    for (plVar14 = (long *)0x0; plVar15 = plRam00000001137f70d0, plVar12 != plVar14;
        plVar14 = (long *)((long)plVar14 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar14 * 8) = 0;
    }
    plVar14 = plVar12;
    if (plRam00000001137f70d0 != (long *)0x0) {
      plVar6 = (long *)plRam00000001137f70d0[1];
      uVar7 = (long)plVar12 - 1;
      uVar13 = 0;
      if (plVar12 != (long *)0x0) {
        uVar13 = (ulong)plVar6 / (ulong)plVar12;
      }
      plVar9 = plVar6;
      if (plVar12 <= plVar6) {
        plVar9 = (long *)((long)plVar6 - uVar13 * (long)plVar12);
      }
      if (((ulong)plVar12 & uVar7) == 0) {
        plVar9 = (long *)((ulong)plVar6 & uVar7);
      }
      *(undefined8 *)(lVar5 + (long)plVar9 * 8) = 0x1137f70d0;
      while (plVar6 = plVar15, plVar15 = (long *)*plVar6, plVar15 != (long *)0x0) {
        plVar10 = (long *)plVar15[1];
        if (((ulong)plVar12 & uVar7) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar7);
        }
        else if (plVar12 <= plVar10) {
          uVar13 = 0;
          if (plVar12 != (long *)0x0) {
            uVar13 = (ulong)plVar10 / (ulong)plVar12;
          }
          plVar10 = (long *)((long)plVar10 - uVar13 * (long)plVar12);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar5 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar10 * 8) = plVar6;
            plVar9 = plVar10;
          }
          else {
            *plVar6 = *plVar15;
            *plVar15 = **(long **)(lVar5 + (long)plVar10 * 8);
            **(undefined8 **)(lVar5 + (long)plVar10 * 8) = plVar15;
            plVar15 = plVar6;
          }
        }
      }
    }
  }
  else {
    plVar14 = plRam00000001137f70c8;
    if (plVar12 < plRam00000001137f70c8) {
      plVar14 = (long *)(long)((float)uRam00000001137f70d8 / fRam00000001137f70e0);
      if ((plRam00000001137f70c8 < (long *)0x3) ||
         (((ulong)plRam00000001137f70c8 & (long)plRam00000001137f70c8 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar14) {
        plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
      }
      if (plVar12 <= plVar14) {
        plVar12 = plVar14;
      }
      plVar14 = plRam00000001137f70c8;
      if (plVar12 < plVar15) {
        if (plVar12 != (long *)0x0) goto LAB_10028f770;
        FUN_10028fa90(0);
        plRam00000001137f70c8 = (long *)0x0;
        plVar14 = (long *)0x0;
      }
    }
  }
  if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
    plVar12 = (long *)((long)plVar14 - 1U & (ulong)plVar8);
  }
  else {
    plVar12 = plVar8;
    if (plVar14 <= plVar8) {
      uVar13 = 0;
      if (plVar14 != (long *)0x0) {
        uVar13 = (ulong)plVar8 / (ulong)plVar14;
      }
      plVar12 = (long *)((long)plVar8 - uVar13 * (long)plVar14);
    }
  }
LAB_10028f90c:
  lVar5 = lRam00000001137f70c0;
  plVar8 = *(long **)(lRam00000001137f70c0 + (long)plVar12 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar3 = (long)plRam00000001137f70d0;
    plRam00000001137f70d0 = plVar3;
    *(undefined8 *)(lVar5 + (long)plVar12 * 8) = 0x1137f70d0;
    if (*plVar3 != 0) {
      plVar12 = *(long **)(*plVar3 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar12) {
        uVar13 = 0;
        if (plVar14 != (long *)0x0) {
          uVar13 = (ulong)plVar12 / (ulong)plVar14;
        }
        plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar14);
      }
      *(long **)(lVar5 + (long)plVar12 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar8;
    *plVar8 = (long)plVar3;
  }
  plStack_68 = (long *)0x0;
  uRam00000001137f70d8 = uRam00000001137f70d8 + 1;
  FUN_10028fab8(&plStack_68);
  plVar15 = plVar3;
LAB_10028f988:
  lVar5 = plVar15[5];
  plVar15[5] = (long)puVar11;
  if (lVar5 != 0) {
    func_0x000107c39858();
    puVar11 = (undefined8 *)plVar15[5];
  }
  func_0x000107c60ca0(&lStack_80);
LAB_10028f9a4:
  FUN_10028fb04();
  return puVar11;
}



/* Entry: 10028fa90; end: 10028fab7;  */

void FUN_10028fa90(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = lRam00000001137f70c0;
  lRam00000001137f70c0 = param_1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10028fab8; end: 10028fb03;  */

void FUN_10028fab8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010028faac();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      lVar1 = *(long *)(unaff_x20 + 0x28);
      *(undefined8 *)(unaff_x20 + 0x28) = 0;
      if (lVar1 != 0) {
        func_0x000107c39858();
      }
      func_0x000107c60ca0(unaff_x20 + 0x10);
    }
    FUN_100078974();
  }
  return;
}



/* Entry: 10028fb04; end: 10028fb0f;  */

void FUN_10028fb04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x1137f70e8);
  return;
}



/* Entry: 10028fb10; end: 10028fcef;  */

void FUN_10028fb10(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  ulong uStack_e8;
  long lStack_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  char cStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *aplStack_40 [2];
  
  if (param_2 < 0xde) {
    FUN_100100ed0(aplStack_40);
    if (aplStack_40[0] == (long *)0x0) {
      *param_1 = 0;
    }
    else {
      FUN_10002b838(&uStack_a8,"");
      uStack_80 = uStack_98;
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      uStack_78 = (ulong)param_2;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_70 = 1;
      uStack_68 = 0xd;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      FUN_100100fec(&uStack_c0);
      func_0x000107c60ca0(&uStack_a8);
      (**(code **)(*aplStack_40[0] + 0x30))(&lStack_e0,aplStack_40[0],&uStack_90);
      if ((cStack_c8 == '\x01') && (lStack_e0 != CONCAT44(uStack_d4,iStack_d8))) {
        FUN_10029acf4(&uStack_e8);
        FUN_10006369c(uStack_e8,lStack_e0,iStack_d8 - (int)lStack_e0);
        if ((uStack_e8 & 1) == 0) {
          *param_1 = 0;
        }
        else {
          FUN_1002a0780(&uStack_120,&uStack_e8);
          puVar1 = (undefined8 *)0x30;
          func_0x000107c60e20();
          puVar1[1] = uStack_118;
          *puVar1 = uStack_120;
          puVar1[2] = uStack_110;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_120 = 0;
          func_0x000107c60c94(puVar1 + 3,auStack_108);
          *param_1 = (long)puVar1;
          FUN_1002a1a1c(&uStack_120);
        }
        FUN_1002a1a5c(&uStack_e8);
      }
      else {
        *param_1 = 0;
      }
      FUN_1002a2294(&lStack_e0);
      FUN_100114924(&uStack_90);
    }
    FUN_1000df75c(aplStack_40);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 10028fcf0; end: 10028fd6f;  */

void FUN_10028fcf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x000100101054();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_1001010e4();
  func_0x000107c61180();
  func_0x000107c43f20(uVar1,param_2,unaff_x21);
  func_0x000107c61180();
  FUN_10011485c();
  FUN_10029a65c(uVar1);
  func_0x0001000ded28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10028fd70; end: 10028fd9b;  */

void FUN_10028fd70(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10028fd9c; end: 10028fec3;  */

void FUN_10028fd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e30b18,&UNK_10da19a80);
  puVar1 = &UNK_11048b570;
  func_0x000107c613fc(&UNK_11048b570,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  FUN_1000823a8(FUN_100794b84,puVar1);
  return;
}



/* Entry: 10028fec4; end: 10028fee3;  */

void FUN_10028fec4(void)

{
  func_0x000107c61168(&PTR_PTR_112e30b90);
  return;
}



/* Entry: 10028fee4; end: 100290073; -[SCAPIClient initWithBaseURL:] */

undefined8 * FUN_10028fee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR_PTR_112706080;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithBaseURL__1125db5d8,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b8238;
    func_0x000107c5d8e4(PTR_PTR_1126b8238);
    func_0x000107c61180();
    func_0x000107c53f84(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126dfe90;
    func_0x000107c426ec(PTR_PTR_1126dfe90);
    func_0x000107c61180();
    func_0x000107c53f84(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c4ecb0();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c4d9a4();
    func_0x000107c61180();
    func_0x000107c51804(puVar2);
    func_0x000107c61180();
    func_0x000107c53f84(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c53f74(puVar1);
    func_0x000107c61174(puVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 100290074; end: 10029010f; -[SCCircumstanceEngineConfigurationMashaller getBinaryValue:] */

void FUN_100290074(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5c64c();
  if ((lVar1 == 0xc) || (lVar1 = param_3, func_0x000107c5c64c(), lVar1 == 0xd)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    FUN_100101430(param_3);
    func_0x000107c61180();
    func_0x000107c4f55c(uVar2,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    uVar2 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100290110; end: 10029059b; -[AFHTTPClient initWithBaseURL:] */

undefined8 * FUN_100290110(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *unaff_x25;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_b0;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  puStack_70 = PTR_PTR_11270a1a0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_100290568;
  uVar2 = param_3;
  func_0x000107c4e430();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4adac();
  uVar5 = param_3;
  if (uVar3 == 0) {
LAB_1002901d8:
    func_0x000107c61170(uVar2);
    param_3 = uVar5;
  }
  else {
    uVar3 = param_3;
    func_0x000107c3ceb0();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c44b6c();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    if ((uVar4 & 1) == 0) {
      func_0x000107c3ac04();
      func_0x000107c61180();
      uVar2 = param_3;
      goto LAB_1002901d8;
    }
  }
  func_0x000107c52bf4(puVar1);
  func_0x000107c59a0c(puVar1);
  func_0x000107c57214(puVar1);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x000107c61180();
  func_0x000107c53f88(puVar1);
  func_0x000107c61170(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x000107c4ecac(PTR__OBJC_CLASS___NSLocale_1126af788);
  func_0x000107c61180();
  func_0x000107c61174(puVar7);
  func_0x000107c429cc(puVar6);
  func_0x000107c61170(puVar6);
  puVar6 = puVar7;
  func_0x000107c3ff50(puVar7);
  func_0x000107c61180();
  func_0x000107c53f84(puVar1);
  func_0x000107c61170(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c4539c();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  puVar11 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puStack_f8 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c();
    func_0x000107c61180();
    puStack_100 = puStack_f8;
    func_0x000107c4539c();
    func_0x000107c61180();
    puVar11 = puStack_100;
    func_0x000107c4d9c0();
    func_0x000107c61180();
  }
  puVar12 = puVar11;
  func_0x000107c60760();
  func_0x000107c60764();
  puStack_b0 = puVar12;
  if (puVar12 == (undefined *)0x0) {
    puStack_e8 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c();
    func_0x000107c61180();
    puStack_f0 = puStack_e8;
    func_0x000107c4539c();
    func_0x000107c61180();
    puStack_b0 = puStack_f0;
    func_0x000107c4d9c0();
    func_0x000107c61180();
  }
  puVar13 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c4d07c();
  func_0x000107c61180();
  puVar15 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar16 = puVar15;
  func_0x000107c5c650();
  func_0x000107c61180();
  puVar17 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194();
  func_0x000107c61180();
  puVar18 = puVar17;
  func_0x000107c61164();
  if (((ulong)puVar18 & 1) != 0) {
    unaff_x25 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c51820();
  }
  func_0x000107c5c1f8(puVar6);
  func_0x000107c61180();
  func_0x000107c53f84(puVar1);
  func_0x000107c61170(puVar6);
  if (((ulong)puVar18 & 1) != 0) {
    func_0x000107c61170(unaff_x25);
  }
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c61170(puStack_b0);
    func_0x000107c61170(puStack_f0);
    func_0x000107c61170(puStack_e8);
  }
  if (puVar10 == (undefined *)0x0) {
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puStack_100);
    func_0x000107c61170(puStack_f8);
  }
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61174(puVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
LAB_100290568:
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10029059c; end: 100290657;  */

void FUN_10029059c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e19a40,&UNK_10d9f9770);
  puVar1 = &UNK_11046d530;
  func_0x000107c613fc(&UNK_11046d530,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_101cddba8,puVar1);
  return;
}



/* Entry: 100290658; end: 1002906bb;  */

void FUN_100290658(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002906bc; end: 10029089f; -[SCCircumstanceEngineConfiguration protoValueForKey:] */

void FUN_1002906bc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4a8c4(param_3);
  func_0x000107c61180();
  func_0x000107c4baac(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = param_3;
  func_0x000107c5c64c();
  if ((uVar2 == 0xc) || (uVar2 = param_3, func_0x000107c5c64c(), uVar2 == 0xd)) {
    func_0x000107c3b834();
    func_0x000107c61180();
    uVar2 = param_3;
    func_0x000107c5c64c();
    puVar3 = PTR_PTR_1126dec58;
    if (uVar2 == 0xd) {
      uVar2 = param_3;
      func_0x000107c44fc8(param_3);
      func_0x000107c61180();
      func_0x000107c49820();
      func_0x000107c61170(uVar2);
      lVar7 = param_1;
      func_0x000107c3edfc(param_1);
      func_0x000107c61180();
    }
    else {
      func_0x000107c61174(param_3);
      func_0x000107c61158(puVar3);
      uVar4 = param_3;
      func_0x000107c6115c(param_3,puVar3);
      uVar2 = param_3;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
      }
      func_0x000107c61174(uVar2);
      func_0x000107c61170(param_3);
      uVar4 = uVar2;
      func_0x000107c4a8c4(uVar2);
      func_0x000107c61180();
      uVar5 = uVar2;
      func_0x000107c42e88(uVar2);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      lVar6 = param_1;
      func_0x000107c4f558();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar6;
        func_0x000107c5dc0c(lVar6);
        func_0x000107c61180();
      }
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(param_1);
  }
  else {
    lVar7 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1002908a0; end: 1002908bb;  */

void FUN_1002908a0(undefined8 param_1)

{
  FUN_1000285a8(0x112e19a48,&UNK_10d9f9778);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cddda4,param_1);
  return;
}



/* Entry: 1002908bc; end: 10029090b;  */

void FUN_1002908bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029090c; end: 10029093b; -[AFHTTPClient setBaseURL:] */

void FUN_10029090c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10029093c; end: 100290943; -[AFHTTPClient setStringEncoding:] */

void FUN_10029093c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 100290944; end: 100290963;  */

void FUN_100290944(void)

{
  func_0x000107c61168(&PTR_PTR_112912478);
  return;
}



/* Entry: 100290964; end: 10029096b; -[AFHTTPClient setParameterEncoding:] */

void FUN_100290964(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10029096c; end: 1002909c7; -[SCLazyCircumstanceEngineProxy bulkLoadNamespaceSyncWithoutThreadCheck_DEPRECATED:exposeAll:] */

void FUN_10029096c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3b5e8();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3edfc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1002909c8; end: 100290a03; -[SCCircumstanceEngine bulkLoadNamespaceSyncWithoutThreadCheck_DEPRECATED:exposeAll:] */

void FUN_1002909c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c3ade4();
                    /* WARNING: Could not recover jumptable at 0x00010bdd7010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__bulkLoadNamespaceSync_exposeAll_1125535a0,param_3,param_4);
  return;
}



/* Entry: 100290a04; end: 100290a07; -[SCCircumstanceEngine _assertNotBulkLoadDuringStartup:] */

void FUN_100290a04(void)

{
  return;
}



/* Entry: 100290a08; end: 100290a8f; -[SCCircumstanceEngine _bulkLoadNamespaceSync:exposeAll:] */

void FUN_100290a08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3edf8(uVar1);
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x88) == '\x01') {
    uVar2 = uVar1;
    func_0x000107c400dc(uVar1);
    func_0x000107c61180();
    func_0x000107c434f4();
    func_0x000107c61170(uVar2);
  }
  uVar2 = uVar1;
  func_0x000107c41214(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100290a90; end: 100290abf; -[AFHTTPClient setDefaultHeaders:] */

void FUN_100290a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100290ac0; end: 100290fb3; -[SCConfigManagerImpl bulkLoadNamespace:exposeAll:] */

/* WARNING: Possible PIC construction at 0x000100290b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100290c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100290cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100290e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100290e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100290ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100290eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100291024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100290d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100290d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100290e08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100290d8c) */
/* WARNING: Removing unreachable block (ram,0x000100290d98) */
/* WARNING: Removing unreachable block (ram,0x000100290d40) */
/* WARNING: Removing unreachable block (ram,0x000100290d5c) */
/* WARNING: Removing unreachable block (ram,0x000100290d78) */
/* WARNING: Removing unreachable block (ram,0x000100291028) */
/* WARNING: Removing unreachable block (ram,0x000100290eb8) */
/* WARNING: Removing unreachable block (ram,0x000100290f4c) */
/* WARNING: Removing unreachable block (ram,0x000100290f7c) */
/* WARNING: Removing unreachable block (ram,0x000100290fac) */
/* WARNING: Removing unreachable block (ram,0x000100291044) */
/* WARNING: Removing unreachable block (ram,0x000100290fd4) */
/* WARNING: Removing unreachable block (ram,0x000100290ef4) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100290ea8) */
/* WARNING: Removing unreachable block (ram,0x000100290e34) */
/* WARNING: Removing unreachable block (ram,0x000100290cfc) */
/* WARNING: Removing unreachable block (ram,0x000100290d4c) */
/* WARNING: Removing unreachable block (ram,0x000100290d58) */
/* WARNING: Removing unreachable block (ram,0x000100290e10) */
/* WARNING: Removing unreachable block (ram,0x000100290c24) */
/* WARNING: Removing unreachable block (ram,0x000100290c28) */
/* WARNING: Removing unreachable block (ram,0x000100290e44) */
/* WARNING: Removing unreachable block (ram,0x000100290c34) */
/* WARNING: Removing unreachable block (ram,0x000100290f1c) */
/* WARNING: Removing unreachable block (ram,0x000100290c44) */
/* WARNING: Removing unreachable block (ram,0x000100290f34) */
/* WARNING: Removing unreachable block (ram,0x000100290c64) */
/* WARNING: Removing unreachable block (ram,0x000100290e2c) */
/* WARNING: Removing unreachable block (ram,0x000100290ca4) */
/* WARNING: Removing unreachable block (ram,0x000100290cac) */
/* WARNING: Removing unreachable block (ram,0x000100290cb0) */
/* WARNING: Removing unreachable block (ram,0x000100290cc0) */
/* WARNING: Removing unreachable block (ram,0x000100290cc8) */
/* WARNING: Removing unreachable block (ram,0x000100290d00) */
/* WARNING: Removing unreachable block (ram,0x000100290b78) */
/* WARNING: Removing unreachable block (ram,0x000100290e0c) */
/* WARNING: Removing unreachable block (ram,0x000100290cf4) */

void FUN_100290ac0(long param_1)

{
  undefined8 uVar1;
  
  FUN_1001071d4();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4ba44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100290fb4; end: 100291053; -[SCConfigMetricLoggerImpl logCOFBulkLoad:] */

/* WARNING: Possible PIC construction at 0x000100291024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100291028) */

void FUN_100290fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x000107c3bbf0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c5bc70(uVar2,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 100291054; end: 100291093;  */

void FUN_100291054(void)

{
  FUN_1000285a8(0x112d6aec0,&UNK_10d92e378);
  FUN_1000823a8(&UNK_103a93970,0);
  return;
}



/* Entry: 100291094; end: 1002910b3;  */

void FUN_100291094(void)

{
  func_0x000107c61168(&PTR_PTR_11291d498);
  return;
}



/* Entry: 1002910b4; end: 1002910c3; -[SCConfigMetricGraphene2 startupCOFBulkLoad:] */

void FUN_1002910b4(long param_1,undefined8 param_2,char *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar5 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110879e58);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        func_0x000107c61178(param_3);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,pcVar3);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      param_4 = 1000;
      uVar5 = (int)&uStack_80;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110879e58);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  pcVar3 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8(pcVar3);
  func_0x000107c61174(param_4);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc0000000;
  puStack_d8 = &UNK_1053333a0;
  puStack_d0 = &UNK_110861b28;
  ppuVar4 = &puStack_e8;
  uStack_c8 = uVar5;
  FUN_1001071d4(ppuVar4);
  (**(code **)(param_4 + 0x10))(param_4);
  func_0x000107c43f9c(pcVar3);
  func_0x000107c61180();
  func_0x0001000e2a84(ppuVar4);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 1002910c4; end: 10029125b;  */

void FUN_1002910c4(long param_1,char *param_2,long param_3,long param_4)

{
  long *plVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  func_0x000107c61174(param_2);
  uVar4 = (undefined4)lVar5;
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110879e58);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_60,pcVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      param_4 = param_3 * 1000;
      uVar4 = (int)&uStack_80;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110879e58);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  pcVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(pcVar2);
  func_0x000107c61174(param_4);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc0000000;
  puStack_d8 = &UNK_1053333a0;
  puStack_d0 = &UNK_110861b28;
  ppuVar3 = &puStack_e8;
  uStack_c8 = uVar4;
  FUN_1001071d4(ppuVar3);
  (**(code **)(param_4 + 0x10))(param_4);
  func_0x000107c43f9c(pcVar2);
  func_0x000107c61180();
  func_0x0001000e2a84(ppuVar3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 10029125c; end: 100291347; -[SCConfigRepository getConfigsFromDBForNamespaceKey:waitForRecovery:] */

void FUN_10029125c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined4 uStack_48;
  
  func_0x000107c61174(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  puStack_58 = &UNK_1053333a0;
  puStack_50 = &UNK_110861b28;
  uStack_48 = (undefined4)param_3;
  ppuVar1 = &puStack_68;
  FUN_1001071d4(ppuVar1);
  (**(code **)(param_4 + 0x10))(param_4);
  func_0x000107c43f9c(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x0001000e2a84(ppuVar1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100291348; end: 10029137b;  */

void FUN_100291348(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c5e060(*(undefined8 *)(param_1 + 0xd0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10029137c; end: 10029137f; -[SCConfigRepository getConfigsFromDBForNamespaceKey:] */

void FUN_10029137c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getConfigsFromFileSystemForName_112565198);
  return;
}



/* Entry: 100291380; end: 100291753; -[SCConfigRepository _getConfigsFromFileSystemForNamespaceKey:] */

void FUN_100291380(long param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)0x0) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar8);
    func_0x000107c61180();
    func_0x000107c3fcfc();
    func_0x000107c61170(uVar8);
  }
  else {
    (**(code **)(*plVar4 + 0x90))(&lStack_60,plVar4,param_3);
    if (lStack_60 == 0) {
      bVar3 = false;
      param_3 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0;
      FUN_100292164(&lStack_78,*(long *)(lStack_60 + 0x18),*(long *)(lStack_60 + 0x20),
                    *(long *)(lStack_60 + 0x20) - *(long *)(lStack_60 + 0x18));
      if (lStack_70 == lStack_78) {
        bVar3 = true;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x000107c412e8(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x000107c61180();
        puVar6 = PTR_PTR_1126b7818;
        func_0x000107c4e380();
        func_0x000107c61180();
        func_0x000107c61174(0);
        if (puVar6 == (undefined *)0x0) {
LAB_1002914b8:
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          func_0x000107c5c734(uVar8);
          func_0x000107c61180();
          param_3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
          func_0x000107c61180();
          func_0x000107c3fd1c(uVar8);
          func_0x000107c61170(param_3);
          func_0x000107c61170(uVar8);
          bVar3 = true;
        }
        else {
          puVar7 = puVar6;
          func_0x000107c400dc();
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar7 == (undefined *)0x0) goto LAB_1002914b8;
          param_3 = puVar6;
          func_0x000107c400dc(puVar6);
          func_0x000107c61180();
          bVar3 = false;
        }
        func_0x000107c61170(puVar6);
        func_0x000107c61170(0);
        func_0x000107c61170(puVar5);
      }
      if (lStack_78 != 0) {
        lStack_70 = lStack_78;
        func_0x000107c60e14(lStack_78);
      }
    }
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar9 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        func_0x000107c60d68(plStack_58);
      }
    }
    if (!bVar3) goto LAB_100291568;
  }
  param_3 = PTR____NSArray0__struct_11034ab48;
LAB_100291568:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 100291754; end: 100291763;  */

void FUN_100291754(void)

{
  return;
}



/* Entry: 100291764; end: 1002917cb;  */

void FUN_100291764(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long extraout_x8_02;
  long lVar1;
  int extraout_w10;
  int extraout_w11;
  undefined8 in_register_00005008;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_30;
  
  FUN_100291754();
  FUN_1000cb690();
  FUN_100291898();
  *(undefined8 *)(lStack_30 + 0x10) = 0;
  FUN_1002918e4();
  *(undefined8 *)(extraout_x8_00 + 0x40) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x38) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0x50) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x48) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0x58) = 0;
  func_0x0001000cb6f8();
  func_0x0001002918fc();
  func_0x0001000cb720(extraout_x8);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c60bd8();
    FUN_100291764(&uStack_a0);
    lStack_78 = param_2 + 0x68;
    func_0x000107c61288();
    lVar1 = *(long *)(param_2 + 0x140);
    lStack_80 = *(long *)(param_2 + 0x148);
    lStack_88 = lVar1;
    if (lStack_80 != 0) {
      do {
        FUN_1001078e4();
        lVar1 = extraout_x8_02;
      } while (extraout_w11 != 0);
    }
    if (lVar1 == 0) {
      extraout_x8_01[1] = lStack_98;
      *extraout_x8_01 = uStack_a0;
      if (lStack_98 != 0) {
        do {
          func_0x0001001d7934();
        } while (extraout_w10 != 0);
      }
    }
    else {
      FUN_100291920(extraout_x8_01);
    }
    func_0x0001002920ec();
    FUN_100107b84(&lStack_78);
    FUN_1002920f4(&uStack_a0);
    return;
  }
  return;
}



/* Entry: 1002917cc; end: 100291897;  */

void FUN_1002917cc(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w11;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_100291764(&uStack_60);
  lStack_38 = param_2 + 0x68;
  func_0x000107c61288();
  lVar1 = *(long *)(param_2 + 0x140);
  lStack_40 = *(long *)(param_2 + 0x148);
  lStack_48 = lVar1;
  if (lStack_40 != 0) {
    do {
      FUN_1001078e4();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  if (lVar1 == 0) {
    param_1[1] = lStack_58;
    *param_1 = uStack_60;
    if (lStack_58 != 0) {
      do {
        func_0x0001001d7934();
      } while (extraout_w10 != 0);
    }
  }
  else {
    FUN_100291920(param_1);
  }
  func_0x0001002920ec();
  FUN_100107b84(&lStack_38);
  FUN_1002920f4(&uStack_60);
  return;
}



/* Entry: 100291898; end: 1002918b7;  */

void FUN_100291898(void)

{
  func_0x0001000cb69c();
  FUN_1002918b8();
  FUN_1000cb6e4();
  return;
}



/* Entry: 1002918b8; end: 1002918e3;  */

void FUN_1002918b8(undefined8 param_1,ulong param_2)

{
  long *extraout_x8;
  long extraout_x9;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  *extraout_x8 = extraout_x9 + 0x10;
  extraout_x8[1] = 0;
  extraout_x8[4] = 0;
  extraout_x8[3] = 0;
  extraout_x8[6] = 0;
  extraout_x8[5] = 0;
  return;
}


