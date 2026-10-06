/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002d1334; end: 1002d1387; -[SCMemoryUsageMetadataStore dealloc] */

void FUN_1002d1334(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c610ec(*(long *)(param_1 + 8),0x38);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puStack_28 = PTR_PTR_1126e7378;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1002d1388; end: 1002d1493; -[SCBlizzardConfig initWithLogQueueDefinitions:spectrumDefinitions:qosToLogQueueNameMap:version:] */

undefined1 *
FUN_1002d1388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f4a58;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002d1494; end: 1002d14b3;  */

void FUN_1002d1494(void)

{
  func_0x000107c61168(&PTR_PTR_112e3a5a8);
  return;
}



/* Entry: 1002d14b4; end: 1002d14cf;  */

void FUN_1002d14b4(undefined8 param_1)

{
  FUN_1000285a8(0x112e3a538,&UNK_10da25338);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed5dd8,param_1);
  return;
}



/* Entry: 1002d14d0; end: 1002d151f;  */

void FUN_1002d14d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002d1520; end: 1002d16eb;  */

void FUN_1002d1520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e4e770,&UNK_10da4a700);
  puVar1 = &UNK_1104b9250;
  func_0x000107c613fc(&UNK_1104b9250,0xb0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_11;
  *(undefined8 *)(puVar1 + 0x58) = param_12;
  *(undefined8 *)(puVar1 + 0x60) = param_13;
  *(undefined8 *)(puVar1 + 0x68) = param_14;
  *(undefined8 *)(puVar1 + 0x70) = param_15;
  *(undefined8 *)(puVar1 + 0x78) = param_16;
  *(undefined8 *)(puVar1 + 0x80) = param_17;
  *(undefined8 *)(puVar1 + 0x88) = param_19;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_20;
  *(undefined8 *)(puVar1 + 0xa0) = param_10;
  *(undefined8 *)(puVar1 + 0xa8) = param_3;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101ff7b44,puVar1);
  return;
}



/* Entry: 1002d16ec; end: 1002d16ef;  */

void FUN_1002d16ec(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002d16f0; end: 1002d17b7; -[SCBlizzardFileSystem initWithGraphene:nsDataWriter:] */

undefined1 *
FUN_1002d16f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f4a80;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002d17b8; end: 1002d17e7; +[SCBlizzardEventFieldProvider setBlizzardClientIdProvider:] */

void FUN_1002d17b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = uRam00000001136c4a80;
  uRam00000001136c4a80 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1002d17e8; end: 1002d1807;  */

void FUN_1002d17e8(void)

{
  func_0x000107c61168(&PTR_PTR_1129a76a0);
  return;
}



/* Entry: 1002d1808; end: 1002d1813; -[SCMemoryUsageMetadataStore .cxx_destruct] */

void FUN_1002d1808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1002d1814; end: 1002d19e7; -[SCBlizzardPageViewStateManager initWithGraphene:experimentProvider:] */

undefined1 *
FUN_1002d1814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,undefined **param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  uVar6 = param_5;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_78 = PTR_PTR_1126f4c88;
  uStack_80 = param_2;
  func_0x000107c61154(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d05b0;
    func_0x000107c610f4();
    param_6 = &PTR____CFConstantStringClassReference_110daf6b8;
    param_1 = 0;
    func_0x000107c47d4c();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f4();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e30ab8;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f59bb8;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110f59ad8;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110eb57b8;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f5a898;
    uVar6 = 5;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    puVar2 = puVar4;
    func_0x000107c45788();
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61174(param_4);
    uVar7 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar7);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_5);
    uVar7 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)((long)puVar1 + 0x30);
    func_0x000107c4e2f0();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar7;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  func_0x000107c60e78();
  ppuVar5 = &puStack_d0;
  func_0x000107c61174(param_6);
  puStack_c8 = PTR_PTR_1126f4c30;
  puStack_d0 = param_4;
  func_0x000107c61154(&puStack_d0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    *(undefined **)((long)ppuVar5 + 8) = puVar2;
    *(undefined8 *)((long)ppuVar5 + 0x10) = uVar6;
    *(undefined8 *)((long)ppuVar5 + 0x18) = param_1;
    func_0x000107c61174(param_6);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x20);
    *(undefined ***)((long)ppuVar5 + 0x20) = param_6;
    func_0x000107c61170(uVar6);
  }
  func_0x000107c61170(param_6);
  return (undefined1 *)ppuVar5;
}



/* Entry: 1002d19e8; end: 1002d1a7f; -[SCBlizzardPageViewState initWithPageViewId:pageTabType:pageChangeTs:pageName:] */

undefined1 *
FUN_1002d19e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f4c30;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1002d1a80; end: 1002d1c0b;  */

void FUN_1002d1a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fe1288,&UNK_10dc4a148);
  puVar1 = &UNK_1106c8f50;
  func_0x000107c613fc(&UNK_1106c8f50,0x98,7);
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
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  func_0x000107c6157c();
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
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  FUN_1000823a8(FUN_100993fe0,puVar1);
  return;
}



/* Entry: 1002d1c0c; end: 1002d1c2b;  */

void FUN_1002d1c0c(void)

{
  func_0x000107c61168(&PTR_PTR_11291eda8);
  return;
}



/* Entry: 1002d1c2c; end: 1002d1ce7;  */

void FUN_1002d1c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e06268,&UNK_10d9d9858);
  puVar1 = &UNK_11044e0a0;
  func_0x000107c613fc(&UNK_11044e0a0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101b7ed7c,puVar1);
  return;
}



/* Entry: 1002d1ce8; end: 1002d1d2b;  */

void FUN_1002d1ce8(void)

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



/* Entry: 1002d1d2c; end: 1002d1db7; -[SCBlizzardExperimentProvider pageViewStateCacheSize] */

ulong FUN_1002d1d2c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 == 0) {
    *(undefined ***)(param_1 + 0x28) = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8320;
    func_0x000107c61170();
    uVar1 = *(ulong *)(param_1 + 0x28);
  }
  func_0x000107c5d384(uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 1002d1db8; end: 1002d1dd7;  */

void FUN_1002d1db8(void)

{
  func_0x000107c61168(&PTR_PTR_1129143f8);
  return;
}



/* Entry: 1002d1dd8; end: 1002d1ddf; -[SCBlizzardConfig version] */

undefined8 FUN_1002d1dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1002d1de0; end: 1002d21f7; -[SCBlizzardEventConfigurer initWithSessionIdProvider:configVersion:timeProvider:experimentProvider:graphene:eventFieldProvider:samplingRateResolver:appInsightsMetadataStorage:geoSignalProvider:] */

undefined8 *
FUN_1002d1de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126f4b38;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar3 = puVar2[4];
    puVar2[4] = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_11);
    uVar3 = puVar2[1];
    puVar2[1] = param_11;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = puVar2[5];
    puVar2[5] = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = puVar2[7];
    puVar2[7] = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = puVar2[3];
    puVar2[3] = param_6;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar3 = puVar2[6];
    puVar2[6] = param_7;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_8);
    uVar3 = puVar2[8];
    puVar2[8] = param_8;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_9);
    uVar3 = puVar2[9];
    puVar2[9] = param_9;
    func_0x000107c61170(uVar3);
    uVar4 = param_6;
    func_0x000107c5ab58();
    uVar3 = param_10;
    if ((int)uVar4 == 0) {
      uVar3 = 0;
    }
    func_0x000107c61174(uVar3);
    uVar4 = puVar2[10];
    puVar2[10] = uVar3;
    func_0x000107c61170(uVar4);
    ppuVar1 = ppuRam00000001136c4a40;
    ppuRam00000001136c4a40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8188;
    func_0x000107c61170(ppuVar1);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1002d21f8; end: 1002d2217;  */

void FUN_1002d21f8(void)

{
  func_0x000107c61168(&PTR_PTR_112913720);
  return;
}



/* Entry: 1002d2218; end: 1002d22cf; +[SCBlizzardAppStateProvider sharedProvider] */

void FUN_1002d2218(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4bb8 != -1) {
    FUN_10002a2fc(0x1136c4bb8,&PTR___NSConcreteGlobalBlock_11095f260);
  }
  uVar1 = uRam00000001136c4bc0;
  func_0x000107c61174(uRam00000001136c4bc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1002d22d0; end: 1002d2343; -[SCBlizzardAppStateProvider initWithApplicationState:] */

undefined1 * FUN_1002d22d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4c68;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002d2344; end: 1002d246b;  */

void FUN_1002d2344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fdaff0,&UNK_10dc450e8);
  puVar1 = &UNK_1106c5790;
  func_0x000107c613fc(&UNK_1106c5790,0x68,7);
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
  FUN_1000823a8(FUN_10095b47c,puVar1);
  return;
}



/* Entry: 1002d246c; end: 1002d248b;  */

void FUN_1002d246c(void)

{
  func_0x000107c61168(&PTR_PTR_11291aa58);
  return;
}



/* Entry: 1002d248c; end: 1002d27a3; -[SCBlizzardEventLoggerConstructorV2 initWithConfig:loggingQueue:timeProvider:eventConfigurer:fileSystem:appStateProvider:experimentProvider:grapheneRegistry:snapTokenProvider:circumstanceEngine:blizzardRtusEventRouter:] */

undefined8 *
FUN_1002d248c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1126f4be0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0xf,param_9);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_12;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d0448;
    func_0x000107c610f4();
    puVar4 = puVar1 + 0xf;
    func_0x000107c61148(puVar4);
    func_0x000107c46b80();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d0450;
    func_0x000107c61160();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d0458;
    func_0x000107c61160();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1002d27a4; end: 1002d27bf;  */

void FUN_1002d27a4(undefined8 param_1)

{
  FUN_1000285a8(0x112e36000,&UNK_10da1fa28);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10063178c,param_1);
  return;
}



/* Entry: 1002d27c0; end: 1002d280f;  */

void FUN_1002d27c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002d2810; end: 1002d28b3; -[SCBlizzardFileCompressor initWithGraphene:experimentProvider:] */

undefined1 *
FUN_1002d2810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f4b60;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002d28b4; end: 1002d28ff;  */

void FUN_1002d28b4(undefined8 param_1)

{
  FUN_1000285a8(0x112fde918,&UNK_10dc486d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103a92c40,param_1);
  return;
}



/* Entry: 1002d2900; end: 1002d296f; -[SCBlizzardEagerUploadStatusManager init] */

undefined1 * FUN_1002d2900(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4a98;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1002d2970; end: 1002d298f;  */

void FUN_1002d2970(void)

{
  func_0x000107c61168(&PTR_PTR_11291d310);
  return;
}



/* Entry: 1002d2990; end: 1002d29cf; -[SCBlizzardEagerUploadIdProvider init] */

void FUN_1002d2990(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f4a90;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return;
}



/* Entry: 1002d29d0; end: 1002d2a73; -[SCBlizzardEventLoggerConstructorV2 constructLoggersForBlizzard] */

/* WARNING: Possible PIC construction at 0x0001002d2a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002d2a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002d2a08) */
/* WARNING: Removing unreachable block (ram,0x0001002d2a58) */

void FUN_1002d29d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3b160();
  func_0x000107c61180();
  func_0x000107c560d8(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1002d2a74; end: 1002d34db; -[SCBlizzardEventLoggerConstructorV2 _constructLoggerIndex] */

undefined * FUN_1002d2a74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong in_stack_fffffffffffffd40;
  long lStack_248;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar20 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar4 = lVar20;
  func_0x000107c4be00();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  lVar20 = lVar4;
  func_0x000107c4080c(lVar4,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar20 != 0) {
    lVar23 = *plStack_1a0;
    do {
      lVar24 = 0;
      do {
        if (*plStack_1a0 != lVar23) {
          func_0x000107c61128(lVar4);
        }
        uVar26 = *(undefined8 *)(lStack_1a8 + lVar24 * 8);
        puVar5 = PTR_PTR_1126d0460;
        func_0x000107c610f4(PTR_PTR_1126d0460);
        uVar21 = *(undefined8 *)(param_1 + 0x18);
        uVar22 = *(undefined8 *)(param_1 + 0x90);
        lVar6 = param_1 + 0x78;
        func_0x000107c61148(lVar6);
        func_0x000107c47ab8(puVar5,param_2,uVar21,uVar26,uVar22,lVar6,0);
        func_0x000107c61170(lVar6);
        uVar21 = uVar26;
        func_0x000107c4fb9c(uVar26);
        func_0x000107c61180();
        puVar7 = puVar2;
        func_0x000107c4d9c0(puVar2,param_2,uVar21);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(uVar21);
        if (puVar7 == (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          uVar21 = uVar26;
          func_0x000107c4fb9c(uVar26);
          func_0x000107c61180();
          func_0x000107c56bcc(puVar2,param_2,puVar7,uVar21);
          func_0x000107c61170(uVar21);
          func_0x000107c61170(puVar7);
        }
        uVar21 = uVar26;
        func_0x000107c4fb9c(uVar26);
        func_0x000107c61180();
        puVar7 = puVar2;
        func_0x000107c4d9e8(puVar2,param_2,uVar21);
        func_0x000107c61180();
        uVar22 = uVar26;
        func_0x000107c4d3e4(uVar26);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar7,param_2,puVar5,uVar22);
        func_0x000107c61170(uVar22);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar21);
        puVar7 = PTR_PTR_1126d0468;
        func_0x000107c610f4(PTR_PTR_1126d0468);
        uVar21 = uVar26;
        func_0x000107c4d3e4(uVar26);
        func_0x000107c61180();
        uVar22 = uVar26;
        func_0x000107c4fb9c(uVar26);
        func_0x000107c61180();
        func_0x000107c48a10(puVar7,param_2,&PTR____CFConstantStringClassReference_110e6de58,uVar21,
                            uVar22);
        func_0x000107c61170(uVar22);
        func_0x000107c61170(uVar21);
        uVar21 = uVar26;
        func_0x000107c4fb9c(uVar26);
        func_0x000107c61180();
        puVar8 = puVar3;
        func_0x000107c4d9c0(puVar3,param_2,uVar21);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(uVar21);
        if (puVar8 == (undefined *)0x0) {
          puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          uVar21 = uVar26;
          func_0x000107c4fb9c(uVar26);
          func_0x000107c61180();
          func_0x000107c56bcc(puVar3,param_2,puVar8,uVar21);
          func_0x000107c61170(uVar21);
          func_0x000107c61170(puVar8);
        }
        uVar21 = uVar26;
        func_0x000107c4fb9c(uVar26);
        func_0x000107c61180();
        puVar8 = puVar3;
        func_0x000107c4d9e8(puVar3,param_2,uVar21);
        func_0x000107c61180();
        func_0x000107c4d3e4(uVar26);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar8,param_2,puVar7,uVar26);
        func_0x000107c61170(uVar26);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(uVar21);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar5);
        lVar24 = lVar24 + 1;
      } while (lVar20 != lVar24);
      lVar20 = lVar4;
      func_0x000107c4080c(lVar4,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar20 != 0);
  }
  func_0x000107c61170(lVar4);
  puVar5 = PTR_PTR_1126d0470;
  func_0x000107c610f4();
  uVar21 = *(undefined8 *)(param_1 + 0x90);
  lVar20 = param_1 + 0x78;
  func_0x000107c61148(lVar20);
  func_0x000107c45f88(puVar5,param_2,puVar2,uVar21,lVar20,0);
  func_0x000107c61170(lVar20);
  puVar7 = PTR_PTR_1126d0478;
  func_0x000107c610f4();
  lVar20 = param_1;
  func_0x000107c43458(param_1);
  func_0x000107c61180();
  func_0x000107c46934(puVar7,param_2,lVar20,puVar5,*(undefined8 *)(param_1 + 0x80),puVar3,
                      *(undefined8 *)(param_1 + 0x48));
  func_0x000107c61170(lVar20);
  puVar8 = PTR_PTR_1126d0480;
  func_0x000107c610f4();
  lVar20 = param_1 + 0x78;
  func_0x000107c61148(lVar20);
  lVar4 = lVar20;
  func_0x000107c5adec();
  func_0x000107c486b4(puVar8,param_2,lVar4);
  func_0x000107c61170(lVar20);
  puVar9 = PTR_PTR_1126d0488;
  func_0x000107c610f4();
  uVar21 = *(undefined8 *)(param_1 + 0x80);
  lVar20 = param_1;
  func_0x000107c423d0(param_1);
  func_0x000107c61180();
  func_0x000107c46930(puVar9,param_2,puVar7,puVar5,uVar21,lVar20);
  func_0x000107c61170(lVar20);
  puVar10 = PTR_PTR_1126d04b0;
  func_0x000107c610f4();
  uVar21 = *(undefined8 *)(param_1 + 0x80);
  lVar20 = param_1 + 0x78;
  func_0x000107c61148(lVar20);
  func_0x000107c46b80(puVar10,param_2,uVar21,lVar20);
  func_0x000107c61170(lVar20);
  puVar11 = PTR_PTR_1126b6b50;
  func_0x000107c610f4();
  lVar20 = param_1;
  func_0x000107c3de70(param_1);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c5c9f8(param_1);
  func_0x000107c61180();
  lVar23 = param_1;
  func_0x000107c42bb8(param_1);
  func_0x000107c61180();
  uVar21 = *(undefined8 *)(param_1 + 0x80);
  lVar24 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar6 = lVar24;
  func_0x000107c5dd14();
  func_0x000107c61180();
  lVar12 = param_1;
  func_0x000107c5b40c();
  func_0x000107c61180();
  lVar13 = param_1;
  func_0x000107c4c01c();
  func_0x000107c61180();
  func_0x000107c45678(puVar11,param_2,puVar9,puVar5,lVar20,lVar4,puVar8,lVar23,uVar21,lVar6,lVar12,
                      lVar13,in_stack_fffffffffffffd40 & 0xffffffffffffff00,puVar10);
  uVar21 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar11;
  func_0x000107c61170(uVar21);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar20);
  puVar11 = PTR_PTR_1126d0498;
  func_0x000107c610f4();
  lVar20 = param_1;
  func_0x000107c423d0(param_1);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c444a4(param_1);
  func_0x000107c61180();
  func_0x000107c46728(puVar11,param_2,lVar20,lVar4,*(undefined8 *)(param_1 + 8));
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar20);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar20 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar4 = lVar20;
  func_0x000107c4be00();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  lStack_248 = lVar4;
  func_0x000107c4080c(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
  if (lStack_248 != 0) {
    lVar20 = *plStack_1e0;
    do {
      lVar23 = 0;
      do {
        if (*plStack_1e0 != lVar20) {
          func_0x000107c61128(lVar4);
        }
        uVar28 = *(undefined8 *)(lStack_1e8 + lVar23 * 8);
        uVar21 = uVar28;
        func_0x000107c4d3e4();
        func_0x000107c61180();
        uVar26 = uVar28;
        func_0x000107c4fb9c();
        func_0x000107c61180();
        puVar14 = puVar2;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        puVar15 = puVar14;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        puVar14 = PTR_PTR_1126d04b8;
        func_0x000107c61160();
        puVar16 = PTR_PTR_1126d0490;
        func_0x000107c610f4();
        func_0x000107c45674();
        puVar17 = PTR_PTR_1126d04a0;
        func_0x000107c610f4();
        puVar18 = PTR_PTR_1126d04c0;
        func_0x000107c610f4();
        func_0x000107c467f8();
        puVar19 = PTR_PTR_1126d04a8;
        func_0x000107c610f4(PTR_PTR_1126d04a8);
        func_0x000107c467f8();
        lVar6 = param_1;
        func_0x000107c3de70(param_1);
        func_0x000107c61180();
        lVar24 = param_1 + 0x78;
        func_0x000107c61148();
        uVar25 = *(undefined8 *)(param_1 + 0x80);
        uVar27 = *(undefined8 *)(param_1 + 8);
        lVar12 = param_1;
        func_0x000107c42aa0();
        func_0x000107c61180();
        uVar22 = *(undefined8 *)(param_1 + 0x98);
        lVar13 = param_1;
        func_0x000107c423cc();
        func_0x000107c61180();
        func_0x000107c45f64(puVar17,param_2,puVar15,puVar18,puVar19,puVar14,lVar6,uVar21,lVar24,
                            uVar25,puVar16,uVar27,lVar12,uVar22,puVar11,lVar13);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar24);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(puVar19);
        func_0x000107c61170(puVar18);
        uVar22 = uVar28;
        func_0x000107c4fb9c(uVar28);
        func_0x000107c61180();
        puVar18 = puVar1;
        func_0x000107c4d9c0(puVar1,param_2,uVar22);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(uVar22);
        if (puVar18 == (undefined *)0x0) {
          puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          uVar22 = uVar28;
          func_0x000107c4fb9c(uVar28);
          func_0x000107c61180();
          func_0x000107c56bcc(puVar1,param_2,puVar18,uVar22);
          func_0x000107c61170(uVar22);
          func_0x000107c61170(puVar18);
        }
        func_0x000107c4fb9c(uVar28);
        func_0x000107c61180();
        puVar18 = puVar1;
        func_0x000107c4d9c0(puVar1,param_2,uVar28);
        func_0x000107c61180();
        func_0x000107c56bcc();
        func_0x000107c61170(puVar18);
        func_0x000107c61170(uVar28);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(uVar26);
        func_0x000107c61170(uVar21);
        lVar23 = lVar23 + 1;
      } while (lStack_248 != lVar23);
      lStack_248 = lVar4;
      func_0x000107c4080c(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lStack_248 != 0);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  return *(undefined **)(puVar2 + 0x18);
}



/* Entry: 1002d34dc; end: 1002d34e3; -[SCBlizzardEventLoggerConstructorV2 config] */

undefined8 FUN_1002d34dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1002d34e4; end: 1002d352f;  */

void FUN_1002d34e4(undefined8 param_1)

{
  FUN_1000285a8(0x113073908,&UNK_10dcf36a0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1043962c8,param_1);
  return;
}



/* Entry: 1002d3530; end: 1002d3537; -[SCBlizzardConfig logQueueDefinitions] */

undefined8 FUN_1002d3530(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1002d3538; end: 1002d3557;  */

void FUN_1002d3538(void)

{
  func_0x000107c61168(&PTR_PTR_1129a77c0);
  return;
}



/* Entry: 1002d3558; end: 1002d385b; -[SCBlizzardLogQueueConfigAdapter initWithNewConfig:logQueueDefinition:circumstanceEngine:experimentProvider:isSpectrum:] */

undefined1 *
FUN_1002d3558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126f4a78;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar3 == (undefined8 *)0x0) goto LAB_1002d381c;
  uVar4 = param_3;
  func_0x000107c5dd14();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar3 + 8);
  *(undefined8 *)((long)puVar3 + 8) = uVar4;
  func_0x000107c61170(uVar6);
  uVar4 = param_4;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar3 + 0x10);
  *(undefined8 *)((long)puVar3 + 0x10) = uVar4;
  func_0x000107c61170(uVar6);
  uVar4 = param_4;
  func_0x000107c4f7f0();
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c5d388();
  *(undefined8 *)((long)puVar3 + 0x50) = uVar6;
  func_0x000107c61170(uVar4);
  uVar4 = param_4;
  func_0x000107c4fb9c();
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c5d388();
  *(undefined8 *)((long)puVar3 + 0x88) = uVar6;
  func_0x000107c61170(uVar4);
  if (param_7 != 0) {
    *(undefined8 *)((long)puVar3 + 0x78) = 100000;
    *(undefined8 *)((long)puVar3 + 0x70) = 4;
    *(undefined8 *)((long)puVar3 + 0x80) = 3;
    iVar2 = (int)*(undefined8 *)((long)puVar3 + 0x10);
    func_0x000107c49d0c();
    if (iVar2 == 0) {
      if (param_5 == 0) goto LAB_1002d381c;
      lVar5 = param_5;
      func_0x000107c4980c();
      *(long *)((long)puVar3 + 0x70) = (long)(int)lVar5;
    }
    else {
      if (param_5 == 0) goto LAB_1002d381c;
      lVar5 = param_5;
      func_0x000107c4980c();
      *(long *)((long)puVar3 + 0x70) = (long)(int)lVar5;
    }
    lVar5 = param_5;
    func_0x000107c4980c();
    *(long *)((long)puVar3 + 0x78) = (long)(int)lVar5;
    goto LAB_1002d381c;
  }
  iVar2 = (int)*(undefined8 *)((long)puVar3 + 0x10);
  func_0x000107c49d0c();
  uVar4 = param_6;
  if (iVar2 == 0) {
    iVar2 = (int)*(undefined8 *)((long)puVar3 + 0x10);
    func_0x000107c49d0c();
    if (iVar2 == 0) {
      iVar2 = (int)*(undefined8 *)((long)puVar3 + 0x10);
      func_0x000107c49d0c();
      if (iVar2 == 0) {
        iVar2 = (int)*(undefined8 *)((long)puVar3 + 0x10);
        func_0x000107c49d0c();
        if (iVar2 == 0) {
          iVar2 = (int)*(undefined8 *)((long)puVar3 + 0x10);
          func_0x000107c49d0c();
          if (iVar2 == 0) goto LAB_1002d3748;
          uVar6 = param_6;
          func_0x000107c4a878();
          *(undefined8 *)((long)puVar3 + 0x68) = uVar6;
          *(undefined8 *)((long)puVar3 + 0x60) = 0x96000;
          *(undefined8 *)((long)puVar3 + 0x58) = 10;
          func_0x000107c3ead0();
        }
        else {
          uVar6 = param_6;
          func_0x000107c4a874();
          *(undefined8 *)((long)puVar3 + 0x68) = uVar6;
          *(undefined8 *)((long)puVar3 + 0x60) = 0x96000;
          *(undefined8 *)((long)puVar3 + 0x58) = 10;
          func_0x000107c3eacc();
        }
      }
      else {
        uVar6 = param_6;
        func_0x000107c4a870();
        *(undefined8 *)((long)puVar3 + 0x68) = uVar6;
        *(undefined8 *)((long)puVar3 + 0x60) = 0x96000;
        *(undefined8 *)((long)puVar3 + 0x58) = 1;
        func_0x000107c3eac8();
      }
      *(undefined8 *)((long)puVar3 + 0x40) = uVar4;
      goto LAB_1002d381c;
    }
LAB_1002d3748:
    uVar6 = param_6;
    func_0x000107c4a868();
    *(undefined8 *)((long)puVar3 + 0x68) = uVar6;
    func_0x000107c4a87c();
    uVar1 = 0x96000;
  }
  else {
    uVar6 = param_6;
    func_0x000107c4a86c();
    *(undefined8 *)((long)puVar3 + 0x68) = uVar6;
    func_0x000107c4a864();
    uVar1 = 0xbb800;
  }
  *(undefined8 *)((long)puVar3 + 0x58) = uVar4;
  *(ulong *)((long)puVar3 + 0x60) = (ulong)uVar1;
  *(undefined8 *)((long)puVar3 + 0x40) = 0x3c;
LAB_1002d381c:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 1002d385c; end: 1002d3863; -[SCBlizzardLogQueueDefinition name] */

undefined8 FUN_1002d385c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1002d3864; end: 1002d386b; -[SCBlizzardLogQueueDefinition queuePriority] */

undefined8 FUN_1002d3864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1002d386c; end: 1002d3873; -[SCBlizzardLogQueueDefinition region] */

undefined8 FUN_1002d386c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1002d3874; end: 1002d3a23;  */

void FUN_1002d3874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3caf8,&UNK_10da28a90);
  puVar1 = &UNK_11049b568;
  func_0x000107c613fc(&UNK_11049b568,0xa8,7);
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
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
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
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  FUN_1000823a8(&UNK_100c512f0,puVar1);
  return;
}



/* Entry: 1002d3a24; end: 1002d3ab7; -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchPb0] */

undefined8 FUN_1002d3a24(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002d3ab8;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4bf0 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4bf0,&puStack_38);
  }
  return uRam000000011316ee80;
}



/* Entry: 1002d3ab8; end: 1002d3b03;  */

void FUN_1002d3ab8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316ee80 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002d3b04; end: 1002d3b1f;  */

void FUN_1002d3b04(undefined8 param_1)

{
  FUN_1000285a8(0x112e3cb00,&UNK_10da28a98);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_100c5075c,param_1);
  return;
}



/* Entry: 1002d3b20; end: 1002d3b6f;  */

void FUN_1002d3b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002d3b70; end: 1002d885f;  */

void FUN_1002d3b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70)

{
  undefined *puVar1;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  undefined8 in_stack_00000630;
  undefined8 in_stack_00000638;
  undefined8 in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  undefined8 in_stack_000006d0;
  undefined8 in_stack_000006d8;
  undefined8 in_stack_000006e0;
  undefined8 in_stack_000006e8;
  undefined8 in_stack_000006f0;
  undefined8 in_stack_000006f8;
  undefined8 in_stack_00000700;
  undefined8 in_stack_00000708;
  undefined8 in_stack_00000710;
  undefined8 in_stack_00000718;
  undefined8 in_stack_00000720;
  undefined8 in_stack_00000728;
  undefined8 in_stack_00000730;
  undefined8 in_stack_00000738;
  undefined8 in_stack_00000740;
  undefined8 in_stack_00000748;
  undefined8 in_stack_00000750;
  undefined8 in_stack_00000758;
  undefined8 in_stack_00000760;
  undefined8 in_stack_00000768;
  undefined8 in_stack_00000770;
  undefined8 in_stack_00000778;
  undefined8 in_stack_00000780;
  undefined8 in_stack_00000788;
  undefined8 in_stack_00000790;
  undefined8 in_stack_00000798;
  undefined8 in_stack_000007a0;
  undefined8 in_stack_000007a8;
  undefined8 in_stack_000007b0;
  undefined8 in_stack_000007b8;
  undefined8 in_stack_000007c0;
  undefined8 in_stack_000007c8;
  undefined8 in_stack_000007d0;
  undefined8 in_stack_000007d8;
  undefined8 in_stack_000007e0;
  undefined8 in_stack_000007e8;
  undefined8 in_stack_000007f0;
  undefined8 in_stack_000007f8;
  undefined8 in_stack_00000800;
  undefined8 in_stack_00000808;
  undefined8 in_stack_00000810;
  undefined8 in_stack_00000818;
  undefined8 in_stack_00000820;
  undefined8 in_stack_00000828;
  undefined8 in_stack_00000830;
  undefined8 in_stack_00000838;
  undefined8 in_stack_00000840;
  undefined8 in_stack_00000848;
  undefined8 in_stack_00000850;
  undefined8 in_stack_00000858;
  undefined8 in_stack_00000860;
  undefined8 in_stack_00000868;
  undefined8 in_stack_00000870;
  undefined8 in_stack_00000878;
  undefined8 in_stack_00000880;
  undefined8 in_stack_00000888;
  undefined8 in_stack_00000890;
  undefined8 in_stack_00000898;
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008b0;
  undefined8 in_stack_000008b8;
  undefined8 in_stack_000008c0;
  undefined8 in_stack_000008c8;
  undefined8 in_stack_000008d0;
  undefined8 in_stack_000008d8;
  undefined8 in_stack_000008e0;
  undefined8 in_stack_000008e8;
  undefined8 in_stack_000008f0;
  undefined8 in_stack_000008f8;
  undefined8 in_stack_00000900;
  undefined8 in_stack_00000908;
  undefined8 in_stack_00000910;
  undefined8 in_stack_00000918;
  undefined8 in_stack_00000920;
  undefined8 in_stack_00000928;
  undefined8 in_stack_00000930;
  undefined8 in_stack_00000938;
  undefined8 in_stack_00000940;
  undefined8 in_stack_00000948;
  undefined8 in_stack_00000950;
  undefined8 in_stack_00000958;
  undefined8 in_stack_00000960;
  undefined8 in_stack_00000968;
  undefined8 in_stack_00000970;
  undefined8 in_stack_00000978;
  undefined8 in_stack_00000980;
  undefined8 in_stack_00000988;
  undefined8 in_stack_00000990;
  undefined8 in_stack_00000998;
  undefined8 in_stack_000009a0;
  undefined8 in_stack_000009a8;
  undefined8 in_stack_000009b0;
  undefined8 in_stack_000009b8;
  undefined8 in_stack_000009c0;
  undefined8 in_stack_000009c8;
  undefined8 in_stack_000009d0;
  undefined8 in_stack_000009d8;
  undefined8 in_stack_000009e0;
  undefined8 in_stack_000009e8;
  undefined8 in_stack_000009f0;
  undefined8 in_stack_000009f8;
  undefined8 in_stack_00000a00;
  undefined8 in_stack_00000a08;
  undefined8 in_stack_00000a10;
  undefined8 in_stack_00000a18;
  undefined8 in_stack_00000a20;
  undefined8 in_stack_00000a28;
  undefined8 in_stack_00000a30;
  undefined8 in_stack_00000a38;
  undefined8 in_stack_00000a40;
  undefined8 in_stack_00000a48;
  undefined8 in_stack_00000a50;
  undefined8 in_stack_00000a58;
  undefined8 in_stack_00000a60;
  undefined8 in_stack_00000a68;
  undefined8 in_stack_00000a70;
  undefined8 in_stack_00000a78;
  undefined8 in_stack_00000a80;
  undefined8 in_stack_00000a88;
  undefined8 in_stack_00000a90;
  undefined8 in_stack_00000a98;
  undefined8 in_stack_00000aa0;
  undefined8 in_stack_00000aa8;
  undefined8 in_stack_00000ab0;
  undefined8 in_stack_00000ab8;
  undefined8 in_stack_00000ac0;
  undefined8 in_stack_00000ac8;
  undefined8 in_stack_00000ad0;
  undefined8 in_stack_00000ad8;
  undefined8 in_stack_00000ae0;
  undefined8 in_stack_00000ae8;
  undefined8 in_stack_00000af0;
  undefined8 in_stack_00000af8;
  undefined8 in_stack_00000b00;
  undefined8 in_stack_00000b08;
  undefined8 in_stack_00000b10;
  undefined8 in_stack_00000b18;
  undefined8 in_stack_00000b20;
  undefined8 in_stack_00000b28;
  undefined8 in_stack_00000b30;
  undefined8 in_stack_00000b38;
  undefined8 in_stack_00000b40;
  undefined8 in_stack_00000b48;
  undefined8 in_stack_00000b50;
  undefined8 in_stack_00000b58;
  undefined8 in_stack_00000b60;
  undefined8 in_stack_00000b68;
  undefined8 in_stack_00000b70;
  undefined8 in_stack_00000b78;
  undefined8 in_stack_00000b80;
  undefined8 in_stack_00000b88;
  undefined8 in_stack_00000b90;
  undefined8 in_stack_00000b98;
  undefined8 in_stack_00000ba0;
  undefined8 in_stack_00000ba8;
  undefined8 in_stack_00000bb0;
  undefined8 in_stack_00000bb8;
  undefined8 in_stack_00000bc0;
  undefined8 in_stack_00000bc8;
  undefined8 in_stack_00000bd0;
  undefined8 in_stack_00000bd8;
  undefined8 in_stack_00000be0;
  undefined8 in_stack_00000be8;
  undefined8 in_stack_00000bf0;
  undefined8 in_stack_00000bf8;
  undefined8 in_stack_00000c00;
  undefined8 in_stack_00000c08;
  undefined8 in_stack_00000c10;
  undefined8 in_stack_00000c18;
  undefined8 in_stack_00000c20;
  undefined8 in_stack_00000c28;
  undefined8 in_stack_00000c30;
  undefined8 in_stack_00000c38;
  undefined8 in_stack_00000c40;
  undefined8 in_stack_00000c48;
  undefined8 in_stack_00000c50;
  undefined8 in_stack_00000c58;
  undefined8 in_stack_00000c60;
  undefined8 in_stack_00000c68;
  undefined8 in_stack_00000c70;
  undefined8 in_stack_00000c78;
  undefined8 in_stack_00000c80;
  undefined8 in_stack_00000c88;
  undefined8 in_stack_00000c90;
  undefined8 in_stack_00000c98;
  undefined8 in_stack_00000ca0;
  undefined8 in_stack_00000ca8;
  undefined8 in_stack_00000cb0;
  undefined8 in_stack_00000cb8;
  undefined8 in_stack_00000cc0;
  undefined8 in_stack_00000cc8;
  undefined8 in_stack_00000cd0;
  undefined8 in_stack_00000cd8;
  undefined8 in_stack_00000ce0;
  undefined8 in_stack_00000ce8;
  undefined8 in_stack_00000cf0;
  undefined8 in_stack_00000cf8;
  undefined8 in_stack_00000d00;
  undefined8 in_stack_00000d08;
  undefined8 in_stack_00000d10;
  undefined8 in_stack_00000d18;
  undefined8 in_stack_00000d20;
  undefined8 in_stack_00000d28;
  undefined8 in_stack_00000d30;
  undefined8 in_stack_00000d38;
  undefined8 in_stack_00000d40;
  undefined8 in_stack_00000d48;
  undefined8 in_stack_00000d50;
  undefined8 in_stack_00000d58;
  undefined8 in_stack_00000d60;
  undefined8 in_stack_00000d68;
  undefined8 in_stack_00000d70;
  undefined8 in_stack_00000d78;
  undefined8 in_stack_00000d80;
  undefined8 in_stack_00000d88;
  undefined8 in_stack_00000d90;
  undefined8 in_stack_00000d98;
  undefined8 in_stack_00000da0;
  undefined8 in_stack_00000da8;
  undefined8 in_stack_00000db0;
  undefined8 in_stack_00000db8;
  undefined8 in_stack_00000dc0;
  undefined8 in_stack_00000dc8;
  undefined8 in_stack_00000dd0;
  undefined8 in_stack_00000dd8;
  undefined8 in_stack_00000de0;
  undefined8 in_stack_00000de8;
  undefined8 in_stack_00000df0;
  undefined8 in_stack_00000df8;
  undefined8 in_stack_00000e00;
  undefined8 in_stack_00000e08;
  undefined8 in_stack_00000e10;
  undefined8 in_stack_00000e18;
  undefined8 in_stack_00000e20;
  undefined8 in_stack_00000e28;
  undefined8 in_stack_00000e30;
  undefined8 in_stack_00000e38;
  undefined8 in_stack_00000e40;
  undefined8 in_stack_00000e48;
  undefined8 in_stack_00000e50;
  undefined8 in_stack_00000e58;
  undefined8 in_stack_00000e60;
  undefined8 in_stack_00000e68;
  undefined8 in_stack_00000e70;
  undefined8 in_stack_00000e78;
  undefined8 in_stack_00000e80;
  undefined8 in_stack_00000e88;
  undefined8 in_stack_00000e90;
  undefined8 in_stack_00000e98;
  undefined8 in_stack_00000ea0;
  undefined8 in_stack_00000ea8;
  undefined8 in_stack_00000eb0;
  undefined8 in_stack_00000eb8;
  undefined8 in_stack_00000ec0;
  undefined8 in_stack_00000ec8;
  undefined8 in_stack_00000ed0;
  undefined8 in_stack_00000ed8;
  undefined8 in_stack_00000ee0;
  undefined8 in_stack_00000ee8;
  undefined8 in_stack_00000ef0;
  undefined8 in_stack_00000ef8;
  undefined8 in_stack_00000f00;
  undefined8 in_stack_00000f08;
  undefined8 in_stack_00000f10;
  undefined8 in_stack_00000f18;
  undefined8 in_stack_00000f20;
  undefined8 in_stack_00000f28;
  undefined8 in_stack_00000f30;
  undefined8 in_stack_00000f38;
  undefined8 in_stack_00000f40;
  undefined8 in_stack_00000f48;
  undefined8 in_stack_00000f50;
  undefined8 in_stack_00000f58;
  undefined8 in_stack_00000f60;
  undefined8 in_stack_00000f68;
  undefined8 in_stack_00000f70;
  undefined8 in_stack_00000f78;
  undefined8 in_stack_00000f80;
  undefined8 in_stack_00000f88;
  undefined8 in_stack_00000f90;
  undefined8 in_stack_00000f98;
  undefined8 in_stack_00000fa0;
  undefined8 in_stack_00000fa8;
  undefined8 in_stack_00000fb0;
  undefined8 in_stack_00000fb8;
  undefined8 in_stack_00000fc0;
  undefined8 in_stack_00000fc8;
  undefined8 in_stack_00000fd0;
  undefined8 in_stack_00000fd8;
  undefined8 in_stack_00000fe0;
  undefined8 in_stack_00000fe8;
  undefined8 in_stack_00000ff0;
  undefined8 in_stack_00000ff8;
  undefined8 in_stack_00001000;
  undefined8 in_stack_00001008;
  undefined8 in_stack_00001010;
  undefined8 in_stack_00001018;
  undefined8 in_stack_00001020;
  undefined8 in_stack_00001028;
  undefined8 in_stack_00001030;
  undefined8 in_stack_00001038;
  undefined8 in_stack_00001040;
  undefined8 in_stack_00001048;
  undefined8 in_stack_00001050;
  undefined8 in_stack_00001058;
  undefined8 in_stack_00001060;
  undefined8 in_stack_00001068;
  undefined8 in_stack_00001070;
  undefined8 in_stack_00001078;
  undefined8 in_stack_00001080;
  undefined8 in_stack_00001088;
  undefined8 in_stack_00001090;
  undefined8 in_stack_00001098;
  undefined8 in_stack_000010a0;
  undefined8 in_stack_000010a8;
  undefined8 in_stack_000010b0;
  undefined8 in_stack_000010b8;
  undefined8 in_stack_000010c0;
  undefined8 in_stack_000010c8;
  undefined8 in_stack_000010d0;
  undefined8 in_stack_000010d8;
  undefined8 in_stack_000010e0;
  undefined8 in_stack_000010e8;
  undefined8 in_stack_000010f0;
  undefined8 in_stack_000010f8;
  undefined8 in_stack_00001100;
  undefined8 in_stack_00001108;
  undefined8 in_stack_00001110;
  undefined8 in_stack_00001118;
  undefined8 in_stack_00001120;
  undefined8 in_stack_00001128;
  undefined8 in_stack_00001130;
  undefined8 in_stack_00001138;
  undefined8 in_stack_00001140;
  undefined8 in_stack_00001148;
  undefined8 in_stack_00001150;
  undefined8 in_stack_00001158;
  undefined8 in_stack_00001160;
  undefined8 in_stack_00001168;
  undefined8 in_stack_00001170;
  undefined8 in_stack_00001178;
  undefined8 in_stack_00001180;
  undefined8 in_stack_00001188;
  undefined8 in_stack_00001190;
  undefined8 in_stack_00001198;
  undefined8 in_stack_000011a0;
  undefined8 in_stack_000011a8;
  undefined8 in_stack_000011b0;
  undefined8 in_stack_000011b8;
  undefined8 in_stack_000011c0;
  undefined8 in_stack_000011c8;
  undefined8 in_stack_000011d0;
  undefined8 in_stack_000011d8;
  undefined8 in_stack_000011e0;
  undefined8 in_stack_000011e8;
  undefined8 in_stack_000011f0;
  undefined8 in_stack_000011f8;
  undefined8 in_stack_00001200;
  undefined8 in_stack_00001208;
  undefined8 in_stack_00001210;
  undefined8 in_stack_00001218;
  undefined8 in_stack_00001220;
  undefined8 in_stack_00001228;
  undefined8 in_stack_00001230;
  undefined8 in_stack_00001238;
  undefined8 in_stack_00001240;
  undefined8 in_stack_00001248;
  undefined8 in_stack_00001250;
  undefined8 in_stack_00001258;
  undefined8 in_stack_00001260;
  undefined8 in_stack_00001268;
  undefined8 in_stack_00001270;
  undefined8 in_stack_00001278;
  undefined8 in_stack_00001280;
  undefined8 in_stack_00001288;
  undefined8 in_stack_00001290;
  undefined8 in_stack_00001298;
  undefined8 in_stack_000012a0;
  undefined8 in_stack_000012a8;
  undefined8 in_stack_000012b0;
  undefined8 in_stack_000012b8;
  undefined8 in_stack_000012c0;
  undefined8 in_stack_000012c8;
  undefined8 in_stack_000012d0;
  undefined8 in_stack_000012d8;
  undefined8 in_stack_000012e0;
  undefined8 in_stack_000012e8;
  undefined8 in_stack_000012f0;
  undefined8 in_stack_000012f8;
  undefined8 in_stack_00001300;
  undefined8 in_stack_00001308;
  undefined8 in_stack_00001310;
  undefined8 in_stack_00001318;
  undefined8 in_stack_00001320;
  undefined8 in_stack_00001328;
  undefined8 in_stack_00001330;
  undefined8 in_stack_00001338;
  undefined8 in_stack_00001340;
  undefined8 in_stack_00001348;
  undefined8 in_stack_00001350;
  undefined8 in_stack_00001358;
  undefined8 in_stack_00001360;
  undefined8 in_stack_00001368;
  undefined8 in_stack_00001370;
  undefined8 in_stack_00001378;
  undefined8 in_stack_00001380;
  undefined8 in_stack_00001388;
  undefined8 in_stack_00001390;
  undefined8 in_stack_00001398;
  undefined8 in_stack_000013a0;
  undefined8 in_stack_000013a8;
  undefined8 in_stack_000013b0;
  undefined8 in_stack_000013b8;
  undefined8 in_stack_000013c0;
  undefined8 in_stack_000013c8;
  undefined8 in_stack_000013d0;
  undefined8 in_stack_000013d8;
  undefined8 in_stack_000013e0;
  undefined8 in_stack_000013e8;
  undefined8 in_stack_000013f0;
  undefined8 in_stack_000013f8;
  undefined8 in_stack_00001400;
  undefined8 in_stack_00001408;
  undefined8 in_stack_00001410;
  undefined8 in_stack_00001418;
  undefined8 in_stack_00001420;
  undefined8 in_stack_00001428;
  undefined8 in_stack_00001430;
  undefined8 in_stack_00001438;
  undefined8 in_stack_00001440;
  undefined8 in_stack_00001448;
  undefined8 in_stack_00001450;
  undefined8 in_stack_00001458;
  undefined8 in_stack_00001460;
  undefined8 in_stack_00001468;
  undefined8 in_stack_00001470;
  undefined8 in_stack_00001478;
  undefined8 in_stack_00001480;
  undefined8 in_stack_00001488;
  undefined8 in_stack_00001490;
  undefined8 in_stack_00001498;
  undefined8 in_stack_000014a0;
  undefined8 in_stack_000014a8;
  undefined8 in_stack_000014b0;
  undefined8 in_stack_000014b8;
  undefined8 in_stack_000014c0;
  undefined8 in_stack_000014c8;
  undefined8 in_stack_000014d0;
  undefined8 in_stack_000014d8;
  undefined8 in_stack_000014e0;
  undefined8 in_stack_000014e8;
  undefined8 in_stack_000014f0;
  undefined8 in_stack_000014f8;
  undefined8 in_stack_00001500;
  undefined8 in_stack_00001508;
  undefined8 in_stack_00001510;
  undefined8 in_stack_00001518;
  undefined8 in_stack_00001520;
  undefined8 in_stack_00001528;
  undefined8 in_stack_00001530;
  undefined8 in_stack_00001538;
  undefined8 in_stack_00001540;
  undefined8 in_stack_00001548;
  undefined8 in_stack_00001550;
  undefined8 in_stack_00001558;
  undefined8 in_stack_00001560;
  undefined8 in_stack_00001568;
  undefined8 in_stack_00001570;
  undefined8 in_stack_00001578;
  undefined8 in_stack_00001580;
  undefined8 in_stack_00001588;
  undefined8 in_stack_00001590;
  undefined8 in_stack_00001598;
  undefined8 in_stack_000015a0;
  undefined8 in_stack_000015a8;
  undefined8 in_stack_000015b0;
  undefined8 in_stack_000015b8;
  undefined8 in_stack_000015c0;
  undefined8 in_stack_000015c8;
  undefined8 in_stack_000015d0;
  undefined8 in_stack_000015d8;
  undefined8 in_stack_000015e0;
  undefined8 in_stack_000015e8;
  undefined8 in_stack_000015f0;
  undefined8 in_stack_000015f8;
  undefined8 in_stack_00001600;
  undefined8 in_stack_00001608;
  undefined8 in_stack_00001610;
  undefined8 in_stack_00001618;
  undefined8 in_stack_00001620;
  undefined8 in_stack_00001628;
  undefined8 in_stack_00001630;
  undefined8 in_stack_00001638;
  undefined8 in_stack_00001640;
  undefined8 in_stack_00001648;
  undefined8 in_stack_00001650;
  undefined8 in_stack_00001658;
  undefined8 in_stack_00001660;
  undefined8 in_stack_00001668;
  undefined8 in_stack_00001670;
  undefined8 in_stack_00001678;
  undefined8 in_stack_00001680;
  undefined8 in_stack_00001688;
  undefined8 in_stack_00001690;
  undefined8 in_stack_00001698;
  undefined8 in_stack_000016a0;
  undefined8 in_stack_000016a8;
  undefined8 in_stack_000016b0;
  undefined8 in_stack_000016b8;
  undefined8 in_stack_000016c0;
  undefined8 in_stack_000016c8;
  undefined8 in_stack_000016d0;
  undefined8 in_stack_000016d8;
  undefined8 in_stack_000016e0;
  undefined8 in_stack_000016e8;
  undefined8 in_stack_000016f0;
  undefined8 in_stack_000016f8;
  undefined8 in_stack_00001700;
  undefined8 in_stack_00001708;
  undefined8 in_stack_00001710;
  undefined8 in_stack_00001718;
  undefined8 in_stack_00001720;
  undefined8 in_stack_00001728;
  undefined8 in_stack_00001730;
  undefined8 in_stack_00001738;
  undefined8 in_stack_00001740;
  undefined8 in_stack_00001748;
  undefined8 in_stack_00001750;
  undefined8 in_stack_00001758;
  undefined8 in_stack_00001760;
  undefined8 in_stack_00001768;
  undefined8 in_stack_00001770;
  undefined8 in_stack_00001778;
  undefined8 in_stack_00001780;
  undefined8 in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  undefined8 in_stack_000017a0;
  undefined8 in_stack_000017a8;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  undefined8 in_stack_000017d0;
  undefined8 in_stack_000017d8;
  undefined8 in_stack_000017e0;
  undefined8 in_stack_000017e8;
  undefined8 in_stack_000017f0;
  undefined8 in_stack_000017f8;
  undefined8 in_stack_00001800;
  undefined8 in_stack_00001808;
  undefined8 in_stack_00001810;
  undefined8 in_stack_00001818;
  undefined8 in_stack_00001820;
  undefined8 in_stack_00001828;
  undefined8 in_stack_00001830;
  undefined8 in_stack_00001838;
  undefined8 in_stack_00001840;
  undefined8 in_stack_00001848;
  undefined8 in_stack_00001850;
  undefined8 in_stack_00001858;
  undefined8 in_stack_00001860;
  undefined8 in_stack_00001868;
  undefined8 in_stack_00001870;
  undefined8 in_stack_00001878;
  undefined8 in_stack_00001880;
  undefined8 in_stack_00001888;
  undefined8 in_stack_00001890;
  undefined8 in_stack_00001898;
  undefined8 in_stack_000018a0;
  undefined8 in_stack_000018a8;
  undefined8 in_stack_000018b0;
  undefined8 in_stack_000018b8;
  undefined8 in_stack_000018c0;
  undefined8 in_stack_000018c8;
  undefined8 in_stack_000018d0;
  undefined8 in_stack_000018d8;
  undefined8 in_stack_000018e0;
  undefined8 in_stack_000018e8;
  undefined8 in_stack_000018f0;
  undefined8 in_stack_000018f8;
  undefined8 in_stack_00001900;
  undefined8 in_stack_00001908;
  undefined8 in_stack_00001910;
  undefined8 in_stack_00001918;
  undefined8 in_stack_00001920;
  undefined8 in_stack_00001928;
  undefined8 in_stack_00001930;
  undefined8 in_stack_00001938;
  undefined8 in_stack_00001940;
  undefined8 in_stack_00001948;
  undefined8 in_stack_00001950;
  undefined8 in_stack_00001958;
  undefined8 in_stack_00001960;
  undefined8 in_stack_00001968;
  undefined8 in_stack_00001970;
  undefined8 in_stack_00001978;
  undefined8 in_stack_00001980;
  undefined8 in_stack_00001988;
  undefined8 in_stack_00001990;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1000285a8(0x112e489b8,&UNK_10da3f6b0);
  puVar1 = &UNK_1104af060;
  func_0x000107c613fc(&UNK_1104af060,0x19e8,7);
  *(undefined8 *)(puVar1 + 0x11e8) = in_stack_00000db8;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00001208;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000578;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_000015b0;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_000018d8;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00001030;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_000008b8;
  *(undefined8 *)(puVar1 + 0x40) = in_stack_00000968;
  *(undefined8 *)(puVar1 + 0x48) = in_stack_000007c0;
  *(undefined8 *)(puVar1 + 0x50) = in_stack_00001038;
  *(undefined8 *)(puVar1 + 0x58) = in_stack_00000768;
  *(undefined8 *)(puVar1 + 0x60) = in_stack_00000958;
  *(undefined8 *)(puVar1 + 0x68) = in_stack_00001118;
  *(undefined8 *)(puVar1 + 0x70) = in_stack_00000a10;
  *(undefined8 *)(puVar1 + 0x78) = in_stack_00000850;
  *(undefined8 *)(puVar1 + 0x80) = in_stack_00000810;
  *(undefined8 *)(puVar1 + 0x88) = in_stack_00000470;
  *(undefined8 *)(puVar1 + 0x90) = in_stack_000016b0;
  *(undefined8 *)(puVar1 + 0x98) = in_stack_00000a08;
  *(undefined8 *)(puVar1 + 0xa0) = in_stack_00000a38;
  *(undefined8 *)(puVar1 + 0xa8) = in_stack_00001538;
  *(undefined8 *)(puVar1 + 0xb0) = in_stack_00000aa0;
  *(undefined8 *)(puVar1 + 0xb8) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0xc0) = in_stack_00001090;
  *(undefined8 *)(puVar1 + 200) = in_stack_000016d8;
  *(undefined8 *)(puVar1 + 0xd0) = in_stack_00001518;
  *(undefined8 *)(puVar1 + 0xd8) = in_stack_00000638;
  *(undefined8 *)(puVar1 + 0xe0) = in_stack_00000650;
  *(undefined8 *)(puVar1 + 0xe8) = in_stack_000004e8;
  *(undefined8 *)(puVar1 + 0xf0) = in_stack_00001408;
  *(undefined8 *)(puVar1 + 0xf8) = in_stack_000010c8;
  *(undefined8 *)(puVar1 + 0x100) = param_21;
  *(undefined8 *)(puVar1 + 0x108) = in_stack_000015c0;
  *(undefined8 *)(puVar1 + 0x110) = in_stack_00000668;
  *(undefined8 *)(puVar1 + 0x118) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x120) = in_stack_00000b40;
  *(undefined8 *)(puVar1 + 0x128) = in_stack_00000b60;
  *(undefined8 *)(puVar1 + 0x130) = in_stack_00000ae0;
  *(undefined8 *)(puVar1 + 0x138) = in_stack_00001660;
  *(undefined8 *)(puVar1 + 0x140) = in_stack_000004c8;
  *(undefined8 *)(puVar1 + 0x148) = in_stack_00000b48;
  *(undefined8 *)(puVar1 + 0x150) = in_stack_000010b0;
  *(undefined8 *)(puVar1 + 0x158) = in_stack_000009c8;
  *(undefined8 *)(puVar1 + 0x160) = in_stack_00001100;
  *(undefined8 *)(puVar1 + 0x168) = in_stack_00001988;
  *(undefined8 *)(puVar1 + 0x170) = in_stack_00001920;
  *(undefined8 *)(puVar1 + 0x178) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x180) = in_stack_00000d58;
  *(undefined8 *)(puVar1 + 0x188) = in_stack_000009d0;
  *(undefined8 *)(puVar1 + 400) = in_stack_00000ea8;
  *(undefined8 *)(puVar1 + 0x198) = in_stack_00000e78;
  *(undefined8 *)(puVar1 + 0x1a0) = in_stack_000016a0;
  *(undefined8 *)(puVar1 + 0x1a8) = in_stack_000008f0;
  *(undefined8 *)(puVar1 + 0x1b0) = in_stack_00000ea0;
  *(undefined8 *)(puVar1 + 0x1b8) = in_stack_00001680;
  *(undefined8 *)(puVar1 + 0x1c0) = in_stack_000007a0;
  *(undefined8 *)(puVar1 + 0x1c8) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x1d0) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x1d8) = in_stack_00000ec8;
  *(undefined8 *)(puVar1 + 0x1e0) = in_stack_000011a8;
  *(undefined8 *)(puVar1 + 0x1e8) = in_stack_000013b0;
  *(undefined8 *)(puVar1 + 0x1f0) = in_stack_00000458;
  *(undefined8 *)(puVar1 + 0x1f8) = in_stack_00000fe8;
  *(undefined8 *)(puVar1 + 0x200) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x208) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x210) = in_stack_00000ee0;
  *(undefined8 *)(puVar1 + 0x218) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x220) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x228) = param_48;
  *(undefined8 *)(puVar1 + 0x230) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x238) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000f38;
  *(undefined8 *)(puVar1 + 600) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000f70;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000f20;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00001810;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000460;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000438;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_000011e8;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000450;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000840;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_000017a8;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_000017f8;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000480;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000820;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000870;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000888;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000d70;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000488;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_000016f0;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000013e8;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_00001530;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_00001150;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_00001088;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_00000b50;
  *(undefined8 *)(puVar1 + 0x318) = param_56;
  *(undefined8 *)(puVar1 + 800) = in_stack_00001508;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_00001310;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_00000490;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_00001288;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000017d8;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000017e0;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000800;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_000004e0;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_000015b8;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00001850;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000590;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00001698;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00001528;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_000010a8;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000778;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_000011d8;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000780;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000c40;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00001280;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00001548;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00001510;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000938;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000918;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00001670;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000688;
  *(undefined8 *)(puVar1 + 1000) = param_31;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_00000a28;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000016c8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_00001248;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_00000e70;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_00000e28;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_00000e90;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_00000ae8;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_00000538;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_00001668;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000011b0;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_00000b58;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_00000558;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000eb8;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_00000b90;
  *(undefined8 *)(puVar1 + 0x460) = in_stack_00000b08;
  *(undefined8 *)(puVar1 + 0x468) = in_stack_00000af0;
  *(undefined8 *)(puVar1 + 0x470) = in_stack_000015d8;
  *(undefined8 *)(puVar1 + 0x478) = in_stack_00001848;
  *(undefined8 *)(puVar1 + 0x480) = in_stack_00000c00;
  *(undefined8 *)(puVar1 + 0x488) = in_stack_000006d8;
  *(undefined8 *)(puVar1 + 0x490) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x498) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x4a0) = in_stack_00001158;
  *(undefined8 *)(puVar1 + 0x4a8) = in_stack_000013c0;
  *(undefined8 *)(puVar1 + 0x4b0) = in_stack_00001550;
  *(undefined8 *)(puVar1 + 0x4b8) = in_stack_00000f30;
  *(undefined8 *)(puVar1 + 0x4c0) = in_stack_00001588;
  *(undefined8 *)(puVar1 + 0x4c8) = in_stack_00000a30;
  *(undefined8 *)(puVar1 + 0x4d0) = in_stack_00000a20;
  *(undefined8 *)(puVar1 + 0x4d8) = param_16;
  *(undefined8 *)(puVar1 + 0x4e0) = in_stack_00000998;
  *(undefined8 *)(puVar1 + 0x4e8) = in_stack_000005d0;
  *(undefined8 *)(puVar1 + 0x4f0) = in_stack_00001298;
  *(undefined8 *)(puVar1 + 0x4f8) = in_stack_00000e20;
  *(undefined8 *)(puVar1 + 0x500) = in_stack_00000a58;
  *(undefined8 *)(puVar1 + 0x508) = in_stack_000005c0;
  *(undefined8 *)(puVar1 + 0x510) = in_stack_00001360;
  *(undefined8 *)(puVar1 + 0x518) = in_stack_00000c28;
  *(undefined8 *)(puVar1 + 0x520) = in_stack_00001770;
  *(undefined8 *)(puVar1 + 0x528) = in_stack_00000d88;
  *(undefined8 *)(puVar1 + 0x530) = in_stack_000005a8;
  *(undefined8 *)(puVar1 + 0x538) = in_stack_00000e50;
  *(undefined8 *)(puVar1 + 0x540) = in_stack_00000e60;
  *(undefined8 *)(puVar1 + 0x548) = in_stack_00000960;
  *(undefined8 *)(puVar1 + 0x550) = in_stack_00000fa8;
  *(undefined8 *)(puVar1 + 0x558) = in_stack_00000fb0;
  *(undefined8 *)(puVar1 + 0x560) = in_stack_000011b8;
  *(undefined8 *)(puVar1 + 0x568) = in_stack_00001700;
  *(undefined8 *)(puVar1 + 0x570) = in_stack_00001128;
  *(undefined8 *)(puVar1 + 0x578) = in_stack_00000f08;
  *(undefined8 *)(puVar1 + 0x580) = in_stack_00001268;
  *(undefined8 *)(puVar1 + 0x588) = in_stack_00001400;
  *(undefined8 *)(puVar1 + 0x590) = in_stack_00001240;
  *(undefined8 *)(puVar1 + 0x598) = in_stack_00000760;
  *(undefined8 *)(puVar1 + 0x5a0) = in_stack_00000980;
  *(undefined8 *)(puVar1 + 0x5a8) = in_stack_00000700;
  *(undefined8 *)(puVar1 + 0x5b0) = in_stack_00000bd8;
  *(undefined8 *)(puVar1 + 0x5b8) = in_stack_00001450;
  *(undefined8 *)(puVar1 + 0x5c0) = in_stack_00001168;
  *(undefined8 *)(puVar1 + 0x5c8) = in_stack_00000950;
  *(undefined8 *)(puVar1 + 0x5d0) = in_stack_00000948;
  *(undefined8 *)(puVar1 + 0x5d8) = in_stack_00001948;
  *(undefined8 *)(puVar1 + 0x5e0) = in_stack_00000898;
  *(undefined8 *)(puVar1 + 0x5e8) = in_stack_000008a0;
  *(undefined8 *)(puVar1 + 0x5f0) = in_stack_00001120;
  *(undefined8 *)(puVar1 + 0x5f8) = in_stack_000013c8;
  *(undefined8 *)(puVar1 + 0x600) = in_stack_000011d0;
  *(undefined8 *)(puVar1 + 0x608) = in_stack_000011c8;
  *(undefined8 *)(puVar1 + 0x610) = in_stack_000018c0;
  *(undefined8 *)(puVar1 + 0x618) = in_stack_000012e0;
  *(undefined8 *)(puVar1 + 0x620) = param_36;
  *(undefined8 *)(puVar1 + 0x628) = in_stack_00001398;
  *(undefined8 *)(puVar1 + 0x630) = in_stack_000014e8;
  *(undefined8 *)(puVar1 + 0x638) = in_stack_00000978;
  *(undefined8 *)(puVar1 + 0x640) = param_30;
  *(undefined8 *)(puVar1 + 0x648) = in_stack_00000988;
  *(undefined8 *)(puVar1 + 0x650) = in_stack_000016c0;
  *(undefined8 *)(puVar1 + 0x658) = in_stack_00001160;
  *(undefined8 *)(puVar1 + 0x660) = in_stack_00000a48;
  *(undefined8 *)(puVar1 + 0x668) = in_stack_000018c8;
  *(undefined8 *)(puVar1 + 0x670) = in_stack_00000838;
  *(undefined8 *)(puVar1 + 0x678) = param_13;
  *(undefined8 *)(puVar1 + 0x680) = in_stack_00000610;
  *(undefined8 *)(puVar1 + 0x688) = in_stack_00001938;
  *(undefined8 *)(puVar1 + 0x690) = in_stack_00001410;
  *(undefined8 *)(puVar1 + 0x698) = in_stack_000018d0;
  *(undefined8 *)(puVar1 + 0x6a0) = in_stack_00001368;
  *(undefined8 *)(puVar1 + 0x6a8) = in_stack_000017e8;
  *(undefined8 *)(puVar1 + 0x6b0) = param_26;
  *(undefined8 *)(puVar1 + 0x6b8) = param_57;
  *(undefined8 *)(puVar1 + 0x6c0) = in_stack_00000710;
  *(undefined8 *)(puVar1 + 0x6c8) = in_stack_00000718;
  *(undefined8 *)(puVar1 + 0x6d0) = in_stack_00000738;
  *(undefined8 *)(puVar1 + 0x6d8) = in_stack_00000750;
  *(undefined8 *)(puVar1 + 0x6e0) = in_stack_000017c0;
  *(undefined8 *)(puVar1 + 0x6e8) = in_stack_000018e0;
  *(undefined8 *)(puVar1 + 0x6f0) = param_59;
  *(undefined8 *)(puVar1 + 0x6f8) = param_63;
  *(undefined8 *)(puVar1 + 0x700) = in_stack_00000818;
  *(undefined8 *)(puVar1 + 0x708) = in_stack_000008b0;
  *(undefined8 *)(puVar1 + 0x710) = in_stack_00001780;
  *(undefined8 *)(puVar1 + 0x718) = param_69;
  *(undefined8 *)(puVar1 + 0x720) = in_stack_00001228;
  *(undefined8 *)(puVar1 + 0x728) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x730) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x738) = in_stack_000004c0;
  *(undefined8 *)(puVar1 + 0x740) = in_stack_000006b8;
  *(undefined8 *)(puVar1 + 0x748) = in_stack_00001840;
  *(undefined8 *)(puVar1 + 0x750) = in_stack_00001950;
  *(undefined8 *)(puVar1 + 0x758) = in_stack_00001940;
  *(undefined8 *)(puVar1 + 0x760) = in_stack_00000bb0;
  *(undefined8 *)(puVar1 + 0x768) = param_29;
  *(undefined8 *)(puVar1 + 0x770) = param_70;
  *(undefined8 *)(puVar1 + 0x778) = in_stack_000012a0;
  *(undefined8 *)(puVar1 + 0x780) = in_stack_00000bc8;
  *(undefined8 *)(puVar1 + 0x788) = in_stack_00001138;
  *(undefined8 *)(puVar1 + 0x790) = param_7;
  *(undefined8 *)(puVar1 + 0x798) = param_60;
  *(undefined8 *)(puVar1 + 0x7a0) = in_stack_00001578;
  *(undefined8 *)(puVar1 + 0x7a8) = in_stack_00001778;
  *(undefined8 *)(puVar1 + 0x7b0) = in_stack_00001218;
  *(undefined8 *)(puVar1 + 0x7b8) = in_stack_000012b0;
  *(undefined8 *)(puVar1 + 0x7c0) = in_stack_000014f8;
  *(undefined8 *)(puVar1 + 0x7c8) = in_stack_00000a50;
  *(undefined8 *)(puVar1 + 2000) = in_stack_00000b30;
  *(undefined8 *)(puVar1 + 0x7e8) = in_stack_00000d28;
  *(undefined8 *)(puVar1 + 0x11b0) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x11b8) = in_stack_000004a0;
  *(undefined8 *)(puVar1 + 0x11c0) = in_stack_00000550;
  *(undefined8 *)(puVar1 + 0x11c8) = in_stack_00000618;
  *(undefined8 *)(puVar1 + 0x11d0) = in_stack_00000a78;
  *(undefined8 *)(puVar1 + 0x11d8) = in_stack_00000d98;
  *(undefined8 *)(puVar1 + 0x1180) = in_stack_00000d60;
  *(undefined8 *)(puVar1 + 0x1188) = in_stack_00000de0;
  *(undefined8 *)(puVar1 + 0x1190) = in_stack_00000e00;
  *(undefined8 *)(puVar1 + 0x1198) = in_stack_00001580;
  *(undefined8 *)(puVar1 + 0x11a0) = in_stack_00001640;
  *(undefined8 *)(puVar1 + 0x11a8) = in_stack_00001878;
  *(undefined8 *)(puVar1 + 0x1150) = param_44;
  *(undefined8 *)(puVar1 + 0x1158) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x1160) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x1168) = in_stack_00000730;
  *(undefined8 *)(puVar1 + 0x1170) = in_stack_00000ca0;
  *(undefined8 *)(puVar1 + 0x1178) = in_stack_00000cc8;
  *(undefined8 *)(puVar1 + 0x1120) = param_18;
  *(undefined8 *)(puVar1 + 0x1128) = in_stack_000004d0;
  *(undefined8 *)(puVar1 + 0x1130) = in_stack_00000e18;
  *(undefined8 *)(puVar1 + 0x1138) = param_19;
  *(undefined8 *)(puVar1 + 0x1140) = param_20;
  *(undefined8 *)(puVar1 + 0x1148) = param_42;
  *(undefined8 *)(puVar1 + 0x10f0) = in_stack_000012d0;
  *(undefined8 *)(puVar1 + 0x10f8) = in_stack_00001420;
  *(undefined8 *)(puVar1 + 0x1100) = param_25;
  *(undefined8 *)(puVar1 + 0x1108) = in_stack_00000510;
  *(undefined8 *)(puVar1 + 0x1110) = param_6;
  *(undefined8 *)(puVar1 + 0x1118) = param_9;
  *(undefined8 *)(puVar1 + 0x10c0) = in_stack_00001650;
  *(undefined8 *)(puVar1 + 0x10c8) = in_stack_00001688;
  *(undefined8 *)(puVar1 + 0x10d0) = in_stack_00000508;
  *(undefined8 *)(puVar1 + 0x10d8) = in_stack_00000ca8;
  *(undefined8 *)(puVar1 + 0x10e0) = in_stack_00001388;
  *(undefined8 *)(puVar1 + 0x10e8) = param_17;
  *(undefined8 *)(puVar1 + 0x1090) = in_stack_000017b0;
  *(undefined8 *)(puVar1 + 0x1098) = in_stack_00000640;
  *(undefined8 *)(puVar1 + 0x10a0) = in_stack_00000858;
  *(undefined8 *)(puVar1 + 0x10a8) = in_stack_000010b8;
  *(undefined8 *)(puVar1 + 0x10b0) = in_stack_000010e0;
  *(undefined8 *)(puVar1 + 0x10b8) = in_stack_000011a0;
  *(undefined8 *)(puVar1 + 0x1060) = in_stack_00000bf0;
  *(undefined8 *)(puVar1 + 0x1068) = in_stack_00000d08;
  *(undefined8 *)(puVar1 + 0x1070) = in_stack_00000d18;
  *(undefined8 *)(puVar1 + 0x1078) = in_stack_00001190;
  *(undefined8 *)(puVar1 + 0x1080) = in_stack_000012b8;
  *(undefined8 *)(puVar1 + 0x1088) = in_stack_00001480;
  *(undefined8 *)(puVar1 + 0x1030) = in_stack_00000568;
  *(undefined8 *)(puVar1 + 0x1038) = in_stack_000005d8;
  *(undefined8 *)(puVar1 + 0x1040) = in_stack_000006a0;
  *(undefined8 *)(puVar1 + 0x1048) = in_stack_00000788;
  *(undefined8 *)(puVar1 + 0x1050) = in_stack_000008c8;
  *(undefined8 *)(puVar1 + 0x1058) = in_stack_00000ad0;
  *(undefined8 *)(puVar1 + 0x1000) = in_stack_000015a8;
  *(undefined8 *)(puVar1 + 0x1008) = in_stack_00000890;
  *(undefined8 *)(puVar1 + 0x1010) = param_4;
  *(undefined8 *)(puVar1 + 0x1018) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x1020) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x1028) = in_stack_000004f8;
  *(undefined8 *)(puVar1 + 0xfd0) = in_stack_00001338;
  *(undefined8 *)(puVar1 + 0xfd8) = in_stack_00001340;
  *(undefined8 *)(puVar1 + 0xfe0) = in_stack_00001350;
  *(undefined8 *)(puVar1 + 0xfe8) = in_stack_00001428;
  *(undefined8 *)(puVar1 + 0xff0) = in_stack_00001590;
  *(undefined8 *)(puVar1 + 0xff8) = in_stack_00001598;
  *(undefined8 *)(puVar1 + 4000) = in_stack_00001110;
  *(undefined8 *)(puVar1 + 0xfa8) = in_stack_00001238;
  *(undefined8 *)(puVar1 + 0xfb0) = in_stack_00001278;
  *(undefined8 *)(puVar1 + 0xfb8) = in_stack_00001290;
  *(undefined8 *)(puVar1 + 0xfc0) = in_stack_000012c8;
  *(undefined8 *)(puVar1 + 0xfc8) = in_stack_000012d8;
  *(undefined8 *)(puVar1 + 0xf70) = in_stack_00000e08;
  *(undefined8 *)(puVar1 + 0xf78) = in_stack_00000e40;
  *(undefined8 *)(puVar1 + 0xf80) = in_stack_00000ed8;
  *(undefined8 *)(puVar1 + 0xf88) = in_stack_00000ef0;
  *(undefined8 *)(puVar1 + 0xf90) = in_stack_00000f18;
  *(undefined8 *)(puVar1 + 0xf98) = in_stack_00001108;
  *(undefined8 *)(puVar1 + 0xf40) = in_stack_00000be0;
  *(undefined8 *)(puVar1 + 0xf48) = in_stack_00000bf8;
  *(undefined8 *)(puVar1 + 0xf50) = in_stack_00000c68;
  *(undefined8 *)(puVar1 + 0xf58) = in_stack_00000c88;
  *(undefined8 *)(puVar1 + 0xf60) = in_stack_00000cc0;
  *(undefined8 *)(puVar1 + 0xf68) = in_stack_00000de8;
  *(undefined8 *)(puVar1 + 0xf10) = in_stack_000004f0;
  *(undefined8 *)(puVar1 + 0xf18) = in_stack_000005a0;
  *(undefined8 *)(puVar1 + 0xf20) = in_stack_00000658;
  *(undefined8 *)(puVar1 + 0xf28) = in_stack_000007d8;
  *(undefined8 *)(puVar1 + 0xf30) = in_stack_000007f8;
  *(undefined8 *)(puVar1 + 0xf38) = in_stack_00000a68;
  *(undefined8 *)(puVar1 + 0xee0) = in_stack_00000a00;
  *(undefined8 *)(puVar1 + 0xee8) = in_stack_000018b8;
  *(undefined8 *)(puVar1 + 0xef0) = in_stack_000014b0;
  *(undefined8 *)(puVar1 + 0xef8) = param_35;
  *(undefined8 *)(puVar1 + 0xf00) = param_47;
  *(undefined8 *)(puVar1 + 0xf08) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0xeb0) = in_stack_00000e48;
  *(undefined8 *)(puVar1 + 0xeb8) = in_stack_000014a8;
  *(undefined8 *)(puVar1 + 0xec0) = in_stack_000004d8;
  *(undefined8 *)(puVar1 + 0xec8) = param_11;
  *(undefined8 *)(puVar1 + 0xed0) = in_stack_00001500;
  *(undefined8 *)(puVar1 + 0xed8) = in_stack_000014f0;
  *(undefined8 *)(puVar1 + 0xe80) = param_10;
  *(undefined8 *)(puVar1 + 0xe88) = param_12;
  *(undefined8 *)(puVar1 + 0xe90) = param_23;
  *(undefined8 *)(puVar1 + 0xe98) = param_24;
  *(undefined8 *)(puVar1 + 0xea0) = in_stack_00000540;
  *(undefined8 *)(puVar1 + 0xea8) = in_stack_000006c8;
  *(undefined8 *)(puVar1 + 0xe50) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 0xe58) = in_stack_00001820;
  *(undefined8 *)(puVar1 + 0xe60) = in_stack_00000c18;
  *(undefined8 *)(puVar1 + 0xe68) = in_stack_00000e30;
  *(undefined8 *)(puVar1 + 0xe70) = in_stack_00000eb0;
  *(undefined8 *)(puVar1 + 0xe78) = in_stack_00001318;
  *(undefined8 *)(puVar1 + 0xe20) = in_stack_00001930;
  *(undefined8 *)(puVar1 + 0xe28) = in_stack_00001968;
  *(undefined8 *)(puVar1 + 0xe30) = in_stack_00001970;
  *(undefined8 *)(puVar1 + 0xe38) = in_stack_00001978;
  *(undefined8 *)(puVar1 + 0xe40) = in_stack_00001828;
  *(undefined8 *)(puVar1 + 0xe48) = in_stack_00001260;
  *(undefined8 *)(puVar1 + 0xdf0) = in_stack_00000a60;
  *(undefined8 *)(puVar1 + 0xdf8) = in_stack_000016d0;
  *(undefined8 *)(puVar1 + 0xe00) = in_stack_00000910;
  *(undefined8 *)(puVar1 + 0xe08) = in_stack_00001058;
  *(undefined8 *)(puVar1 + 0xe10) = in_stack_00000598;
  *(undefined8 *)(puVar1 + 0xe18) = in_stack_000012f0;
  *(undefined8 *)(puVar1 + 0xdc0) = in_stack_000007c8;
  *(undefined8 *)(puVar1 + 0xdc8) = in_stack_00001430;
  *(undefined8 *)(puVar1 + 0xdd0) = in_stack_000004b0;
  *(undefined8 *)(puVar1 + 0xdd8) = in_stack_00001990;
  *(undefined8 *)(puVar1 + 0xde0) = in_stack_00000a88;
  *(undefined8 *)(puVar1 + 0xde8) = in_stack_00000e68;
  *(undefined8 *)(puVar1 + 0xd90) = in_stack_00000b20;
  *(undefined8 *)(puVar1 + 0xd98) = param_28;
  *(undefined8 *)(puVar1 + 0xda0) = in_stack_00000570;
  *(undefined8 *)(puVar1 + 0xda8) = in_stack_000009f0;
  *(undefined8 *)(puVar1 + 0xdb0) = in_stack_00001178;
  *(undefined8 *)(puVar1 + 0xdb8) = in_stack_000007b8;
  *(undefined8 *)(puVar1 + 0xd60) = in_stack_00000c50;
  *(undefined8 *)(puVar1 + 0xd68) = param_34;
  *(undefined8 *)(puVar1 + 0xd70) = in_stack_00001020;
  *(undefined8 *)(puVar1 + 0xd78) = in_stack_00000fa0;
  *(undefined8 *)(puVar1 + 0xd80) = in_stack_00000ff0;
  *(undefined8 *)(puVar1 + 0xd88) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0xd30) = in_stack_00000fc8;
  *(undefined8 *)(puVar1 + 0xd38) = in_stack_00000928;
  *(undefined8 *)(puVar1 + 0xd40) = in_stack_000013f0;
  *(undefined8 *)(puVar1 + 0xd48) = in_stack_00000e80;
  *(undefined8 *)(puVar1 + 0xd50) = in_stack_00000e98;
  *(undefined8 *)(puVar1 + 0xd58) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0xd00) = in_stack_00001620;
  *(undefined8 *)(puVar1 + 0xd08) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0xd10) = in_stack_000006a8;
  *(undefined8 *)(puVar1 + 0xd18) = in_stack_00000848;
  *(undefined8 *)(puVar1 + 0xd20) = in_stack_00000600;
  *(undefined8 *)(puVar1 + 0xd28) = in_stack_00000f50;
  *(undefined8 *)(puVar1 + 0xcd0) = in_stack_00000d30;
  *(undefined8 *)(puVar1 + 0xcd8) = in_stack_00000c78;
  *(undefined8 *)(puVar1 + 0xce0) = in_stack_000006b0;
  *(undefined8 *)(puVar1 + 0xce8) = in_stack_00000dd8;
  *(undefined8 *)(puVar1 + 0xcf0) = param_27;
  *(undefined8 *)(puVar1 + 0xcf8) = in_stack_00001608;
  *(undefined8 *)(puVar1 + 0xca0) = in_stack_00000f40;
  *(undefined8 *)(puVar1 + 0xca8) = in_stack_00000f48;
  *(undefined8 *)(puVar1 + 0xcb0) = in_stack_000013b8;
  *(undefined8 *)(puVar1 + 0xcb8) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0xcc0) = in_stack_00000bc0;
  *(undefined8 *)(puVar1 + 0xcc8) = in_stack_00000d68;
  *(undefined8 *)(puVar1 + 0xc70) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0xc78) = in_stack_00000b88;
  *(undefined8 *)(puVar1 + 0xc80) = in_stack_00000c60;
  *(undefined8 *)(puVar1 + 0xc88) = in_stack_00000cf8;
  *(undefined8 *)(puVar1 + 0xc90) = in_stack_000007d0;
  *(undefined8 *)(puVar1 + 0xc98) = in_stack_00000828;
  *(undefined8 *)(puVar1 + 0xc40) = in_stack_00000dc0;
  *(undefined8 *)(puVar1 + 0xc48) = in_stack_00001678;
  *(undefined8 *)(puVar1 + 0xc50) = in_stack_000017f0;
  *(undefined8 *)(puVar1 + 0xc58) = param_62;
  *(undefined8 *)(puVar1 + 0xc60) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0xc68) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0xc10) = in_stack_000011c0;
  *(undefined8 *)(puVar1 + 0xc18) = in_stack_000013e0;
  *(undefined8 *)(puVar1 + 0xc20) = in_stack_000014c0;
  *(undefined8 *)(puVar1 + 0xc28) = param_53;
  *(undefined8 *)(puVar1 + 0xc30) = in_stack_00000500;
  *(undefined8 *)(puVar1 + 0xc38) = in_stack_000005b8;
  *(undefined8 *)(puVar1 + 0xbe0) = in_stack_00000930;
  *(undefined8 *)(puVar1 + 0xbe8) = in_stack_000015f0;
  *(undefined8 *)(puVar1 + 0xbf0) = in_stack_000013d8;
  *(undefined8 *)(puVar1 + 0xbf8) = in_stack_00001130;
  *(undefined8 *)(puVar1 + 0xc00) = in_stack_00001558;
  *(undefined8 *)(puVar1 + 0xc08) = in_stack_00000aa8;
  *(undefined8 *)(puVar1 + 0xbb0) = in_stack_00000b28;
  *(undefined8 *)(puVar1 + 3000) = in_stack_00000408;
  *(undefined8 *)(puVar1 + 0xbc0) = in_stack_000012f8;
  *(undefined8 *)(puVar1 + 0xbc8) = in_stack_00000440;
  *(undefined8 *)(puVar1 + 0xbd0) = param_3;
  *(undefined8 *)(puVar1 + 0xbd8) = in_stack_00000900;
  *(undefined8 *)(puVar1 + 0xb80) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0xb88) = param_8;
  *(undefined8 *)(puVar1 + 0xb90) = param_14;
  *(undefined8 *)(puVar1 + 0xb98) = param_5;
  *(undefined8 *)(puVar1 + 0xba0) = in_stack_00001860;
  *(undefined8 *)(puVar1 + 0xba8) = in_stack_00000d78;
  *(undefined8 *)(puVar1 + 0xb50) = in_stack_000005e8;
  *(undefined8 *)(puVar1 + 0xb58) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 0xb60) = in_stack_00000a98;
  *(undefined8 *)(puVar1 + 0xb68) = in_stack_00001768;
  *(undefined8 *)(puVar1 + 0xb70) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0xb78) = in_stack_00001760;
  *(undefined8 *)(puVar1 + 0xb20) = in_stack_00000d40;
  *(undefined8 *)(puVar1 + 0xb28) = in_stack_000009a8;
  *(undefined8 *)(puVar1 + 0xb30) = in_stack_000010d0;
  *(undefined8 *)(puVar1 + 0xb38) = in_stack_00001308;
  *(undefined8 *)(puVar1 + 0xb40) = in_stack_000014d0;
  *(undefined8 *)(puVar1 + 0xb48) = in_stack_00001570;
  *(undefined8 *)(puVar1 + 0xaf0) = param_33;
  *(undefined8 *)(puVar1 + 0xaf8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0xb00) = in_stack_000004b8;
  *(undefined8 *)(puVar1 + 0xb08) = in_stack_00000908;
  *(undefined8 *)(puVar1 + 0xb10) = in_stack_00000920;
  *(undefined8 *)(puVar1 + 0xb18) = in_stack_00000970;
  *(undefined8 *)(puVar1 + 0xac0) = in_stack_00001468;
  *(undefined8 *)(puVar1 + 0xac8) = in_stack_000011e0;
  *(undefined8 *)(puVar1 + 0xad0) = in_stack_000011f0;
  *(undefined8 *)(puVar1 + 0xad8) = in_stack_00000608;
  *(undefined8 *)(puVar1 + 0xae0) = in_stack_000008a8;
  *(undefined8 *)(puVar1 + 0xae8) = in_stack_000018f8;
  *(undefined8 *)(puVar1 + 0xa90) = in_stack_00000c20;
  *(undefined8 *)(puVar1 + 0xa98) = in_stack_00000f60;
  *(undefined8 *)(puVar1 + 0xaa0) = in_stack_00000ff8;
  *(undefined8 *)(puVar1 + 0xaa8) = in_stack_00001328;
  *(undefined8 *)(puVar1 + 0xab0) = in_stack_00000428;
  *(undefined8 *)(puVar1 + 0xab8) = in_stack_00001488;
  *(undefined8 *)(puVar1 + 0xa60) = in_stack_000005f0;
  *(undefined8 *)(puVar1 + 0xa68) = in_stack_00000fd8;
  *(undefined8 *)(puVar1 + 0xa70) = in_stack_00001028;
  *(undefined8 *)(puVar1 + 0xa78) = in_stack_00001008;
  *(undefined8 *)(puVar1 + 0xa80) = in_stack_00001000;
  *(undefined8 *)(puVar1 + 0xa88) = in_stack_00001448;
  *(undefined8 *)(puVar1 + 0xa30) = in_stack_00000cb8;
  *(undefined8 *)(puVar1 + 0xa38) = in_stack_000008c0;
  *(undefined8 *)(puVar1 + 0xa40) = in_stack_00000ce8;
  *(undefined8 *)(puVar1 + 0xa48) = in_stack_00000e88;
  *(undefined8 *)(puVar1 + 0xa50) = in_stack_000005f8;
  *(undefined8 *)(puVar1 + 0xa58) = in_stack_00000f10;
  *(undefined8 *)(puVar1 + 0xa00) = in_stack_00001958;
  *(undefined8 *)(puVar1 + 0xa08) = in_stack_00000cb0;
  *(undefined8 *)(puVar1 + 0xa10) = in_stack_00000cd8;
  *(undefined8 *)(puVar1 + 0xa18) = in_stack_00000cf0;
  *(undefined8 *)(puVar1 + 0xa20) = in_stack_00000d20;
  *(undefined8 *)(puVar1 + 0xa28) = in_stack_00001048;
  *(undefined8 *)(puVar1 + 0x9d0) = in_stack_00000c08;
  *(undefined8 *)(puVar1 + 0x9d8) = in_stack_00000448;
  *(undefined8 *)(puVar1 + 0x9e0) = in_stack_000010f0;
  *(undefined8 *)(puVar1 + 0x9e8) = in_stack_00000a18;
  *(undefined8 *)(puVar1 + 0x9f0) = in_stack_00000b80;
  *(undefined8 *)(puVar1 + 0x9f8) = param_51;
  *(undefined8 *)(puVar1 + 0x9a0) = in_stack_000007e8;
  *(undefined8 *)(puVar1 + 0x9a8) = in_stack_00000da8;
  *(undefined8 *)(puVar1 + 0x9b0) = in_stack_00000940;
  *(undefined8 *)(puVar1 + 0x9b8) = param_1;
  *(undefined8 *)(puVar1 + 0x9c0) = in_stack_00001960;
  *(undefined8 *)(puVar1 + 0x9c8) = in_stack_000009d8;
  *(undefined8 *)(puVar1 + 0x970) = in_stack_00001078;
  *(undefined8 *)(puVar1 + 0x978) = in_stack_00001070;
  *(undefined8 *)(puVar1 + 0x980) = in_stack_00000d48;
  *(undefined8 *)(puVar1 + 0x988) = in_stack_000007e0;
  *(undefined8 *)(puVar1 + 0x990) = in_stack_000007f0;
  *(undefined8 *)(puVar1 + 0x998) = in_stack_00000a70;
  *(undefined8 *)(puVar1 + 0x940) = in_stack_00000a90;
  *(undefined8 *)(puVar1 + 0x948) = in_stack_000013f8;
  *(undefined8 *)(puVar1 + 0x950) = in_stack_00001740;
  *(undefined8 *)(puVar1 + 0x958) = in_stack_00001708;
  *(undefined8 *)(puVar1 + 0x960) = in_stack_00000b38;
  *(undefined8 *)(puVar1 + 0x968) = in_stack_00001320;
  *(undefined8 *)(puVar1 + 0x910) = in_stack_00000528;
  *(undefined8 *)(puVar1 + 0x918) = in_stack_000014e0;
  *(undefined8 *)(puVar1 + 0x920) = in_stack_00001758;
  *(undefined8 *)(puVar1 + 0x928) = in_stack_00001710;
  *(undefined8 *)(puVar1 + 0x930) = in_stack_00001718;
  *(undefined8 *)(puVar1 + 0x938) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x8e0) = in_stack_00000bd0;
  *(undefined8 *)(puVar1 + 0x8e8) = in_stack_00001858;
  *(undefined8 *)(puVar1 + 0x8f0) = in_stack_00001908;
  *(undefined8 *)(puVar1 + 0x8f8) = in_stack_000015a0;
  *(undefined8 *)(puVar1 + 0x900) = in_stack_00001230;
  *(undefined8 *)(puVar1 + 0x908) = param_52;
  *(undefined8 *)(puVar1 + 0x8b0) = in_stack_00000588;
  *(undefined8 *)(puVar1 + 0x8b8) = in_stack_00001140;
  *(undefined8 *)(puVar1 + 0x8c0) = in_stack_00001690;
  *(undefined8 *)(puVar1 + 0x8c8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x8d0) = in_stack_000014d8;
  *(undefined8 *)(puVar1 + 0x8d8) = in_stack_00000a80;
  *(undefined8 *)(puVar1 + 0x880) = in_stack_00001750;
  *(undefined8 *)(puVar1 + 0x888) = in_stack_00001900;
  *(undefined8 *)(puVar1 + 0x890) = in_stack_00001980;
  *(undefined8 *)(puVar1 + 0x898) = in_stack_00000c48;
  *(undefined8 *)(puVar1 + 0x8a0) = in_stack_00000580;
  *(undefined8 *)(puVar1 + 0x8a8) = in_stack_00000df0;
  *(undefined8 *)(puVar1 + 0x850) = in_stack_000018e8;
  *(undefined8 *)(puVar1 + 0x858) = in_stack_00000f78;
  *(undefined8 *)(puVar1 + 0x860) = in_stack_000014a0;
  *(undefined8 *)(puVar1 + 0x868) = in_stack_000016e8;
  *(undefined8 *)(puVar1 + 0x870) = in_stack_00001270;
  *(undefined8 *)(puVar1 + 0x878) = in_stack_00000c38;
  *(undefined8 *)(puVar1 + 0x820) = in_stack_00001170;
  *(undefined8 *)(puVar1 + 0x828) = in_stack_00001148;
  *(undefined8 *)(puVar1 + 0x830) = in_stack_00000690;
  *(undefined8 *)(puVar1 + 0x838) = in_stack_000008d0;
  *(undefined8 *)(puVar1 + 0x840) = in_stack_00001188;
  *(undefined8 *)(puVar1 + 0x848) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 0x7f0) = in_stack_000005e0;
  *(undefined8 *)(puVar1 + 0x7f8) = in_stack_00000ac0;
  *(undefined8 *)(puVar1 + 0x800) = in_stack_00001358;
  *(undefined8 *)(puVar1 + 0x808) = in_stack_000016b8;
  *(undefined8 *)(puVar1 + 0x810) = in_stack_00000680;
  *(undefined8 *)(puVar1 + 0x818) = in_stack_000009e0;
  *(undefined8 *)(puVar1 + 0x7d8) = in_stack_000015d0;
  *(undefined8 *)(puVar1 + 0x7e0) = in_stack_00000548;
  *(undefined8 *)(puVar1 + 0x11e0) = in_stack_00000da0;
  *(undefined8 *)(puVar1 + 0x11f0) = in_stack_00000ec0;
  *(undefined8 *)(puVar1 + 0x11f8) = in_stack_00000fb8;
  *(undefined8 *)(puVar1 + 0x1200) = in_stack_00001098;
  *(undefined8 *)(puVar1 + 0x1208) = in_stack_00001610;
  *(undefined8 *)(puVar1 + 0x1210) = in_stack_00001630;
  *(undefined8 *)(puVar1 + 0x1218) = in_stack_00001818;
  *(undefined8 *)(puVar1 + 0x1220) = param_46;
  *(undefined8 *)(puVar1 + 0x1228) = in_stack_000009b8;
  *(undefined8 *)(puVar1 + 0x1230) = in_stack_000009e8;
  *(undefined8 *)(puVar1 + 0x1238) = in_stack_00000a40;
  *(undefined8 *)(puVar1 + 0x1240) = in_stack_00000c10;
  *(undefined8 *)(puVar1 + 0x1248) = in_stack_00001050;
  *(undefined8 *)(puVar1 + 0x1250) = in_stack_00001370;
  *(undefined8 *)(puVar1 + 0x1258) = in_stack_00001730;
  *(undefined8 *)(puVar1 + 0x1260) = in_stack_00001800;
  *(undefined8 *)(puVar1 + 0x1268) = in_stack_00001808;
  *(undefined8 *)(puVar1 + 0x1270) = in_stack_000018f0;
  *(undefined8 *)(puVar1 + 0x1278) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x1280) = in_stack_00001018;
  *(undefined8 *)(puVar1 + 0x1288) = param_39;
  *(undefined8 *)(puVar1 + 0x1290) = param_43;
  *(undefined8 *)(puVar1 + 0x1298) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x12a0) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x12a8) = in_stack_00000620;
  *(undefined8 *)(puVar1 + 0x12b0) = in_stack_00000630;
  *(undefined8 *)(puVar1 + 0x12b8) = in_stack_00000660;
  *(undefined8 *)(puVar1 + 0x12c0) = in_stack_00000678;
  *(undefined8 *)(puVar1 + 0x12c8) = in_stack_000006e8;
  *(undefined8 *)(puVar1 + 0x12d0) = in_stack_000006f0;
  *(undefined8 *)(puVar1 + 0x12d8) = in_stack_000006f8;
  *(undefined8 *)(puVar1 + 0x12e0) = in_stack_00000708;
  *(undefined8 *)(puVar1 + 0x12e8) = in_stack_00000720;
  *(undefined8 *)(puVar1 + 0x12f0) = in_stack_00000728;
  *(undefined8 *)(puVar1 + 0x12f8) = in_stack_00000740;
  *(undefined8 *)(puVar1 + 0x1300) = in_stack_00000748;
  *(undefined8 *)(puVar1 + 0x1308) = in_stack_00000758;
  *(undefined8 *)(puVar1 + 0x1310) = in_stack_00000990;
  *(undefined8 *)(puVar1 + 0x1318) = in_stack_000009b0;
  *(undefined8 *)(puVar1 + 0x1320) = in_stack_00000af8;
  *(undefined8 *)(puVar1 + 0x1328) = in_stack_00000be8;
  *(undefined8 *)(puVar1 + 0x1330) = in_stack_00000c70;
  *(undefined8 *)(puVar1 + 0x1338) = in_stack_00000c98;
  *(undefined8 *)(puVar1 + 0x1340) = in_stack_00000d10;
  *(undefined8 *)(puVar1 + 0x1348) = in_stack_00000d50;
  *(undefined8 *)(puVar1 + 0x1350) = in_stack_00000dc8;
  *(undefined8 *)(puVar1 + 0x1358) = in_stack_00000dd0;
  *(undefined8 *)(puVar1 + 0x1360) = in_stack_00000df8;
  *(undefined8 *)(puVar1 + 0x1368) = in_stack_00000e10;
  *(undefined8 *)(puVar1 + 0x1370) = in_stack_00001060;
  *(undefined8 *)(puVar1 + 0x1378) = in_stack_00001068;
  *(undefined8 *)(puVar1 + 0x1380) = in_stack_000010a0;
  *(undefined8 *)(puVar1 + 5000) = in_stack_00001180;
  *(undefined8 *)(puVar1 + 0x1390) = in_stack_000012e8;
  *(undefined8 *)(puVar1 + 0x1398) = in_stack_00001300;
  *(undefined8 *)(puVar1 + 0x13a0) = in_stack_00001438;
  *(undefined8 *)(puVar1 + 0x13a8) = in_stack_00001478;
  *(undefined8 *)(puVar1 + 0x13b0) = in_stack_00001540;
  *(undefined8 *)(puVar1 + 0x13b8) = in_stack_000016a8;
  *(undefined8 *)(puVar1 + 0x13c0) = in_stack_00001720;
  *(undefined8 *)(puVar1 + 0x13c8) = in_stack_00001870;
  *(undefined8 *)(puVar1 + 0x13d0) = in_stack_000010f8;
  *(undefined8 *)(puVar1 + 0x13d8) = in_stack_00001418;
  *(undefined8 *)(puVar1 + 0x13e0) = in_stack_00001868;
  *(undefined8 *)(puVar1 + 0x13e8) = param_15;
  *(undefined8 *)(puVar1 + 0x13f0) = in_stack_00001880;
  *(undefined8 *)(puVar1 + 0x13f8) = in_stack_00001830;
  *(undefined8 *)(puVar1 + 0x1400) = in_stack_00001378;
  *(undefined8 *)(puVar1 + 0x1408) = in_stack_00001380;
  *(undefined8 *)(puVar1 + 0x1410) = in_stack_000008f8;
  *(undefined8 *)(puVar1 + 0x1418) = in_stack_00000410;
  *(undefined8 *)(puVar1 + 0x1420) = in_stack_000006e0;
  *(undefined8 *)(puVar1 + 0x1428) = in_stack_000008e8;
  *(undefined8 *)(puVar1 + 0x1430) = in_stack_00000c30;
  *(undefined8 *)(puVar1 + 0x1438) = in_stack_00001520;
  *(undefined8 *)(puVar1 + 0x1440) = in_stack_00001560;
  *(undefined8 *)(puVar1 + 0x1448) = in_stack_00001648;
  *(undefined8 *)(puVar1 + 0x1450) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x1458) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x1460) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x1468) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x1470) = in_stack_000006c0;
  *(undefined8 *)(puVar1 + 0x1478) = in_stack_000006d0;
  *(undefined8 *)(puVar1 + 0x1480) = in_stack_00000fc0;
  *(undefined8 *)(puVar1 + 0x1488) = in_stack_000017c8;
  *(undefined8 *)(puVar1 + 0x1490) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x1498) = in_stack_00001638;
  *(undefined8 *)(puVar1 + 0x14a0) = param_45;
  *(undefined8 *)(puVar1 + 0x14a8) = param_58;
  *(undefined8 *)(puVar1 + 0x14b0) = param_61;
  *(undefined8 *)(puVar1 + 0x14b8) = in_stack_00000498;
  *(undefined8 *)(puVar1 + 0x14c0) = in_stack_000005c8;
  *(undefined8 *)(puVar1 + 0x14c8) = in_stack_00000648;
  *(undefined8 *)(puVar1 + 0x14d0) = in_stack_00000670;
  *(undefined8 *)(puVar1 + 0x14d8) = in_stack_00000b68;
  *(undefined8 *)(puVar1 + 0x14e0) = in_stack_00000b70;
  *(undefined8 *)(puVar1 + 0x14e8) = in_stack_00000b78;
  *(undefined8 *)(puVar1 + 0x14f0) = in_stack_00000d80;
  *(undefined8 *)(puVar1 + 0x14f8) = in_stack_00000db0;
  *(undefined8 *)(puVar1 + 0x1500) = in_stack_00001040;
  *(undefined8 *)(puVar1 + 0x1508) = in_stack_00001080;
  *(undefined8 *)(puVar1 + 0x1510) = in_stack_000010c0;
  *(undefined8 *)(puVar1 + 0x1518) = in_stack_00001220;
  *(undefined8 *)(puVar1 + 0x1520) = in_stack_00001250;
  *(undefined8 *)(puVar1 + 0x1528) = in_stack_00001258;
  *(undefined8 *)(puVar1 + 0x1530) = in_stack_00001330;
  *(undefined8 *)(puVar1 + 0x1538) = in_stack_00001348;
  *(undefined8 *)(puVar1 + 0x1540) = in_stack_000013a0;
  *(undefined8 *)(puVar1 + 0x1548) = in_stack_000013a8;
  *(undefined8 *)(puVar1 + 0x1550) = in_stack_00001470;
  *(undefined8 *)(puVar1 + 0x1558) = in_stack_000015c8;
  *(undefined8 *)(puVar1 + 0x1560) = in_stack_000015e0;
  *(undefined8 *)(puVar1 + 0x1568) = in_stack_00001600;
  *(undefined8 *)(puVar1 + 0x1570) = in_stack_00001618;
  *(undefined8 *)(puVar1 + 0x1578) = in_stack_00001628;
  *(undefined8 *)(puVar1 + 0x1580) = in_stack_00001658;
  *(undefined8 *)(puVar1 + 0x1588) = in_stack_000016f8;
  *(undefined8 *)(puVar1 + 0x1590) = in_stack_00001728;
  *(undefined8 *)(puVar1 + 0x1598) = in_stack_00001918;
  *(undefined8 *)(puVar1 + 0x15a0) = in_stack_00001928;
  *(undefined8 *)(puVar1 + 0x15a8) = in_stack_00000b98;
  *(undefined8 *)(puVar1 + 0x15b0) = in_stack_00000830;
  *(undefined8 *)(puVar1 + 0x15b8) = in_stack_000009a0;
  *(undefined8 *)(puVar1 + 0x15c0) = in_stack_00000520;
  *(undefined8 *)(puVar1 + 0x15c8) = in_stack_00000420;
  *(undefined8 *)(puVar1 + 0x15d0) = in_stack_000014b8;
  *(undefined8 *)(puVar1 + 0x15d8) = in_stack_00000878;
  *(undefined8 *)(puVar1 + 0x15e0) = in_stack_000014c8;
  *(undefined8 *)(puVar1 + 0x15e8) = in_stack_00000628;
  *(undefined8 *)(puVar1 + 0x15f0) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x15f8) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x1600) = in_stack_00000f58;
  *(undefined8 *)(puVar1 + 0x1608) = in_stack_00001010;
  *(undefined8 *)(puVar1 + 0x1610) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x1618) = in_stack_00000f68;
  *(undefined8 *)(puVar1 + 0x1620) = in_stack_00000fe0;
  *(undefined8 *)(puVar1 + 0x1628) = in_stack_000010d8;
  *(undefined8 *)(puVar1 + 0x1630) = in_stack_000009f8;
  *(undefined8 *)(puVar1 + 0x1638) = in_stack_000015f8;
  *(undefined8 *)(puVar1 + 0x1640) = param_68;
  *(undefined8 *)(puVar1 + 0x1648) = in_stack_00000ef8;
  *(undefined8 *)(puVar1 + 0x1650) = in_stack_000013d0;
  *(undefined8 *)(puVar1 + 0x1658) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x1660) = in_stack_00001498;
  *(undefined8 *)(puVar1 + 0x1668) = in_stack_00001460;
  *(undefined8 *)(puVar1 + 0x1670) = in_stack_00000808;
  *(undefined8 *)(puVar1 + 0x1678) = in_stack_00000860;
  *(undefined8 *)(puVar1 + 0x1680) = in_stack_00000868;
  *(undefined8 *)(puVar1 + 0x1688) = in_stack_00000880;
  *(undefined8 *)(puVar1 + 0x1690) = param_55;
  *(undefined8 *)(puVar1 + 0x1698) = param_65;
  *(undefined8 *)(puVar1 + 0x16a0) = param_66;
  *(undefined8 *)(puVar1 + 0x16a8) = param_67;
  *(undefined8 *)(puVar1 + 0x16b0) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x16b8) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x16c0) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x16c8) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x16d0) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x16d8) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x16e0) = in_stack_00000d38;
  *(undefined8 *)(puVar1 + 0x16e8) = in_stack_00000ed0;
  *(undefined8 *)(puVar1 + 0x16f0) = in_stack_00000ee8;
  *(undefined8 *)(puVar1 + 0x16f8) = in_stack_00000f00;
  *(undefined8 *)(puVar1 + 0x1700) = in_stack_00000f28;
  *(undefined8 *)(puVar1 + 0x1708) = in_stack_00000f80;
  *(undefined8 *)(puVar1 + 0x1710) = in_stack_00000f88;
  *(undefined8 *)(puVar1 + 0x1718) = in_stack_00000f90;
  *(undefined8 *)(puVar1 + 0x1720) = in_stack_00000f98;
  *(undefined8 *)(puVar1 + 0x1728) = in_stack_00001198;
  *(undefined8 *)(puVar1 + 0x1730) = in_stack_00001458;
  *(undefined8 *)(puVar1 + 0x1738) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x1740) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x1748) = in_stack_000008e0;
  *(undefined8 *)(puVar1 + 0x1750) = in_stack_00000c58;
  *(undefined8 *)(puVar1 + 0x1758) = in_stack_00000c90;
  *(undefined8 *)(puVar1 + 0x1760) = in_stack_00000cd0;
  *(undefined8 *)(puVar1 + 0x1768) = in_stack_00000ce0;
  *(undefined8 *)(puVar1 + 6000) = in_stack_00000fd0;
  *(undefined8 *)(puVar1 + 0x1778) = in_stack_000012c0;
  *(undefined8 *)(puVar1 + 0x1780) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x1788) = in_stack_00001788;
  *(undefined8 *)(puVar1 + 0x1790) = in_stack_000017b8;
  *(undefined8 *)(puVar1 + 0x1798) = param_32;
  *(undefined8 *)(puVar1 + 0x17a0) = param_37;
  *(undefined8 *)(puVar1 + 0x17a8) = param_38;
  *(undefined8 *)(puVar1 + 0x17b0) = param_40;
  *(undefined8 *)(puVar1 + 0x17b8) = in_stack_00000698;
  *(undefined8 *)(puVar1 + 0x17c0) = in_stack_000007a8;
  *(undefined8 *)(puVar1 + 0x17c8) = in_stack_000007b0;
  *(undefined8 *)(puVar1 + 0x17d0) = in_stack_00000d90;
  *(undefined8 *)(puVar1 + 0x17d8) = in_stack_00001890;
  *(undefined8 *)(puVar1 + 0x17e0) = param_22;
  *(undefined8 *)(puVar1 + 0x17e8) = param_50;
  *(undefined8 *)(puVar1 + 0x17f0) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x17f8) = in_stack_00000770;
  *(undefined8 *)(puVar1 + 0x1800) = in_stack_00000790;
  *(undefined8 *)(puVar1 + 0x1808) = in_stack_00000798;
  *(undefined8 *)(puVar1 + 0x1810) = in_stack_00000b18;
  *(undefined8 *)(puVar1 + 0x1818) = in_stack_00000e38;
  *(undefined8 *)(puVar1 + 0x1820) = in_stack_000010e8;
  *(undefined8 *)(puVar1 + 0x1828) = in_stack_00001200;
  *(undefined8 *)(puVar1 + 0x1830) = in_stack_00001210;
  *(undefined8 *)(puVar1 + 0x1838) = in_stack_000012a8;
  *(undefined8 *)(puVar1 + 0x1840) = in_stack_00001440;
  *(undefined8 *)(puVar1 + 0x1848) = in_stack_00001568;
  *(undefined8 *)(puVar1 + 0x1850) = in_stack_000016e0;
  *(undefined8 *)(puVar1 + 0x1858) = in_stack_00001738;
  *(undefined8 *)(puVar1 + 0x1860) = in_stack_00001790;
  *(undefined8 *)(puVar1 + 0x1868) = in_stack_00001798;
  *(undefined8 *)(puVar1 + 0x1870) = in_stack_000017a0;
  *(undefined8 *)(puVar1 + 0x1878) = in_stack_00001838;
  *(undefined8 *)(puVar1 + 0x1880) = in_stack_000018a0;
  *(undefined8 *)(puVar1 + 0x1888) = in_stack_00001910;
  *(undefined8 *)(puVar1 + 0x1890) = param_54;
  *(undefined8 *)(puVar1 + 0x1898) = in_stack_000017d0;
  *(undefined8 *)(puVar1 + 0x18a0) = in_stack_00000ad8;
  *(undefined8 *)(puVar1 + 0x18a8) = in_stack_00000ab8;
  *(undefined8 *)(puVar1 + 0x18b0) = param_49;
  *(undefined8 *)(puVar1 + 0x18b8) = param_64;
  *(undefined8 *)(puVar1 + 0x18c0) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x18c8) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x18d0) = in_stack_000011f8;
  *(undefined8 *)(puVar1 + 0x18d8) = in_stack_00001748;
  *(undefined8 *)(puVar1 + 0x18e0) = in_stack_000018b0;
  *(undefined8 *)(puVar1 + 0x18e8) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x18f0) = in_stack_00000478;
  *(undefined8 *)(puVar1 + 0x18f8) = in_stack_00001490;
  *(undefined8 *)(puVar1 + 0x1900) = param_41;
  *(undefined8 *)(puVar1 + 0x1908) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x1910) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x1918) = in_stack_00000418;
  *(undefined8 *)(puVar1 + 0x1920) = in_stack_00000468;
  *(undefined8 *)(puVar1 + 0x1928) = in_stack_00000518;
  *(undefined8 *)(puVar1 + 0x1930) = in_stack_00000530;
  *(undefined8 *)(puVar1 + 0x1938) = in_stack_000005b0;
  *(undefined8 *)(puVar1 + 0x1940) = in_stack_000008d8;
  *(undefined8 *)(puVar1 + 0x1948) = in_stack_00000ab0;
  *(undefined8 *)(puVar1 + 0x1950) = in_stack_00000ac8;
  *(undefined8 *)(puVar1 + 0x1958) = in_stack_00000b00;
  *(undefined8 *)(puVar1 + 0x1960) = in_stack_00000b10;
  *(undefined8 *)(puVar1 + 0x1968) = in_stack_00000ba0;
  *(undefined8 *)(puVar1 + 0x1970) = in_stack_00000ba8;
  *(undefined8 *)(puVar1 + 0x1978) = in_stack_00000bb8;
  *(undefined8 *)(puVar1 + 0x1980) = in_stack_00000c80;
  *(undefined8 *)(puVar1 + 0x1988) = in_stack_00000d00;
  *(undefined8 *)(puVar1 + 0x1990) = in_stack_00001390;
  *(undefined8 *)(puVar1 + 0x1998) = in_stack_00001888;
  *(undefined8 *)(puVar1 + 0x19a0) = in_stack_00001898;
  *(undefined8 *)(puVar1 + 0x19a8) = in_stack_000018a8;
  *(undefined8 *)(puVar1 + 0x19b0) = in_stack_00000560;
  *(undefined8 *)(puVar1 + 0x19b8) = in_stack_000015e8;
  *(undefined8 *)(puVar1 + 0x19c0) = in_stack_000009c0;
  *(undefined8 *)(puVar1 + 0x19c8) = in_stack_00000e58;
  *(undefined8 *)(puVar1 + 0x19d0) = param_2;
  *(undefined8 *)(puVar1 + 0x19d8) = in_stack_00000430;
  *(undefined8 *)(puVar1 + 0x19e0) = in_stack_000004a8;
  func_0x000107c6157c(in_stack_00001208);
  func_0x000107c6157c(in_stack_00000578);
  func_0x000107c6157c(in_stack_000015b0);
  func_0x000107c6157c(in_stack_000018d8);
  func_0x000107c6157c(in_stack_00001030);
  func_0x000107c6157c(in_stack_000008b8);
  func_0x000107c6157c(in_stack_00000968);
  func_0x000107c6157c(in_stack_000007c0);
  func_0x000107c6157c(in_stack_00001038);
  func_0x000107c6157c(in_stack_00000768);
  func_0x000107c6157c(in_stack_00000958);
  func_0x000107c6157c(in_stack_00001118);
  func_0x000107c6157c(in_stack_00000a10);
  func_0x000107c6157c(in_stack_00000850);
  func_0x000107c6157c(in_stack_00000810);
  func_0x000107c6157c(in_stack_00000470);
  func_0x000107c6157c(in_stack_000016b0);
  func_0x000107c6157c(in_stack_00000a08);
  func_0x000107c6157c(in_stack_00000a38);
  func_0x000107c6157c(in_stack_00001538);
  func_0x000107c6157c(in_stack_00000aa0);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00001090);
  func_0x000107c6157c(in_stack_000016d8);
  func_0x000107c6157c(in_stack_00001518);
  func_0x000107c6157c(in_stack_00000638);
  func_0x000107c6157c(in_stack_00000650);
  func_0x000107c6157c(in_stack_000004e8);
  func_0x000107c6157c(in_stack_00001408);
  func_0x000107c6157c(in_stack_000010c8);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(in_stack_000015c0);
  func_0x000107c6157c(in_stack_00000668);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_00000b40);
  func_0x000107c6157c(in_stack_00000b60);
  func_0x000107c6157c(in_stack_00000ae0);
  func_0x000107c6157c(in_stack_00001660);
  func_0x000107c6157c(in_stack_000004c8);
  func_0x000107c6157c(in_stack_00000b48);
  func_0x000107c6157c(in_stack_000010b0);
  func_0x000107c6157c(in_stack_000009c8);
  func_0x000107c6157c(in_stack_00001100);
  func_0x000107c6157c(in_stack_00001988);
  func_0x000107c6157c(in_stack_00001920);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000d58);
  func_0x000107c6157c(in_stack_000009d0);
  func_0x000107c6157c(in_stack_00000ea8);
  func_0x000107c6157c(in_stack_00000e78);
  func_0x000107c6157c(in_stack_000016a0);
  func_0x000107c6157c(in_stack_000008f0);
  func_0x000107c6157c(in_stack_00000ea0);
  func_0x000107c6157c(in_stack_00001680);
  func_0x000107c6157c(in_stack_000007a0);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(in_stack_00000ec8);
  func_0x000107c6157c(in_stack_000011a8);
  func_0x000107c6157c(in_stack_000013b0);
  func_0x000107c6157c(in_stack_00000458);
  func_0x000107c6157c(in_stack_00000fe8);
  func_0x000107c6157c(in_stack_00000320);
  func_0x000107c6157c(in_stack_00000378);
  func_0x000107c6157c(in_stack_00000ee0);
  func_0x000107c6157c(in_stack_00000368);
  func_0x000107c6157c(in_stack_00000310);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(in_stack_000003d0);
  func_0x000107c6157c(in_stack_00000300);
  func_0x000107c6157c(in_stack_00000350);
  func_0x000107c6157c(in_stack_00000360);
  func_0x000107c6157c(in_stack_00000f38);
  func_0x000107c6157c(in_stack_000003b8);
  func_0x000107c6157c(in_stack_00000f70);
  func_0x000107c6157c(in_stack_00000f20);
  func_0x000107c6157c(in_stack_00001810);
  func_0x000107c6157c(in_stack_00000460);
  func_0x000107c6157c(in_stack_00000438);
  func_0x000107c6157c(in_stack_000011e8);
  func_0x000107c6157c(in_stack_00000450);
  func_0x000107c6157c(in_stack_00000840);
  func_0x000107c6157c(in_stack_000017a8);
  func_0x000107c6157c(in_stack_000017f8);
  func_0x000107c6157c(in_stack_00000480);
  func_0x000107c6157c(in_stack_00000820);
  func_0x000107c6157c(in_stack_00000870);
  func_0x000107c6157c(in_stack_00000888);
  func_0x000107c6157c(in_stack_00000d70);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(in_stack_00000488);
  func_0x000107c6157c(in_stack_000016f0);
  func_0x000107c6157c(in_stack_000013e8);
  func_0x000107c6157c(in_stack_00001530);
  func_0x000107c6157c(in_stack_00001150);
  func_0x000107c6157c(in_stack_00001088);
  func_0x000107c6157c(in_stack_00000b50);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(in_stack_00001508);
  func_0x000107c6157c(in_stack_00001310);
  func_0x000107c6157c(in_stack_00000490);
  func_0x000107c6157c(in_stack_00001288);
  func_0x000107c6157c(in_stack_000017d8);
  func_0x000107c6157c(in_stack_000017e0);
  func_0x000107c6157c(in_stack_00000800);
  func_0x000107c6157c(in_stack_000004e0);
  func_0x000107c6157c(in_stack_000015b8);
  func_0x000107c6157c(in_stack_00001850);
  func_0x000107c6157c(in_stack_00000590);
  func_0x000107c6157c(in_stack_00001698);
  func_0x000107c6157c(in_stack_00001528);
  func_0x000107c6157c(in_stack_000010a8);
  func_0x000107c6157c(in_stack_00000778);
  func_0x000107c6157c(in_stack_000011d8);
  func_0x000107c6157c(in_stack_00000780);
  func_0x000107c6157c(in_stack_00000c40);
  func_0x000107c6157c(in_stack_00001280);
  func_0x000107c6157c(in_stack_00001548);
  func_0x000107c6157c(in_stack_00001510);
  func_0x000107c6157c(in_stack_00000938);
  func_0x000107c6157c(in_stack_00000918);
  func_0x000107c6157c(in_stack_00001670);
  func_0x000107c6157c(in_stack_00000688);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(in_stack_00000a28);
  func_0x000107c6157c(in_stack_000016c8);
  func_0x000107c6157c(in_stack_00001248);
  func_0x000107c6157c(in_stack_00000e70);
  func_0x000107c6157c(in_stack_00000e28);
  func_0x000107c6157c(in_stack_00000e90);
  func_0x000107c6157c(in_stack_00000ae8);
  func_0x000107c6157c(in_stack_00000538);
  func_0x000107c6157c(in_stack_00001668);
  func_0x000107c6157c(in_stack_000011b0);
  func_0x000107c6157c(in_stack_00000b58);
  func_0x000107c6157c(in_stack_00000558);
  func_0x000107c6157c(in_stack_00000eb8);
  func_0x000107c6157c(in_stack_00000b90);
  func_0x000107c6157c(in_stack_00000b08);
  func_0x000107c6157c(in_stack_00000af0);
  func_0x000107c6157c(in_stack_000015d8);
  func_0x000107c6157c(in_stack_00001848);
  func_0x000107c6157c(in_stack_00000c00);
  func_0x000107c6157c(in_stack_000006d8);
  func_0x000107c6157c(in_stack_00000398);
  func_0x000107c6157c(in_stack_000003d8);
  func_0x000107c6157c(in_stack_00001158);
  func_0x000107c6157c(in_stack_000013c0);
  func_0x000107c6157c(in_stack_00001550);
  func_0x000107c6157c(in_stack_00000f30);
  func_0x000107c6157c(in_stack_00001588);
  func_0x000107c6157c(in_stack_00000a30);
  func_0x000107c6157c(in_stack_00000a20);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(in_stack_00000998);
  func_0x000107c6157c(in_stack_000005d0);
  func_0x000107c6157c(in_stack_00001298);
  func_0x000107c6157c(in_stack_00000e20);
  func_0x000107c6157c(in_stack_00000a58);
  func_0x000107c6157c(in_stack_000005c0);
  func_0x000107c6157c(in_stack_00001360);
  func_0x000107c6157c(in_stack_00000c28);
  func_0x000107c6157c(in_stack_00001770);
  func_0x000107c6157c(in_stack_00000d88);
  func_0x000107c6157c(in_stack_000005a8);
  func_0x000107c6157c(in_stack_00000e50);
  func_0x000107c6157c(in_stack_00000e60);
  func_0x000107c6157c(in_stack_00000960);
  func_0x000107c6157c(in_stack_00000fa8);
  func_0x000107c6157c(in_stack_00000fb0);
  func_0x000107c6157c(in_stack_000011b8);
  func_0x000107c6157c(in_stack_00001700);
  func_0x000107c6157c(in_stack_00001128);
  func_0x000107c6157c(in_stack_00000f08);
  func_0x000107c6157c(in_stack_00001268);
  func_0x000107c6157c(in_stack_00001400);
  func_0x000107c6157c(in_stack_00001240);
  func_0x000107c6157c(in_stack_00000760);
  func_0x000107c6157c(in_stack_00000980);
  func_0x000107c6157c(in_stack_00000700);
  func_0x000107c6157c(in_stack_00000bd8);
  func_0x000107c6157c(in_stack_00001450);
  func_0x000107c6157c(in_stack_00001168);
  func_0x000107c6157c(in_stack_00000950);
  func_0x000107c6157c(in_stack_00000948);
  func_0x000107c6157c(in_stack_00001948);
  func_0x000107c6157c(in_stack_00000898);
  func_0x000107c6157c(in_stack_000008a0);
  func_0x000107c6157c(in_stack_00001120);
  func_0x000107c6157c(in_stack_000013c8);
  func_0x000107c6157c(in_stack_000011d0);
  func_0x000107c6157c(in_stack_000011c8);
  func_0x000107c6157c(in_stack_000018c0);
  func_0x000107c6157c(in_stack_000012e0);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(in_stack_00001398);
  func_0x000107c6157c(in_stack_000014e8);
  func_0x000107c6157c(in_stack_00000978);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(in_stack_00000988);
  func_0x000107c6157c(in_stack_000016c0);
  func_0x000107c6157c(in_stack_00001160);
  func_0x000107c6157c(in_stack_00000a48);
  func_0x000107c6157c(in_stack_000018c8);
  func_0x000107c6157c(in_stack_00000838);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(in_stack_00000610);
  func_0x000107c6157c(in_stack_00001938);
  func_0x000107c6157c(in_stack_00001410);
  func_0x000107c6157c(in_stack_000018d0);
  func_0x000107c6157c(in_stack_00001368);
  func_0x000107c6157c(in_stack_000017e8);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(in_stack_00000710);
  func_0x000107c6157c(in_stack_00000718);
  func_0x000107c6157c(in_stack_00000738);
  func_0x000107c6157c(in_stack_00000750);
  func_0x000107c6157c(in_stack_000017c0);
  func_0x000107c6157c(in_stack_000018e0);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(in_stack_00000818);
  func_0x000107c6157c(in_stack_000008b0);
  func_0x000107c6157c(in_stack_00001780);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(in_stack_00001228);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(in_stack_000003f0);
  func_0x000107c6157c(in_stack_000004c0);
  func_0x000107c6157c(in_stack_000006b8);
  func_0x000107c6157c(in_stack_00001840);
  func_0x000107c6157c(in_stack_00001950);
  func_0x000107c6157c(in_stack_00001940);
  func_0x000107c6157c(in_stack_00000bb0);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(in_stack_000012a0);
  func_0x000107c6157c(in_stack_00000bc8);
  func_0x000107c6157c(in_stack_00001138);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(in_stack_00001578);
  func_0x000107c6157c(in_stack_00001778);
  func_0x000107c6157c(in_stack_00001218);
  func_0x000107c6157c(in_stack_000012b0);
  func_0x000107c6157c(in_stack_000014f8);
  func_0x000107c6157c(in_stack_00000a50);
  func_0x000107c6157c(in_stack_00000b30);
  func_0x000107c6157c(in_stack_000015d0);
  func_0x000107c6157c(in_stack_00000548);
  func_0x000107c6157c(in_stack_00000d28);
  func_0x000107c6157c(in_stack_000005e0);
  func_0x000107c6157c(in_stack_00000ac0);
  func_0x000107c6157c(in_stack_00001358);
  func_0x000107c6157c(in_stack_000016b8);
  func_0x000107c6157c(in_stack_00000680);
  func_0x000107c6157c(in_stack_000009e0);
  func_0x000107c6157c(in_stack_00001170);
  func_0x000107c6157c(in_stack_00001148);
  func_0x000107c6157c(in_stack_00000690);
  func_0x000107c6157c(in_stack_000008d0);
  func_0x000107c6157c(in_stack_00001188);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_000018e8);
  func_0x000107c6157c(in_stack_00000f78);
  func_0x000107c6157c(in_stack_000014a0);
  func_0x000107c6157c(in_stack_000016e8);
  func_0x000107c6157c(in_stack_00001270);
  func_0x000107c6157c(in_stack_00000c38);
  func_0x000107c6157c(in_stack_00001750);
  func_0x000107c6157c(in_stack_00001900);
  func_0x000107c6157c(in_stack_00001980);
  func_0x000107c6157c(in_stack_00000c48);
  func_0x000107c6157c(in_stack_00000580);
  func_0x000107c6157c(in_stack_00000df0);
  func_0x000107c6157c(in_stack_00000588);
  func_0x000107c6157c(in_stack_00001140);
  func_0x000107c6157c(in_stack_00001690);
  func_0x000107c6157c(in_stack_000003a8);
  func_0x000107c6157c(in_stack_000014d8);
  func_0x000107c6157c(in_stack_00000a80);
  func_0x000107c6157c(in_stack_00000bd0);
  func_0x000107c6157c(in_stack_00001858);
  func_0x000107c6157c(in_stack_00001908);
  func_0x000107c6157c(in_stack_000015a0);
  func_0x000107c6157c(in_stack_00001230);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(in_stack_00000528);
  func_0x000107c6157c(in_stack_000014e0);
  func_0x000107c6157c(in_stack_00001758);
  func_0x000107c6157c(in_stack_00001710);
  func_0x000107c6157c(in_stack_00001718);
  func_0x000107c6157c(in_stack_00000370);
  func_0x000107c6157c(in_stack_00000a90);
  func_0x000107c6157c(in_stack_000013f8);
  func_0x000107c6157c(in_stack_00001740);
  func_0x000107c6157c(in_stack_00001708);
  func_0x000107c6157c(in_stack_00000b38);
  func_0x000107c6157c(in_stack_00001320);
  func_0x000107c6157c(in_stack_00001078);
  func_0x000107c6157c(in_stack_00001070);
  func_0x000107c6157c(in_stack_00000d48);
  func_0x000107c6157c(in_stack_000007e0);
  func_0x000107c6157c(in_stack_000007f0);
  func_0x000107c6157c(in_stack_00000a70);
  func_0x000107c6157c(in_stack_000007e8);
  func_0x000107c6157c(in_stack_00000da8);
  func_0x000107c6157c(in_stack_00000940);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(in_stack_00001960);
  func_0x000107c6157c(in_stack_000009d8);
  func_0x000107c6157c(in_stack_00000c08);
  func_0x000107c6157c(in_stack_00000448);
  func_0x000107c6157c(in_stack_000010f0);
  func_0x000107c6157c(in_stack_00000a18);
  func_0x000107c6157c(in_stack_00000b80);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(in_stack_00001958);
  func_0x000107c6157c(in_stack_00000cb0);
  func_0x000107c6157c(in_stack_00000cd8);
  func_0x000107c6157c(in_stack_00000cf0);
  func_0x000107c6157c(in_stack_00000d20);
  func_0x000107c6157c(in_stack_00001048);
  func_0x000107c6157c(in_stack_00000cb8);
  func_0x000107c6157c(in_stack_000008c0);
  func_0x000107c6157c(in_stack_00000ce8);
  func_0x000107c6157c(in_stack_00000e88);
  func_0x000107c6157c(in_stack_000005f8);
  func_0x000107c6157c(in_stack_00000f10);
  func_0x000107c6157c(in_stack_000005f0);
  func_0x000107c6157c(in_stack_00000fd8);
  func_0x000107c6157c(in_stack_00001028);
  func_0x000107c6157c(in_stack_00001008);
  func_0x000107c6157c(in_stack_00001000);
  func_0x000107c6157c(in_stack_00001448);
  func_0x000107c6157c(in_stack_00000c20);
  func_0x000107c6157c(in_stack_00000f60);
  func_0x000107c6157c(in_stack_00000ff8);
  func_0x000107c6157c(in_stack_00001328);
  func_0x000107c6157c(in_stack_00000428);
  func_0x000107c6157c(in_stack_00001488);
  func_0x000107c6157c(in_stack_00001468);
  func_0x000107c6157c(in_stack_000011e0);
  func_0x000107c6157c(in_stack_000011f0);
  func_0x000107c6157c(in_stack_00000608);
  func_0x000107c6157c(in_stack_000008a8);
  func_0x000107c6157c(in_stack_000018f8);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(in_stack_000004b8);
  func_0x000107c6157c(in_stack_00000908);
  func_0x000107c6157c(in_stack_00000920);
  func_0x000107c6157c(in_stack_00000970);
  func_0x000107c6157c(in_stack_00000d40);
  func_0x000107c6157c(in_stack_000009a8);
  func_0x000107c6157c(in_stack_000010d0);
  func_0x000107c6157c(in_stack_00001308);
  func_0x000107c6157c(in_stack_000014d0);
  func_0x000107c6157c(in_stack_00001570);
  func_0x000107c6157c(in_stack_000005e8);
  func_0x000107c6157c(in_stack_000002c8);
  func_0x000107c6157c(in_stack_00000a98);
  func_0x000107c6157c(in_stack_00001768);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(in_stack_00001760);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(in_stack_00001860);
  func_0x000107c6157c(in_stack_00000d78);
  func_0x000107c6157c(in_stack_00000b28);
  func_0x000107c6157c(in_stack_00000408);
  func_0x000107c6157c(in_stack_000012f8);
  func_0x000107c6157c(in_stack_00000440);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(in_stack_00000900);
  func_0x000107c6157c(in_stack_00000930);
  func_0x000107c6157c(in_stack_000015f0);
  func_0x000107c6157c(in_stack_000013d8);
  func_0x000107c6157c(in_stack_00001130);
  func_0x000107c6157c(in_stack_00001558);
  func_0x000107c6157c(in_stack_00000aa8);
  func_0x000107c6157c(in_stack_000011c0);
  func_0x000107c6157c(in_stack_000013e0);
  func_0x000107c6157c(in_stack_000014c0);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(in_stack_00000500);
  func_0x000107c6157c(in_stack_000005b8);
  func_0x000107c6157c(in_stack_00000dc0);
  func_0x000107c6157c(in_stack_00001678);
  func_0x000107c6157c(in_stack_000017f0);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_00000b88);
  func_0x000107c6157c(in_stack_00000c60);
  func_0x000107c6157c(in_stack_00000cf8);
  func_0x000107c6157c(in_stack_000007d0);
  func_0x000107c6157c(in_stack_00000828);
  func_0x000107c6157c(in_stack_00000f40);
  func_0x000107c6157c(in_stack_00000f48);
  func_0x000107c6157c(in_stack_000013b8);
  func_0x000107c6157c(in_stack_000002f0);
  func_0x000107c6157c(in_stack_00000bc0);
  func_0x000107c6157c(in_stack_00000d68);
  func_0x000107c6157c(in_stack_00000d30);
  func_0x000107c6157c(in_stack_00000c78);
  func_0x000107c6157c(in_stack_000006b0);
  func_0x000107c6157c(in_stack_00000dd8);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(in_stack_00001608);
  func_0x000107c6157c(in_stack_00001620);
  func_0x000107c6157c(in_stack_000003c0);
  func_0x000107c6157c(in_stack_000006a8);
  func_0x000107c6157c(in_stack_00000848);
  func_0x000107c6157c(in_stack_00000600);
  func_0x000107c6157c(in_stack_00000f50);
  func_0x000107c6157c(in_stack_00000fc8);
  func_0x000107c6157c(in_stack_00000928);
  func_0x000107c6157c(in_stack_000013f0);
  func_0x000107c6157c(in_stack_00000e80);
  func_0x000107c6157c(in_stack_00000e98);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(in_stack_00000c50);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(in_stack_00001020);
  func_0x000107c6157c(in_stack_00000fa0);
  func_0x000107c6157c(in_stack_00000ff0);
  func_0x000107c6157c(in_stack_000003b0);
  func_0x000107c6157c(in_stack_00000b20);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(in_stack_00000570);
  func_0x000107c6157c(in_stack_000009f0);
  func_0x000107c6157c(in_stack_00001178);
  func_0x000107c6157c(in_stack_000007b8);
  func_0x000107c6157c(in_stack_000007c8);
  func_0x000107c6157c(in_stack_00001430);
  func_0x000107c6157c(in_stack_000004b0);
  func_0x000107c6157c(in_stack_00001990);
  func_0x000107c6157c(in_stack_00000a88);
  func_0x000107c6157c(in_stack_00000e68);
  func_0x000107c6157c(in_stack_00000a60);
  func_0x000107c6157c(in_stack_000016d0);
  func_0x000107c6157c(in_stack_00000910);
  func_0x000107c6157c(in_stack_00001058);
  func_0x000107c6157c(in_stack_00000598);
  func_0x000107c6157c(in_stack_000012f0);
  func_0x000107c6157c(in_stack_00001930);
  func_0x000107c6157c(in_stack_00001968);
  func_0x000107c6157c(in_stack_00001970);
  func_0x000107c6157c(in_stack_00001978);
  func_0x000107c6157c(in_stack_00001828);
  func_0x000107c6157c(in_stack_00001260);
  func_0x000107c6157c(in_stack_00000390);
  func_0x000107c6157c(in_stack_00001820);
  func_0x000107c6157c(in_stack_00000c18);
  func_0x000107c6157c(in_stack_00000e30);
  func_0x000107c6157c(in_stack_00000eb0);
  func_0x000107c6157c(in_stack_00001318);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(in_stack_00000540);
  func_0x000107c6157c(in_stack_000006c8);
  func_0x000107c6157c(in_stack_00000e48);
  func_0x000107c6157c(in_stack_000014a8);
  func_0x000107c6157c(in_stack_000004d8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(in_stack_00001500);
  func_0x000107c6157c(in_stack_000014f0);
  func_0x000107c6157c(in_stack_00000a00);
  func_0x000107c6157c(in_stack_000018b8);
  func_0x000107c6157c(in_stack_000014b0);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(in_stack_000004f0);
  func_0x000107c6157c(in_stack_000005a0);
  func_0x000107c6157c(in_stack_00000658);
  func_0x000107c6157c(in_stack_000007d8);
  func_0x000107c6157c(in_stack_000007f8);
  func_0x000107c6157c(in_stack_00000a68);
  func_0x000107c6157c(in_stack_00000be0);
  func_0x000107c6157c(in_stack_00000bf8);
  func_0x000107c6157c(in_stack_00000c68);
  func_0x000107c6157c(in_stack_00000c88);
  func_0x000107c6157c(in_stack_00000cc0);
  func_0x000107c6157c(in_stack_00000de8);
  func_0x000107c6157c(in_stack_00000e08);
  func_0x000107c6157c(in_stack_00000e40);
  func_0x000107c6157c(in_stack_00000ed8);
  func_0x000107c6157c(in_stack_00000ef0);
  func_0x000107c6157c(in_stack_00000f18);
  func_0x000107c6157c(in_stack_00001108);
  func_0x000107c6157c(in_stack_00001110);
  func_0x000107c6157c(in_stack_00001238);
  func_0x000107c6157c(in_stack_00001278);
  func_0x000107c6157c(in_stack_00001290);
  func_0x000107c6157c(in_stack_000012c8);
  func_0x000107c6157c(in_stack_000012d8);
  func_0x000107c6157c(in_stack_00001338);
  func_0x000107c6157c(in_stack_00001340);
  func_0x000107c6157c(in_stack_00001350);
  func_0x000107c6157c(in_stack_00001428);
  func_0x000107c6157c(in_stack_00001590);
  func_0x000107c6157c(in_stack_00001598);
  func_0x000107c6157c(in_stack_000015a8);
  func_0x000107c6157c(in_stack_00000890);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_000004f8);
  func_0x000107c6157c(in_stack_00000568);
  func_0x000107c6157c(in_stack_000005d8);
  func_0x000107c6157c(in_stack_000006a0);
  func_0x000107c6157c(in_stack_00000788);
  func_0x000107c6157c(in_stack_000008c8);
  func_0x000107c6157c(in_stack_00000ad0);
  func_0x000107c6157c(in_stack_00000bf0);
  func_0x000107c6157c(in_stack_00000d08);
  func_0x000107c6157c(in_stack_00000d18);
  func_0x000107c6157c(in_stack_00001190);
  func_0x000107c6157c(in_stack_000012b8);
  func_0x000107c6157c(in_stack_00001480);
  func_0x000107c6157c(in_stack_000017b0);
  func_0x000107c6157c(in_stack_00000640);
  func_0x000107c6157c(in_stack_00000858);
  func_0x000107c6157c(in_stack_000010b8);
  func_0x000107c6157c(in_stack_000010e0);
  func_0x000107c6157c(in_stack_000011a0);
  func_0x000107c6157c(in_stack_00001650);
  func_0x000107c6157c(in_stack_00001688);
  func_0x000107c6157c(in_stack_00000508);
  func_0x000107c6157c(in_stack_00000ca8);
  func_0x000107c6157c(in_stack_00001388);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(in_stack_000012d0);
  func_0x000107c6157c(in_stack_00001420);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(in_stack_00000510);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(in_stack_000004d0);
  func_0x000107c6157c(in_stack_00000e18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_00000730);
  func_0x000107c6157c(in_stack_00000ca0);
  func_0x000107c6157c(in_stack_00000cc8);
  func_0x000107c6157c(in_stack_00000d60);
  func_0x000107c6157c(in_stack_00000de0);
  func_0x000107c6157c(in_stack_00000e00);
  func_0x000107c6157c(in_stack_00001580);
  func_0x000107c6157c(in_stack_00001640);
  func_0x000107c6157c(in_stack_00001878);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_000004a0);
  func_0x000107c6157c(in_stack_00000550);
  func_0x000107c6157c(in_stack_00000618);
  func_0x000107c6157c(in_stack_00000a78);
  func_0x000107c6157c(in_stack_00000d98);
  func_0x000107c6157c(in_stack_00000da0);
  func_0x000107c6157c(in_stack_00000db8);
  func_0x000107c6157c(in_stack_00000ec0);
  func_0x000107c6157c(in_stack_00000fb8);
  func_0x000107c6157c(in_stack_00001098);
  func_0x000107c6157c(in_stack_00001610);
  func_0x000107c6157c(in_stack_00001630);
  func_0x000107c6157c(in_stack_00001818);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(in_stack_000009b8);
  func_0x000107c6157c(in_stack_000009e8);
  func_0x000107c6157c(in_stack_00000a40);
  func_0x000107c6157c(in_stack_00000c10);
  func_0x000107c6157c(in_stack_00001050);
  func_0x000107c6157c(in_stack_00001370);
  func_0x000107c6157c(in_stack_00001730);
  func_0x000107c6157c(in_stack_00001800);
  func_0x000107c6157c(in_stack_00001808);
  func_0x000107c6157c(in_stack_000018f0);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(in_stack_00001018);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_00000620);
  func_0x000107c6157c(in_stack_00000630);
  func_0x000107c6157c(in_stack_00000660);
  func_0x000107c6157c(in_stack_00000678);
  func_0x000107c6157c(in_stack_000006e8);
  func_0x000107c6157c(in_stack_000006f0);
  func_0x000107c6157c(in_stack_000006f8);
  func_0x000107c6157c(in_stack_00000708);
  func_0x000107c6157c(in_stack_00000720);
  func_0x000107c6157c(in_stack_00000728);
  func_0x000107c6157c(in_stack_00000740);
  func_0x000107c6157c(in_stack_00000748);
  func_0x000107c6157c(in_stack_00000758);
  func_0x000107c6157c(in_stack_00000990);
  func_0x000107c6157c(in_stack_000009b0);
  func_0x000107c6157c(in_stack_00000af8);
  func_0x000107c6157c(in_stack_00000be8);
  func_0x000107c6157c(in_stack_00000c70);
  func_0x000107c6157c(in_stack_00000c98);
  func_0x000107c6157c(in_stack_00000d10);
  func_0x000107c6157c(in_stack_00000d50);
  func_0x000107c6157c(in_stack_00000dc8);
  func_0x000107c6157c(in_stack_00000dd0);
  func_0x000107c6157c(in_stack_00000df8);
  func_0x000107c6157c(in_stack_00000e10);
  func_0x000107c6157c(in_stack_00001060);
  func_0x000107c6157c(in_stack_00001068);
  func_0x000107c6157c(in_stack_000010a0);
  func_0x000107c6157c(in_stack_00001180);
  func_0x000107c6157c(in_stack_000012e8);
  func_0x000107c6157c(in_stack_00001300);
  func_0x000107c6157c(in_stack_00001438);
  func_0x000107c6157c(in_stack_00001478);
  func_0x000107c6157c(in_stack_00001540);
  func_0x000107c6157c(in_stack_000016a8);
  func_0x000107c6157c(in_stack_00001720);
  func_0x000107c6157c(in_stack_00001870);
  func_0x000107c6157c(in_stack_000010f8);
  func_0x000107c6157c(in_stack_00001418);
  func_0x000107c6157c(in_stack_00001868);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(in_stack_00001880);
  func_0x000107c6157c(in_stack_00001830);
  func_0x000107c6157c(in_stack_00001378);
  func_0x000107c6157c(in_stack_00001380);
  func_0x000107c6157c(in_stack_000008f8);
  func_0x000107c6157c(in_stack_00000410);
  func_0x000107c6157c(in_stack_000006e0);
  func_0x000107c6157c(in_stack_000008e8);
  func_0x000107c6157c(in_stack_00000c30);
  func_0x000107c6157c(in_stack_00001520);
  func_0x000107c6157c(in_stack_00001560);
  func_0x000107c6157c(in_stack_00001648);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(in_stack_000003e0);
  func_0x000107c6157c(in_stack_000003e8);
  func_0x000107c6157c(in_stack_000003f8);
  func_0x000107c6157c(in_stack_000006c0);
  func_0x000107c6157c(in_stack_000006d0);
  func_0x000107c6157c(in_stack_00000fc0);
  func_0x000107c6157c(in_stack_000017c8);
  func_0x000107c6157c(in_stack_000002c0);
  func_0x000107c6157c(in_stack_00001638);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(in_stack_00000498);
  func_0x000107c6157c(in_stack_000005c8);
  func_0x000107c6157c(in_stack_00000648);
  func_0x000107c6157c(in_stack_00000670);
  func_0x000107c6157c(in_stack_00000b68);
  func_0x000107c6157c(in_stack_00000b70);
  func_0x000107c6157c(in_stack_00000b78);
  func_0x000107c6157c(in_stack_00000d80);
  func_0x000107c6157c(in_stack_00000db0);
  func_0x000107c6157c(in_stack_00001040);
  func_0x000107c6157c(in_stack_00001080);
  func_0x000107c6157c(in_stack_000010c0);
  func_0x000107c6157c(in_stack_00001220);
  func_0x000107c6157c(in_stack_00001250);
  func_0x000107c6157c(in_stack_00001258);
  func_0x000107c6157c(in_stack_00001330);
  func_0x000107c6157c(in_stack_00001348);
  func_0x000107c6157c(in_stack_000013a0);
  func_0x000107c6157c(in_stack_000013a8);
  func_0x000107c6157c(in_stack_00001470);
  func_0x000107c6157c(in_stack_000015c8);
  func_0x000107c6157c(in_stack_000015e0);
  func_0x000107c6157c(in_stack_00001600);
  func_0x000107c6157c(in_stack_00001618);
  func_0x000107c6157c(in_stack_00001628);
  func_0x000107c6157c(in_stack_00001658);
  func_0x000107c6157c(in_stack_000016f8);
  func_0x000107c6157c(in_stack_00001728);
  func_0x000107c6157c(in_stack_00001918);
  func_0x000107c6157c(in_stack_00001928);
  func_0x000107c6157c(in_stack_00000b98);
  func_0x000107c6157c(in_stack_00000830);
  func_0x000107c6157c(in_stack_000009a0);
  func_0x000107c6157c(in_stack_00000520);
  func_0x000107c6157c(in_stack_00000420);
  func_0x000107c6157c(in_stack_000014b8);
  func_0x000107c6157c(in_stack_00000878);
  func_0x000107c6157c(in_stack_000014c8);
  func_0x000107c6157c(in_stack_00000628);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000f58);
  func_0x000107c6157c(in_stack_00001010);
  func_0x000107c6157c(in_stack_00000340);
  func_0x000107c6157c(in_stack_00000f68);
  func_0x000107c6157c(in_stack_00000fe0);
  func_0x000107c6157c(in_stack_000010d8);
  func_0x000107c6157c(in_stack_000009f8);
  func_0x000107c6157c(in_stack_000015f8);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(in_stack_00000ef8);
  func_0x000107c6157c(in_stack_000013d0);
  func_0x000107c6157c(in_stack_000003c8);
  func_0x000107c6157c(in_stack_00001498);
  func_0x000107c6157c(in_stack_00001460);
  func_0x000107c6157c(in_stack_00000808);
  func_0x000107c6157c(in_stack_00000860);
  func_0x000107c6157c(in_stack_00000868);
  func_0x000107c6157c(in_stack_00000880);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(in_stack_00000328);
  func_0x000107c6157c(in_stack_00000330);
  func_0x000107c6157c(in_stack_00000338);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(in_stack_00000388);
  func_0x000107c6157c(in_stack_000003a0);
  func_0x000107c6157c(in_stack_00000d38);
  func_0x000107c6157c(in_stack_00000ed0);
  func_0x000107c6157c(in_stack_00000ee8);
  func_0x000107c6157c(in_stack_00000f00);
  func_0x000107c6157c(in_stack_00000f28);
  func_0x000107c6157c(in_stack_00000f80);
  func_0x000107c6157c(in_stack_00000f88);
  func_0x000107c6157c(in_stack_00000f90);
  func_0x000107c6157c(in_stack_00000f98);
  func_0x000107c6157c(in_stack_00001198);
  func_0x000107c6157c(in_stack_00001458);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_000008e0);
  func_0x000107c6157c(in_stack_00000c58);
  func_0x000107c6157c(in_stack_00000c90);
  func_0x000107c6157c(in_stack_00000cd0);
  func_0x000107c6157c(in_stack_00000ce0);
  func_0x000107c6157c(in_stack_00000fd0);
  func_0x000107c6157c(in_stack_000012c0);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_00001788);
  func_0x000107c6157c(in_stack_000017b8);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(in_stack_00000698);
  func_0x000107c6157c(in_stack_000007a8);
  func_0x000107c6157c(in_stack_000007b0);
  func_0x000107c6157c(in_stack_00000d90);
  func_0x000107c6157c(in_stack_00001890);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(in_stack_00000400);
  func_0x000107c6157c(in_stack_00000770);
  func_0x000107c6157c(in_stack_00000790);
  func_0x000107c6157c(in_stack_00000798);
  func_0x000107c6157c(in_stack_00000b18);
  func_0x000107c6157c(in_stack_00000e38);
  func_0x000107c6157c(in_stack_000010e8);
  func_0x000107c6157c(in_stack_00001200);
  func_0x000107c6157c(in_stack_00001210);
  func_0x000107c6157c(in_stack_000012a8);
  func_0x000107c6157c(in_stack_00001440);
  func_0x000107c6157c(in_stack_00001568);
  func_0x000107c6157c(in_stack_000016e0);
  func_0x000107c6157c(in_stack_00001738);
  func_0x000107c6157c(in_stack_00001790);
  func_0x000107c6157c(in_stack_00001798);
  func_0x000107c6157c(in_stack_000017a0);
  func_0x000107c6157c(in_stack_00001838);
  func_0x000107c6157c(in_stack_000018a0);
  func_0x000107c6157c(in_stack_00001910);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(in_stack_000017d0);
  func_0x000107c6157c(in_stack_00000ad8);
  func_0x000107c6157c(in_stack_00000ab8);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000011f8);
  func_0x000107c6157c(in_stack_00001748);
  func_0x000107c6157c(in_stack_000018b0);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_00000478);
  func_0x000107c6157c(in_stack_00001490);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000418);
  func_0x000107c6157c(in_stack_00000468);
  func_0x000107c6157c(in_stack_00000518);
  func_0x000107c6157c(in_stack_00000530);
  func_0x000107c6157c(in_stack_000005b0);
  func_0x000107c6157c(in_stack_000008d8);
  func_0x000107c6157c(in_stack_00000ab0);
  func_0x000107c6157c(in_stack_00000ac8);
  func_0x000107c6157c(in_stack_00000b00);
  func_0x000107c6157c(in_stack_00000b10);
  func_0x000107c6157c(in_stack_00000ba0);
  func_0x000107c6157c(in_stack_00000ba8);
  func_0x000107c6157c(in_stack_00000bb8);
  func_0x000107c6157c(in_stack_00000c80);
  func_0x000107c6157c(in_stack_00000d00);
  func_0x000107c6157c(in_stack_00001390);
  func_0x000107c6157c(in_stack_00001888);
  func_0x000107c6157c(in_stack_00001898);
  func_0x000107c6157c(in_stack_000018a8);
  func_0x000107c6157c(in_stack_00000560);
  func_0x000107c6157c(in_stack_000015e8);
  func_0x000107c6157c(in_stack_000009c0);
  func_0x000107c6157c(in_stack_00000e58);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(in_stack_00000430);
  func_0x000107c6157c(in_stack_000004a8);
  FUN_1000823a8(FUN_1002f1d80,puVar1);
  return;
}



/* Entry: 1002d8860; end: 1002d887f;  */

void FUN_1002d8860(void)

{
  func_0x000107c61168(&PTR_PTR_1129ccde8);
  return;
}



/* Entry: 1002d8880; end: 1002d88c7; -[_TtC22SCManagedCaptureDevice24ManagedCaptureDeviceImpl getDeviceInput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002d8880(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da1110;
  func_0x000107c61428(param_1 + _DAT_112da1110,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1002d88c8; end: 1002d893b; -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchShadow] */

undefined8 FUN_1002d88c8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002d893c;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c00 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c00,&puStack_38);
  }
  return uRam000000011316ee90;
}



/* Entry: 1002d893c; end: 1002d8987;  */

void FUN_1002d893c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316ee90 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002d8988; end: 1002d89d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002d8988(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da10f0;
  func_0x000107c61428(unaff_x20 + _DAT_112da10f0,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1002d89d4; end: 1002d89d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002d89d4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_90;
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c602fc(0x4e);
  uVar5 = 0x800000010ef831b0;
  func_0x000107c5fb78(0xd00000000000004c,0x800000010ef831b0);
  lVar1 = unaff_x20;
  func_0x000107c417f0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000107c5fb78(lVar2,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uStack_88);
  lVar1 = _DAT_112da1110;
  func_0x000107c61428(unaff_x20 + _DAT_112da1110,auStack_58,0,0);
  if (*(long *)(unaff_x20 + lVar1) == 0) {
    FUN_1002d8c04();
    if (*(long *)(unaff_x20 + _DAT_112da1140) != 0) {
      FUN_100083b20(&uStack_60);
      puVar3 = &UNK_1103c2370;
      func_0x000107c613fc(&UNK_1103c2370,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      uStack_70 = 0x1002e889c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_1000f3aa0;
      puStack_78 = &UNK_1103c2388;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c3e49c(uStack_60);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(uStack_60);
    }
  }
  else {
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x75);
    func_0x000107c5fb78(0xd000000000000059,0x800000010ef83200);
    uStack_60 = *(undefined8 *)(unaff_x20 + lVar1);
    uVar5 = 0x112da0f18;
    FUN_1000285a8(0x112da0f18,&UNK_10d943f38);
    func_0x000107c603d0(&uStack_60,&puStack_90,uVar5,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0xd00000000000001a,0x800000010ef83260);
    func_0x000107c6142c(uStack_88);
  }
  return;
}



/* Entry: 1002d89d8; end: 1002d8c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002d89d8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_90;
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c602fc(0x4e);
  uVar5 = 0x800000010ef831b0;
  func_0x000107c5fb78(0xd00000000000004c,0x800000010ef831b0);
  lVar1 = unaff_x20;
  func_0x000107c417f0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000107c5fb78(lVar2,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uStack_88);
  lVar1 = _DAT_112da1110;
  func_0x000107c61428(unaff_x20 + _DAT_112da1110,auStack_58,0,0);
  if (*(long *)(unaff_x20 + lVar1) == 0) {
    FUN_1002d8c04();
    if (*(long *)(unaff_x20 + _DAT_112da1140) != 0) {
      FUN_100083b20(&uStack_60);
      puVar3 = &UNK_1103c2370;
      func_0x000107c613fc(&UNK_1103c2370,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      uStack_70 = 0x1002e889c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_1000f3aa0;
      puStack_78 = &UNK_1103c2388;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c3e49c(uStack_60);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(uStack_60);
    }
  }
  else {
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x75);
    func_0x000107c5fb78(0xd000000000000059,0x800000010ef83200);
    uStack_60 = *(undefined8 *)(unaff_x20 + lVar1);
    uVar5 = 0x112da0f18;
    FUN_1000285a8(0x112da0f18,&UNK_10d943f38);
    func_0x000107c603d0(&uStack_60,&puStack_90,uVar5,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0xd00000000000001a,0x800000010ef83260);
    func_0x000107c6142c(uStack_88);
  }
  return;
}



/* Entry: 1002d8c04; end: 1002d8e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1002d8c04(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 unaff_x22;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x52);
  func_0x000107c5fb78(0xd000000000000050,0x800000010ef83280);
  puVar10 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  func_0x000107c603d0(unaff_x20 + _DAT_112da1128,&uStack_70,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00);
  func_0x000107c6142c(uStack_68);
  lVar13 = *(long *)(unaff_x20 + _DAT_112da1120);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___AVCaptureDeviceInput_1126d4280;
  func_0x000107c610f8();
  uStack_70 = 0;
  func_0x000107c61174();
  func_0x000107c46530();
  uVar8 = uStack_70;
  func_0x000107c61174();
  if (puVar1 == (undefined8 *)0x0) {
    unaff_x22 = uVar8;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar8);
    func_0x000107c61654();
    func_0x000107c61170(lVar13);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x60);
    lVar7 = -0x7ffffffef107cd20;
    func_0x000107c5fb78(0xd000000000000053);
    func_0x000107c417f0();
    func_0x000107c61180();
    lVar3 = lVar13;
    func_0x000107c5faec();
    func_0x000107c61170(lVar13);
    func_0x000107c5fb78(lVar3,lVar7);
    func_0x000107c6142c(lVar7);
    puVar1 = &uStack_70;
    func_0x000107c5fb78(0x3a726f727265202c,0xe900000000000020);
    uVar8 = 0x112d393f0;
    auStack_80[0] = unaff_x22;
    FUN_1000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar9 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    puVar10 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    func_0x000107c603d0(auStack_80,&uStack_70);
    func_0x000107c6142c(uStack_68);
    puVar2 = *(undefined1 **)(unaff_x20 + _DAT_112da1108);
    *(undefined8 *)(unaff_x20 + _DAT_112da1108) = unaff_x22;
    func_0x000107c614ac();
  }
  else {
    func_0x000107c61170(lVar13);
    lVar3 = _DAT_112da1110;
    uVar8 = 1;
    puVar9 = (undefined *)0x0;
    func_0x000107c61428(unaff_x20 + _DAT_112da1110,&uStack_70);
    puVar2 = *(undefined1 **)(unaff_x20 + lVar3);
    *(undefined8 **)(unaff_x20 + lVar3) = puVar1;
    func_0x000107c61170();
    lVar7 = lVar13;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  func_0x000107c60e78();
  ppuVar4 = &puStack_d0;
  uStack_c0 = 0xd000000000000050;
  lStack_b8 = lVar7;
  uStack_b0 = unaff_x22;
  lStack_a8 = lVar3;
  puStack_a0 = puVar1;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar10);
  puStack_c8 = PTR_PTR_1126f4c80;
  puStack_d0 = puVar2;
  func_0x000107c61154(&puStack_d0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    uVar5 = uVar8;
    func_0x000107c40794();
    uVar11 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined8 *)((long)ppuVar4 + 8) = uVar5;
    func_0x000107c61170(uVar11);
    func_0x000107c61174(puVar9);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined **)((long)ppuVar4 + 0x10) = puVar9;
    func_0x000107c61170(uVar5);
    uVar11 = 5;
    func_0x000107c60b04(5,1,1);
    func_0x000107c61180();
    uVar5 = uVar11;
    func_0x000107c43638();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined8 *)((long)ppuVar4 + 0x18) = uVar5;
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    puVar6 = puVar10;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x20);
    *(undefined **)((long)ppuVar4 + 0x20) = puVar6;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  return (undefined1 *)ppuVar4;
}



/* Entry: 1002d8e70; end: 1002d8f93; -[SCBlizzardFilePaths initWithStorageRoot:fileNamespace:region:] */

undefined1 *
FUN_1002d8e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126f4c80;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    uVar3 = 5;
    func_0x000107c60b04(5,1,1);
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c43638();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002d8f94; end: 1002d90df;  */

void FUN_1002d8f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fe2c80,&UNK_10dc4b3a8);
  puVar1 = &UNK_1106c9cf0;
  func_0x000107c613fc(&UNK_1106c9cf0,0x80,7);
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
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
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
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  FUN_1000823a8(FUN_100995180,puVar1);
  return;
}



/* Entry: 1002d90e0; end: 1002d90ff;  */

void FUN_1002d90e0(void)

{
  func_0x000107c61168(&PTR_PTR_112920480);
  return;
}



/* Entry: 1002d9100; end: 1002d91bb;  */

void FUN_1002d9100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e01398,&UNK_10d9d2298);
  puVar1 = &UNK_110445168;
  func_0x000107c613fc(&UNK_110445168,0x38,7);
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
  FUN_1000823a8(FUN_1002f1c64,puVar1);
  return;
}



/* Entry: 1002d91bc; end: 1002d9207;  */

void FUN_1002d91bc(undefined8 param_1)

{
  FUN_1000285a8(0x113052328,&UNK_10dcc9fb0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10405df74,param_1);
  return;
}



/* Entry: 1002d9208; end: 1002d9227;  */

void FUN_1002d9208(void)

{
  func_0x000107c61168(&PTR_PTR_112981de0);
  return;
}



/* Entry: 1002d9228; end: 1002d938b;  */

void FUN_1002d9228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fc7e50,&UNK_10dc34bf8);
  puVar1 = &UNK_1106b9fe0;
  func_0x000107c613fc(&UNK_1106b9fe0,0x88,7);
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
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
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
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  FUN_1000823a8(FUN_100951968,puVar1);
  return;
}



/* Entry: 1002d938c; end: 1002d93ab;  */

void FUN_1002d938c(void)

{
  func_0x000107c61168(&PTR_PTR_1129126d0);
  return;
}



/* Entry: 1002d93ac; end: 1002d93cf;  */

void FUN_1002d93ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106c7d68;
  FUN_1000285a8(0x112fde6f0,&UNK_10dc484a8);
  func_0x000107c613fc(&UNK_1106c7d68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100966198,puVar1);
  return;
}



/* Entry: 1002d93d0; end: 1002d944f;  */

void FUN_1002d93d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 1002d9450; end: 1002d946f;  */

void FUN_1002d9450(void)

{
  func_0x000107c61168(&PTR_PTR_11291d0f0);
  return;
}



/* Entry: 1002d9470; end: 1002d94bb;  */

void FUN_1002d9470(undefined8 param_1)

{
  FUN_1000285a8(0x113083f18,&UNK_10dd15290);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10452c8b0,param_1);
  return;
}



/* Entry: 1002d94bc; end: 1002d94db;  */

void FUN_1002d94bc(void)

{
  func_0x000107c61168(&PTR_PTR_1129ccea8);
  return;
}



/* Entry: 1002d94dc; end: 1002d9dc7;  */

void FUN_1002d94dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70)

{
  undefined *puVar1;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  
  FUN_1000285a8(0x112dfd2e0,&UNK_10d9cdad8);
  puVar1 = &UNK_110442028;
  func_0x000107c613fc(&UNK_110442028,0x368,7);
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
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  *(undefined8 *)(puVar1 + 0x148) = param_40;
  *(undefined8 *)(puVar1 + 0x150) = param_41;
  *(undefined8 *)(puVar1 + 0x158) = param_42;
  *(undefined8 *)(puVar1 + 0x160) = param_43;
  *(undefined8 *)(puVar1 + 0x168) = param_44;
  *(undefined8 *)(puVar1 + 0x170) = param_45;
  *(undefined8 *)(puVar1 + 0x178) = param_46;
  *(undefined8 *)(puVar1 + 0x180) = param_47;
  *(undefined8 *)(puVar1 + 0x188) = param_48;
  *(undefined8 *)(puVar1 + 400) = param_49;
  *(undefined8 *)(puVar1 + 0x198) = param_50;
  *(undefined8 *)(puVar1 + 0x1a0) = param_51;
  *(undefined8 *)(puVar1 + 0x1a8) = param_52;
  *(undefined8 *)(puVar1 + 0x1b0) = param_53;
  *(undefined8 *)(puVar1 + 0x1b8) = param_54;
  *(undefined8 *)(puVar1 + 0x1c0) = param_55;
  *(undefined8 *)(puVar1 + 0x1c8) = param_56;
  *(undefined8 *)(puVar1 + 0x1d0) = param_57;
  *(undefined8 *)(puVar1 + 0x1d8) = param_58;
  *(undefined8 *)(puVar1 + 0x1e0) = param_59;
  *(undefined8 *)(puVar1 + 0x1e8) = param_60;
  *(undefined8 *)(puVar1 + 0x1f0) = param_61;
  *(undefined8 *)(puVar1 + 0x1f8) = param_62;
  *(undefined8 *)(puVar1 + 0x200) = param_63;
  *(undefined8 *)(puVar1 + 0x208) = param_64;
  *(undefined8 *)(puVar1 + 0x210) = param_65;
  *(undefined8 *)(puVar1 + 0x218) = param_66;
  *(undefined8 *)(puVar1 + 0x220) = param_67;
  *(undefined8 *)(puVar1 + 0x228) = param_68;
  *(undefined8 *)(puVar1 + 0x230) = param_69;
  *(undefined8 *)(puVar1 + 0x238) = param_70;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  func_0x000107c6157c();
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
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_000002c0);
  func_0x000107c6157c(in_stack_000002c8);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(in_stack_000002f0);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(in_stack_00000300);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(in_stack_00000310);
  FUN_1000823a8(FUN_100947158,puVar1);
  return;
}



/* Entry: 1002d9dc8; end: 1002d9de7;  */

void FUN_1002d9dc8(void)

{
  func_0x000107c61168(&PTR_PTR_1127f5cf0);
  return;
}



/* Entry: 1002d9de8; end: 1002d9df7;  */

undefined1  [16] FUN_1002d9de8(void)

{
  return ZEXT816(0x110781fe8);
}



/* Entry: 1002d9df8; end: 1002d9e17;  */

void FUN_1002d9df8(void)

{
  func_0x000107c61168(&PTR_PTR_1127f30e0);
  return;
}



/* Entry: 1002d9e18; end: 1002d9e1f;  */

void FUN_1002d9e18(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  FUN_100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11043b980;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11043b980;
  return;
}



/* Entry: 1002d9e20; end: 1002d9ebb;  */

void FUN_1002d9e20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  FUN_100083b20(auStack_60);
  FUN_100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11043b980;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11043b980;
  return;
}



/* Entry: 1002d9ebc; end: 1002d9ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002d9ebc(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002d9df8();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df7428) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1002d9ec4; end: 1002d9f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002d9ec4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002d9df8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112df7428) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1002d9f30; end: 1002d9f37;  */

void FUN_1002d9f30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112df7488,&UNK_10d9c6db8);
  uVar1 = 0;
  FUN_100243b1c();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1002d9f38; end: 1002d9fa7;  */

void FUN_1002d9f38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112df7488,&UNK_10d9c6db8);
  uVar1 = 0;
  FUN_100243b1c();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1002d9fa8; end: 1002e6f1b;  */

void FUN_1002d9fa8(void)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001002dbdcc(extraout_x8,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                      *(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1002e6f1c; end: 1002e701f;  */

void FUN_1002e6f1c(void)

{
  return;
}



/* Entry: 1002e7020; end: 1002e7093; -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchPb2] */

undefined8 FUN_1002e7020(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002e7094;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4bf8 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4bf8,&puStack_38);
  }
  return uRam000000011316ee88;
}



/* Entry: 1002e7094; end: 1002e70df;  */

void FUN_1002e7094(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316ee88 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002e70e0; end: 1002e721f;  */

void FUN_1002e70e0(void)

{
  return;
}



/* Entry: 1002e7220; end: 1002e7293; -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchBestEffort] */

undefined8 FUN_1002e7220(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002e7294;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c08 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c08,&puStack_38);
  }
  return uRam000000011316ee98;
}



/* Entry: 1002e7294; end: 1002e72df;  */

void FUN_1002e7294(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316ee98 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002e72e0; end: 1002e81a3;  */

void FUN_1002e72e0(void)

{
  return;
}



/* Entry: 1002e81a4; end: 1002e8217; -[SCBlizzardExperimentProvider jsonFramesEventSaveBatchQ0] */

undefined8 FUN_1002e81a4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002e8218;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c10 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c10,&puStack_38);
  }
  return uRam000000011316eea0;
}



/* Entry: 1002e8218; end: 1002e8263;  */

void FUN_1002e8218(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316eea0 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002e8264; end: 1002e82d7; -[SCBlizzardExperimentProvider blizzardQ0DiskFlushIntervalSecs] */

undefined8 FUN_1002e8264(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1002e82d8;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136c4c30 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136c4c30,&puStack_38);
  }
  return uRam000000011316eec0;
}



/* Entry: 1002e82d8; end: 1002e8323;  */

void FUN_1002e82d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0xa0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4980c();
  lRam000000011316eec0 = (long)(int)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1002e8324; end: 1002e88a3;  */

void FUN_1002e8324(void)

{
  return;
}



/* Entry: 1002e88a4; end: 1002e88e7;  */

void FUN_1002e88a4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  func_0x000107c61618(param_2 + 0x10);
  func_0x000107c61170();
  return;
}



/* Entry: 1002e88e8; end: 1002e8917;  */

void FUN_1002e88e8(void)

{
  return;
}



/* Entry: 1002e8918; end: 1002e893b;  */

void FUN_1002e8918(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002e893c; end: 1002e8977;  */

void FUN_1002e893c(void)

{
  return;
}



/* Entry: 1002e8978; end: 1002e8997;  */

void FUN_1002e8978(void)

{
  func_0x000107c61168(&PTR_PTR_1129ac220);
  return;
}



/* Entry: 1002e8998; end: 1002e93eb;  */

/* WARNING: Removing unreachable block (ram,0x0001002e93cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1002e8998(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  uVar1 = 0;
  FUN_1002e8978(0);
  FUN_1002e93ec();
  lVar8 = _DAT_112dd8718;
  lVar2 = unaff_x20 + _DAT_112dd8718;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar9 = (ulong)*(byte *)(lVar3 + _DAT_113075b78);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002e94f4(uVar9);
  func_0x000107c61170(uVar1);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar10 = (ulong)*(byte *)(lVar3 + _DAT_113075b80);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002e951c(uVar10);
  func_0x000107c61170(uVar9);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar1 = 0x1e;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar1 = *(undefined8 *)(lVar3 + _DAT_113075b88);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002e9544(uVar1);
  func_0x000107c61170(uVar10);
  FUN_1002e9560();
  uVar9 = uVar10;
  FUN_1002e96c8();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar10);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar10 = (ulong)*(byte *)(lVar3 + _DAT_113075b98);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002e9714(uVar10);
  func_0x000107c61170(uVar9);
  uVar1 = 0;
  func_0x0001002e9728(0);
  func_0x000107c61170(uVar10);
  uVar4 = 0;
  func_0x0001002e973c(0);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dd8760);
  func_0x0001002e9764(uVar1);
  func_0x000107c61170(uVar4);
  uVar5 = 0;
  func_0x0001002e9780(0);
  func_0x000107c61170(uVar1);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112dd8790);
  uVar1 = uVar11;
  func_0x000107c42c40(uVar11);
  func_0x000107c61180();
  func_0x000107c40f14();
  func_0x000107c615e8(uVar1);
  func_0x000107c5f06c(param_1);
  uVar4 = uVar1;
  FUN_1002e9c84();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  uVar1 = uVar11;
  func_0x000107c43694(uVar11);
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c49db4();
  func_0x000107c615e8(uVar1);
  func_0x0001002ea0d0(uVar5);
  func_0x000107c61170(uVar4);
  uVar1 = uVar11;
  func_0x000107c43694(uVar11);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c4a608();
  func_0x000107c615e8(uVar1);
  func_0x0001002ea1e0(uVar4);
  func_0x000107c61170(uVar5);
  uVar1 = uVar11;
  func_0x000107c43694(uVar11);
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c49da4();
  func_0x000107c615e8(uVar1);
  func_0x0001002ea2f8(uVar5);
  func_0x000107c61170(uVar4);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar12 = *(undefined **)(lVar3 + _DAT_113075be0);
    puVar6 = puVar12;
    func_0x000107c61174(puVar12);
    func_0x000107c61170(lVar3);
    if (puVar12 != (undefined *)0x0) goto LAB_1002e8d5c;
  }
  puVar12 = PTR_PTR_1126c8690;
  func_0x000107c610f8(PTR_PTR_1126c8690);
  func_0x000107c483ec();
  puVar6 = puVar12;
LAB_1002e8d5c:
  FUN_1002ea444();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  uVar1 = uVar11;
  func_0x000107c43694(uVar11);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c4a5fc();
  func_0x000107c615e8(uVar1);
  FUN_1002ea530(uVar4);
  func_0x000107c61170(puVar12);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar9 = (ulong)*(byte *)(lVar3 + _DAT_113075bf0);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002ea544(uVar9);
  func_0x000107c61170(uVar4);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar10 = (ulong)*(byte *)(lVar3 + _DAT_113075bf8);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002ea558(uVar10);
  func_0x000107c61170(uVar9);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar9 = (ulong)*(byte *)(lVar3 + _DAT_113075c00);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002ea56c(uVar9);
  func_0x000107c61170(uVar10);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar10 = (ulong)*(byte *)(lVar3 + _DAT_113075c08);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002ea580(uVar10);
  func_0x000107c61170(uVar9);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar1 = *(undefined8 *)(lVar3 + _DAT_113075c10);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002ea594(uVar1);
  func_0x000107c61170(uVar10);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar9 = (ulong)*(byte *)(lVar3 + _DAT_113075c18);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002ea5b0(uVar9);
  func_0x000107c61170(uVar1);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar1 = *(undefined8 *)(lVar3 + _DAT_113075c20);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002ea5c4(uVar1);
  func_0x000107c61170(uVar9);
  uVar4 = 0;
  func_0x0001002ea5e0(0);
  func_0x000107c61170(uVar1);
  uVar1 = uVar11;
  func_0x000107c5ea1c(uVar11);
  func_0x000107c61180();
  func_0x000107c41648();
  func_0x000107c615e8(uVar1);
  FUN_1002ea9f8((float)param_1);
  func_0x000107c61170(uVar4);
  uVar4 = uVar11;
  func_0x000107c3f52c(uVar11);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4a64c();
  func_0x000107c615e8(uVar4);
  FUN_1002eaab4(uVar5);
  func_0x000107c61170(uVar1);
  uVar1 = uVar11;
  func_0x000107c3f52c(uVar11);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c4a5b4();
  func_0x000107c615e8(uVar1);
  FUN_1002eab68(uVar4);
  func_0x000107c61170(uVar5);
  uVar1 = uVar11;
  func_0x000107c3f52c(uVar11);
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c44b78();
  func_0x000107c615e8(uVar1);
  FUN_1002eb124(uVar5);
  func_0x000107c61170(uVar4);
  uVar1 = uVar11;
  func_0x000107c3f52c(uVar11);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c44b78();
  func_0x000107c615e8(uVar1);
  func_0x0001002eb49c(uVar4);
  func_0x000107c61170(uVar5);
  uVar1 = uVar11;
  func_0x000107c5ea1c(uVar11);
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c4dfb8();
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
  uVar1 = uVar5;
  FUN_1002ebb40(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar4 = uVar11;
  func_0x000107c5ea1c(uVar11);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4dfbc();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  uVar7 = 0;
  func_0x0001002a4e90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar5;
  func_0x000107c5fc54(uVar5,uVar7);
  func_0x000107c61170(uVar5);
  uVar5 = uVar4;
  FUN_1002ed0f8(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(uVar4);
  lVar2 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar9 = (ulong)*(byte *)(lVar3 + _DAT_113075c68);
    func_0x000107c61170(lVar3);
  }
  func_0x0001002ed144(uVar9);
  func_0x000107c61170(uVar5);
  lVar8 = unaff_x20 + lVar8;
  func_0x000107c61618();
  if (lVar8 == 0) {
    uVar10 = 0;
  }
  else {
    lVar2 = lVar8;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    uVar10 = (ulong)*(byte *)(lVar2 + _DAT_113075c78);
    func_0x000107c61170(lVar2);
  }
  func_0x0001002ed158(uVar10);
  func_0x000107c61170(uVar9);
  uVar5 = 0;
  func_0x0001002ed16c(0);
  func_0x000107c61170(uVar10);
  uVar1 = uVar11;
  func_0x000107c418b4(uVar11);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c49e28();
  func_0x000107c615e8(uVar1);
  uVar10 = (ulong)((uint)uVar4 ^ 1);
  func_0x0001002ed1bc(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c418b4(uVar11);
  func_0x000107c61180();
  uVar1 = uVar11;
  func_0x000107c49a84();
  func_0x000107c615e8(uVar11);
  uVar9 = (ulong)((uint)uVar1 ^ 1);
  func_0x0001002ed51c(uVar9);
  func_0x000107c61170(uVar10);
  FUN_1000c033c();
  func_0x000107c61170(uVar9);
  return uVar10;
}


