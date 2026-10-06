/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028e5f34; end: 1028e5f73;  */

void FUN_1028e5f34(void)

{
  func_0x000107c61168(&PTR_PTR_11286d458);
  return;
}



/* Entry: 1028e5f74; end: 1028e6043;  */

/* WARNING: Possible PIC construction at 0x0001028e5fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e5fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e602c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028e5fe4) */
/* WARNING: Removing unreachable block (ram,0x0001028e5fc0) */
/* WARNING: Removing unreachable block (ram,0x0001028e6030) */

void FUN_1028e5f74(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1440;
  func_0x000107c610f8(PTR_PTR_1126b1440);
  func_0x000107c453e4();
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5a344(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1028e6044; end: 1028e615b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e6044(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_48;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca658);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eca660) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eca668) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112eca670) = 1;
  lVar2 = _DAT_112eca678;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112eca680,&UNK_10daed438);
  func_0x000107c613fc();
  ppuVar4 = &puStack_48;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112eca688) = 0;
  lVar2 = _DAT_112eca690;
  FUN_1028e5d44();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112eca698) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ExternalMusicSettingsImplementation/ExternalMusicSettingsViewController.swift"
                      ,0x4d,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e615c);
  (*pcVar3)();
}



/* Entry: 1028e615c; end: 1028e617b;  */

void FUN_1028e615c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028e617c; end: 1028e61d3;  */

void FUN_1028e617c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1028e6710;
  plVar2[0x26] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0x27] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x28] = lVar1;
  plVar2[0x29] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e4c20,lVar1,lVar3);
  return;
}



/* Entry: 1028e61d4; end: 1028e61e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e61d4(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112eca690;
  if (lVar5 != 0) {
    func_0x000107c61428(lVar5 + _DAT_112eca690,auStack_80,0,0);
    lVar6 = *(long *)(lVar5 + lVar6);
    puVar7 = (ulong *)(lVar6 + 0x40);
    uVar9 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (-uVar9 < 0x40) {
      uVar10 = ~(-1L << (-uVar9 & 0x3f));
    }
    uVar10 = uVar10 & *puVar7;
    func_0x000107c61438(lVar6,2);
    lVar8 = 0;
    lVar1 = lVar8;
    while( true ) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        func_0x000107c555d0(*(undefined8 *)
                             (*(long *)(lVar6 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                             lVar1 * 0x200));
        lVar8 = lVar1;
      }
      bVar4 = SCARRY8(lVar1,1);
      lVar1 = lVar1 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e2398);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar9 >> 6) <= lVar1) break;
      uVar10 = puVar7[lVar1];
    }
    func_0x000107c6142c(lVar6);
    func_0x0001028e61dc(lVar6,puVar7,~uVar9,lVar8,0);
    func_0x0001028e2398();
    lStack_88 = lVar6;
    func_0x0001007d6d78(&lStack_88);
    func_0x000107c61170(lVar5);
    func_0x000107c6142c(lVar6);
  }
  return;
}



/* Entry: 1028e61e4; end: 1028e62c7;  */

undefined8 FUN_1028e61e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112eca730;
  func_0x0001000285a8(0x112eca730,&UNK_10dc001e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1028e62c8; end: 1028e62fb;  */

void FUN_1028e62c8(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1028e62fc; end: 1028e634b;  */

void FUN_1028e62fc(void)

{
  func_0x0001028e3e3c();
  return;
}



/* Entry: 1028e634c; end: 1028e635b;  */

/* WARNING: Possible PIC construction at 0x0001028e44dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028e44e0) */

void FUN_1028e634c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_110566ae0;
  func_0x000107c613fc(&UNK_110566ae0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c();
  func_0x000107c61174(param_1);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10daed560,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028e635c; end: 1028e639b;  */

void FUN_1028e635c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1028e639c; end: 1028e6407;  */

void FUN_1028e639c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1028e6718;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[9] = lVar1;
  plVar3[10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e4808,lVar1,lVar2);
  return;
}



/* Entry: 1028e6408; end: 1028e646b;  */

void FUN_1028e6408(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1028e671c;
  plVar3[6] = lVar2;
  plVar3[7] = lVar1;
  plVar3[5] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[9] = lVar1;
  plVar3[10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e4568,lVar1,lVar2);
  return;
}



/* Entry: 1028e646c; end: 1028e64d3;  */

void FUN_1028e646c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1028e6720;
  *(undefined4 *)(plVar3 + 0xc) = uVar1;
  plVar3[5] = param_1;
  plVar3[6] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[7] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[8] = lVar2;
  plVar3[9] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e3f50,lVar2,lVar4);
  return;
}



/* Entry: 1028e64d4; end: 1028e6513;  */

undefined8 FUN_1028e64d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1028e6514; end: 1028e657b;  */

void FUN_1028e6514(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1028e657c;
  *(undefined4 *)(plVar3 + 0xc) = uVar1;
  plVar3[5] = param_1;
  plVar3[6] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[7] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[8] = lVar2;
  plVar3[9] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e3078,lVar2,lVar4);
  return;
}



/* Entry: 1028e657c; end: 1028e65b7;  */

void FUN_1028e657c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028e65b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028e65b8; end: 1028e65bf;  */

void FUN_1028e65b8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1028e65c0; end: 1028e664b;  */

void FUN_1028e65c0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1028e6608;
  plVar3[0xf] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x10] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e2f08,lVar1,lVar2);
  return;
}



/* Entry: 1028e664c; end: 1028e66bb;  */

void FUN_1028e664c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1028e6724;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1028e66bc; end: 1028e6703;  */

void FUN_1028e66bc(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1028e6704; end: 1028e6707; -[_TtC35ExternalMusicSettingsImplementationP33_3BB40CEC8814DC82EB969D35944BC17F22StubFriendmojiProvider observeFriendmojisForGroupsWithRequests:] */

void FUN_1028e6704(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c49470();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1028e6708; end: 1028e672b; -[_TtC35ExternalMusicSettingsImplementationP33_3BB40CEC8814DC82EB969D35944BC17F22StubFriendmojiProvider observeFriendmojisForUsersWithRequests:] */

void FUN_1028e6708(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c49470();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1028e672c; end: 1028e672f; -[_TtC35ExternalMusicSettingsImplementationP33_3BB40CEC8814DC82EB969D35944BC17F22StubFriendmojiProvider forGroupsWithRequests:completion:] */

void FUN_1028e672c(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  (**(code **)(in_x3 + 0x10))(in_x3,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1028e6730; end: 1028e6733; -[_TtC35ExternalMusicSettingsImplementationP33_3BB40CEC8814DC82EB969D35944BC17F22StubFriendmojiProvider forUsersWithRequests:completion:] */

void FUN_1028e6730(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  (**(code **)(in_x3 + 0x10))(in_x3,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1028e6734; end: 1028e691f;  */

undefined4 FUN_1028e6734(void)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long extraout_x8;
  long *plVar4;
  
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = (long *)(&stack0xffffffffffffffe0 + -extraout_x8);
  func_0x000101bf8e48();
  lVar1 = 0;
  func_0x000103a82768();
  plVar2 = plVar4;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(plVar4,1,lVar1);
  if ((int)plVar2 == 1) {
    uVar3 = 0;
  }
  else {
    plVar2 = plVar4;
    func_0x000107c614c4(plVar4,lVar1);
    if ((int)plVar2 == 0) {
      lVar1 = 0x112e08440;
      func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
      func_0x000107c6142c(*(undefined8 *)((long)plVar4 + (long)*(int *)(lVar1 + 0x30)));
      func_0x0001000d1dcc(plVar4);
      uVar3 = 3;
    }
    else if ((int)plVar2 == 1) {
      lVar1 = *(long *)(*plVar4 + 0x10);
      func_0x000107c6142c();
      uVar3 = 0;
      if (lVar1 != 0) {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 1028e6920; end: 1028e6a77;  */

void FUN_1028e6920(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_3 < 2) {
    if ((param_3 != 0) && (param_3 == 1)) {
      lVar2 = 0;
      func_0x000103a82768();
      func_0x000107c6159c(param_1,lVar2,2);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
      uVar3 = 0;
      goto LAB_1028e6a14;
    }
  }
  else {
    if (param_3 == 2) {
      *param_1 = param_2;
      lVar2 = 0;
      func_0x000103a82768();
      uVar3 = 1;
LAB_1028e6a44:
      func_0x000107c6159c(param_1,lVar2,uVar3);
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,0,1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
    if (param_3 == 3) {
      lVar2 = 0x112e08440;
      func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
      iVar1 = *(int *)(lVar2 + 0x30);
      lVar2 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,1,1,lVar2);
      *(undefined8 *)((long)param_1 + (long)iVar1) = param_2;
      lVar2 = 0;
      func_0x000103a82768();
      uVar3 = 0;
      goto LAB_1028e6a44;
    }
  }
  lVar2 = 0;
  func_0x000103a82768();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  uVar3 = 1;
LAB_1028e6a14:
                    /* WARNING: Could not recover jumptable at 0x0001028e6a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar2);
  return;
}



/* Entry: 1028e6a78; end: 1028e6b4f;  */

void FUN_1028e6a78(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  lVar3 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  lVar3 = 0;
  func_0x000103a82768();
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e6b50,uVar4,uVar5);
  return;
}



/* Entry: 1028e6b50; end: 1028e6cff;  */

void FUN_1028e6b50(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  puVar7 = *(undefined **)(unaff_x22 + 0x88);
  puVar3 = puVar7;
  func_0x000107c4d078(puVar7);
  func_0x000107c5d99c();
  func_0x000107c61180();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar7 != (undefined *)0x0) {
    puVar4 = puVar7;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar7);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar2 = *(long *)(unaff_x22 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  FUN_1028e6920(uVar11,puVar4,puVar3);
  func_0x000107c6142c(puVar4);
  (**(code **)(lVar2 + 0x30))(uVar11,1,uVar8);
  if ((int)uVar11 != 1) {
    lVar9 = *(long *)(unaff_x22 + 0x90);
    func_0x000101c00738(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xc0));
    uVar8 = *(undefined8 *)(lVar9 + 0x28);
    lVar2 = *(long *)(lVar9 + 0x30);
    func_0x0001000a8868(lVar9 + 0x10,uVar8);
    (**(code **)(lVar2 + 0x30))(unaff_x22 + 0x10,uVar8,lVar2);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar8);
    piVar6 = *(int **)(lVar2 + 8);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1028e6d00;
                    /* WARNING: Could not recover jumptable at 0x0001028e6cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))(plVar5,*(undefined8 *)(unaff_x22 + 0xa0),uVar8,lVar2);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  func_0x0001028e86c0(uVar8,0x112e085c8,&UNK_10d9dcfb0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001028e6c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e6d00; end: 1028e6d5f;  */

void FUN_1028e6d00(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_1028e6d60;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_1028e709c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1028e6d60; end: 1028e6e1b;  */

void FUN_1028e6d60(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  lVar3 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x10))(unaff_x22 + 0x38,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e6e1c;
                    /* WARNING: Could not recover jumptable at 0x0001028e6e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(0x50405,0,1,uVar2,lVar3);
  return;
}



/* Entry: 1028e6e1c; end: 1028e6e8b;  */

void FUN_1028e6e1c(undefined1 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe8));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x100) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_1028e6e8c;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_1028e7178;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1028e6e8c; end: 1028e6f83;  */

void FUN_1028e6e8c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x101) = *(undefined1 *)(unaff_x22 + 0x100);
  lVar2 = *(long *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x0001000834e4(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  lVar7 = *(long *)(lVar3 + 0x30);
  func_0x0001000a8868(lVar3 + 0x10,uVar4);
  (**(code **)(lVar7 + 0x30))(unaff_x22 + 0x60,uVar4,lVar7);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar4);
  func_0x000101c0052c(uVar5,uVar6);
  (**(code **)(lVar2 + 0x38))(uVar6,0,1,uVar10);
  piVar9 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1028e6f84;
                    /* WARNING: Could not recover jumptable at 0x0001028e6f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(*(undefined8 *)(unaff_x22 + 0x98),uVar4,lVar3);
  return;
}



/* Entry: 1028e6f84; end: 1028e6ff7;  */

void FUN_1028e6f84(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf0));
  if (unaff_x20 == 0) {
    func_0x0001028e86c0(*(undefined8 *)(lVar4 + 0x98),0x112e085c8,&UNK_10d9dcfb0);
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_1028e6ff8;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_1028e7270;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1028e6ff8; end: 1028e709b;  */

void FUN_1028e6ff8(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x101);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  func_0x0001000834e4(unaff_x22 + 0x60);
  FUN_1028e8384(uVar3,uVar1,uVar2);
  func_0x0001028e86c0(uVar3,0x112e085c8,&UNK_10d9dcfb0);
  func_0x000101c00570(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001028e7098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e709c; end: 1028e7177;  */

void FUN_1028e709c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar3 = *(long *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  (**(code **)(lVar3 + 0x38))(uVar7,1,1,uVar2);
  lVar5 = *(long *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  lVar3 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x10))(unaff_x22 + 0x38,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e6e1c;
                    /* WARNING: Could not recover jumptable at 0x0001028e7174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(0x50405,0,1,uVar2,lVar3);
  return;
}



/* Entry: 1028e7178; end: 1028e726f;  */

void FUN_1028e7178(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x101) = 1;
  lVar2 = *(long *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x0001000834e4(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  lVar7 = *(long *)(lVar3 + 0x30);
  func_0x0001000a8868(lVar3 + 0x10,uVar4);
  (**(code **)(lVar7 + 0x30))(unaff_x22 + 0x60,uVar4,lVar7);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar4);
  func_0x000101c0052c(uVar5,uVar6);
  (**(code **)(lVar2 + 0x38))(uVar6,0,1,uVar10);
  piVar9 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1028e6f84;
                    /* WARNING: Could not recover jumptable at 0x0001028e726c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(*(undefined8 *)(unaff_x22 + 0x98),uVar4,lVar3);
  return;
}



/* Entry: 1028e7270; end: 1028e7327;  */

void FUN_1028e7270(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  func_0x0001028e86c0(uVar2,0x112e085c8,&UNK_10d9dcfb0);
  func_0x0001028e86c0(uVar4,0x112e085c8,&UNK_10d9dcfb0);
  func_0x000101c00570(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x000107c614ac(uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001028e7324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e7328; end: 1028e740b;  */

void FUN_1028e7328(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  lVar1 = 0;
  func_0x000103a82768();
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e740c,uVar4,uVar5);
  return;
}



/* Entry: 1028e740c; end: 1028e74b7;  */

void FUN_1028e740c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  lVar3 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x30))(unaff_x22 + 0x10,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e74b8;
                    /* WARNING: Could not recover jumptable at 0x0001028e74b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar4,*(undefined8 *)(unaff_x22 + 0xe8),uVar2,lVar3);
  return;
}



/* Entry: 1028e74b8; end: 1028e7517;  */

void FUN_1028e74b8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x108));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xf8);
    uVar3 = *(undefined8 *)(lVar4 + 0x100);
    pcVar1 = FUN_1028e7518;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xf8);
    uVar3 = *(undefined8 *)(lVar4 + 0x100);
    pcVar1 = FUN_1028e7b50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1028e7518; end: 1028e75d3;  */

void FUN_1028e7518(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  lVar3 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x10))(unaff_x22 + 0x38,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e75d4;
                    /* WARNING: Could not recover jumptable at 0x0001028e75d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(0x50405,0,1,uVar2,lVar3);
  return;
}



/* Entry: 1028e75d4; end: 1028e7643;  */

void FUN_1028e75d4(undefined1 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x110));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x138) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0xf8);
    uVar3 = *(undefined8 *)(lVar4 + 0x100);
    pcVar1 = FUN_1028e7644;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xf8);
    uVar3 = *(undefined8 *)(lVar4 + 0x100);
    pcVar1 = FUN_1028e7c2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1028e7644; end: 1028e76f7;  */

void FUN_1028e7644(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x139) = *(undefined1 *)(unaff_x22 + 0x138);
  lVar6 = *(long *)(unaff_x22 + 0xb0);
  func_0x0001000834e4(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  lVar3 = *(long *)(lVar6 + 0x30);
  func_0x0001000a8868(lVar6 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x30))(unaff_x22 + 0x60,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e76f8;
                    /* WARNING: Could not recover jumptable at 0x0001028e76f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 1028e76f8; end: 1028e774f;  */

void FUN_1028e76f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1028e7750;
  }
  else {
    pcVar1 = FUN_1028e7ce0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xf8),*(undefined8 *)(lVar2 + 0x100));
  return;
}



/* Entry: 1028e7750; end: 1028e7803;  */

void FUN_1028e7750(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0xb0);
  func_0x0001000834e4(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  lVar3 = *(long *)(lVar6 + 0x30);
  func_0x0001000a8868(lVar6 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x30))(unaff_x22 + 0x88,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e7804;
                    /* WARNING: Could not recover jumptable at 0x0001028e7800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(plVar4,*(undefined8 *)(unaff_x22 + 0xe0),uVar2,lVar3);
  return;
}



/* Entry: 1028e7804; end: 1028e7863;  */

void FUN_1028e7804(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x128));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xf8);
    uVar3 = *(undefined8 *)(lVar4 + 0x100);
    pcVar1 = FUN_1028e7864;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xf8);
    uVar3 = *(undefined8 *)(lVar4 + 0x100);
    pcVar1 = FUN_1028e7d78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1028e7864; end: 1028e78ff;  */

void FUN_1028e7864(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x88);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1028e78bc;
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  plVar1[3] = *(long *)(unaff_x22 + 0xe0);
  plVar1[4] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[5] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[6] = lVar2;
  plVar1[7] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e81dc,lVar2,lVar3);
  return;
}



/* Entry: 1028e7900; end: 1028e7b4f;  */

void FUN_1028e7900(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar8 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000101bf8e48(uVar7,uVar4);
  (**(code **)(lVar8 + 0x30))(uVar4,1,uVar1);
  if ((int)uVar4 == 1) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    lVar6 = *(long *)(unaff_x22 + 0xd8);
    uVar4 = 0x112e085c8;
    puVar5 = &UNK_10d9dcfb0;
    func_0x0001028e86c0(*(undefined8 *)(unaff_x22 + 0xe0),0x112e085c8,&UNK_10d9dcfb0);
    func_0x0001028e86c0(uVar1,0x112e085c8,&UNK_10d9dcfb0);
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x139);
    func_0x000101c00738(*(undefined8 *)(unaff_x22 + 0xd8),uVar4);
    FUN_1028e8384(uVar9,uVar4,uVar2);
    func_0x000101c0052c(uVar4,uVar7);
    func_0x000107c614c4(uVar7,uVar1);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
    if ((int)uVar7 != 0) {
      if ((int)uVar7 == 1) {
        lVar8 = *(long *)(**(long **)(unaff_x22 + 200) + 0x10);
        func_0x000107c6142c(**(long **)(unaff_x22 + 200));
        func_0x000101c00570(uVar9);
        func_0x0001028e86c0(uVar4,0x112e085c8,&UNK_10d9dcfb0);
        func_0x0001028e86c0(uVar1,0x112e085c8,&UNK_10d9dcfb0);
        bVar3 = lVar8 != 0;
      }
      else {
        func_0x000101c00570(uVar9);
        func_0x0001028e86c0(uVar4,0x112e085c8,&UNK_10d9dcfb0);
        func_0x0001028e86c0(uVar1,0x112e085c8,&UNK_10d9dcfb0);
        bVar3 = true;
      }
      goto LAB_1028e7ac4;
    }
    lVar6 = *(long *)(unaff_x22 + 200);
    func_0x000101c00570(uVar9);
    func_0x0001028e86c0(uVar4,0x112e085c8,&UNK_10d9dcfb0);
    func_0x0001028e86c0(uVar1,0x112e085c8,&UNK_10d9dcfb0);
    lVar8 = 0x112e08440;
    func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
    func_0x000107c6142c(*(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x30)));
    uVar4 = 0x112d373d8;
    puVar5 = &UNK_10d9014c0;
  }
  func_0x0001028e86c0(lVar6,uVar4,puVar5);
  bVar3 = false;
LAB_1028e7ac4:
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001028e7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar3);
  return;
}



/* Entry: 1028e7b50; end: 1028e7c2b;  */

void FUN_1028e7b50(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  (**(code **)(lVar3 + 0x38))(uVar7,1,1,uVar2);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  lVar3 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x10))(unaff_x22 + 0x38,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e75d4;
                    /* WARNING: Could not recover jumptable at 0x0001028e7c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(0x50405,0,1,uVar2,lVar3);
  return;
}



/* Entry: 1028e7c2c; end: 1028e7cdf;  */

void FUN_1028e7c2c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x139) = 1;
  lVar6 = *(long *)(unaff_x22 + 0xb0);
  func_0x0001000834e4(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  lVar3 = *(long *)(lVar6 + 0x30);
  func_0x0001000a8868(lVar6 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x30))(unaff_x22 + 0x60,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e76f8;
                    /* WARNING: Could not recover jumptable at 0x0001028e7cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 1028e7ce0; end: 1028e7d77;  */

void FUN_1028e7ce0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x0001028e86c0(uVar1,0x112e085c8,&UNK_10d9dcfb0);
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x000107c614ac(uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001028e7d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1028e7d78; end: 1028e7df7;  */

void FUN_1028e7d78(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar5 = *(long *)(unaff_x22 + 0xc0);
  func_0x0001000834e4(unaff_x22 + 0x88);
  (**(code **)(lVar5 + 0x38))(uVar4,1,1,uVar1);
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1028e78bc;
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  plVar2[3] = *(long *)(unaff_x22 + 0xe0);
  plVar2[4] = lVar5;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar3;
  func_0x000107c5fce8();
  plVar2[5] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[6] = lVar3;
  plVar2[7] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e81dc,lVar3,lVar5);
  return;
}



/* Entry: 1028e7df8; end: 1028e7e9b;  */

void FUN_1028e7df8(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e7e9c,uVar4,uVar5);
  return;
}



/* Entry: 1028e7e9c; end: 1028e7f47;  */

void FUN_1028e7e9c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  lVar3 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x30))(unaff_x22 + 0x10,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e7f48;
                    /* WARNING: Could not recover jumptable at 0x0001028e7f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar4,*(undefined8 *)(unaff_x22 + 0x48),uVar2,lVar3);
  return;
}



/* Entry: 1028e7f48; end: 1028e7f9f;  */

void FUN_1028e7f48(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1028e7fa0;
  }
  else {
    pcVar1 = FUN_1028e809c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
  return;
}



/* Entry: 1028e7fa0; end: 1028e809b;  */

void FUN_1028e7fa0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  FUN_1028e8670(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50));
  func_0x0001000834e4(unaff_x22 + 0x10);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1028e8000;
  lVar3 = *(long *)(unaff_x22 + 0x40);
  plVar1[3] = *(long *)(unaff_x22 + 0x50);
  plVar1[4] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[5] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[6] = lVar2;
  plVar1[7] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e81dc,lVar2,lVar3);
  return;
}



/* Entry: 1028e809c; end: 1028e816f;  */

void FUN_1028e809c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar2 = (undefined8 *)(unaff_x22 + 0x38);
  *puVar2 = uVar1;
  func_0x000107c614b0(uVar1);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar3 = unaff_x22 + 0x88;
  func_0x000107c6147c(lVar3,puVar2,uVar1,&UNK_1106c6770,0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  if ((int)lVar3 == 0 || 1 < *(byte *)(unaff_x22 + 0x88)) {
    func_0x000107c614ac(*puVar2);
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c614ac(uVar1);
    (**(code **)(lVar3 + 0x68))();
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  }
  func_0x000107c614ac(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001028e816c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e8170; end: 1028e81db;  */

void FUN_1028e8170(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e81dc,uVar1,uVar2);
  return;
}



/* Entry: 1028e81dc; end: 1028e823f;  */

void FUN_1028e81dc(undefined4 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x20);
  FUN_1028e6734();
  *(undefined4 *)(unaff_x22 + 0x50) = param_1;
  plVar1 = (long *)(lVar3 + 0x40);
  func_0x0001000a8868(plVar1,*(undefined8 *)(lVar3 + 0x58));
  lVar3 = *plVar1;
  plVar1 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1028e8240;
  plVar1[0x19] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar1[0x1a] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[0x1b] = lVar3;
  func_0x000100eea164();
  plVar1[0x1c] = lVar3;
  func_0x000107c5fca8();
  plVar1[0x1d] = lVar2;
  plVar1[0x1e] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e8774,lVar2,lVar3);
  return;
}



/* Entry: 1028e8240; end: 1028e828b;  */

void FUN_1028e8240(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1028e828c,*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x38));
  return;
}



/* Entry: 1028e828c; end: 1028e8383;  */

void FUN_1028e828c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(uVar2);
  func_0x0001028e6834();
  func_0x000107c49fd4(*(undefined8 *)(lVar1 + 0x38));
  puVar3 = PTR_PTR_1126ab7e0;
  func_0x000107c610f8();
  uVar4 = 0;
  func_0x000101bf9198(0);
  uVar5 = uVar6;
  func_0x000107c5fc48(uVar6,uVar4);
  func_0x000107c6142c(uVar6);
  uVar4 = uVar2;
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar2);
  func_0x000107c48574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x22 + 0x10) = puVar3;
  func_0x0001007d6d78();
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001028e8380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e8384; end: 1028e860b;  */

void FUN_1028e8384(undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&uStack_90 - extraout_x8;
  lVar1 = 0;
  func_0x000103a82768();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar4 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar4 - extraout_x12;
  if (param_3 != '\x01') {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar2 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar6);
    (**(code **)(lVar2 + 0x40))(auStack_88,uVar6,lVar2);
    func_0x0001000a8868(auStack_88,uStack_70);
    func_0x000101c0052c(param_2,lVar7);
    lVar2 = lVar7;
    func_0x000107c614c4(lVar7,lVar1);
    if ((int)lVar2 == 0) {
      lVar2 = 0x112e08440;
      func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
      func_0x000107c6142c(*(undefined8 *)(lVar7 + *(int *)(lVar2 + 0x30)));
      func_0x0001028e86c0(lVar7,0x112d373d8,&UNK_10d9014c0);
      uVar6 = 2;
    }
    else if ((int)lVar2 == 1) {
      func_0x000101c00570(lVar7);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    func_0x000101bf8e48(param_1,lVar3);
    lVar7 = lVar3;
    (**(code **)(lVar8 + 0x30))(lVar3,1,lVar1);
    if ((int)lVar7 == 1) {
      func_0x0001028e86c0(lVar3,0x112e085c8,&UNK_10d9dcfb0);
      uVar5 = 0;
    }
    else {
      func_0x000101c0052c(lVar3,lVar4);
      lVar7 = lVar4;
      func_0x000107c614c4(lVar4,lVar1);
      if ((int)lVar7 == 0) {
        lVar1 = 0x112e08440;
        func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
        func_0x000107c6142c(*(undefined8 *)(lVar4 + *(int *)(lVar1 + 0x30)));
        func_0x0001028e86c0(lVar4,0x112d373d8,&UNK_10d9014c0);
        uVar5 = 2;
      }
      else if ((int)lVar7 == 1) {
        func_0x000101c00570(lVar4);
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      func_0x000101c00570(lVar3);
    }
    (**(code **)(lStack_68 + 0x18))(0,uVar6,uVar5,0,uStack_70,lStack_68);
    func_0x0001000834e4(auStack_88);
  }
  return;
}



/* Entry: 1028e860c; end: 1028e866f;  */

void FUN_1028e860c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028e8670; end: 1028e86ff;  */

undefined8 FUN_1028e8670(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1028e8700; end: 1028e8773;  */

void FUN_1028e8700(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e8774,uVar1,uVar2);
  return;
}



/* Entry: 1028e8774; end: 1028e883f;  */

void FUN_1028e8774(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 200);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028e8840);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xf8) = lVar3;
  func_0x000107c61170();
  if (lVar3 != 0) {
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x100) = lVar2;
    if (lVar2 == 0) {
      lVar2 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(long *)(unaff_x22 + 0x108) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e8840,lVar2);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x0001028e8810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1028e8840; end: 1028e894f;  */

void FUN_1028e8840(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xc0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1028e8950;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0;
  FUN_1028e98c8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar2;
  func_0x000107c5ffdc();
  puVar3 = &UNK_110566bf8;
  func_0x000107c613fc(&UNK_110566bf8,0x18,7);
  puVar5 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0x1028e991c;
  *(undefined **)(unaff_x22 + 0xb8) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xa0) = &UNK_100f6151c;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_110566c10;
  func_0x000107c60bc4(puVar5);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c4d320(uVar4);
  func_0x000107c60bd0(puVar5);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1028e8950; end: 1028e89c3;  */

void FUN_1028e8950(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1028e898c,*(undefined8 *)(*unaff_x22 + 0x108),*(undefined8 *)(*unaff_x22 + 0x110));
  return;
}



/* Entry: 1028e89c4; end: 1028e8a37;  */

void FUN_1028e89c4(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x128) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x130) = param_1;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e8a38,param_1);
  return;
}



/* Entry: 1028e8a38; end: 1028e8b23;  */

void FUN_1028e8a38(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xc0;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1028e8b24;
  lVar1 = unaff_x22 + 0x50;
  func_0x000107c61448(lVar1,0);
  lVar2 = lVar1;
  func_0x000107c5ffdc();
  puVar3 = &UNK_110566c48;
  func_0x000107c613fc(&UNK_110566c48,0x18,7);
  puVar5 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar1;
  *(code **)(unaff_x22 + 0xb0) = FUN_1028e90b0;
  *(undefined **)(unaff_x22 + 0xb8) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xa0) = &UNK_100f6151c;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_110566c60;
  func_0x000107c60bc4(puVar5);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c4f8a4(uVar4);
  func_0x000107c60bd0(puVar5);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 1028e8b24; end: 1028e8b97;  */

void FUN_1028e8b24(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1028e8b60,*(undefined8 *)(*unaff_x22 + 0x130),*(undefined8 *)(*unaff_x22 + 0x138));
  return;
}



/* Entry: 1028e8b98; end: 1028e904f;  */

void FUN_1028e8b98(undefined8 param_1,undefined *param_2)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long unaff_x22;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puStack_b8;
  ulong uStack_a8;
  undefined1 auStack_a0 [72];
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  puVar16 = *(undefined **)(unaff_x22 + 0xc0);
  puVar22 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
  if ((ulong)puVar16 >> 0x3e == 0) {
    puVar15 = *(undefined **)(puVar22 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = puVar22;
    if ((undefined *)0x7fffffffffffffff < puVar16) {
      puVar15 = puVar16;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (puVar15 != (undefined *)0x0) {
    puVar11 = param_2;
    puVar5 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar16 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar22 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e8d20);
            (*pcVar2)();
          }
          puVar4 = *(undefined **)(puVar16 + (long)puVar5 * 8 + 0x20);
          func_0x000107c61174();
          param_2 = puVar11;
        }
        else {
          puVar4 = puVar5;
          param_2 = puVar16;
          FUN_1028e9484(puVar5,puVar16,&PTR_PTR_1126b15c8,0x112d4ed88);
        }
        if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e8d1c);
          (*pcVar2)();
        }
        puVar20 = puVar5 + 1;
        func_0x000107c61174();
        puVar6 = puVar4;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) break;
        puVar5 = puVar6;
        func_0x000107c5faec();
        puVar11 = param_2;
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar4);
        puVar4 = puVar7;
        func_0x000107c61558();
        puVar6 = puVar7;
        if (((ulong)puVar4 & 1) == 0) {
          puVar11 = (undefined *)(*(long *)(puVar7 + 0x10) + 1);
          puVar6 = (undefined *)0x0;
          func_0x0001000d182c(0,puVar11,1,puVar7);
        }
        uVar21 = *(ulong *)(puVar6 + 0x10);
        puVar4 = (undefined *)(uVar21 + 1);
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar21) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          puVar11 = puVar4;
          func_0x0001000d182c(puVar7,puVar4,1,puVar6);
        }
        *(undefined **)(puVar7 + 0x10) = puVar4;
        *(undefined **)(puVar7 + uVar21 * 0x10 + 0x20) = puVar5;
        *(undefined **)(puVar7 + uVar21 * 0x10 + 0x28) = param_2;
        param_2 = puVar11;
        puVar5 = puVar20;
        if (puVar20 == puVar15) goto LAB_1028e8d40;
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      puVar11 = param_2;
      puVar5 = puVar5 + 1;
    } while (puVar20 != puVar15);
  }
LAB_1028e8d40:
  uVar21 = *(ulong *)(unaff_x22 + 0x120);
  func_0x000107c6142c(puVar16);
  puVar16 = puVar7;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar7);
  if (uVar21 >> 0x3e == 0) {
    uStack_a8 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_a8 = uVar21 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x120)) {
      uStack_a8 = *(ulong *)(unaff_x22 + 0x120);
    }
    func_0x000107c60480();
  }
  uVar19 = 0;
  lVar12 = *(long *)(unaff_x22 + 0x120);
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    if (uVar19 == uStack_a8) {
      uVar18 = *(undefined8 *)(unaff_x22 + 0x120);
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
      func_0x000107c6142c(puVar16);
      func_0x000107c6142c(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001028e9028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puStack_b8);
      return;
    }
    if ((uVar21 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e9034);
        (*pcVar2)();
      }
      uVar8 = *(ulong *)(lVar12 + 0x20 + uVar19 * 8);
      func_0x000107c61174();
    }
    else {
      param_2 = *(undefined **)(unaff_x22 + 0x120);
      uVar8 = uVar19;
      FUN_1028e9484(uVar19,param_2,&PTR_PTR_1126b15c8,0x112d4ed88);
    }
    bVar3 = SCARRY8(uVar19,1);
    uVar19 = uVar19 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e9030);
      (*pcVar2)();
    }
    uVar13 = uVar8;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar13 == 0) {
      uVar14 = 0;
      puVar22 = (undefined *)0xe000000000000000;
      if (*(long *)(puVar16 + 0x10) != 0) goto LAB_1028e8e38;
LAB_1028e8d98:
      param_2 = (undefined *)0x0;
    }
    else {
      uVar14 = uVar13;
      func_0x000107c5faec();
      func_0x000107c61170(uVar13);
      puVar22 = param_2;
      if (*(long *)(puVar16 + 0x10) == 0) goto LAB_1028e8d98;
LAB_1028e8e38:
      func_0x000107c6068c(auStack_a0,*(undefined8 *)(puVar16 + 0x28));
      puVar9 = auStack_a0;
      func_0x000107c5fb58(puVar9,uVar14,puVar22);
      func_0x000107c606a8();
      uVar13 = -1L << ((ulong)(byte)puVar16[0x20] & 0x3f);
      uVar17 = (ulong)puVar9 & (uVar13 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar16 + (uVar17 >> 6) * 8 + 0x38) >> (uVar17 & 0x3f) & 1) == 0)
      goto LAB_1028e8d98;
      do {
        puVar1 = (ulong *)(*(long *)(puVar16 + 0x30) + uVar17 * 0x10);
        uVar10 = *puVar1;
        puVar15 = (undefined *)puVar1[1];
        if ((uVar10 == uVar14 && puVar15 == puVar22) ||
           (func_0x000107c605b8(uVar10,puVar15,uVar14,puVar22,0), (uVar10 & 1) != 0)) {
          param_2 = (undefined *)0x1;
          goto LAB_1028e8d9c;
        }
        uVar17 = uVar17 + 1 & ~uVar13;
      } while ((*(ulong *)(puVar16 + (uVar17 >> 6) * 8 + 0x38) >> (uVar17 & 0x3f) & 1) != 0);
      param_2 = (undefined *)0x0;
    }
LAB_1028e8d9c:
    func_0x000107c6142c(puVar22);
    uVar13 = uVar8;
    FUN_1028e9640();
    func_0x000107c61170(uVar8);
    if (uVar13 != 0) {
      puVar22 = puStack_b8;
      func_0x000107c61550();
      if ((((int)puVar22 == 0) || ((long)puStack_b8 < 0)) ||
         (puVar22 = puStack_b8, ((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_b8 >> 0x3e == 0) {
          param_2 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          param_2 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_b8) {
            param_2 = puStack_b8;
          }
          func_0x000107c60480();
        }
        param_2 = param_2 + 1;
        puVar22 = (undefined *)0x0;
        FUN_1028e9164(0,param_2,1,puStack_b8,0x112e08bd8,&PTR_PTR_1126a8c48,0x112e08c90,
                      &UNK_10daed690);
      }
      uVar14 = (ulong)puVar22 & 0xffffffffffffff8;
      uVar8 = *(ulong *)(uVar14 + 0x10);
      puVar15 = (undefined *)(uVar8 + 1);
      puStack_b8 = puVar22;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar8) {
        puStack_b8 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
        param_2 = puVar15;
        FUN_1028e9164(puStack_b8,puVar15,1,puVar22,0x112e08bd8,&PTR_PTR_1126a8c48,0x112e08c90,
                      &UNK_10daed690);
        uVar14 = (ulong)puStack_b8 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar14 + 0x10) = puVar15;
      *(ulong *)(uVar14 + uVar8 * 8 + 0x20) = uVar13;
    }
  } while( true );
}



/* Entry: 1028e9050; end: 1028e906b;  */

void FUN_1028e9050(long param_1,long param_2)

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



/* Entry: 1028e906c; end: 1028e90af;  */

void FUN_1028e906c(undefined *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_2 == 0) && (param_1 != (undefined *)0x0)) {
    func_0x000107c61434();
    puVar1 = param_1;
  }
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_3);
  return;
}



/* Entry: 1028e90b0; end: 1028e90c7;  */

void FUN_1028e90b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1028e906c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1028e90c8; end: 1028e913f;  */

void FUN_1028e90c8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1028e98c8(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1028e9140; end: 1028e9163;  */

ulong FUN_1028e9140(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028e92c4);
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
  FUN_1028e92c4(uVar2,uVar4,0x112eca748,&PTR_PTR_1126ab7d8,0x112eca810,&UNK_10daed6a0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028e92c0);
      (*pcVar1)();
    }
    FUN_1028e9354(0,uVar2,uVar3 + 0x20,param_4,0x112eca748,&PTR_PTR_1126ab7d8);
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



/* Entry: 1028e9164; end: 1028e92c3;  */

ulong FUN_1028e9164(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028e92c4);
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
  FUN_1028e92c4(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028e92c0);
      (*pcVar1)();
    }
    FUN_1028e9354(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 1028e92c4; end: 1028e9353;  */

undefined *
FUN_1028e92c4(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1028e90c8(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1028e9354; end: 1028e946f;  */

long FUN_1028e9354(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e946c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e9470);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1028e98c8(0,param_5,param_6);
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
      FUN_1028e98c8(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e9468);
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



/* Entry: 1028e9470; end: 1028e9483;  */

ulong FUN_1028e9470(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e9568);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e956c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ab7d8;
    func_0x000107c61168(PTR_PTR_1126ab7d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ab7d8;
    func_0x000107c61168(PTR_PTR_1126ab7d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1028e98c8(0,0x112eca748,&PTR_PTR_1126ab7d8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e9640);
  (*pcVar2)();
}



/* Entry: 1028e9484; end: 1028e963f;  */

ulong FUN_1028e9484(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e9568);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e956c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1028e98c8(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e9640);
  (*pcVar2)();
}



/* Entry: 1028e9640; end: 1028e98c7;  */

undefined * FUN_1028e9640(double param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar1 == 0) {
    return (undefined *)0x0;
  }
  uVar2 = param_2;
  func_0x000107c5db08();
  func_0x000107c61180();
  if (uVar2 == 0) {
    func_0x000107c61170(uVar1);
    return (undefined *)0x0;
  }
  uVar8 = uVar2;
  func_0x000107c5faec();
  uVar3 = param_2;
  uVar7 = param_3;
  func_0x000107c42120();
  func_0x000107c61180();
  if (uVar3 == 0) {
LAB_1028e96e8:
    func_0x000107c61434(param_3);
    uVar7 = param_3;
    uVar4 = uVar8;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    uVar3 = uVar4 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar3 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) {
      func_0x000107c6142c(uVar7);
      goto LAB_1028e96e8;
    }
  }
  puVar5 = PTR_PTR_1126a8c48;
  func_0x000107c610f8(PTR_PTR_1126a8c48);
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c491fc(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  uVar1 = param_2;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar1 == 0) {
LAB_1028e9770:
    uVar8 = 0;
  }
  else {
    uVar8 = uVar1;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar8 == 0) goto LAB_1028e9770;
  }
  func_0x000107c52ae0(puVar5);
  func_0x000107c61170(uVar8);
  uVar1 = param_2;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar8 = uVar1;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar8 != 0) goto LAB_1028e97c0;
  }
  uVar8 = 0;
LAB_1028e97c0:
  func_0x000107c58e54(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c6142c(param_3);
  func_0x000107c5a42c(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c439a8();
  func_0x000107c61180();
  if (param_2 == 0) {
    param_1 = 0.0;
  }
  else {
    func_0x000107c4aa00();
    func_0x000107c61170(param_2);
    param_1 = param_1 * 1000.0;
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c55a48(puVar5);
  func_0x000107c61170(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55578(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c6142c(uVar7);
  return puVar5;
}



/* Entry: 1028e98c8; end: 1028e9907;  */

void FUN_1028e98c8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1028e9908; end: 1028e9923;  */

undefined1  [16] FUN_1028e9908(void)

{
  return ZEXT816(0x110566c98);
}



/* Entry: 1028e9924; end: 1028e9a77;  */

long FUN_1028e9924(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1028e9a78; end: 1028e9af7;  */

void FUN_1028e9a78(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_3 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1028ea09c;
                    /* WARNING: Could not recover jumptable at 0x0001028e9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,param_1,0,param_2,param_3);
  return;
}



/* Entry: 1028e9af8; end: 1028e9b73;  */

void FUN_1028e9af8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_3 + 0x10);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1028e9b74;
                    /* WARNING: Could not recover jumptable at 0x0001028e9b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,0,param_2,param_3);
  return;
}



/* Entry: 1028e9b74; end: 1028e9bbb;  */

void FUN_1028e9b74(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028e9bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028e9bbc; end: 1028e9c2b;  */

void FUN_1028e9bbc(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1028e9c2c;
                    /* WARNING: Could not recover jumptable at 0x0001028e9c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(0,param_1,param_2);
  return;
}



/* Entry: 1028e9c2c; end: 1028e9c7b;  */

void FUN_1028e9c2c(uint param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    param_1 = param_1 & 1;
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001028e9c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1028e9c7c; end: 1028e9ceb;  */

void FUN_1028e9c7c(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_2 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1028ea0a4;
                    /* WARNING: Could not recover jumptable at 0x0001028e9ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(0,param_1,param_2);
  return;
}



/* Entry: 1028e9cec; end: 1028e9d73;  */

void FUN_1028e9cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_4 + 0x28);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1028e9d74;
                    /* WARNING: Could not recover jumptable at 0x0001028e9d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,0,param_3,param_4);
  return;
}



/* Entry: 1028e9d74; end: 1028e9dcb;  */

void FUN_1028e9d74(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028e9dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028e9dcc; end: 1028e9e6b;  */

void FUN_1028e9dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_6 + 0x30);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1028ea0a0;
                    /* WARNING: Could not recover jumptable at 0x0001028e9e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_3,param_4,0,param_5,param_6);
  return;
}



/* Entry: 1028e9e6c; end: 1028e9eeb;  */

void FUN_1028e9e6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_3 + 0x38);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1028e9eec;
                    /* WARNING: Could not recover jumptable at 0x0001028e9ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,param_1,0,param_2,param_3);
  return;
}



/* Entry: 1028e9eec; end: 1028e9f27;  */

void FUN_1028e9eec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028e9f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028e9f28; end: 1028e9fa3;  */

void FUN_1028e9f28(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_3 + 0x40);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1028ea0a8;
                    /* WARNING: Could not recover jumptable at 0x0001028e9fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,0,param_2,param_3);
  return;
}



/* Entry: 1028e9fa4; end: 1028ea013;  */

void FUN_1028e9fa4(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_2 + 0x48);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1028ea0ac;
                    /* WARNING: Could not recover jumptable at 0x0001028ea010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(0,param_1,param_2);
  return;
}


