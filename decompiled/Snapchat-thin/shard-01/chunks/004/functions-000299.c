/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101044f0c; end: 101044f7b;  */

void FUN_101044f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  pcVar1 = "createStoryInvite(_:)";
  func_0x0001000c10c0("createStoryInvite(_:)");
  func_0x000107c61180();
  func_0x000107c6157c(param_1);
  FUN_101044898(param_3,pcVar1,0x101045288,param_1);
  func_0x000107c615e8(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101044f7c; end: 101045087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101044f7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  
  if (param_1 == 0) {
    uStack_78 = 1;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_4f = 0;
    uStack_48 = 0;
    uStack_57 = 0;
    uStack_50 = 0;
    func_0x00010488e5d4(&uStack_78);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112fc01d0);
    puVar1 = (undefined8 *)(param_1 + _DAT_112fc01d8);
    puVar2 = (undefined8 *)(param_1 + _DAT_112fc01e0);
    uVar4 = puVar1[1];
    uStack_68 = puVar1[1];
    uStack_70 = *puVar1;
    uVar5 = puVar2[1];
    uStack_60 = *puVar2;
    uStack_58 = (undefined1)puVar2[1];
    uStack_57 = (undefined7)((ulong)puVar2[1] >> 8);
    uStack_50 = (undefined1)*(undefined8 *)(param_1 + _DAT_112fc01e8);
    uStack_4f = (undefined7)((ulong)*(undefined8 *)(param_1 + _DAT_112fc01e8) >> 8);
    uStack_48 = 0;
    uStack_78 = uVar3;
    func_0x000107c61434(uVar5);
    func_0x000107c61174(param_1);
    func_0x000107c61174(uVar3);
    func_0x000107c61434(uVar4);
    func_0x00010488e5d4(&uStack_78);
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101045088; end: 1010450cb;  */

void FUN_101045088(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010450cc; end: 1010450e7;  */

void FUN_1010450cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010450e8,0,0);
  return;
}



/* Entry: 1010450e8; end: 1010451a3;  */

void FUN_1010450e8(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  undefined1 auVar11 [16];
  
  auVar11 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x70),
                     *(undefined1 (*) [16])(unaff_x22 + 0x70),8,1);
  *(long *)(unaff_x22 + 0x28) = auVar11._8_8_;
  *(long *)(unaff_x22 + 0x20) = auVar11._0_8_;
  uVar2 = 0x112d55e30;
  func_0x0001000285a8(0x112d55e30,&UNK_10d91cd30);
  uVar6 = 0x101045294;
  func_0x00010488bc98(0x101045294,unaff_x22 + 0x10,uVar2);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar3;
  lVar4 = 0x112d56658;
  func_0x0001000285a8(0x112d56658,&UNK_10d91d2f0);
  lVar5 = lVar4;
  FUN_101045208();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1010451a4;
  plVar3[3] = unaff_x22 + 0x30;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar5,lVar4,&UNK_10e821f58,&UNK_10e821f60);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar6,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar3[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[5] = uVar8;
  piVar10 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar3[6] = (long)plVar9;
  *plVar9 = (long)plVar3;
  plVar9[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar9,uVar8,lVar4,lVar5);
  return;
}



/* Entry: 1010451a4; end: 1010451ff;  */

void FUN_1010451a4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    uVar1 = 0x101045290;
  }
  else {
    uVar1 = 0x101045298;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101045200; end: 101045207;  */

void FUN_101045200(undefined8 param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = "createStoryInvite(_:)";
  func_0x0001000c10c0("createStoryInvite(_:)",*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61180();
  func_0x000107c6157c(param_1);
  FUN_101044898(uVar1,pcVar2,0x101045288,param_1);
  func_0x000107c615e8(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101045208; end: 101045277;  */

void FUN_101045208(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d56660 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d56658;
  func_0x00010002969c(0x112d56658,&UNK_10d91d2f0);
  puVar2 = &DAT_10dd3cdf8;
  func_0x000107c61520(&DAT_10dd3cdf8,uVar1);
  puRam0000000112d56660 = puVar2;
  return;
}



/* Entry: 101045278; end: 10104529b;  */

void FUN_101045278(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101045284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10104529c; end: 10104547f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10104529c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d56728) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d56730) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d56738) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d56740) = param_5;
  puVar2 = &UNK_110379da8;
  func_0x000107c613fc(&UNK_110379da8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  func_0x0001000285a8(0x112d56748,&UNK_10d91d380);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  pcVar3 = FUN_1010455f8;
  func_0x0001000bdd8c(FUN_1010455f8,puVar2);
  uVar4 = 0;
  func_0x0001039ad2ec(0);
  func_0x000107c610f8();
  func_0x0001039ad230(pcVar3,uVar4);
  *(code **)(unaff_x20 + _DAT_112d56750) = pcVar3;
  lVar1 = _DAT_112fc0168;
  func_0x000107c61428(param_1 + _DAT_112fc0168,auStack_78,1,0);
  func_0x000107c61604(param_1 + lVar1,pcVar3);
  puVar5 = auStack_88;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return puVar5;
}



/* Entry: 101045480; end: 1010455f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045480(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126c48a0;
  func_0x000107c610f8();
  func_0x000107c474f8();
  uVar3 = *(undefined8 *)(param_3 + _DAT_113083f78);
  func_0x000107c61174();
  lVar4 = param_4;
  func_0x000107c410f8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010455f4);
    (*pcVar1)();
  }
  func_0x0001000285a8(0x112d56780,&UNK_10da9f4a0);
  lVar5 = lVar4;
  func_0x0001000bda74();
  func_0x000107c61170(lVar4);
  func_0x000107c410fc();
  func_0x000107c61180();
  if (param_4 != 0) {
    func_0x0001000285a8(0x112d56788,&UNK_10d91d3d0);
    lVar4 = param_4;
    func_0x0001000bda74();
    func_0x000107c61170(param_4);
    func_0x0001000285a8(0x112d56790,&UNK_10d91d3d8);
    func_0x000107c49934();
    func_0x000107c61180();
    uVar6 = param_5;
    func_0x0001000bda74();
    func_0x000107c61170(param_5);
    lVar7 = 0;
    func_0x000101045258();
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x10) = uVar3;
    *(long *)(lVar7 + 0x18) = lVar5;
    *(long *)(lVar7 + 0x20) = lVar4;
    *(undefined8 *)(lVar7 + 0x28) = uVar6;
    *(undefined **)(lVar7 + 0x30) = puVar2;
    *param_1 = lVar7;
    param_1[1] = (long)&PTR_DAT_110379d58;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010455f8);
  (*pcVar1)();
}



/* Entry: 1010455f8; end: 101045603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010455f8(long *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = PTR_PTR_1126c48a0;
  func_0x000107c610f8();
  func_0x000107c474f8();
  uVar3 = *(undefined8 *)(lVar4 + _DAT_113083f78);
  func_0x000107c61174();
  lVar4 = lVar8;
  func_0x000107c410f8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010455f4);
    (*pcVar1)();
  }
  func_0x0001000285a8(0x112d56780,&UNK_10da9f4a0);
  lVar5 = lVar4;
  func_0x0001000bda74();
  func_0x000107c61170(lVar4);
  func_0x000107c410fc();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x0001000285a8(0x112d56788,&UNK_10d91d3d0);
    lVar4 = lVar8;
    func_0x0001000bda74();
    func_0x000107c61170(lVar8);
    func_0x0001000285a8(0x112d56790,&UNK_10d91d3d8);
    func_0x000107c49934();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x0001000bda74();
    func_0x000107c61170(uVar6);
    lVar8 = 0;
    func_0x000101045258();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x10) = uVar3;
    *(long *)(lVar8 + 0x18) = lVar5;
    *(long *)(lVar8 + 0x20) = lVar4;
    *(undefined8 *)(lVar8 + 0x28) = uVar7;
    *(undefined **)(lVar8 + 0x30) = puVar2;
    *param_1 = lVar8;
    param_1[1] = (long)&PTR_DAT_110379d58;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010455f8);
  (*pcVar1)();
}



/* Entry: 101045604; end: 10104563f;  */

void FUN_101045604(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101045640; end: 10104569f; -[_TtC22StoryInviteSendingImpl36StoryInviteSendingServicesEntryPoint init] */

void FUN_101045640(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryInviteSendingImpl.StoryInviteSendingServicesEntryPoint",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10104566c);
  (*pcVar1)();
}



/* Entry: 1010456a0; end: 101045707; -[_TtC22StoryInviteSendingImpl36StoryInviteSendingServicesEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001010456bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010456dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010456c0) */
/* WARNING: Removing unreachable block (ram,0x0001010456e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010456a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d56750));
  return;
}



/* Entry: 101045708; end: 101045713;  */

void FUN_101045708(void)

{
  return;
}



/* Entry: 101045714; end: 101045733;  */

void FUN_101045714(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa208);
  return;
}



/* Entry: 101045734; end: 10104573f; -[SCStoryInviteSendingServicesEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045734(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56798;
  func_0x000107c61428(param_1 + _DAT_112d56798,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101045740; end: 10104574b; -[SCStoryInviteSendingServicesEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045740(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56798;
  func_0x000107c61428(param_1 + _DAT_112d56798,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104574c; end: 101045757; -[SCStoryInviteSendingServicesEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104574c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d567a0;
  func_0x000107c61428(param_1 + _DAT_112d567a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101045758; end: 101045763; -[SCStoryInviteSendingServicesEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045758(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d567a0;
  func_0x000107c61428(param_1 + _DAT_112d567a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101045764; end: 10104576f; -[SCStoryInviteSendingServicesEntryPoint storiesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045764(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d567a8;
  func_0x000107c61428(param_1 + _DAT_112d567a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101045770; end: 10104577b; -[SCStoryInviteSendingServicesEntryPoint setStoriesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045770(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d567a8;
  func_0x000107c61428(param_1 + _DAT_112d567a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104577c; end: 101045787; -[SCStoryInviteSendingServicesEntryPoint inviteServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104577c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d567b0;
  func_0x000107c61428(param_1 + _DAT_112d567b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101045788; end: 101045793; -[SCStoryInviteSendingServicesEntryPoint setInviteServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d567b0;
  func_0x000107c61428(param_1 + _DAT_112d567b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101045794; end: 10104579f; -[SCStoryInviteSendingServicesEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045794(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d567b8;
  func_0x000107c61428(param_1 + _DAT_112d567b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010457a0; end: 1010457e3;  */

void FUN_1010457a0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010457e4; end: 1010457ef; -[SCStoryInviteSendingServicesEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010457e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d567b8;
  func_0x000107c61428(param_1 + _DAT_112d567b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010457f0; end: 101045843;  */

void FUN_1010457f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101045844; end: 101045b13;  */

/* WARNING: Possible PIC construction at 0x000101045a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101045a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101045a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101045adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101045aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101045acc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101045af0) */
/* WARNING: Removing unreachable block (ram,0x000101045ae0) */
/* WARNING: Removing unreachable block (ram,0x000101045a74) */
/* WARNING: Removing unreachable block (ram,0x000101045a64) */
/* WARNING: Removing unreachable block (ram,0x000101045a54) */
/* WARNING: Removing unreachable block (ram,0x000101045ad0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045844(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3d1c4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5bf88();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c49938();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c5d900();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            lVar5 = 0;
            FUN_101045714();
            lVar6 = lVar5;
            func_0x000107c610f8();
            *(long *)(lVar6 + _DAT_112d56728) = lVar2;
            *(long *)(lVar6 + _DAT_112d56730) = lVar3;
            *(long *)(lVar6 + _DAT_112d56738) = lVar4;
            *(long *)(lVar6 + _DAT_112d56740) = unaff_x20;
            puVar7 = &UNK_110379df0;
            func_0x000107c613fc(&UNK_110379df0,0x30,7);
            *(long *)(puVar7 + 0x10) = unaff_x20;
            *(long *)(puVar7 + 0x18) = lVar2;
            *(long *)(puVar7 + 0x20) = lVar3;
            *(long *)(puVar7 + 0x28) = lVar4;
            func_0x0001000285a8(0x112d56748,&UNK_10d91d380);
            func_0x000107c613fc();
            func_0x000107c61174(lVar2);
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174(lVar2);
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            pcVar8 = FUN_101045b14;
            func_0x0001000bdd8c(FUN_101045b14,puVar7);
            uVar9 = 0;
            func_0x0001039ad2ec(0);
            func_0x000107c610f8();
            func_0x0001039ad230(pcVar8,uVar9);
            *(code **)(lVar6 + _DAT_112d56750) = pcVar8;
            lVar2 = _DAT_112fc0168;
            func_0x000107c61428(lVar1 + _DAT_112fc0168,auStack_78,1,0);
            func_0x000107c61604(lVar1 + lVar2,pcVar8);
            lStack_88 = lVar6;
            lStack_80 = lVar5;
            func_0x000107c61154(&lStack_88,PTR_s_init_1125d9248);
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



/* Entry: 101045b14; end: 101045b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045b14(long *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = PTR_PTR_1126c48a0;
  func_0x000107c610f8();
  func_0x000107c474f8();
  uVar3 = *(undefined8 *)(lVar4 + _DAT_113083f78);
  func_0x000107c61174();
  lVar4 = lVar8;
  func_0x000107c410f8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010455f4);
    (*pcVar1)();
  }
  func_0x0001000285a8(0x112d56780,&UNK_10da9f4a0);
  lVar5 = lVar4;
  func_0x0001000bda74();
  func_0x000107c61170(lVar4);
  func_0x000107c410fc();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x0001000285a8(0x112d56788,&UNK_10d91d3d0);
    lVar4 = lVar8;
    func_0x0001000bda74();
    func_0x000107c61170(lVar8);
    func_0x0001000285a8(0x112d56790,&UNK_10d91d3d8);
    func_0x000107c49934();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x0001000bda74();
    func_0x000107c61170(uVar6);
    lVar8 = 0;
    func_0x000101045258();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x10) = uVar3;
    *(long *)(lVar8 + 0x18) = lVar5;
    *(long *)(lVar8 + 0x20) = lVar4;
    *(undefined8 *)(lVar8 + 0x28) = uVar7;
    *(undefined **)(lVar8 + 0x30) = puVar2;
    *param_1 = lVar8;
    param_1[1] = (long)&PTR_DAT_110379d58;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010455f8);
  (*pcVar1)();
}



/* Entry: 101045b20; end: 101045b47; -[SCStoryInviteSendingServicesEntryPoint begin] */

void FUN_101045b20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101045844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101045b48; end: 101045b8b; -[SCStoryInviteSendingServicesEntryPoint end] */

void FUN_101045b48(undefined8 param_1)

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



/* Entry: 101045b8c; end: 101045e7f;  */

void FUN_101045b8c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef1d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x53736569726f7473;
        if (((param_2 == 0x53736569726f7473) && (param_3 == -0x108c9a9c96898d9b)) ||
           (func_0x000107c605b8(0x53736569726f7473,0xef73656369767265,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59924();
        }
        else {
          uVar2 = 0x6553657469766e69;
          if (((param_2 == 0x6553657469766e69) && (param_3 == -0x11ff8c9a9c96898e)) ||
             (func_0x000107c605b8(0x6553657469766e69,0xee00736563697672,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c554f4();
          }
          else {
            if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ef610)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "StoryInviteSendingImpl/SCStoryInviteSendingServicesEntryPoint.swift"
                                    ,0x43,2,0x37,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101045e80);
                (*pcVar1)();
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a2fc();
          }
        }
        goto LAB_101045c18;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52228();
  }
LAB_101045c18:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101045e80; end: 101045f2b; -[SCStoryInviteSendingServicesEntryPoint setValue:forIvarName:] */

void FUN_101045e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101045b8c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101045f2c; end: 101045fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101045f2c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d56798,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d567a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d567a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d567b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d567b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d567c0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101045fdc; end: 101045ffb; -[SCStoryInviteSendingServicesEntryPoint init] */

void FUN_101045fdc(void)

{
  FUN_101045f2c();
  return;
}



/* Entry: 101045ffc; end: 10104602f;  */

void FUN_101045ffc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101046030; end: 1010460a7; -[SCStoryInviteSendingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101046030(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d56798);
  func_0x000107c61610(param_1 + _DAT_112d567a0);
  func_0x000107c61610(param_1 + _DAT_112d567a8);
  func_0x000107c61610(param_1 + _DAT_112d567b0);
  func_0x000107c61610(param_1 + _DAT_112d567b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d567c0));
  return;
}



/* Entry: 1010460a8; end: 1010460c7;  */

void FUN_1010460a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa2e8);
  return;
}



/* Entry: 1010460c8; end: 1010462f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1010460c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d567f0) = param_1;
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x00010451338c();
  lVar4 = 0;
  FUN_1010475dc();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = _DAT_112d56828;
  func_0x000107c61614(lVar5 + _DAT_112d56828,0);
  *(undefined8 *)(lVar5 + _DAT_112d56830) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d56838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_112d56840) = 0;
  func_0x000107c61604(lVar5 + lVar2,uVar3);
  *(undefined8 *)(lVar5 + _DAT_112d56848) = param_3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = param_4;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  *(undefined8 *)(lVar5 + _DAT_112d56850) = uVar6;
  *(undefined8 *)(lVar5 + _DAT_112d56858) = param_5;
  *(undefined8 *)(lVar5 + _DAT_112d56860) = param_6;
  *(undefined8 *)(lVar5 + _DAT_112d56868) = param_7;
  *(undefined8 *)(lVar5 + _DAT_112d56870) = param_8;
  plVar7 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  *(long **)(unaff_x20 + _DAT_112d567f8) = plVar7;
  puVar8 = auStack_80;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  return puVar8;
}



/* Entry: 1010462f4; end: 101046353; -[_TtC28ImpalaSnapPlayerPageLauncher38ImpalaSnapPlayerPageLauncherEntryPoint init] */

void FUN_1010462f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ImpalaSnapPlayerPageLauncher.ImpalaSnapPlayerPageLauncherEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101046320);
  (*pcVar1)();
}



/* Entry: 101046354; end: 1010463cf; -[_TtC28ImpalaSnapPlayerPageLauncher38ImpalaSnapPlayerPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101046370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101046374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101046354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d567f0));
  return;
}



/* Entry: 1010463d0; end: 1010463d7;  */

undefined8 FUN_1010463d0(void)

{
  return 0;
}



/* Entry: 1010463d8; end: 101046467; -[_TtC28ImpalaSnapPlayerPageLauncher38ImpalaSnapPlayerPageLauncherEntryPoint handlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010463d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_100f27668();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d567f8);
  func_0x000107c61174();
  uVar2 = 0x112d4c360;
  func_0x0001000285a8(0x112d4c360,&UNK_10d912dc0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101046468; end: 10104646b; -[_TtC28ImpalaSnapPlayerPageLauncher38ImpalaSnapPlayerPageLauncherEntryPoint setHandlers:] */

void FUN_101046468(void)

{
  return;
}



/* Entry: 10104646c; end: 10104648b;  */

void FUN_10104646c(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa3c8);
  return;
}



/* Entry: 10104648c; end: 1010465df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10104648c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar2 = _DAT_112d56828;
  func_0x000107c61614(unaff_x20 + _DAT_112d56828,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d56830) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d56838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d56840) = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d56848) = param_2;
  func_0x000107c61174(param_2);
  uVar3 = param_3;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112d56850) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d56858) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d56860) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d56868) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d56870) = param_7;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return puVar4;
}



/* Entry: 1010465e0; end: 10104663f; -[_TtC28ImpalaSnapPlayerPageLauncher35ImpalaSnapPlayerPageLauncherHandler init] */

void FUN_1010465e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ImpalaSnapPlayerPageLauncher.ImpalaSnapPlayerPageLauncherHandler",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10104660c);
  (*pcVar1)();
}



/* Entry: 101046640; end: 1010466e7; -[_TtC28ImpalaSnapPlayerPageLauncher35ImpalaSnapPlayerPageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010104666c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104668c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010466ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010466cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010466b0) */
/* WARNING: Removing unreachable block (ram,0x000101046690) */
/* WARNING: Removing unreachable block (ram,0x000101046670) */
/* WARNING: Removing unreachable block (ram,0x0001010466d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101046640(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d56828);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d56848));
  return;
}



/* Entry: 1010466e8; end: 1010466ef; -[_TtC28ImpalaSnapPlayerPageLauncher35ImpalaSnapPlayerPageLauncherHandler screen] */

undefined8 FUN_1010466e8(void)

{
  return 0x27;
}



/* Entry: 1010466f0; end: 101046acf;  */

/* WARNING: Possible PIC construction at 0x00010104675c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101046794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010467b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010467d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010467ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104680c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101046844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010468a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010469d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010469e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010469f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101046a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101046a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101046a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101046aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101046a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101046aac) */
/* WARNING: Removing unreachable block (ram,0x000101046a9c) */
/* WARNING: Removing unreachable block (ram,0x000101046a0c) */
/* WARNING: Removing unreachable block (ram,0x0001010469fc) */
/* WARNING: Removing unreachable block (ram,0x0001010469e8) */
/* WARNING: Removing unreachable block (ram,0x0001010469d8) */
/* WARNING: Removing unreachable block (ram,0x0001010468ac) */
/* WARNING: Removing unreachable block (ram,0x000101046a88) */
/* WARNING: Removing unreachable block (ram,0x0001010468b8) */
/* WARNING: Removing unreachable block (ram,0x000101046a80) */
/* WARNING: Removing unreachable block (ram,0x0001010468c8) */
/* WARNING: Removing unreachable block (ram,0x000101046848) */
/* WARNING: Removing unreachable block (ram,0x000101046810) */
/* WARNING: Removing unreachable block (ram,0x000101046a68) */
/* WARNING: Removing unreachable block (ram,0x00010104681c) */
/* WARNING: Removing unreachable block (ram,0x000101046a94) */
/* WARNING: Removing unreachable block (ram,0x000101046830) */
/* WARNING: Removing unreachable block (ram,0x0001010467f0) */
/* WARNING: Removing unreachable block (ram,0x0001010467f4) */
/* WARNING: Removing unreachable block (ram,0x0001010467d4) */
/* WARNING: Removing unreachable block (ram,0x0001010467b8) */
/* WARNING: Removing unreachable block (ram,0x000101046798) */
/* WARNING: Removing unreachable block (ram,0x000101046a34) */
/* WARNING: Removing unreachable block (ram,0x00010104679c) */
/* WARNING: Removing unreachable block (ram,0x000101046760) */
/* WARNING: Removing unreachable block (ram,0x000101046a60) */
/* WARNING: Removing unreachable block (ram,0x000101046ab0) */
/* WARNING: Removing unreachable block (ram,0x000101046764) */
/* WARNING: Removing unreachable block (ram,0x000101046a78) */
/* WARNING: Removing unreachable block (ram,0x000101046a40) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010466f0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d56830) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d56848);
    func_0x000107c61174();
    func_0x000107c4d604(uVar1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 101046ad0; end: 101046bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101046ad0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d56850);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = &UNK_110379f08;
      func_0x000107c613fc(&UNK_110379f08,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_110379f30;
      func_0x000107c613fc(&UNK_110379f30,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = param_2;
      pcStack_50 = FUN_10104761c;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_100f1c768;
      puStack_58 = &UNK_110379f48;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      puVar3 = puStack_48;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c440d8(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 101046bf8; end: 101046d47; -[_TtC28ImpalaSnapPlayerPageLauncher35ImpalaSnapPlayerPageLauncherHandler launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x000101046c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101046c5c) */

void FUN_101046bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101047514(param_3);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101046d48; end: 101046fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101046d48(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar2 = param_1;
  func_0x000107c4f348();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c4f370();
  if ((int)uVar3 == 1) {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112d56858);
    func_0x000107c4f3e4();
    func_0x000107c61180();
    uVar3 = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c4f378();
      func_0x000107c61180();
      func_0x000107c615e8(uVar3);
      uVar3 = 0x112d4bd28;
      func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
      uVar5 = uVar4;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar4);
      if (uVar5 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar4 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar4 != 0) {
        uVar11 = 0;
        do {
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101046fb4);
              (*pcVar1)();
            }
            uVar12 = *(ulong *)(uVar5 + uVar11 * 8 + 0x20);
            func_0x000107c615f0(uVar12);
            uVar9 = uVar3;
          }
          else {
            uVar12 = uVar11;
            uVar9 = uVar5;
            FUN_100f1cdf4();
          }
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101046f68);
            (*pcVar1)();
          }
          uVar10 = uVar11 + 1;
          uVar3 = uVar12;
          func_0x000107c3ee4c();
          func_0x000107c61180();
          uVar6 = uVar3;
          func_0x000107c44fd8();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101047000);
            (*pcVar1)();
          }
          uVar7 = uVar6;
          func_0x000107c5faec();
          uVar3 = uVar9;
          func_0x000107c61170(uVar6);
          uVar6 = param_1;
          func_0x000107c4f38c();
          func_0x000107c61180();
          if (uVar6 == 0) {
            func_0x000107c6142c(uVar9);
          }
          else {
            uVar8 = uVar6;
            func_0x000107c5faec();
            func_0x000107c61170(uVar6);
            if ((uVar7 == uVar8) && (uVar9 == uVar3)) {
              func_0x000107c6142c(uVar9);
              func_0x000107c6142c(uVar3);
LAB_101046f7c:
              uVar3 = uVar12;
              func_0x000107c3ee50(uVar12);
              func_0x000107c61180();
              func_0x000107c6142c(uVar5);
              func_0x000107c615e8(uVar12);
              func_0x000107c61170(uVar2);
              return uVar3;
            }
            uVar6 = uVar9;
            func_0x000107c605b8(uVar7,uVar9,uVar8,uVar3,0);
            func_0x000107c6142c(uVar9);
            func_0x000107c6142c(uVar3);
            uVar3 = uVar6;
            if ((uVar7 & 1) != 0) goto LAB_101046f7c;
          }
          func_0x000107c615e8(uVar12);
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar4);
      }
      func_0x000107c6142c(uVar5);
    }
  }
  return uVar2;
}



/* Entry: 101047000; end: 101047507;  */

/* WARNING: Possible PIC construction at 0x000101047074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104719c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010473fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104740c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010104741c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010474b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104745c) */
/* WARNING: Removing unreachable block (ram,0x00010104744c) */
/* WARNING: Removing unreachable block (ram,0x00010104747c) */
/* WARNING: Removing unreachable block (ram,0x00010104746c) */
/* WARNING: Removing unreachable block (ram,0x000101047420) */
/* WARNING: Removing unreachable block (ram,0x000101047410) */
/* WARNING: Removing unreachable block (ram,0x000101047400) */
/* WARNING: Removing unreachable block (ram,0x000101047344) */
/* WARNING: Removing unreachable block (ram,0x000101047430) */
/* WARNING: Removing unreachable block (ram,0x000101047488) */
/* WARNING: Removing unreachable block (ram,0x000101047370) */
/* WARNING: Removing unreachable block (ram,0x000101047444) */
/* WARNING: Removing unreachable block (ram,0x000101047388) */
/* WARNING: Removing unreachable block (ram,0x000101047464) */
/* WARNING: Removing unreachable block (ram,0x0001010473a4) */
/* WARNING: Removing unreachable block (ram,0x000101047504) */
/* WARNING: Removing unreachable block (ram,0x0001010473c4) */
/* WARNING: Removing unreachable block (ram,0x000101047284) */
/* WARNING: Removing unreachable block (ram,0x0001010472a0) */
/* WARNING: Removing unreachable block (ram,0x0001010472a4) */
/* WARNING: Removing unreachable block (ram,0x000101047268) */
/* WARNING: Removing unreachable block (ram,0x000101047500) */
/* WARNING: Removing unreachable block (ram,0x00010104726c) */
/* WARNING: Removing unreachable block (ram,0x000101047234) */
/* WARNING: Removing unreachable block (ram,0x0001010474fc) */
/* WARNING: Removing unreachable block (ram,0x000101047248) */
/* WARNING: Removing unreachable block (ram,0x0001010471a0) */
/* WARNING: Removing unreachable block (ram,0x00010104716c) */
/* WARNING: Removing unreachable block (ram,0x0001010474e4) */
/* WARNING: Removing unreachable block (ram,0x000101047174) */
/* WARNING: Removing unreachable block (ram,0x0001010474f4) */
/* WARNING: Removing unreachable block (ram,0x000101047180) */
/* WARNING: Removing unreachable block (ram,0x000101047188) */
/* WARNING: Removing unreachable block (ram,0x000101047124) */
/* WARNING: Removing unreachable block (ram,0x0001010474c4) */
/* WARNING: Removing unreachable block (ram,0x0001010474cc) */
/* WARNING: Removing unreachable block (ram,0x00010104712c) */
/* WARNING: Removing unreachable block (ram,0x000101047134) */
/* WARNING: Removing unreachable block (ram,0x0001010474b8) */
/* WARNING: Removing unreachable block (ram,0x000101047148) */
/* WARNING: Removing unreachable block (ram,0x000101047078) */
/* WARNING: Removing unreachable block (ram,0x0001010471b0) */
/* WARNING: Removing unreachable block (ram,0x00010104707c) */
/* WARNING: Removing unreachable block (ram,0x0001010471bc) */
/* WARNING: Removing unreachable block (ram,0x00010104709c) */
/* WARNING: Removing unreachable block (ram,0x0001010474b0) */
/* WARNING: Removing unreachable block (ram,0x0001010470bc) */
/* WARNING: Removing unreachable block (ram,0x0001010470d4) */
/* WARNING: Removing unreachable block (ram,0x0001010474bc) */
/* WARNING: Removing unreachable block (ram,0x0001010471b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047000(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112d56828;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c614f0();
    func_0x000107c57740(param_2);
    func_0x000107c53fcc(param_2);
    func_0x000107c5414c(param_2);
    func_0x000107c4f38c();
    func_0x000107c61180();
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010474fc);
      (*pcVar1)();
    }
    func_0x000107c5faec();
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101047508; end: 10104750b; -[_TtC28ImpalaSnapPlayerPageLauncher35ImpalaSnapPlayerPageLauncherHandler storyPlayerDidFinishDismissing] */

void FUN_101047508(void)

{
  return;
}



/* Entry: 10104750c; end: 10104750f; -[_TtC28ImpalaSnapPlayerPageLauncher35ImpalaSnapPlayerPageLauncherHandler storyPlayerWillBeginPresenting] */

void FUN_10104750c(void)

{
  return;
}



/* Entry: 101047510; end: 101047513; -[_TtC28ImpalaSnapPlayerPageLauncher35ImpalaSnapPlayerPageLauncherHandler storyPlayerWillBeginDismissing] */

void FUN_101047510(void)

{
  return;
}



/* Entry: 101047514; end: 1010475db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047514(long param_1)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar3 = param_1;
  func_0x000107c451f0();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d56830);
  *(long *)(unaff_x20 + _DAT_112d56830) = lVar3;
  func_0x000107c61170(uVar5);
  func_0x000107c414c4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c4152c();
    func_0x000107c61170(param_1);
    pdVar1 = (double *)(unaff_x20 + _DAT_112d56838);
    *pdVar1 = (double)lVar3;
    *(undefined1 *)(pdVar1 + 1) = 0;
    puVar4 = &UNK_110379ee0;
    func_0x000107c613fc(&UNK_110379ee0,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    func_0x000107c61174();
    FUN_101046ad0(FUN_1010475fc,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010475dc);
  (*pcVar2)();
}



/* Entry: 1010475dc; end: 1010475fb;  */

void FUN_1010475dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa490);
  return;
}



/* Entry: 1010475fc; end: 10104761b;  */

void FUN_1010475fc(void)

{
  FUN_1010466f0();
  return;
}



/* Entry: 10104761c; end: 101047643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104761c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c615f0(param_1);
    }
    else {
      puVar3 = PTR_PTR_1126dee68;
      func_0x000107c61168();
      func_0x000107c615f0(param_1);
      func_0x000107c43be4();
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112d56840);
      *(undefined **)(lVar2 + _DAT_112d56840) = puVar3;
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar4);
    }
    (*pcVar1)();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101047644; end: 101047677;  */

void FUN_101047644(void)

{
  long unaff_x20;
  
  FUN_101047000(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101047678; end: 10104776f;  */

undefined8
FUN_101047678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 in_stack_00000008;
  
  func_0x000107c614e8(in_stack_00000008);
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c6142c(param_5);
  func_0x000107c5ee20(param_6,param_7);
  func_0x000107c48144(param_1,in_stack_00000008);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  return in_stack_00000008;
}



/* Entry: 101047770; end: 1010477af;  */

void FUN_101047770(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1010477b0; end: 1010477b7;  */

void FUN_1010477b0(long param_1,long param_2)

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



/* Entry: 1010477b8; end: 1010477c3; -[SCImpalaSnapPlayerPageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010477b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d568a8;
  func_0x000107c61428(param_1 + _DAT_112d568a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010477c4; end: 1010477cf; -[SCImpalaSnapPlayerPageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010477c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d568a8;
  func_0x000107c61428(param_1 + _DAT_112d568a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010477d0; end: 1010477db; -[SCImpalaSnapPlayerPageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010477d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d568b0;
  func_0x000107c61428(param_1 + _DAT_112d568b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010477dc; end: 1010477e7; -[SCImpalaSnapPlayerPageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010477dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d568b0;
  func_0x000107c61428(param_1 + _DAT_112d568b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010477e8; end: 1010477f3; -[SCImpalaSnapPlayerPageLauncherEntryPoint composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010477e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d568b8;
  func_0x000107c61428(param_1 + _DAT_112d568b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010477f4; end: 1010477ff; -[SCImpalaSnapPlayerPageLauncherEntryPoint setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010477f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d568b8;
  func_0x000107c61428(param_1 + _DAT_112d568b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101047800; end: 10104780b; -[SCImpalaSnapPlayerPageLauncherEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047800(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d568c0;
  func_0x000107c61428(param_1 + _DAT_112d568c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104780c; end: 101047817; -[SCImpalaSnapPlayerPageLauncherEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104780c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d568c0;
  func_0x000107c61428(param_1 + _DAT_112d568c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101047818; end: 101047823; -[SCImpalaSnapPlayerPageLauncherEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047818(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d568c8;
  func_0x000107c61428(param_1 + _DAT_112d568c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101047824; end: 10104782f; -[SCImpalaSnapPlayerPageLauncherEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d568c8;
  func_0x000107c61428(param_1 + _DAT_112d568c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101047830; end: 10104783b; -[SCImpalaSnapPlayerPageLauncherEntryPoint impalaStoryPlayerPresenterCreatingFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047830(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d568d0;
  func_0x000107c61428(param_1 + _DAT_112d568d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104783c; end: 101047847; -[SCImpalaSnapPlayerPageLauncherEntryPoint setImpalaStoryPlayerPresenterCreatingFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104783c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d568d0;
  func_0x000107c61428(param_1 + _DAT_112d568d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101047848; end: 101047853; -[SCImpalaSnapPlayerPageLauncherEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047848(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d568d8;
  func_0x000107c61428(param_1 + _DAT_112d568d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101047854; end: 10104785f; -[SCImpalaSnapPlayerPageLauncherEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047854(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d568d8;
  func_0x000107c61428(param_1 + _DAT_112d568d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101047860; end: 10104786b; -[SCImpalaSnapPlayerPageLauncherEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047860(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d568e0;
  func_0x000107c61428(param_1 + _DAT_112d568e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104786c; end: 1010478af;  */

void FUN_10104786c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010478b0; end: 1010478bb; -[SCImpalaSnapPlayerPageLauncherEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010478b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d568e0;
  func_0x000107c61428(param_1 + _DAT_112d568e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010478bc; end: 10104790f;  */

void FUN_1010478bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101047910; end: 101047dcb;  */

/* WARNING: Possible PIC construction at 0x000101047bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101047cdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101047cf0) */
/* WARNING: Removing unreachable block (ram,0x000101047d10) */
/* WARNING: Removing unreachable block (ram,0x000101047d40) */
/* WARNING: Removing unreachable block (ram,0x000101047d30) */
/* WARNING: Removing unreachable block (ram,0x000101047d70) */
/* WARNING: Removing unreachable block (ram,0x000101047d60) */
/* WARNING: Removing unreachable block (ram,0x000101047d50) */
/* WARNING: Removing unreachable block (ram,0x000101047da0) */
/* WARNING: Removing unreachable block (ram,0x000101047d90) */
/* WARNING: Removing unreachable block (ram,0x000101047d80) */
/* WARNING: Removing unreachable block (ram,0x000101047c9c) */
/* WARNING: Removing unreachable block (ram,0x000101047c8c) */
/* WARNING: Removing unreachable block (ram,0x000101047c7c) */
/* WARNING: Removing unreachable block (ram,0x000101047c6c) */
/* WARNING: Removing unreachable block (ram,0x000101047c5c) */
/* WARNING: Removing unreachable block (ram,0x000101047c28) */
/* WARNING: Removing unreachable block (ram,0x000101047c14) */
/* WARNING: Removing unreachable block (ram,0x000101047c04) */
/* WARNING: Removing unreachable block (ram,0x000101047bec) */
/* WARNING: Removing unreachable block (ram,0x000101047bb0) */
/* WARNING: Removing unreachable block (ram,0x000101047ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101047910(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4d52c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c3ffd0();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c40014();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = unaff_x20;
        func_0x000107c5b398();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar7 = unaff_x20;
          func_0x000107c451fc();
          func_0x000107c61180();
          if (lVar7 == 0) {
            func_0x000107c61170(lVar2);
            lVar2 = lVar3;
          }
          else {
            lVar3 = unaff_x20;
            func_0x000107c5da74();
            func_0x000107c61180();
            if (lVar3 != 0) {
              func_0x000107c3fa0c();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar8 = 0;
                FUN_10104646c();
                func_0x000107c610f8();
                *(long *)(lVar8 + _DAT_112d567f0) = lVar2;
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                lVar2 = unaff_x20;
                func_0x00010451338c();
                lVar9 = 0;
                FUN_1010475dc();
                lVar10 = lVar9;
                func_0x000107c610f8();
                lVar8 = _DAT_112d56828;
                func_0x000107c61614(lVar10 + _DAT_112d56828,0);
                *(undefined8 *)(lVar10 + _DAT_112d56830) = 0;
                puVar1 = (undefined8 *)(lVar10 + _DAT_112d56838);
                *puVar1 = 0;
                *(undefined1 *)(puVar1 + 1) = 1;
                *(undefined8 *)(lVar10 + _DAT_112d56840) = 0;
                func_0x000107c61604(lVar10 + lVar8,lVar2);
                *(long *)(lVar10 + _DAT_112d56848) = lVar4;
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c5dbd4();
                func_0x000107c61180();
                *(long *)(lVar10 + _DAT_112d56850) = lVar5;
                *(long *)(lVar10 + _DAT_112d56858) = lVar6;
                *(long *)(lVar10 + _DAT_112d56860) = lVar7;
                *(long *)(lVar10 + _DAT_112d56868) = lVar3;
                *(long *)(lVar10 + _DAT_112d56870) = unaff_x20;
                lStack_70 = lVar10;
                lStack_68 = lVar9;
                func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
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



/* Entry: 101047dcc; end: 101047df3; -[SCImpalaSnapPlayerPageLauncherEntryPoint begin] */

void FUN_101047dcc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101047910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101047df4; end: 101047e37; -[SCImpalaSnapPlayerPageLauncherEntryPoint end] */

void FUN_101047df4(undefined8 param_1)

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



/* Entry: 101047e38; end: 10104825b;  */

void FUN_101047e38(long param_1,long param_2,long param_3)

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
    goto LAB_101047ec4;
  }
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e6390)) ||
         (func_0x000107c605b8(0xd000000000000020,0x800000010ef19c70,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c536a8();
        goto LAB_101047ec4;
      }
      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0x536f725070616e73;
          if (((param_2 == 0x536f725070616e73) && (param_3 == -0x108c9a9c96898d9b)) ||
             (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5943c();
          }
          else {
            uVar2 = 0xd000000000000031;
            if (((param_2 == -0x2fffffffffffffcf) && (param_3 == -0x7ffffffef10de870)) ||
               (func_0x000107c605b8(0xd000000000000031,0x800000010ef21790,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c552f4();
            }
            else {
              if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
                uVar2 = 0;
                func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) &&
                     (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "ImpalaSnapPlayerPageLauncher/SCImpalaSnapPlayerPageLauncherEntryPoint.swift"
                                        ,0x4b,2,0x45,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10104825c);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c53414();
                  goto LAB_101047ec4;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a3f8();
            }
          }
          goto LAB_101047ec4;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
      goto LAB_101047ec4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c569f0();
LAB_101047ec4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10104825c; end: 101048307; -[SCImpalaSnapPlayerPageLauncherEntryPoint setValue:forIvarName:] */

void FUN_10104825c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101047e38(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101048308; end: 1010483f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101048308(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d568a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d568b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d568b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d568c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d568c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d568d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d568d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d568e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d568e8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010483f4; end: 101048413; -[SCImpalaSnapPlayerPageLauncherEntryPoint init] */

void FUN_1010483f4(void)

{
  FUN_101048308();
  return;
}



/* Entry: 101048414; end: 101048447;  */

void FUN_101048414(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101048448; end: 1010484ef; -[SCImpalaSnapPlayerPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101048448(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d568a8);
  func_0x000107c61610(param_1 + _DAT_112d568b0);
  func_0x000107c61610(param_1 + _DAT_112d568b8);
  func_0x000107c61610(param_1 + _DAT_112d568c0);
  func_0x000107c61610(param_1 + _DAT_112d568c8);
  func_0x000107c61610(param_1 + _DAT_112d568d0);
  func_0x000107c61610(param_1 + _DAT_112d568d8);
  func_0x000107c61610(param_1 + _DAT_112d568e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d568e8));
  return;
}



/* Entry: 1010484f0; end: 10104850f;  */

void FUN_1010484f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa598);
  return;
}



/* Entry: 101048510; end: 10104863f;  */

uint FUN_101048510(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(unaff_x20 + 0x40);
  if (*(byte *)(unaff_x20 + 0x40) == 2) {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010485a8);
      (*pcVar1)();
    }
    uVar3 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010ef21850);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    uVar5 = (uint)lVar4;
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    *(char *)(unaff_x20 + 0x40) = (char)lVar4;
  }
  return uVar5 & 1;
}



/* Entry: 101048640; end: 1010486ab;  */

void FUN_101048640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined2 *)(unaff_x20 + 0x40) = 0x202;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 1010486ac; end: 10104888b;  */

void FUN_1010486ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar8 = &puStack_70;
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 != 0) {
      func_0x000107c61170();
      FUN_101048510();
      if ((uVar3 & 1) != 0) {
        puVar4 = PTR_PTR_1126aeae0;
        func_0x000107c61168(PTR_PTR_1126aeae0);
        func_0x000107c52028();
        func_0x000107c61180();
        puVar5 = puVar4;
        FUN_1010494a8();
        puVar6 = PTR_PTR_1126aeaf0;
        func_0x000107c610f8(PTR_PTR_1126aeaf0);
        func_0x000107c5fadc(puVar5,param_2);
        func_0x000107c6142c(param_2);
        func_0x000107c48db0(puVar6);
        func_0x000107c61170(puVar5);
        puVar5 = &UNK_11037a050;
        func_0x000107c613fc(&UNK_11037a050,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        puVar7 = PTR_PTR_1126aeae8;
        func_0x000107c610f8(PTR_PTR_1126aeae8);
        uStack_50 = 0x101048ad4;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        pcStack_60 = FUN_100ea3124;
        puStack_58 = &UNK_11037a068;
        puStack_48 = puVar5;
        func_0x000107c60bc4(&puStack_70);
        func_0x000107c6157c(puVar5);
        func_0x000107c48560(puVar7);
        func_0x000107c60bd0(ppuVar8);
        puVar1 = puStack_48;
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar1);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
        func_0x000107c4e9e4(uVar9);
        func_0x000107c61180();
        func_0x000107c4fba8();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar9);
      }
    }
  }
  return;
}



/* Entry: 10104888c; end: 101048907;  */

void FUN_10104888c(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      func_0x000107c61174(param_1);
      FUN_101048908();
      func_0x000107c61574(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 101048908; end: 101048a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101048908(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_70;
  long lStack_68;
  
  plVar9 = &lStack_70;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    lVar5 = param_1;
    func_0x0001010485a8();
    lVar6 = 0;
    FUN_101049414();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112d56a20) = 0;
    *(undefined8 *)(lVar7 + _DAT_112d569f0) = uVar3;
    *(undefined8 *)(lVar7 + _DAT_112d569f8) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_112d56a00) = uVar2;
    *(undefined8 *)(lVar7 + _DAT_112d56a08) = uVar4;
    *(byte *)(lVar7 + _DAT_112d56a18) = (byte)lVar5 & 1;
    uVar10 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
    puVar8 = PTR_PTR_1126b1c10;
    func_0x000107c610f8();
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar4);
    func_0x000107c495dc(uVar10);
    *(undefined **)(lVar7 + _DAT_112d56a10) = puVar8;
    lStack_70 = lVar7;
    lStack_68 = lVar6;
    func_0x000107c61154(&lStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
    func_0x000107c4f6f4(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(plVar9);
  }
  return;
}


