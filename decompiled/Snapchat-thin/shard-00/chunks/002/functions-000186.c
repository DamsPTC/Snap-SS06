/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004429f0; end: 100442a23;  */

void FUN_1004429f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 100442a24; end: 100442af3;  */

void FUN_100442a24(void)

{
  code *pcVar1;
  code *pcVar2;
  
  FUN_1000285a8(0x112e5eb58,&UNK_10da66070);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_1008a8cb0;
  FUN_1000bdd8c(FUN_1008a8cb0);
  pcVar2 = pcVar1;
  FUN_1003a5b88();
  func_0x000107c61574(pcVar1);
  FUN_1001e0730(0);
  func_0x000107c610f8();
  func_0x000100442aa8(pcVar2);
  return;
}



/* Entry: 100442af4; end: 100442b27;  */

void FUN_100442af4(void)

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



/* Entry: 100442b28; end: 100442beb; -[SCStoriesServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100442b28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_112753c30;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5bf3c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126cf128;
  func_0x000107c5bf8c(PTR_PTR_1126cf128);
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c3ebc4();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if ((int)lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd3570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginG2SOptimazation_1125526f8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__begin_1125525c8);
  return;
}



/* Entry: 100442bec; end: 100442bfb; -[_TtC27SCStoriesExperimentServices27SCStoriesExperimentServices storiesCofExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100442bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e640));
  return;
}



/* Entry: 100442bfc; end: 100442c5b; +[SCStoriesG2SImprovementConfigKeys storiesServicesG2SImprovement] */

void FUN_100442bfc(void)

{
  if (lRam00000001135099f0 != -1) {
    func_0x000107c61568(0x1135099f0,FUN_100442c5c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806a30);
  return;
}



/* Entry: 100442c5c; end: 100442cab;  */

void FUN_100442c5c(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000001a;
  func_0x000100442ccc(0xd00000000000001a,0x800000010f11a6a0,0);
  uRam0000000113806a30 = uVar1;
  return;
}



/* Entry: 100442cac; end: 100442d17;  */

void FUN_100442cac(void)

{
  func_0x000107c61168(&PTR_PTR_112966650);
  return;
}



/* Entry: 100442d18; end: 100442def; -[SCStoriesConfigProviderImplementation boolForKeyOnAppStart:] */

undefined8 FUN_100442d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c3ebc4();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 100442df0; end: 100442e73; +[SCStoriesConfigLogger logger] */

void FUN_100442df0(void)

{
  if (lRam0000000112e401f0 != -1) {
    func_0x000107c61568(0x112e401f0,0x100442e50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113804650);
  return;
}



/* Entry: 100442e74; end: 10044308f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100442e74(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_68;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5ffd8();
  lStack_90 = *(long *)(lVar1 + -8);
  lStack_88 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar7 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ffc4();
  puVar6 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = _DAT_112e401f8;
  uVar3 = 0;
  FUN_1000295c4();
  uStack_a0 = uVar3;
  func_0x000107c5f81c(lVar2);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar3 = 0x112d4ac68;
  func_0x0001004430b0(0x112d4ac68,puVar6,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  uVar4 = 0x112d4ac70;
  FUN_1000285a8(0x112d4ac70,&UNK_10d911480);
  uVar5 = 0x112d4ac78;
  func_0x0001004430f0(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar8,&puStack_68,uVar4,uVar5,lVar1,uVar3);
  (**(code **)(lStack_90 + 0x68))
            (lVar7,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_88);
  uVar3 = 0xd000000000000016;
  func_0x000107c5ffec(0xd000000000000016,0x800000010f01af40,lVar2,lVar8,lVar7,0);
  *(undefined8 *)(unaff_x20 + lStack_98) = uVar3;
  puVar6 = PTR_PTR_1126a9a30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112e40200) = puVar6;
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100443090; end: 100443133; -[SCStoriesConfigLogger init] */

void FUN_100443090(void)

{
  FUN_100442e74();
  return;
}



/* Entry: 100443134; end: 1004431a7; -[SCGrapheneStoriesConfigMetric2 init] */

undefined1 * FUN_100443134(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb4e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1004431a8; end: 100443287; -[SCStoriesCOFProvider initWithAppStartExperimentReader:circumstanceEngine:logger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004431a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e40240;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100214a84();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112e40248;
  uVar4 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar4;
  *(undefined8 *)(param_1 + _DAT_112e40250) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e40258) = param_4;
  *(undefined8 *)(param_1 + _DAT_112e40260) = param_5;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100443288; end: 1004432e3; -[SCStoriesCOFProvider boolForKeyOnAppStart:] */

uint FUN_100443288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1004432e4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1004432e4; end: 1004434a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1004432e4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11302e940);
  uVar5 = ((undefined8 *)(param_1 + _DAT_11302e940))[1];
  func_0x000107c5eea0(puVar6);
  uVar3 = uVar4;
  FUN_1004434a4(uVar4,uVar5);
  uVar1 = (uint)uVar3;
  if ((uVar1 & 0xff) == 2) {
    uVar1 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112e40250);
    uVar3 = uVar4;
    func_0x000107c5fadc(uVar4,uVar5);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar3);
    FUN_10006c804();
    puStack_68 = PTR___sSbN_11034dd40;
    auStack_80[0] = (undefined1)uVar1;
    func_0x000107c61428(unaff_x20 + _DAT_112e40240,auStack_98,0x21,0);
    func_0x000107c61434(uVar5);
    FUN_100102934(auStack_80,uVar4,uVar5);
    func_0x000107c614a8(auStack_98);
    FUN_100070bfc();
    uVar4 = 2;
  }
  else {
    uVar4 = 0;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e40260);
  func_0x000107c614f0(uVar5);
  FUN_1004435b0(uVar4,0,puVar6,uVar5);
  (**(code **)(lVar7 + 8))(puVar6,lVar2);
  return uVar1 & 1;
}



/* Entry: 1004434a4; end: 1004435af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1004434a4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  FUN_10006c804();
  lVar3 = _DAT_112e40240;
  func_0x000107c61428(unaff_x20 + _DAT_112e40240,auStack_58,0x20,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    func_0x000100029284(param_1);
    if ((param_2 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar3 + 0x38) + param_1 * 0x20,&uStack_80);
      func_0x000107c6142c(lVar3);
      goto LAB_100443548;
    }
    func_0x000107c6142c(lVar3);
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_100443548:
  func_0x000107c614a8(auStack_58);
  uVar1 = 0x112d387f8;
  FUN_1000285a8(0x112d387f8,&UNK_10d902650);
  puVar2 = auStack_58;
  func_0x000107c6147c(puVar2,&uStack_80,uVar1,PTR___sSbN_11034dd40,6);
  if (((ulong)puVar2 & 1) == 0) {
    auStack_58[0] = 2;
  }
  FUN_100070bfc();
  return auStack_58[0];
}



/* Entry: 1004435b0; end: 10044366f;  */

void FUN_1004435b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee68(param_4);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c41c70(param_1);
  return;
}



/* Entry: 100443670; end: 1004436c3; -[SCStoriesConfigLogger didReadCOFWithSource:type:latency:] */

void FUN_100443670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_1004436c4(param_1,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1004436c4; end: 1004438eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004436c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_b0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = *(undefined8 *)(unaff_x20 + _DAT_112e401f8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e40200);
  puVar4 = &UNK_11049ed20;
  func_0x000107c613fc(&UNK_11049ed20,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  uStack_80 = 0x100444df4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x1000b0c7c;
  puStack_88 = &UNK_11049ed38;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61174(uVar8);
  func_0x000107c5f808(lVar10);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  func_0x0001004430b0(0x112d4af88,puVar1,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar6 = 0x112d4af90;
  FUN_1000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x0001004430f0(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar9,&puStack_a8,uVar6,uVar7,lVar2,uVar8);
  func_0x000107c5ffe8(0,lVar10,puVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_b0 + 8))(puVar9,lVar2);
  (**(code **)(lVar11 + 8))(lVar10,lVar3);
  func_0x000107c61574(puStack_78);
  return;
}



/* Entry: 1004438ec; end: 1004438ff;  */

void FUN_1004438ec(long param_1,long param_2)

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



/* Entry: 100443900; end: 100444097; -[SCStoriesServicesEntryPoint _begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100443900(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 auStack_2a0 [8];
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_100447450;
  puStack_90 = &UNK_110861c28;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3b400();
  func_0x000107c61180();
  func_0x000107c3c274(param_1);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c45454();
  func_0x000107c61170(puVar4);
  puVar4 = PTR_PTR_1126ae720;
  puStack_e0 = puVar14;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10044560c;
  puStack_c8 = &UNK_11094a9d0;
  func_0x000107c6111c(auStack_b0,auStack_80);
  lStack_c0 = lVar2;
  puStack_b8 = puVar3;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5e0d0();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c5c734(puVar4);
  func_0x000107c61180();
  func_0x000107c43818();
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126ae720;
  puStack_118 = puVar14;
  uStack_110 = 0xc2000000;
  puStack_108 = &UNK_10691fcd4;
  puStack_100 = &UNK_11094aa00;
  func_0x000107c6111c(auStack_e8,auStack_80);
  lStack_f8 = lVar2;
  puStack_f0 = puVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_140 = puVar14;
  uStack_138 = 0xc2000000;
  puStack_130 = &UNK_10691fd1c;
  puStack_128 = &UNK_11094aa30;
  func_0x000107c6111c(auStack_120,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_178 = puVar14;
  uStack_170 = 0xc2000000;
  puStack_168 = &UNK_10691fd5c;
  puStack_160 = &UNK_11094aa60;
  func_0x000107c6111c(auStack_148,auStack_80);
  puStack_158 = puVar1;
  puStack_150 = puVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_1a8 = puVar14;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_1004473e0;
  puStack_190 = &UNK_11094aa90;
  func_0x000107c6111c(auStack_180,auStack_80);
  puStack_188 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4b764();
  func_0x000107c61170(puVar9);
  puVar9 = PTR_PTR_1126ae720;
  puStack_1e8 = puVar14;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_100938ac4;
  puStack_1d0 = &UNK_11094aac0;
  func_0x000107c6111c(auStack_1b0,auStack_80);
  puStack_1c8 = puVar1;
  puStack_1c0 = puVar7;
  puStack_1b8 = puVar8;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_210 = puVar14;
  uStack_208 = 0xc2000000;
  puStack_200 = &UNK_10691fdd0;
  puStack_1f8 = &UNK_11094aaf0;
  func_0x000107c6111c(auStack_1f0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_238 = puVar14;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_1008122fc;
  puStack_220 = &UNK_11094ab20;
  func_0x000107c6111c(auStack_218,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_260 = puVar14;
  uStack_258 = 0xc2000000;
  puStack_250 = &UNK_10691fe10;
  puStack_248 = &UNK_11094ab50;
  func_0x000107c6111c(auStack_240,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112753c34);
  *(undefined **)(param_1 + _DAT_112753c34) = puVar12;
  func_0x000107c61170(uVar16);
  lVar13 = param_1;
  func_0x000107c3ca6c();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_298 = puVar14;
  uStack_290 = 0xc2000000;
  uStack_288 = 0x100938354;
  puStack_280 = &UNK_11094ab80;
  func_0x000107c6111c(auStack_268,auStack_80);
  lStack_278 = lVar13;
  puStack_270 = puVar9;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c5d6d0(lVar13);
  puVar14 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_2a0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126cf130;
  func_0x000107c610f4(PTR_PTR_1126cf130);
  func_0x000107c48a50();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112753c38));
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61120(auStack_2a0);
  func_0x000107c61170(puVar12);
  func_0x000107c61120(auStack_268);
  func_0x000107c61170(lVar13);
  func_0x000107c61120(auStack_240);
  func_0x000107c61170(puVar11);
  func_0x000107c61120(auStack_218);
  func_0x000107c61170(puVar10);
  func_0x000107c61120(auStack_1f0);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_1b0);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_180);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_148);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_120);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 100444098; end: 1004442bf; -[SCStoriesServicesEntryPoint _customStoriesNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100444098(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar1 = param_1 + _DAT_112753c74;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c3e464();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112753c88;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c5cb84();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112753c8c;
  func_0x000107c61148(lVar1);
  lVar4 = lVar1;
  func_0x000107c3e340();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112753c58;
  func_0x000107c61148(lVar1);
  lVar5 = lVar1;
  func_0x000107c444a0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar6 = PTR_PTR_1126cf0a0;
  func_0x000107c610f4(PTR_PTR_1126cf0a0);
  func_0x000107c483a0();
  lVar1 = param_1 + _DAT_112753c48;
  func_0x000107c61148(lVar1);
  lVar7 = lVar1;
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112753c60;
  func_0x000107c61148(lVar1);
  lVar8 = lVar1;
  func_0x000107c4d598();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_112753c64;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar9 = PTR_PTR_1126cf190;
  func_0x000107c610f4(PTR_PTR_1126cf190);
  lVar10 = lVar7;
  func_0x000107c5d984(lVar7);
  func_0x000107c61180();
  func_0x000107c481ac(puVar9,param_2,puVar6,lVar5,lVar10,lVar8,lVar1);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1004442c0; end: 1004442c7; -[SCStoriesMetricServices grapheneMetricsEmitter] */

undefined8 FUN_1004442c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004442c8; end: 10044443f; -[SCStoriesProtobufRequestManager initWithRequestManager:snapTokenProvider:grapheneMetricsEmitter:attestationProvider:] */

undefined1 *
FUN_1004442c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126fc348;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x000107c5c734(param_6);
    func_0x000107c61180();
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100444440; end: 1004445ff;  */

void FUN_100444440(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  func_0x0001000ad7c4();
  uVar2 = param_2;
  FUN_100083b20(&uStack_58);
  FUN_1000d46b0();
  func_0x000107c61170(uStack_58);
  puVar3 = PTR_PTR_1126b7a98;
  func_0x000107c610f8();
  func_0x000107c45e48();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_48);
  if (puVar3 != (undefined *)0x0) {
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100444518);
  (*pcVar1)();
}



/* Entry: 100444600; end: 10044472b;  */

void FUN_100444600(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  ppuVar6 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_60 = &UNK_1015272ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101485318;
  puStack_68 = &UNK_1103d9618;
  uStack_58 = uVar1;
  func_0x000107c60bc4(&puStack_80);
  uVar3 = uStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c3e4fc(puVar5,param_3,ppuVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  FUN_100083b20(&puStack_80);
  puVar2 = puStack_80;
  func_0x0001000ad7c4();
  puVar7 = PTR_PTR_1126b7a88;
  func_0x000107c610f8();
  func_0x000107c45df8();
  func_0x000107c61170(ppuVar6);
  func_0x000107c615e8(puVar2);
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61170(puVar5);
    *param_1 = puVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10044472c);
  (*pcVar4)();
}



/* Entry: 10044472c; end: 10044473f;  */

void FUN_10044472c(long param_1,long param_2)

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



/* Entry: 100444740; end: 1004449fb; -[SCArgosConfig initWithCircumstanceEngine:grapheneRegistry:argosScopedDirectory:] */

undefined8 *
FUN_100444740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_68 = PTR_PTR_1126e7c50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[6];
    puVar1[6] = &PTR____CFConstantStringClassReference_110dd5678;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[7];
    puVar1[7] = &PTR____CFConstantStringClassReference_110dd5698;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[8];
    puVar1[8] = &PTR____CFConstantStringClassReference_110dd56b8;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[10];
    puVar1[10] = &PTR____CFConstantStringClassReference_110dd56d8;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[9];
    puVar1[9] = &PTR____CFConstantStringClassReference_110dd56f8;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = &PTR____CFConstantStringClassReference_110dd5718;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = &PTR____CFConstantStringClassReference_110dd5738;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = &PTR__OBJC_CLASS___NSConstantArray_11117e670;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = &PTR__OBJC_CLASS___NSConstantArray_11117e688;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = &PTR__OBJC_CLASS___NSConstantArray_11117e6a0;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1004449fc; end: 100444a2f;  */

void FUN_1004449fc(void)

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



/* Entry: 100444a30; end: 100444bd3; -[SCArgosClient initWithTokenProvider:blizzardLogger:circumstanceEngine:argosConfig:] */

undefined8 *
FUN_100444a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126e7c70;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61144(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_70,auStack_68);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100444bd4; end: 100444bd7;  */

void FUN_100444bd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100444bd8; end: 100444c13;  */

void FUN_100444bd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100444c14; end: 100444d1f; -[SCArgosImpl initWithClient:config:grapheneRegistry:uiEvents:] */

undefined1 *
FUN_100444c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126e7c78;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b7eb0;
    func_0x000107c610f4();
    func_0x000107c49070();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100444d20; end: 100444def; -[SCTouchTracker initWithUiEvents:] */

long FUN_100444d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61174(param_3);
  func_0x000107c61160();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  func_0x000107c61170(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10b29b248;
  puStack_40 = &UNK_110cd1470;
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  lStack_38 = param_1;
  func_0x000107c5c320(param_3,param_2,&puStack_58);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c3e924(uVar2,param_2,*(undefined8 *)(param_1 + 8));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lStack_38);
  return param_1;
}



/* Entry: 100444df0; end: 100444e03;  */

void FUN_100444df0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100444e04; end: 100444faf;  */

/* WARNING: Possible PIC construction at 0x000100444f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100444f60) */

void FUN_100444e04(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  if (param_3 == 0) {
    uVar5 = 0xe600000000000000;
    uVar2 = 0x646568636163;
  }
  else if (param_3 == 2) {
    uVar5 = 0xe400000000000000;
    uVar2 = 0x72657361;
  }
  else {
    if (param_3 != 1) {
      puVar3 = &UNK_11049ed70;
      lStack_48 = param_3;
      goto LAB_100444f98;
    }
    uVar5 = 0xe900000000000065;
    uVar2 = 0x6d69745f6c616572;
  }
  func_0x000107c5fadc(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar4 = 0xe400000000000000;
      uVar5 = 0x6c6f6f62;
LAB_100444f30:
      func_0x000107c5fadc(uVar5,uVar4);
      func_0x000107c6142c(uVar4);
      FUN_100444fb0(param_1,param_2,uVar2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    if (param_4 == 1) {
      uVar4 = 0xe300000000000000;
      uVar5 = 0x746e69;
      goto LAB_100444f30;
    }
    if (param_4 == 2) {
      uVar4 = 0xe500000000000000;
      uVar5 = 0x74616f6c66;
      goto LAB_100444f30;
    }
  }
  else {
    if (param_4 == 3) {
      uVar4 = 0xe600000000000000;
      uVar5 = 0x676e69727473;
      goto LAB_100444f30;
    }
    if (param_4 == 4) {
      uVar4 = 0xe500000000000000;
      uVar5 = 0x6f746f7270;
      goto LAB_100444f30;
    }
    if (param_4 == 5) {
      uVar4 = 0xe700000000000000;
      uVar5 = 0x6e776f6e6b6e75;
      goto LAB_100444f30;
    }
  }
  puVar3 = &UNK_11049ed90;
  lStack_48 = param_4;
LAB_100444f98:
  func_0x000107c60614(puVar3,&lStack_48,puVar3,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100444fb0);
  (*pcVar1)();
}



/* Entry: 100444fb0; end: 10044523f;  */

/* WARNING: Possible PIC construction at 0x00010044505c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004450a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100445138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100445148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100445190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100445214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100445224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100445218) */
/* WARNING: Removing unreachable block (ram,0x000100445194) */
/* WARNING: Removing unreachable block (ram,0x0001004451f4) */
/* WARNING: Removing unreachable block (ram,0x0001004451fc) */
/* WARNING: Removing unreachable block (ram,0x000100445210) */
/* WARNING: Removing unreachable block (ram,0x00010044514c) */
/* WARNING: Removing unreachable block (ram,0x000100445184) */
/* WARNING: Removing unreachable block (ram,0x000100445164) */
/* WARNING: Removing unreachable block (ram,0x00010044513c) */
/* WARNING: Removing unreachable block (ram,0x0001004450a4) */
/* WARNING: Removing unreachable block (ram,0x000100445114) */
/* WARNING: Removing unreachable block (ram,0x000100445120) */
/* WARNING: Removing unreachable block (ram,0x000100445128) */
/* WARNING: Removing unreachable block (ram,0x000100445060) */
/* WARNING: Removing unreachable block (ram,0x000100445094) */
/* WARNING: Removing unreachable block (ram,0x00010044507c) */
/* WARNING: Removing unreachable block (ram,0x00010044509c) */
/* WARNING: Removing unreachable block (ram,0x000100445228) */
/* WARNING: Removing unreachable block (ram,0x000100445238) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100444fb0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108cdaa8);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_3 = param_2, param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100445240; end: 100445247;  */

void FUN_100445240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100445248; end: 10044526b;  */

void FUN_100445248(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10044526c; end: 10044538f; -[SCCustomStoriesNetworkRequester initWithProtobufRequestManager:grapheneMetricsEmitter:currentUserId:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_10044526c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126fc308;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100445390; end: 1004454e7; -[SCStoriesServicesEntryPoint _registerFriendOfGroupStoryDestinationEnsurerWithNetworkRequester:] */

/* WARNING: Possible PIC construction at 0x000100445444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044545c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044546c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044547c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004454bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100445480) */
/* WARNING: Removing unreachable block (ram,0x000100445470) */
/* WARNING: Removing unreachable block (ram,0x000100445460) */
/* WARNING: Removing unreachable block (ram,0x000100445448) */
/* WARNING: Removing unreachable block (ram,0x0001004454c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100445390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cf198;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  lVar2 = param_1 + _DAT_112753c90;
  func_0x000107c61148(lVar2);
  func_0x000107c4456c();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112753c48;
  func_0x000107c61148(param_1);
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c47a78(puVar1,param_2,param_3,lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1004454e8; end: 1004454ef; -[SCGroupServices groupsDataFetcher] */

undefined8 FUN_1004454e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1004454f0; end: 1004455f3; -[SCFriendOfGroupStoryDestinationEnsurer initWithNetworkRequester:groupsDataFetcher:currentUserId:] */

undefined1 *
FUN_1004454f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f3d50;
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
    uVar2 = param_5;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004455f4; end: 1004455fb; -[SCNativeMessagingServices storyDestinationEnsureForwarder] */

undefined8 FUN_1004455f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1004455fc; end: 1004455ff; -[SCNativeSendDelegateImpl setStoryDestinationEnsurer:] */

void FUN_1004455fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAtomicStoryDestinationEnsurer_1126385c0);
  return;
}



/* Entry: 100445600; end: 10044560b; -[SCNativeSendDelegateImpl setAtomicStoryDestinationEnsurer:] */

void FUN_100445600(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10044560c; end: 100445653;  */

void FUN_10044560c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b3fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100445654; end: 100445997; -[SCStoriesServicesEntryPoint _customStoriesDataSyncerWithNetworkRequester:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100445654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  lVar23 = (long)_DAT_112753c54;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  lVar23 = param_1 + lVar23;
  func_0x000107c61148();
  lVar1 = lVar23;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar23);
  puVar2 = PTR_PTR_1126cf1a8;
  func_0x000107c610f4();
  lVar23 = param_1 + _DAT_112753c44;
  func_0x000107c61148();
  lVar3 = lVar23;
  func_0x000107c421c8();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_112753c58;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c444a0();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_112753c48;
  func_0x000107c61148();
  lVar7 = lVar6;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar24 = (long)_DAT_112753c4c;
  lVar9 = param_1 + lVar24;
  func_0x000107c61148();
  lVar10 = lVar9;
  func_0x000107c3eb1c();
  func_0x000107c61180();
  lVar11 = param_1 + lVar24;
  func_0x000107c61148();
  lVar12 = lVar11;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  lVar24 = param_1 + lVar24;
  func_0x000107c61148();
  lVar13 = lVar24;
  func_0x000107c5b4bc();
  func_0x000107c61180();
  lVar14 = param_1 + _DAT_112753ca0;
  func_0x000107c61148();
  lVar15 = param_1 + _DAT_112753c30;
  func_0x000107c61148();
  lVar16 = lVar15;
  func_0x000107c5bf3c();
  func_0x000107c61180();
  lVar17 = param_1 + _DAT_112753ca4;
  func_0x000107c61148();
  lVar18 = lVar17;
  func_0x000107c3de00();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_112753ca8;
  func_0x000107c61148();
  lVar20 = lVar19;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar25 = (long)_DAT_112753c98;
  lVar21 = param_1 + lVar25;
  func_0x000107c61148();
  lVar22 = lVar21;
  func_0x000107c406f4();
  func_0x000107c61180();
  param_1 = param_1 + lVar25;
  func_0x000107c61148();
  lVar25 = param_1;
  func_0x000107c40664();
  func_0x000107c61180();
  func_0x000107c47a7c(puVar2,param_2,param_3,param_4,lVar3,lVar5,lVar8,lVar10,lVar12,lVar13,lVar1,
                      lVar14,lVar16,lVar18,lVar20,lVar22,lVar25);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100445998; end: 10044599f; -[SCSnapchatterServices blockedSnapchatterFetcher] */

undefined8 FUN_100445998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1004459a0; end: 1004459a7; -[SCNativeMessagingServices conversationUpdaterEventPublisher] */

undefined8 FUN_1004459a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1004459a8; end: 1004459af; -[SCNativeMessagingServices conversationDataFetcher] */

undefined8 FUN_1004459a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1004459b0; end: 100445f13; -[SCCustomStoriesDataSyncer initWithNetworkRequester:performer:docObjectContext:grapheneMetricsEmitter:currentUserId:blockedSnapchatterFetcher:snapchattersDataFetcher:snapchattersDataTracker:circumstanceEngine:communitiesMemberRankingJobSchedulingServices:storiesConfigProvider:appLifecycleManager:appStartExperimentReader:conversationUpdaterEventPublisher:conversationDataFetcher:] */

undefined8 *
FUN_1004459b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  puStack_80 = PTR_PTR_1126fc318;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[4];
    puVar1[4] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d8f70;
    func_0x000107c610f4();
    func_0x000107c4666c();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c53fcc(puVar1[7]);
    puVar3 = PTR_PTR_1126d8f78;
    func_0x000107c610f4();
    func_0x000107c4666c();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c53fcc(puVar1[8]);
    puVar3 = PTR_PTR_1126d8f80;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d8f88;
    func_0x000107c61160();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d5c08;
    func_0x000107c610f4();
    func_0x000107c47e20(0x4082c00000000000);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    func_0x000107c61170(uVar2);
    uVar2 = param_10;
    func_0x000107c5c734(param_10);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    uVar2 = param_12;
    func_0x000107c51934();
    func_0x000107c61180();
    uVar5 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_10804c220;
    puStack_98 = &UNK_1108429c8;
    func_0x000107c61174(param_15);
    uStack_90 = param_15;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar2);
    puVar4 = puVar1;
    func_0x000107c3bed0();
    func_0x000107c61180();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = puVar1;
    func_0x000107c3bed0();
    func_0x000107c61180();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_b8,puVar1);
    puVar3 = PTR_PTR_1126d8f90;
    func_0x000107c610f4();
    uVar2 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_c0,auStack_b8);
    func_0x000107c61174(param_4);
    func_0x000107c46670();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61170(uStack_90);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
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



/* Entry: 100445f14; end: 10044602f; -[SCCustomStoriesObserver initWithDocObjectContext:performer:] */

undefined1 *
FUN_100445f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fc320;
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
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100446030; end: 10044603b; -[SCCustomStoriesObserver setDelegate:] */

void FUN_100446030(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10044603c; end: 1004460fb; -[SCPostableCustomStoriesObserver initWithDocObjectContext:performer:] */

undefined1 *
FUN_10044603c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fc340;
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
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004460fc; end: 100446107; -[SCPostableCustomStoriesObserver setDelegate:] */

void FUN_1004460fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 100446108; end: 1004461ef; -[SCCustomStoriesUpdateListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100446108(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_1130802d0;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_1130802e0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_1130802b0;
  uVar2 = 0x113080270;
  FUN_1000285a8(0x113080270,&UNK_10dd0b430);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  lVar1 = _DAT_1130802c0;
  uVar2 = 0x113080278;
  FUN_1000285a8(0x113080278,&UNK_10dd0b490);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_1004461f0();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004461f0; end: 10044620f;  */

void FUN_1004461f0(void)

{
  func_0x000107c61168(&PTR_PTR_1129c2690);
  return;
}



/* Entry: 100446210; end: 1004462f7; -[SCCustomStoriesSyncUpdateListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100446210(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_113080320;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_113080328) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_113080310;
  uVar2 = 0x113080278;
  FUN_1000285a8(0x113080278,&UNK_10dd0b490);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  lVar1 = _DAT_113080318;
  uVar2 = 0x113080270;
  FUN_1000285a8(0x113080270,&UNK_10dd0b430);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_1004462f8();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004462f8; end: 100446317;  */

void FUN_1004462f8(void)

{
  func_0x000107c61168(&PTR_PTR_1129c2798);
  return;
}



/* Entry: 100446318; end: 10044640f; -[SCStoriesIndividualRequestDebouncer initWithPerformer:grapheneMetricsEmitter:debounceInterval:identifier:] */

undefined1 *
FUN_100446318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126fc358;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100446410; end: 10044641f; -[SCCommunitiesMemberRankingJobSchedulingServices scheduler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100446410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5970));
  return;
}



/* Entry: 100446420; end: 10044650f; -[SCCustomStoriesDataSyncer _makeListGroupsCoalescerWithLabel:isPublic:] */

void FUN_100446420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126b3938;
  func_0x000107c610f4(PTR_PTR_1126b3938);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_4;
  func_0x000107c470c0(0x4008000000000000,puVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100446510; end: 100446653; -[_TtC24SCInflightCallCoalescing23SCInflightCallCoalescer initWithLabel:positiveTtlSec:fire:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100446510(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  lVar3 = param_2;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  func_0x000107c5faec();
  puVar4 = &UNK_1106e4fb8;
  func_0x000107c613fc(&UNK_1106e4fb8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  puVar1 = (undefined8 *)(param_2 + _DAT_112ff59a0);
  *puVar1 = &UNK_103bdff94;
  puVar1[1] = puVar4;
  lVar2 = lRam0000000113594df0;
  puVar5 = puVar4;
  func_0x000107c6157c();
  if (lVar2 != -1) {
    puVar5 = (undefined *)0x113594df0;
    func_0x000107c61568(0x113594df0,FUN_100446678);
  }
  lStack_90 = lVar3;
  uStack_88 = param_4;
  uStack_80 = param_3;
  uStack_78 = param_1;
  FUN_1004466b4();
  FUN_100087bd4(&uStack_68,FUN_1004468bc,auStack_a0,puVar5);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(param_2 + _DAT_112ff59a8) = uStack_68;
  plVar6 = &lStack_b8;
  lStack_b8 = param_2;
  lStack_b0 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x000107c61574(puVar4);
  return plVar6;
}



/* Entry: 100446654; end: 100446677;  */

void FUN_100446654(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100446678; end: 1004466b3;  */

void FUN_100446678(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  uRam0000000113594df8 = uVar1;
  return;
}



/* Entry: 1004466b4; end: 1004466d3;  */

void FUN_1004466b4(void)

{
  func_0x000107c61168(&PTR_PTR_112ff5a18);
  return;
}



/* Entry: 1004466d4; end: 10044688f;  */

void FUN_1004466d4(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [24];
  
  if (lRam0000000113594e00 != -1) {
    func_0x000107c61568(0x113594e00,FUN_1004468d0);
  }
  func_0x000107c61428(0x113594e08,auStack_68,0x20,0);
  lVar1 = lRam0000000113594e08;
  if (*(long *)(lRam0000000113594e08 + 0x10) != 0) {
    func_0x000107c61434(lRam0000000113594e08);
    lVar2 = param_3;
    uVar6 = param_4;
    FUN_100446b48(param_3,param_4,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,FUN_1000292e8);
    if ((uVar6 & 1) != 0) {
      puVar7 = *(undefined1 **)(*(long *)(lVar1 + 0x38) + lVar2 * 8);
      func_0x000107c6157c(puVar7);
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(lVar1);
      goto LAB_100446858;
    }
    func_0x000107c6142c(lVar1);
  }
  puVar7 = auStack_68;
  func_0x000107c614a8();
  FUN_1004466b4();
  func_0x000107c613fc();
  uVar3 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1004468e4();
  *(undefined **)(puVar7 + 0x20) = puVar4;
  func_0x000100446a04();
  *(undefined **)(puVar7 + 0x28) = puVar5;
  *(undefined8 *)(puVar7 + 0x18) = param_2;
  func_0x000107c61428(0x113594e08,auStack_68,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000107c6157c(puVar7);
  lVar2 = lRam0000000113594e08;
  func_0x000107c61558(lRam0000000113594e08);
  lVar1 = lRam0000000113594e08;
  lRam0000000113594e08 = 0x8000000000000000;
  FUN_100446bc0(puVar7,param_3,param_4,lVar2);
  func_0x000107c6142c(param_4);
  lRam0000000113594e08 = lVar1;
  func_0x000107c614a8(auStack_68);
LAB_100446858:
  *param_1 = puVar7;
  return;
}



/* Entry: 100446890; end: 1004468bb;  */

void FUN_100446890(void)

{
  long unaff_x20;
  
  FUN_1004466d4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1004468bc; end: 1004468cf;  */

void FUN_1004468bc(void)

{
  FUN_100446890();
  return;
}



/* Entry: 1004468d0; end: 1004468e3;  */

void FUN_1004468d0(void)

{
  puRam0000000113594e08 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return;
}



/* Entry: 1004468e4; end: 100446b47;  */

undefined * FUN_1004468e4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    FUN_1000285a8(0x112ff5aa8,&UNK_10dc62da8);
    puVar6 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar4 = PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88;
    puVar11 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar11[-2];
      uVar3 = puVar11[-1];
      uVar10 = *puVar11;
      FUN_10006c00c(uVar2,uVar3);
      func_0x000107c61434(uVar10);
      uVar7 = uVar2;
      uVar8 = uVar3;
      FUN_100446b48(uVar2,uVar3,puVar4,&UNK_102dba2f8);
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100446a00);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100446a04);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar11 = puVar11 + 3;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 100446b48; end: 100446bbf;  */

void FUN_100446b48(undefined8 param_1,undefined8 param_2,code *param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  puVar1 = auStack_88;
  (*param_3)(puVar1,param_1,param_2);
  func_0x000107c606a8();
                    /* WARNING: Could not recover jumptable at 0x000100446bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar1);
  return;
}



/* Entry: 100446bc0; end: 100446d2f;  */

void FUN_100446bc0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_100446b48(param_2,param_3,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,FUN_1000292e8);
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100446cb8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_100446d30(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    FUN_100446b48(param_2,param_3,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,FUN_1000292e8);
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100446c80);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103bddd5c();
    lVar6 = *unaff_x20;
    goto joined_r0x000100446ccc;
  }
  lVar6 = *unaff_x20;
joined_r0x000100446ccc:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100446d30);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 100446d30; end: 100446fcb;  */

void FUN_100446d30(long param_1,ulong param_2)

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
  uVar6 = 0x112ff5ab8;
  FUN_1000285a8(0x112ff5ab8,&UNK_10dc62db8);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_100446f98:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100446fc8);
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
          goto LAB_100446f98;
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
      func_0x000107c6157c(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100446fcc);
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



/* Entry: 100446fcc; end: 10044718f; -[SCFriendOfGroupStoryPostableConsentObserver initWithDocObjectContext:performer:currentUserId:conversationUpdaterEventPublisher:conversationDataFetcher:missingMetadataHandler:] */

undefined1 *
FUN_100446fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126fc338;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c539f8(*(undefined8 *)((long)puVar1 + 0x48));
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100447190; end: 1004471c7; -[SCCustomStoriesDataSyncer warmUpObservers] */

void FUN_100447190(long param_1)

{
  func_0x000107c5bb30(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c5bb40(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c5bb44(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c24f7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_startObserving_112671820);
  return;
}



/* Entry: 1004471c8; end: 10044721f; -[SCCustomStoriesObserver startObservingCustomStoriesMetadata] */

void FUN_1004471c8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100447a14;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 100447220; end: 100447277; -[SCCustomStoriesObserver startObservingPendingCustomStoriesMetadata] */

void FUN_100447220(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100558604;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 100447278; end: 1004472cf; -[SCPostableCustomStoriesObserver startObservingPostableCustomStories] */

void FUN_100447278(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100559db8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 1004472d0; end: 100447327; -[SCFriendOfGroupStoryPostableConsentObserver startObserving] */

void FUN_1004472d0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10055a900;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 100447328; end: 1004473df; -[SCCustomStoriesDataSyncer forceSyncCustomStoriesMetadataWithFullSync:] */

void FUN_100447328(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1004473e0; end: 10044744f;  */

void FUN_1004473e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c3b374(lVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100447450; end: 10044748f;  */

void FUN_100447450(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b780();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100447490; end: 1004474ff; -[SCStoriesServicesEntryPoint _friendStoriesDateUpdatePerfomer] */

void FUN_100447490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3a2727);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x11,0,0x15);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100447500; end: 1004475a3; -[SCStoriesServicesEntryPoint _createStoriesCachedPropertiesWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100447500(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112753c44;
  func_0x000107c61174(param_3);
  param_1 = param_1 + lVar3;
  func_0x000107c61148(param_1);
  lVar3 = param_1;
  func_0x000107c421c8();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126cf1c0;
  func_0x000107c610f4(PTR_PTR_1126cf1c0);
  func_0x000107c4666c();
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004475a4; end: 100447647; -[SCStoriesCachedPropertiesCoordinator initWithDocObjectContext:performer:] */

undefined1 *
FUN_1004475a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f9d80;
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



/* Entry: 100447648; end: 10044769f; -[SCStoriesCachedPropertiesCoordinator loadPropertiesFromDisk] */

void FUN_100447648(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x10044d8c0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 1004476a0; end: 100447887; -[SCStoriesServicesEntryPoint _thumbnailCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004476a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar1 = param_1 + _DAT_112753c48;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar3 = lVar2;
  FUN_100447888();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar4 = PTR_PTR_1126cf160;
  func_0x000107c610f4(PTR_PTR_1126cf160);
  func_0x000107c45b28();
  lVar1 = param_1 + _DAT_112753c74;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c3e464();
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112753c58;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c444a0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar6 = PTR_PTR_1126cf168;
  func_0x000107c610f4(PTR_PTR_1126cf168);
  lVar1 = param_1 + _DAT_112753c78;
  func_0x000107c61148(lVar1);
  lVar7 = lVar1;
  func_0x000107c40430();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126b1170;
  func_0x000107c610f4(PTR_PTR_1126b1170);
  param_1 = param_1 + _DAT_112753c7c;
  func_0x000107c61148(param_1);
  lVar9 = param_1;
  func_0x000107c408d0();
  func_0x000107c61180();
  func_0x000107c46228(puVar8,param_2,lVar9);
  func_0x000107c48a64(puVar6,param_2,puVar4,lVar5,lVar7,lVar2,puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100447888; end: 100447907;  */

void FUN_100447888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9940;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  func_0x000107c478c4();
  uVar2 = param_1;
  func_0x000107c3eee8(param_1,param_2,&PTR____CFConstantStringClassReference_110f83418,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100447908; end: 100447973; -[SCCacheSizePolicy initWithName:defaultSizeMB:] */

undefined8
FUN_100447908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1133e0f78;
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  FUN_100447974();
  func_0x000107c478c8(param_1,param_2,param_3,param_4,puVar1,uVar2);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100447974; end: 100447a0b;  */

undefined8 FUN_100447974(void)

{
  if (lRam00000001137fd958 != -1) {
    FUN_10002a2fc(0x1137fd958,&PTR___NSConcreteGlobalBlock_110d95e48);
  }
  return uRam0000000113400bb8;
}



/* Entry: 100447a0c; end: 100447a13;  */

void FUN_100447a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100447a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 100447a14; end: 100447b77;  */

void FUN_100447a14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_100447b78();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c3cbc4(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61144(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x000107c4f7c0(uVar4);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar1 = uVar3;
  func_0x000107c4da54();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar1;
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100447b78; end: 100447c4f;  */

void FUN_100447b78(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126b47a0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  func_0x000107c61180();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100447c50; end: 100447d33; -[SCCacheSizePolicy initWithName:defaultSizeMB:evictPolicyBlock:diskAvailabilityMode:] */

undefined1 *
FUN_100447c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270aee8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar4);
    if (param_6 < 2) {
      uVar3 = 1;
    }
    else {
      if ((1 < param_6 - 2) && (param_6 != 99)) goto LAB_100447d08;
      uVar3 = 0;
    }
    *(undefined1 *)((long)puVar1 + 0x18) = uVar3;
  }
LAB_100447d08:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100447d34; end: 100447d3f; -[SCUserSession cache:diskSizeLimitConfig:] */

void FUN_100447d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf26330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_cache_metricsName_diskSizeLimitC_1125a7270,param_3,0,param_4);
  return;
}



/* Entry: 100447d40; end: 100447d47; -[SCUserSession cache:metricsName:diskSizeLimitConfig:] */

void FUN_100447d40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf26350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cache_metricsName_diskSizeLimitC_1125a7278);
  return;
}



/* Entry: 100447d48; end: 100447d4f; -[SCUserSession cache:metricsName:diskSizeLimitConfig:useMemoryCache:] */

void FUN_100447d48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf26370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cache_metricsName_diskSizeLimitC_1125a7280);
  return;
}


