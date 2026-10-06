/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103703b38; end: 103703b3b; -[SCMusicPickerUIConfiguration copyWithZone:] */

void FUN_103703b38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103703b3c; end: 103703b6f; -[SCMusicPickerUIConfiguration description] */

void FUN_103703b3c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103703b70; end: 103703beb; -[SCMusicPickerUIConfiguration init] */

void FUN_103703b70(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MusicSingleSectionPickerScope/MusicPickerUIConfigurationWrapper.swift",0x45,2
                      ,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103703bb8);
  (*pcVar1)();
}



/* Entry: 103703bec; end: 103703c2b; -[SCMusicPickerUIConfiguration .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103703c0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103703c10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f8abd8 + 8))
  ;
  return;
}



/* Entry: 103703c2c; end: 103703c4b;  */

void FUN_103703c2c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5cb8);
  return;
}



/* Entry: 103703c4c; end: 103703cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703c4c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  func_0x0001002b53d8();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f8ac30) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 103703cb4; end: 103703d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703cb4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8ac30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103703d28; end: 103703d5b;  */

void FUN_103703d28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103703d5c; end: 103703d7b; -[_TtC30SCSoundShareCardBridgeServices29SoundShareCardContextServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8ac30));
  return;
}



/* Entry: 103703d7c; end: 103703de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703d7c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100371a84();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f8ac68) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103703de4; end: 103703e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103703de4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8ac68) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103703e30; end: 103703f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103703e30(void)

{
  undefined *puVar1;
  undefined8 in_x5;
  long in_x6;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  if (in_x6 == 0) {
    in_x5 = 0;
  }
  else {
    func_0x000107c5fadc(in_x5,in_x6);
  }
  puVar1 = PTR_PTR_1126a6cb8;
  func_0x000107c610f8();
  func_0x000107c48090();
  func_0x000107c61170(in_x5);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(apuStack_78[0]);
  return puVar1;
}



/* Entry: 103703f24; end: 10370402b; -[_TtC23SCMusicCameraScopeProxy33SCMusicCameraScopeBuilderServices buildWithPresentingViewController:replyConfiguration:cameraScopeDismissalDelegate:trackId:sourcePageType:pickerSessionId:startOffsetMs:isMemoriesButtonEnabled:] */

void FUN_103703f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined4 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  
  if (param_8 == 0) {
    param_8 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_8);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103703e30(param_3,param_4,param_5,param_6,param_7,param_8,param_2,param_9,param_10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10370402c; end: 10370405b;  */

void FUN_10370402c(void)

{
  func_0x000100371a84();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10370405c; end: 10370408b; -[_TtC23SCMusicCameraScopeProxy33SCMusicCameraScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370405c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8ac68));
  return;
}



/* Entry: 10370408c; end: 1037040cf;  */

void FUN_10370408c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1037040d0; end: 1037040df;  */

void FUN_1037040d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1037040e0; end: 1037040ff;  */

void FUN_1037040e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5f20);
  return;
}



/* Entry: 103704100; end: 103704163; -[_TtC41MusicTopicViewerCTAProviderImplementation34MusicTopicViewerCTAProviderFactory topicViewerCTAProviderWithActionHandler:] */

void FUN_103704100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_1037040e0();
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(uVar1);
  FUN_103704188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103704164; end: 103704187;  */

void FUN_103704164(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103704188; end: 1037043db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103704188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f8acb0;
  puVar3 = (undefined8 *)PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112f8acb8;
  func_0x000103b6b1b8();
  uVar5 = *puVar3;
  uVar1 = puVar3[1];
  puVar4 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c46d50();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f8acc0) = param_1;
  uStack_98 = param_2;
  func_0x000107c61174(param_1);
  puVar4 = PTR___ss6UInt64VN_11034f048;
  puVar8 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  puVar6 = PTR_PTR_1126be9e8;
  func_0x000107c610f8();
  func_0x000107c5fadc(puVar4,puVar8);
  func_0x000107c6142c(puVar8);
  func_0x000107c46d4c();
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + _DAT_112f8acc8) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112f8acd0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112f8acd8) = param_4;
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c453e4();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c3fa94();
  func_0x000107c61180();
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 6;
  puStack_88 = puVar4;
  puStack_80 = puVar6;
  func_0x0001000285a8(0x112f8ace0,&UNK_10dbffde0);
  func_0x000107c613fc();
  puVar3 = &uStack_98;
  func_0x00010042e6a0();
  *(undefined8 **)(unaff_x20 + _DAT_112f8ace8) = puVar3;
  puVar7 = &stack0xffffffffffffff58;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_1037043dc();
  func_0x00010370450c();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_3);
  return puVar7;
}



/* Entry: 1037043dc; end: 10370464b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037043dc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f8acc0);
  func_0x000107c5d91c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5d928(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar3 = &UNK_1106868a8;
    func_0x000107c613fc(&UNK_1106868a8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_40 = FUN_103704cc8;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_101c50f28;
    puStack_48 = &UNK_1106868e8;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar2 = lVar1;
    func_0x000107c5c320(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c3e924(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10370464c; end: 10370466b;  */

void FUN_10370464c(void)

{
  func_0x000107c61168(&PTR_PTR_112f8ad30);
  return;
}



/* Entry: 10370466c; end: 1037046cf;  */

void FUN_10370466c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  func_0x000103b85c70(0);
  func_0x000107c610f8();
  FUN_1037048c0(&uStack_60,auStack_98);
  puVar1 = &uStack_60;
  func_0x000103b8591c();
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1037046d0; end: 1037047ab; -[_TtC41MusicTopicViewerCTAProviderImplementation31MusicTopicViewerCTAProviderImpl additionalCTAButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037046d0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  uVar1 = 0;
  func_0x000103b85c70(0);
  func_0x000107c61174(param_1);
  pcVar2 = FUN_10370466c;
  func_0x0001000bfde0(FUN_10370466c,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61574();
  FUN_103704858();
  func_0x000107c613fc();
  *(undefined8 *)(pcVar2 + 0x18) = 3;
  *(undefined8 *)(pcVar2 + 0x10) = 1;
  func_0x000107c61170(param_1);
  *(code **)(pcVar2 + 0x20) = pcVar3;
  uVar1 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  pcVar3 = pcVar2;
  func_0x000107c5fc48(pcVar2,uVar1);
  func_0x000107c61574(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 1037047ac; end: 1037047df;  */

void FUN_1037047ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037047e0; end: 103704857; -[_TtC41MusicTopicViewerCTAProviderImplementation31MusicTopicViewerCTAProviderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037047fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370481c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103704800) */
/* WARNING: Removing unreachable block (ram,0x000103704820) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037047e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8acc0));
  return;
}



/* Entry: 103704858; end: 1037048bf;  */

/* WARNING: Possible PIC construction at 0x000103704888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010370488c) */
/* WARNING: Removing unreachable block (ram,0x000103704890) */

void FUN_103704858(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d5b228;
    plVar5 = (long *)&UNK_10d9223b0;
  }
  else {
    puVar3 = (ulong *)0x112d5b0a0;
    plVar5 = (long *)&UNK_10d97aac0;
    unaff_x30 = 0x10370488c;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1037048c0; end: 1037048fb;  */

undefined8 FUN_1037048c0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103b84d28)(param_2,param_1);
  return param_2;
}



/* Entry: 1037048fc; end: 103704a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037048fc(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    if ((param_1 == 0) || (func_0x000107c3ebcc(), (param_1 & 1) == 0)) {
      func_0x000103704a58(&uStack_78,*(undefined8 *)(lVar5 + _DAT_112f8acd0),
                          *(undefined8 *)(lVar5 + _DAT_112f8acb8),
                          *(undefined1 *)(lVar5 + _DAT_112f8acd8));
    }
    else {
      func_0x000103704b90(&uStack_78,*(undefined8 *)(lVar5 + _DAT_112f8acd0),
                          *(undefined8 *)(lVar5 + _DAT_112f8acb8),
                          *(undefined1 *)(lVar5 + _DAT_112f8acd8));
    }
    uStack_c0 = uStack_70;
    uStack_c8 = uStack_78;
    uStack_b0 = uStack_60;
    uStack_b8 = uStack_68;
    uStack_a0 = uStack_50;
    uStack_a8 = uStack_58;
    uStack_98 = uStack_48;
    func_0x0001007d6d78(&uStack_c8);
    uVar4 = uStack_98;
    uVar3 = uStack_a0;
    uVar2 = uStack_b0;
    uVar1 = uStack_b8;
    func_0x000107c6142c(uStack_c0);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 103704a3c; end: 103704a57;  */

void FUN_103704a3c(long param_1,long param_2)

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



/* Entry: 103704a58; end: 103704cc7;  */

void FUN_103704a58(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar2 = param_2;
  lVar7 = param_3;
  if ((param_4 & 1) == 0) {
    func_0x000107e481c0();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103704b90);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107e48238();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103704b8c);
      (*pcVar1)();
    }
  }
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c5e2ac();
  func_0x000107c61180();
  *param_1 = lVar3;
  param_1[1] = lVar7;
  param_1[2] = (long)puVar4;
  param_1[3] = (long)puVar5;
  param_1[4] = 5;
  param_1[5] = param_3;
  param_1[6] = param_2;
  func_0x000107c615f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 103704cc8; end: 103704ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103704cc8(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar6,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  uVar3 = param_1;
  func_0x000107c3f6f4();
  if (uVar3 == 1) {
    uVar3 = param_1;
    func_0x000107c42c98();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103704eb8);
      (*pcVar1)();
    }
    uVar4 = uVar3;
    func_0x000107c44fd4();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = uVar4;
    func_0x000107c5faec();
    puVar7 = puVar6;
    func_0x000107c61170(uVar4);
    uVar5 = *(ulong *)(lVar2 + _DAT_112f8acc8);
    func_0x000107c44fd4();
    func_0x000107c61180();
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    if (uVar3 == uVar4 && puVar6 == puVar7) {
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar6);
    }
    else {
      func_0x000107c605b8(uVar3,puVar6,uVar4,puVar7,0);
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar6);
      if ((uVar3 & 1) == 0) goto LAB_103704dd0;
    }
    func_0x000107c42e20();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103704ebc);
      (*pcVar1)();
    }
    uVar3 = param_1;
    func_0x000107c3ebcc();
    func_0x000107c61170(param_1);
    if ((int)uVar3 == 0) {
      func_0x000103704a58(auStack_a0,*(undefined8 *)(lVar2 + _DAT_112f8acd0),
                          *(undefined8 *)(lVar2 + _DAT_112f8acb8),
                          *(undefined1 *)(lVar2 + _DAT_112f8acd8));
    }
    else {
      func_0x000103704b90();
    }
    func_0x0001007d6d78(auStack_a0);
    func_0x000107c6142c(uStack_98);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(uStack_88);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uStack_78);
    func_0x000107c615e8(uStack_70);
  }
  else {
LAB_103704dd0:
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103704ebc; end: 103704ec3;  */

void FUN_103704ebc(long param_1,long param_2)

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



/* Entry: 103704ec4; end: 103704fa3; -[_TtC42MusicTopicViewerEventServiceImplementation42MusicTopicViewerEventServiceImplementation eventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103704ec4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001000e2834(0);
  func_0x000107c61174(param_1);
  uVar2 = 0x103704f40;
  func_0x0001000bfde0(0x103704f40,0,uVar1);
  uVar1 = uVar2;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103704fa4; end: 10370500f; -[_TtC42MusicTopicViewerEventServiceImplementation42MusicTopicViewerEventServiceImplementation publishEventWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103704fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5faec();
  uStack_40 = param_3;
  uStack_38 = param_2;
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103705010; end: 10370508b; -[_TtC42MusicTopicViewerEventServiceImplementation42MusicTopicViewerEventServiceImplementation init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103705010(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f8adc8;
  uVar3 = 0x112ea35b0;
  func_0x0001000285a8(0x112ea35b0,&UNK_10db33120);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10370508c; end: 1037050bf;  */

void FUN_10370508c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037050c0; end: 1037050cf; -[_TtC42MusicTopicViewerEventServiceImplementation42MusicTopicViewerEventServiceImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037050c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8adc8));
  return;
}



/* Entry: 1037050d0; end: 103705187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037050d0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0x112ebc640;
  func_0x0001000285a8(0x112ebc640,&UNK_10dad6460);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  (**(code **)(lVar3 + 0x68))
            (puVar2,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar1);
  func_0x0001000d52ec(param_1,puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 103705188; end: 1037051c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103705188(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x0001002a64a8(&uStack_30);
  return;
}



/* Entry: 1037051c4; end: 1037051e3;  */

void FUN_1037051c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e6010);
  return;
}



/* Entry: 1037051e4; end: 103705297;  */

void FUN_1037051e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5af98();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b27a8;
    func_0x000107c61168();
    func_0x000107c45160();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c61170(puVar1);
    }
    else {
      func_0x000107c61174();
      func_0x000107c30e3c();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
    }
  }
  return;
}



/* Entry: 103705298; end: 103705437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103705298(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  if (param_1 != (undefined8 *)0x0) {
    func_0x000107c61174();
    puVar4 = param_1;
    func_0x000107c4f078();
    func_0x000107c61180();
    if (puVar4 == (undefined8 *)0x0) {
      func_0x000103b6b2d0();
      uStack_88 = *puVar4;
      uVar7 = puVar4[1];
      uStack_80 = uVar7;
      func_0x000107c61438(uVar7,2);
      func_0x000107c602d4(auStack_78,&uStack_88,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      uVar5 = 0;
      FUN_103705550(0x3ff0000000000000);
      func_0x000107c6142c(uVar7);
      func_0x0001007bbff0(auStack_78);
      if ((uVar5 & 1) != 0) {
        puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f8ae00);
        uVar7 = puVar4[3];
        lVar2 = puVar4[4];
        func_0x0001000a8868(puVar4,uVar7);
        func_0x000103b6b344();
        uVar1 = *puVar4;
        uVar3 = puVar4[1];
        pcVar8 = *(code **)(lVar2 + 0x10);
        func_0x000107c61434(uVar3);
        (*pcVar8)(uVar1,uVar3,uVar7,lVar2);
        func_0x000107c6142c(uVar3);
        puVar6 = &UNK_110686a90;
        func_0x000107c613fc(&UNK_110686a90,0x20,7);
        *(long *)(puVar6 + 0x10) = unaff_x20;
        *(undefined8 **)(puVar6 + 0x18) = param_1;
        func_0x000107c61174(param_1);
        func_0x000107c61174();
        uVar7 = 4;
        func_0x0001001ca524(4,3,0x50,3,0,0,&UNK_10dbfff28,puVar6,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(uVar7);
        func_0x000107c61170(param_1);
        return 1;
      }
    }
    else {
      func_0x000107c61170();
    }
    func_0x000107c61170(param_1);
  }
  return 0;
}



/* Entry: 103705438; end: 10370554f; -[_TtC44MusicTopicViewerHeaderProviderImplementation35MusicTopicViewerHeaderActionHandler handleActionWithDelegateActionHandler:actionModel:sourceView:sender:presentingViewController:] */

uint FUN_103705438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_6 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_6);
    func_0x000107c60234(&uStack_60);
    func_0x000107c615e8(param_6);
  }
  uVar1 = param_4;
  FUN_103707810(param_4,&uStack_60,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  FUN_103707b84(&uStack_60,0x112d387f8,&UNK_10d902650);
  return (uint)uVar1 & 1;
}



/* Entry: 103705550; end: 103705803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103705550(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  double dVar12;
  undefined1 auStack_c0 [8];
  code *pcStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [40];
  
  lVar1 = 0x112d373d8;
  dVar12 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_c0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12_00;
  func_0x000107c5eea0(lVar7);
  lVar1 = _DAT_112f8ae18;
  puVar4 = auStack_98;
  func_0x000107c61428(unaff_x20 + _DAT_112f8ae18,puVar4,0x20,0);
  lVar5 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    lVar3 = param_2;
    func_0x000100df95d0(param_2);
    if (((ulong)puVar4 & 1) != 0) {
      pcStack_b8 = *(code **)(lVar11 + 0x10);
      (*pcStack_b8)(lVar9,*(long *)(lVar5 + 0x38) + *(long *)(lVar11 + 0x48) * lVar3,lVar2);
      (**(code **)(lVar11 + 0x20))(lVar8,lVar9,lVar2);
      func_0x000107c614a8(auStack_98);
      func_0x000107c6142c(lVar5);
      func_0x000107c5ee68(lVar8);
      pcVar10 = *(code **)(lVar11 + 8);
      (*pcVar10)(lVar8,lVar2);
      if (dVar12 < param_1) {
        func_0x0001007bbd18(param_2,auStack_98);
        (*pcStack_b8)(puVar6,lVar7,lVar2);
        (**(code **)(lVar11 + 0x38))(puVar6,0,1,lVar2);
        func_0x000107c61428(unaff_x20 + lVar1,auStack_b0,0x21,0);
        FUN_10370693c(puVar6,auStack_98);
        func_0x000107c614a8(auStack_b0);
        (*pcVar10)(lVar7,lVar2);
        return 0;
      }
      goto LAB_103705764;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c614a8(auStack_98);
LAB_103705764:
  func_0x0001007bbd18(param_2,auStack_98);
  (**(code **)(lVar11 + 0x10))(puVar6,lVar7,lVar2);
  (**(code **)(lVar11 + 0x38))(puVar6,0,1,lVar2);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_b0,0x21,0);
  FUN_10370693c(puVar6,auStack_98);
  func_0x000107c614a8(auStack_b0);
  (**(code **)(lVar11 + 8))(lVar7,lVar2);
  return 1;
}



/* Entry: 103705804; end: 103705893;  */

void FUN_103705804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  lVar1 = 0;
  func_0x0001043a86b0();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103705894,uVar3,uVar4);
  return;
}



/* Entry: 103705894; end: 1037059b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103705894(void)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x60);
  puVar2 = *(undefined1 **)(unaff_x22 + 0x68);
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x50) + _DAT_112f8adf8) + _DAT_1130746f8);
  *puVar2 = *(undefined1 *)(lVar4 + _DAT_1130748a8);
  uVar7 = *(undefined8 *)(lVar4 + _DAT_1130748b0);
  iVar3 = *(int *)(lVar5 + 0x14);
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  func_0x0001043b0d5c(puVar2 + iVar3);
  iVar3 = *(int *)(lVar5 + 0x18);
  bVar1 = *(long *)(lVar4 + _DAT_1130748b8) == 0;
  if (!bVar1) {
    func_0x000107c61174();
    func_0x0001043b0d5c(puVar2 + iVar3);
  }
  lVar5 = 0;
  func_0x0001043aa0ac();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar2 + iVar3,bVar1,1,lVar5);
  func_0x000107c61170(lVar4);
  plVar6 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1037059b4;
  lVar5 = *(long *)(unaff_x22 + 0x50);
  plVar6[0x29] = *(long *)(unaff_x22 + 0x68);
  plVar6[0x2a] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103705ca8,0,0);
  return;
}



/* Entry: 1037059b4; end: 103705a03;  */

void FUN_1037059b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined8 *)(lVar1 + 0x48) = param_2;
  *(undefined8 *)(lVar1 + 0x90) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_103705a04,*(undefined8 *)(lVar1 + 0x78),*(undefined8 *)(lVar1 + 0x80));
  return;
}



/* Entry: 103705a04; end: 103705b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103705a04(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  code *pcVar11;
  
  lVar8 = *(long *)(unaff_x22 + 0x90);
  if (lVar8 != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar1 = *(long *)(unaff_x22 + 0x50) + _DAT_112f8ae08;
    uVar9 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar9);
    (**(code **)(lVar3 + 0x38))(unaff_x22 + 0x10,uVar9,lVar3);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar9);
    piVar7 = *(int **)(lVar1 + 8);
    iVar2 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_103705b78;
                    /* WARNING: Could not recover jumptable at 0x000103705ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar7))
              (uVar10,lVar8,*(undefined8 *)(unaff_x22 + 0x58),0x10404,0,1,uVar9,lVar1);
    return;
  }
  lVar8 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  puVar6 = (undefined8 *)(lVar8 + _DAT_112f8ae00);
  uVar9 = puVar6[3];
  lVar8 = puVar6[4];
  func_0x0001000a8868(puVar6,uVar9);
  func_0x000103b6b3b4();
  uVar10 = *puVar6;
  uVar4 = puVar6[1];
  pcVar11 = *(code **)(lVar8 + 0x10);
  func_0x000107c61434(uVar4);
  (*pcVar11)(uVar10,uVar4,uVar9,lVar8);
  func_0x000107c6142c(uVar4);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_1037079dc(uVar9,&SUB_1043a86b0);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000103705b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103705b78; end: 103705bcb;  */

void FUN_103705b78(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x90);
  *(undefined1 *)(lVar2 + 0xa0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_103705bcc,*(undefined8 *)(lVar2 + 0x78),*(undefined8 *)(lVar2 + 0x80));
  return;
}



/* Entry: 103705bcc; end: 103705c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103705bcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  cVar3 = *(char *)(unaff_x22 + 0xa0);
  lVar5 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar4 = (undefined8 *)(lVar5 + _DAT_112f8ae00);
  uVar6 = puVar4[3];
  lVar5 = puVar4[4];
  func_0x0001000a8868(puVar4,uVar6);
  if (cVar3 == '\0') {
    func_0x000103b6b37c();
  }
  else {
    func_0x000103b6b3b4();
  }
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  pcVar7 = *(code **)(lVar5 + 0x10);
  func_0x000107c61434(uVar2);
  (*pcVar7)(uVar1,uVar2,uVar6,lVar5);
  func_0x000107c6142c(uVar2);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_1037079dc(uVar6,&SUB_1043a86b0);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103705c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103705c90; end: 103705ca7;  */

void FUN_103705c90(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103705ca8,0,0);
  return;
}



/* Entry: 103705ca8; end: 103705f6f;  */

void FUN_103705ca8(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = *(long *)(unaff_x22 + 0x148);
  lVar2 = 0;
  func_0x0001043a86b0();
  uVar11 = *(undefined8 *)(lVar12 + *(int *)(lVar2 + 0x14));
  lVar4 = 0x112f8ae50;
  func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
  puVar3 = (undefined8 *)(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  FUN_103707a90(lVar12 + *(int *)(lVar2 + 0x18),puVar3,0x112f8ae50,&UNK_10dc00160);
  lVar4 = 0;
  func_0x0001043aa0ac();
  puVar5 = puVar3;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar3,1,lVar4);
  if ((int)puVar5 == 1) {
    FUN_103707b84(puVar3,0x112f8ae50,&UNK_10dc00160);
    uVar10 = 0;
  }
  else {
    uVar10 = *puVar3;
    FUN_1037079dc(puVar3,&SUB_1043aa0ac);
  }
  func_0x000107c615c0(puVar3);
  uVar6 = 0;
  func_0x0001010bb1d4(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar9 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar9) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001010bb1d4(uVar8,uVar9 + 1,1,uVar6);
  }
  *(ulong *)(uVar8 + 0x10) = uVar9 + 1;
  *(undefined8 *)(uVar8 + uVar9 * 8 + 0x20) = uVar11;
  if ((int)puVar5 != 1) {
    uVar9 = uVar8;
    func_0x000107c61558();
    uVar6 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
      func_0x0001010bb1d4(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    }
    uVar9 = *(ulong *)(uVar6 + 0x10);
    uVar8 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar9) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x0001010bb1d4(uVar8,uVar9 + 1,1,uVar6);
    }
    *(ulong *)(uVar8 + 0x10) = uVar9 + 1;
    *(undefined8 *)(uVar8 + uVar9 * 8 + 0x20) = uVar10;
  }
  *(ulong *)(unaff_x22 + 0x158) = uVar8;
  *(ulong *)(unaff_x22 + 0x120) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x150);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar11 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x160) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_103705f70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar7,unaff_x22 + 0x130,uVar11,uVar11,0,0,&UNK_10dbfff48,unaff_x22 + 0x110,uVar11,uVar11);
    return;
  }
  uVar11 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c615ac(unaff_x22 + 0x10,uVar11);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar7 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x168) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103705fc0;
  lVar4 = *(long *)(unaff_x22 + 0x150);
  plVar7[0xd] = uVar8;
  plVar7[0xe] = lVar4;
  plVar7[0xb] = unaff_x22 + 0x130;
  plVar7[0xc] = unaff_x22 + 0x140;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0xf] = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x10] = uVar9;
  lVar4 = 0x112f8ae60;
  func_0x0001000285a8(0x112f8ae60,&UNK_10dbfff60);
  plVar7[0x11] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x12] = lVar4;
  uVar9 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x13] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103706178,0,0);
  return;
}



/* Entry: 103705f70; end: 103705fbf;  */

void FUN_103705f70(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x158);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x160));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037060c4,0,0);
  return;
}



/* Entry: 103705fc0; end: 103706033;  */

void FUN_103705fc0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x168));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x170) = plVar1;
  func_0x0001000285a8(0x112f8ae58,&UNK_10dbfff58);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_103706034;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 103706034; end: 1037060c3;  */

void FUN_103706034(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10370607c,0,0);
  return;
}



/* Entry: 1037060c4; end: 1037060cf;  */

void FUN_1037060c4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001037060cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x138));
  return;
}



/* Entry: 1037060d0; end: 103706177;  */

void FUN_1037060d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar3 = 0x112f8ae60;
  func_0x0001000285a8(0x112f8ae60,&UNK_10dbfff60);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103706178,0,0);
  return;
}



/* Entry: 103706178; end: 103706467;  */

void FUN_103706178(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  
  lVar4 = *(long *)(unaff_x22 + 0x68);
  lVar8 = *(long *)(lVar4 + 0x10);
  if (lVar8 != 0) {
    uVar7 = **(undefined8 **)(unaff_x22 + 0x60);
    lVar1 = 0;
    func_0x000107c5fd0c();
    lVar11 = *(long *)(lVar1 + -8);
    pcVar5 = *(code **)(lVar11 + 0x38);
    puVar14 = (undefined8 *)(lVar4 + 0x20);
    do {
      uVar13 = *(ulong *)(unaff_x22 + 0x78);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar12 = *puVar14;
      (*pcVar5)(uVar9,1,1,lVar1);
      puVar2 = &UNK_110686ab8;
      func_0x000107c613fc(&UNK_110686ab8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,uVar10);
      puVar3 = &UNK_110686ae0;
      func_0x000107c613fc(&UNK_110686ae0,0x30,7);
      plVar16 = (long *)(puVar3 + 0x10);
      *plVar16 = 0;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      *(undefined **)(puVar3 + 0x20) = puVar2;
      *(undefined8 *)(puVar3 + 0x28) = uVar12;
      FUN_103707a90(uVar9,uVar13,0x112d453c8,&UNK_10d90ac60);
      (**(code **)(lVar11 + 0x30))(uVar13,1,lVar1);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
      if ((int)uVar13 == 1) {
        FUN_103707b84(uVar9,0x112d453c8,&UNK_10d90ac60);
        uVar13 = 0x3100;
        lVar4 = *plVar16;
        if (lVar4 == 0) goto LAB_103706318;
LAB_10370634c:
        lVar17 = *(long *)(puVar3 + 0x18);
        lVar15 = lVar4;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar4);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar4);
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar11 + 8))(uVar9,lVar1);
        uVar13 = uVar13 & 0xff | 0x3100;
        lVar4 = *plVar16;
        if (lVar4 != 0) goto LAB_10370634c;
LAB_103706318:
        lVar15 = 0;
        lVar17 = 0;
      }
      puVar2 = &UNK_110686b08;
      func_0x000107c613fc(&UNK_110686b08,0x20,7);
      *(undefined **)(puVar2 + 0x10) = &UNK_10dbfff78;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      func_0x000107c6157c(puVar3);
      uVar9 = 0x112d35ff8;
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      puVar6 = (undefined8 *)0x0;
      if (lVar17 != 0 || lVar15 != 0) {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar15;
        *(long *)(unaff_x22 + 0x28) = lVar17;
        puVar6 = (undefined8 *)(unaff_x22 + 0x10);
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      *(undefined8 *)(unaff_x22 + 0x30) = 1;
      *(undefined8 **)(unaff_x22 + 0x38) = puVar6;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
      func_0x000107c615bc(uVar13,unaff_x22 + 0x30,uVar9,&UNK_10dbfff80,puVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar13);
      FUN_103707b84(uVar10,0x112d453c8,&UNK_10d90ac60);
      lVar8 = lVar8 + -1;
      puVar14 = puVar14 + 1;
    } while (lVar8 != 0);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar9 = **(undefined8 **)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar9;
  uVar7 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar7;
  func_0x000107c5fcc4(uVar10,uVar9,uVar7);
  plVar16 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar16;
  *plVar16 = unaff_x22;
  plVar16[1] = (long)FUN_103706468;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar16,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 103706468; end: 1037064af;  */

void FUN_103706468(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037064b0,0,0);
  return;
}



/* Entry: 1037064b0; end: 1037065a7;  */

void FUN_1037064b0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 *puVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  if (lVar3 == 1) {
    puVar7 = *(undefined8 **)(unaff_x22 + 0x58);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))
              (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x88));
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  else {
    if (lVar3 == 0) {
      plVar5 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_103706468;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
                (plVar5,(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x88));
      return;
    }
    lVar2 = *(long *)(unaff_x22 + 0x90);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar7 = *(undefined8 **)(unaff_x22 + 0x58);
    func_0x000107c5fcd8(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
    (**(code **)(lVar2 + 8))(uVar4,uVar6);
    *puVar7 = uVar1;
    puVar7[1] = lVar3;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001037065a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037065a8; end: 1037065c3;  */

void FUN_1037065a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037065c4,0,0);
  return;
}



/* Entry: 1037065c4; end: 1037066af;  */

void FUN_1037065c4(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x40) = lVar3;
  if (lVar3 != 0) {
    plVar1 = (long *)0x30;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x103706658;
    plVar1[2] = *(long *)(unaff_x22 + 0x38);
    plVar1[3] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1037066dc,0,0);
    return;
  }
  puVar2 = *(undefined8 **)(unaff_x22 + 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x000103706654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037066b0; end: 1037066db;  */

void FUN_1037066b0(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x58);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001037066c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037066dc; end: 10370675f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037066dc(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18) + _DAT_112f8ae10;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103706760;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  piVar8 = *(int **)(lVar4 + 8);
  iVar2 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  plVar5[2] = (long)plVar6;
  *plVar6 = (long)plVar5;
  plVar6[1] = (long)&UNK_103fca084;
                    /* WARNING: Could not recover jumptable at 0x000103fca080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar8))(uVar7,PTR___swiftEmptySetSingleton_11034f1d8,uVar3,lVar4);
  return;
}



/* Entry: 103706760; end: 1037067af;  */

void FUN_103706760(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037067b0,0,0);
  return;
}



/* Entry: 1037067b0; end: 103706853;  */

void FUN_1037067b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5cd58();
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c4a760();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar1);
      goto LAB_10370683c;
    }
    func_0x000107c61170(lVar3);
  }
  lVar2 = 0;
  param_2 = 0;
LAB_10370683c:
                    /* WARNING: Could not recover jumptable at 0x000103706850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2,param_2);
  return;
}



/* Entry: 103706854; end: 1037068b3; -[_TtC44MusicTopicViewerHeaderProviderImplementation35MusicTopicViewerHeaderActionHandler init] */

void FUN_103706854(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerHeaderProviderImplementation.MusicTopicViewerHeaderActionHandler"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103706880);
  (*pcVar1)();
}



/* Entry: 1037068b4; end: 10370691b; -[_TtC44MusicTopicViewerHeaderProviderImplementation35MusicTopicViewerHeaderActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037068b4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8adf8));
  func_0x0001000834e4(param_1 + _DAT_112f8ae00);
  func_0x0001000834e4(param_1 + _DAT_112f8ae08);
  func_0x0001000834e4(param_1 + _DAT_112f8ae10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f8ae18));
  return;
}



/* Entry: 10370691c; end: 10370693b;  */

void FUN_10370691c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e60c8);
  return;
}



/* Entry: 10370693c; end: 103706acb;  */

void FUN_10370693c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001003a4c00(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_103707b84(lVar5,0x112d373d8,&UNK_10d9014c0);
    FUN_103706b6c(puVar4,param_2);
    func_0x0001007bbff0(param_2);
    FUN_103707b84(puVar4,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,lVar5,lVar2);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_58 = *unaff_x20;
    func_0x000103706c84(lVar6,param_2,uVar3);
    func_0x0001007bbff0(param_2);
    *unaff_x20 = uStack_58;
  }
  return;
}



/* Entry: 103706acc; end: 103706b6b;  */

void FUN_103706acc(ulong param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 0x28);
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar5;
  puVar3[3] = uVar7;
  puVar3[2] = uVar6;
  puVar3[4] = param_2[4];
  lVar4 = *(long *)(param_4 + 0x38);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_3,lVar2);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103706b6c);
  (*pcVar1)();
}



/* Entry: 103706b6c; end: 103706dc7;  */

void FUN_103706b6c(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100df95d0(param_2);
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    func_0x000107c5eea4();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000103706dc8();
    }
    func_0x0001007bbff0(*(long *)(lVar3 + 0x30) + param_2 * 0x28);
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    func_0x000107c5eea4();
    lVar6 = *(long *)(lVar4 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar4);
    func_0x000103707308(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000103706c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 103706dc8; end: 1037074cb;  */

void FUN_103706dc8(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x0001000285a8(0x112f8ae68,&UNK_10dc001f0);
  lVar12 = *unaff_x20;
  lVar5 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) == 0) {
    func_0x000107c61574(lVar12);
LAB_103706fc4:
    *unaff_x20 = lVar5;
    return;
  }
  lVar1 = lVar12 + 0x40;
  uVar7 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar5 != lVar12) || (lVar1 + uVar7 * 8 <= lVar5 + 0x40U)) {
    func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar7 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar12 + 0x40);
  if (uVar7 == 0) goto LAB_103706ef8;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
      lVar11 = uVar9 * 0x28;
      func_0x0001007bbd18(*(long *)(lVar12 + 0x30) + lVar11,&uStack_88);
      lVar10 = *(long *)(lVar6 + 0x48) * uVar9;
      (**(code **)(lVar6 + 0x10))
                (&stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(lVar12 + 0x38) + lVar10,lVar4);
      puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x30) + lVar11);
      puVar2[4] = uStack_68;
      puVar2[1] = uStack_80;
      *puVar2 = uStack_88;
      puVar2[3] = uStack_70;
      puVar2[2] = uStack_78;
      (**(code **)(lVar6 + 0x20))
                (*(long *)(lVar5 + 0x38) + lVar10,
                 &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
      if (uVar7 != 0) break;
LAB_103706ef8:
      do {
        lVar10 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103706fec);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar12);
          goto LAB_103706fc4;
        }
        uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar13 = lVar10;
    }
  } while( true );
}



/* Entry: 1037074cc; end: 1037075f3;  */

ulong FUN_1037074cc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037075f4);
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
  FUN_1037075f4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037075f0);
      (*pcVar1)();
    }
    FUN_103707674(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1037075f4; end: 103707673;  */

undefined * FUN_1037075f4(undefined *param_1,undefined *param_2)

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
    FUN_10370f5b0();
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



/* Entry: 103707674; end: 10370776b;  */

long FUN_103707674(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103707768);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10370776c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103707bc4(0);
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
      FUN_103707bc4(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103707764);
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



/* Entry: 10370776c; end: 1037077cf;  */

void FUN_10370776c(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1037077d0;
                    /* WARNING: Could not recover jumptable at 0x0001037077cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 1037077d0; end: 10370780f;  */

void FUN_1037077d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010370780c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103707810; end: 1037078cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103707810(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long unaff_x20;
  code *pcVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  if (param_1 != (long *)0x0) {
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (param_1 != (long *)0x0) {
      plVar8 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x000103b6b2d0();
      plVar9 = (long *)*param_1;
      if ((plVar9 == plVar8) && (param_1[1] == param_2)) {
        func_0x000107c6142c(param_2);
      }
      else {
        func_0x000107c605b8(plVar9,param_1[1],plVar8,param_2,0);
        func_0x000107c6142c(param_2);
        if (((ulong)plVar9 & 1) == 0) {
          return 0;
        }
      }
      if (param_3 != (undefined8 *)0x0) {
        func_0x000107c61174();
        puVar4 = param_3;
        func_0x000107c4f078();
        func_0x000107c61180();
        if (puVar4 == (undefined8 *)0x0) {
          func_0x000103b6b2d0();
          uStack_88 = *puVar4;
          uVar7 = puVar4[1];
          uStack_80 = uVar7;
          func_0x000107c61438(uVar7,2);
          func_0x000107c602d4(auStack_78,&uStack_88,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
          uVar5 = 0;
          FUN_103705550(0x3ff0000000000000);
          func_0x000107c6142c(uVar7);
          func_0x0001007bbff0(auStack_78);
          if ((uVar5 & 1) != 0) {
            puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f8ae00);
            uVar7 = puVar4[3];
            lVar2 = puVar4[4];
            func_0x0001000a8868(puVar4,uVar7);
            func_0x000103b6b344();
            uVar1 = *puVar4;
            uVar3 = puVar4[1];
            pcVar10 = *(code **)(lVar2 + 0x10);
            func_0x000107c61434(uVar3);
            (*pcVar10)(uVar1,uVar3,uVar7,lVar2);
            func_0x000107c6142c(uVar3);
            puVar6 = &UNK_110686a90;
            func_0x000107c613fc(&UNK_110686a90,0x20,7);
            *(long *)(puVar6 + 0x10) = unaff_x20;
            *(undefined8 **)(puVar6 + 0x18) = param_3;
            func_0x000107c61174(param_3);
            func_0x000107c61174(unaff_x20);
            uVar7 = 4;
            func_0x0001001ca524(4,3,0x50,3,0,0,&UNK_10dbfff28,puVar6,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(puVar6);
            func_0x000107c61574(uVar7);
            func_0x000107c61170(param_3);
            return 1;
          }
        }
        else {
          func_0x000107c61170();
        }
        func_0x000107c61170(param_3);
      }
      return 0;
    }
  }
  return 0;
}



/* Entry: 1037078d0; end: 103707933;  */

void FUN_1037078d0(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103707934;
  plVar4[10] = lVar1;
  plVar4[0xb] = lVar3;
  lVar1 = 0;
  func_0x0001043a86b0();
  plVar4[0xc] = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xd] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar3;
  func_0x000107c5fce8();
  plVar4[0xe] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0xf] = lVar3;
  plVar4[0x10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103705894,lVar3,lVar1);
  return;
}



/* Entry: 103707934; end: 10370796f;  */

void FUN_103707934(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010370796c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103707970; end: 1037079db;  */

void FUN_103707970(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103707c08;
  plVar4[0xd] = lVar5;
  plVar4[0xe] = lVar1;
  plVar4[0xb] = param_1;
  plVar4[0xc] = param_2;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar3;
  lVar5 = 0x112f8ae60;
  func_0x0001000285a8(0x112f8ae60,&UNK_10dbfff60);
  plVar4[0x11] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x12] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103706178,0,0);
  return;
}



/* Entry: 1037079dc; end: 103707a17;  */

undefined8 FUN_1037079dc(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103707a18; end: 103707a8f;  */

void FUN_103707a18(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103707c0c;
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
  plVar3[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037065c4,0,0);
  return;
}



/* Entry: 103707a90; end: 103707ad7;  */

undefined8 FUN_103707a90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103707ad8; end: 103707b47;  */

void FUN_103707ad8(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103707b48;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1037077d0;
                    /* WARNING: Could not recover jumptable at 0x0001037077cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 103707b48; end: 103707b83;  */

void FUN_103707b48(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103707b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103707b84; end: 103707bc3;  */

undefined8 FUN_103707b84(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103707bc4; end: 103707c07;  */

void FUN_103707bc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8ae70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad4f0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f8ae70 = puVar1;
  return;
}



/* Entry: 103707c08; end: 103707c0f;  */

void FUN_103707c08(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010370796c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103707c10; end: 103707d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103707c10(long *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *unaff_x20;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  puVar2 = unaff_x20;
  func_0x000107c614f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f8ae78);
  func_0x000107c40794(uVar3);
  func_0x000107c60234(auStack_60);
  func_0x000107c615e8(uVar3);
  uVar3 = 0;
  FUN_103709cd4(0,0x112f8af00,&PTR_PTR_1126ad530);
  puVar4 = &uStack_68;
  func_0x000107c6147c(puVar4,auStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if ((int)puVar4 == 0) {
    func_0x000107c61174();
  }
  else {
    puVar5 = puVar2;
    func_0x000107c610f8();
    *(undefined8 *)(puVar5 + _DAT_112f8ae78) = uStack_68;
    puVar1 = PTR_s_init_1125d9248;
    uVar3 = uStack_68;
    func_0x000107c61174(uStack_68);
    unaff_x20 = auStack_78;
    func_0x000107c61154(unaff_x20,puVar1);
    func_0x000107c61170(uVar3);
  }
  param_1[3] = (long)puVar2;
  *param_1 = (long)unaff_x20;
  return;
}



/* Entry: 103707d10; end: 103707d6f; -[_TtC44MusicTopicViewerHeaderProviderImplementation42MusicTopicViewerHeaderCellViewModelWrapper copyWithZone:] */

undefined1 * FUN_103707d10(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c61174();
  FUN_103707c10(auStack_40);
  func_0x000107c61170(param_1);
  func_0x0001006732c8(auStack_40,uStack_28);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_40);
  return puVar1;
}



/* Entry: 103707d70; end: 103707d9b; -[_TtC44MusicTopicViewerHeaderProviderImplementation42MusicTopicViewerHeaderCellViewModelWrapper init] */

void FUN_103707d70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerHeaderProviderImplementation.MusicTopicViewerHeaderCellViewModelWrapper"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103707d9c);
  (*pcVar1)();
}



/* Entry: 103707d9c; end: 103707d9f;  */

void FUN_103707d9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103707da0; end: 103707daf; -[_TtC44MusicTopicViewerHeaderProviderImplementation42MusicTopicViewerHeaderCellViewModelWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103707da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8ae78));
  return;
}



/* Entry: 103707db0; end: 103707dcf;  */

void FUN_103707db0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e61b0);
  return;
}



/* Entry: 103707dd0; end: 103707def; -[_TtC44MusicTopicViewerHeaderProviderImplementation26MusicTopicViewerHeaderCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103707dd0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f8aea8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103707df0; end: 103707e23; -[_TtC44MusicTopicViewerHeaderProviderImplementation26MusicTopicViewerHeaderCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103707df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8aea8);
  *(undefined8 *)(param_1 + _DAT_112f8aea8) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}


