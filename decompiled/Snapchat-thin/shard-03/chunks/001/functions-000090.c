/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024d4ab8; end: 1024d4abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d4ab8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [16];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_1024d4ca0();
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_112feb6a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar2 = 0;
  FUN_1024d47e8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ea0d88) = uVar1;
  plVar4 = &lStack_58;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112ea0dc8) = plVar4;
  puVar5 = auStack_68;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c61574();
  *param_1 = (long)puVar5;
  return;
}



/* Entry: 1024d4ac0; end: 1024d4b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024d4ac0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c610f8();
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_112feb6a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar2 = 0;
  FUN_1024d47e8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ea0d88) = uVar1;
  plVar4 = &lStack_58;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112ea0dc8) = plVar4;
  puVar5 = auStack_68;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar5;
}



/* Entry: 1024d4b8c; end: 1024d4c1b; -[_TtC35SCSpotlightCommentSharePageLauncher39SpotlightCommentSharePageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d4b8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ea0dc8);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1024d4c1c; end: 1024d4c1f; -[_TtC35SCSpotlightCommentSharePageLauncher39SpotlightCommentSharePageLauncherPlugin setNativePayloadHandlers:] */

void FUN_1024d4c1c(void)

{
  return;
}



/* Entry: 1024d4c20; end: 1024d4c7f; -[_TtC35SCSpotlightCommentSharePageLauncher39SpotlightCommentSharePageLauncherPlugin init] */

void FUN_1024d4c20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightCommentSharePageLauncher.SpotlightCommentSharePageLauncherPlugin",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d4c4c);
  (*pcVar1)();
}



/* Entry: 1024d4c80; end: 1024d4c9f; -[_TtC35SCSpotlightCommentSharePageLauncher39SpotlightCommentSharePageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d4c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0dc8));
  return;
}



/* Entry: 1024d4ca0; end: 1024d4cbf;  */

void FUN_1024d4ca0(void)

{
  func_0x000107c61168(&PTR_PTR_1128488d8);
  return;
}



/* Entry: 1024d4cc0; end: 1024d4ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024d4cc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b2b98;
  func_0x000107c610f8(PTR_PTR_1126b2b98);
  func_0x000107c453e4();
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112ea0df8);
  if (puVar6 != (undefined *)0x0) {
    puVar2 = puVar6;
    func_0x000107c615f0();
    func_0x000107c5b960();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c615e8(puVar6);
    }
    else {
      puVar3 = puVar2;
      func_0x000107c5b964();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
        func_0x000107c615e8(puVar6);
        func_0x000107c615e8(puVar2);
      }
      else {
        lVar7 = *(long *)((long)(puVar3 + _DAT_1138134d8) + 8);
        if (lVar7 != 0) {
          uVar8 = *(undefined8 *)(puVar3 + _DAT_1138134d8);
          puVar5 = PTR_PTR_1126aa950;
          func_0x000107c610f8(PTR_PTR_1126aa950);
          func_0x000107c61434(lVar7);
          func_0x000107c5fadc(uVar8,lVar7);
          func_0x000107c6142c(lVar7);
          func_0x000107c48790(puVar5);
          func_0x000107c61170(uVar8);
          func_0x000107c59720(puVar1);
          puVar4 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          func_0x000107c451b0();
          func_0x000107c61180();
          func_0x000107c61170(puVar1);
          func_0x000107c615e8(puVar6);
          func_0x000107c615e8(puVar2);
          puVar1 = puVar3;
          goto LAB_1024d4ea8;
        }
        func_0x000107c615e8(puVar6);
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(puVar3);
      }
    }
  }
  puVar4 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010dab2e10);
  func_0x000107c466bc(puVar6);
  func_0x000107c61170(uVar8);
  puVar5 = puVar6;
  func_0x000107c5ed2c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c451ac(puVar4);
  func_0x000107c61180();
LAB_1024d4ea8:
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 1024d4ed4; end: 1024d4f2f; -[_TtC34SpotlightStoryShareReportingPlugin34SpotlightStoryShareReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_1024d4ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1024d4cc0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024d4f30; end: 1024d4f47; -[_TtC34SpotlightStoryShareReportingPlugin34SpotlightStoryShareReportingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001024d4f44) */

void FUN_1024d4f30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024d4f48; end: 1024d4f4f; -[_TtC34SpotlightStoryShareReportingPlugin34SpotlightStoryShareReportingPlugin isReportableForMessage:] */

undefined8 FUN_1024d4f48(void)

{
  return 1;
}



/* Entry: 1024d4f50; end: 1024d4faf; -[_TtC34SpotlightStoryShareReportingPlugin34SpotlightStoryShareReportingPlugin init] */

void FUN_1024d4f50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightStoryShareReportingPlugin.SpotlightStoryShareReportingPlugin",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d4f7c);
  (*pcVar1)();
}



/* Entry: 1024d4fb0; end: 1024d4fbf; -[_TtC34SpotlightStoryShareReportingPlugin34SpotlightStoryShareReportingPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d4fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea0df8));
  return;
}



/* Entry: 1024d4fc0; end: 1024d4fdf;  */

void FUN_1024d4fc0(void)

{
  func_0x000107c61168(&PTR_PTR_112848998);
  return;
}



/* Entry: 1024d4fe0; end: 1024d502b;  */

void FUN_1024d4fe0(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea0e28,&UNK_10dab2e60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024d50dc,param_1);
  return;
}



/* Entry: 1024d502c; end: 1024d50db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d502c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112fef830);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  lVar3 = 0;
  FUN_1024d4fc0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ea0df8) = uVar2;
  plVar5 = &lStack_48;
  lStack_48 = lVar4;
  lStack_40 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1024d50dc; end: 1024d5123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d50dc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112fef830);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  lVar3 = 0;
  FUN_1024d4fc0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ea0df8) = uVar2;
  plVar5 = &lStack_48;
  lStack_48 = lVar4;
  lStack_40 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1024d5124; end: 1024d513b; -[_TtC30SharedStoryProfilePageLauncher35SharedStoryProfilePageLaunchHandler payloadClass] */

void FUN_1024d5124(void)

{
  FUN_1024d59a0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1024d513c; end: 1024d513f; -[_TtC30SharedStoryProfilePageLauncher35SharedStoryProfilePageLaunchHandler setPayloadClass:] */

void FUN_1024d513c(void)

{
  return;
}



/* Entry: 1024d5140; end: 1024d520f; -[_TtC30SharedStoryProfilePageLauncher35SharedStoryProfilePageLaunchHandler launchWithPayload:completion:] */

void FUN_1024d5140(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110516538;
    func_0x000107c613fc(&UNK_110516538,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_1024d5464;
  }
  FUN_1024d52a0(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 1024d5210; end: 1024d524b; -[_TtC30SharedStoryProfilePageLauncher35SharedStoryProfilePageLaunchHandler init] */

void FUN_1024d5210(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d524c; end: 1024d529f;  */

void FUN_1024d524c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024d52a0; end: 1024d5463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d52a0(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long alStack_98 [3];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100672b50(param_1,&puStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&puStack_80);
  }
  else {
    uVar1 = 0;
    FUN_1024d59a0(0);
    plVar2 = alStack_98;
    func_0x000107c6147c(plVar2,&puStack_80,PTR___sypN_11034f1a8 + 8,uVar1,6);
    lVar3 = _DAT_112ea0ec0;
    if (((ulong)plVar2 & 1) != 0) {
      puVar4 = *(undefined **)(alStack_98[0] + _DAT_112ea0eb0);
      uVar5 = *(undefined8 *)(alStack_98[0] + _DAT_112ea0eb8);
      func_0x000107c61428(alStack_98[0] + _DAT_112ea0ec0,alStack_98,0,0);
      lVar3 = alStack_98[0] + lVar3;
      func_0x000107c61618(lVar3);
      uVar6 = *(undefined8 *)(alStack_98[0] + _DAT_112ea0ec8);
      uVar1 = 0;
      func_0x00010044ea00();
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c615f0(uVar5);
      func_0x00010302ecd4(puVar4,uVar5,lVar3,uVar6);
      if (param_2 == (code *)0x0) {
        func_0x000107c61170(alStack_98[0]);
        func_0x000107c61170(puVar4);
        return;
      }
      puStack_80 = puVar4;
      lStack_68 = uVar1;
      func_0x000107c61174();
      (*param_2)(0,&puStack_80);
      func_0x000107c61170(alStack_98[0]);
      goto LAB_1024d5420;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c466bc();
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  lStack_68 = 0;
  uStack_70 = 0;
  (*param_2)();
LAB_1024d5420:
  func_0x000107c61170(puVar4);
  func_0x00010006e7f4(&puStack_80);
  return;
}



/* Entry: 1024d5464; end: 1024d546b;  */

void FUN_1024d5464(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 1024d546c; end: 1024d54cb; -[_TtC30SharedStoryProfilePageLauncher34SharedStoryProfilePageLaunchPlugin init] */

void FUN_1024d546c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryProfilePageLauncher.SharedStoryProfilePageLaunchPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d5498);
  (*pcVar1)();
}



/* Entry: 1024d54cc; end: 1024d54db; -[_TtC30SharedStoryProfilePageLauncher34SharedStoryProfilePageLaunchPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d54cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0e80));
  return;
}



/* Entry: 1024d54dc; end: 1024d556b; -[_TtC30SharedStoryProfilePageLauncher34SharedStoryProfilePageLaunchPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d54dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ea0e80);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1024d556c; end: 1024d556f; -[_TtC30SharedStoryProfilePageLauncher34SharedStoryProfilePageLaunchPlugin setNativePayloadHandlers:] */

void FUN_1024d556c(void)

{
  return;
}



/* Entry: 1024d5570; end: 1024d55af;  */

void FUN_1024d5570(void)

{
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  func_0x0001000823a8(FUN_1024d55b0,0);
  return;
}



/* Entry: 1024d55b0; end: 1024d561f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d55b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar1 = 0;
  func_0x0001024d5280();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = lVar1;
  FUN_1024d5620();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ea0e80) = lVar1;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 1024d5620; end: 1024d563f;  */

void FUN_1024d5620(void)

{
  func_0x000107c61168(&PTR_PTR_112848b08);
  return;
}



/* Entry: 1024d5640; end: 1024d564f;  */

undefined1  [16] FUN_1024d5640(void)

{
  return ZEXT816(0x110516560);
}



/* Entry: 1024d5650; end: 1024d565f; -[SCSharedStoryProfilePageLaunchPayload customStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d5650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ea0eb0));
  return;
}



/* Entry: 1024d5660; end: 1024d567f; -[SCSharedStoryProfilePageLaunchPayload uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d5660(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ea0eb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024d5680; end: 1024d56c7; -[SCSharedStoryProfilePageLaunchPayload delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d5680(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea0ec0;
  func_0x000107c61428(param_1 + _DAT_112ea0ec0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024d56c8; end: 1024d571f; -[SCSharedStoryProfilePageLaunchPayload setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d56c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea0ec0;
  func_0x000107c61428(param_1 + _DAT_112ea0ec0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024d5720; end: 1024d572f; -[SCSharedStoryProfilePageLaunchPayload sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1024d5720(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ea0ec8);
}



/* Entry: 1024d5730; end: 1024d582b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024d5730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ea0ec0;
  func_0x000107c61614(unaff_x20 + _DAT_112ea0ec0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea0eb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea0eb8) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112ea0ec8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 1024d582c; end: 1024d58ff; -[SCSharedStoryProfilePageLaunchPayload initWithCustomStory:uiContainer:delegate:sourcePage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d582c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112ea0ec0;
  func_0x000107c61614(param_1 + _DAT_112ea0ec0,0);
  *(undefined8 *)(param_1 + _DAT_112ea0eb0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ea0eb8) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_5);
  *(undefined8 *)(param_1 + _DAT_112ea0ec8) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_78,puVar1);
  return;
}



/* Entry: 1024d5900; end: 1024d5933;  */

void FUN_1024d5900(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024d5934; end: 1024d599f; -[SCSharedStoryProfilePageLaunchPayload .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024d5934(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea0eb0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea0eb8));
  param_1 = param_1 + _DAT_112ea0ec0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024d59a0; end: 1024d59bf;  */

void FUN_1024d59a0(void)

{
  func_0x000107c61168(&PTR_PTR_112848bc8);
  return;
}



/* Entry: 1024d59c0; end: 1024d5a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d59c0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1024d5db4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea0f00) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024d5a2c; end: 1024d5a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d5a2c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0f00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024d5a98; end: 1024d5af7; -[_TtC54MyStoryCustomViewersPickerScopedFactoryServiceProvider42SCMyStoryCustomViewersPickerScopedServices init] */

void FUN_1024d5a98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyStoryCustomViewersPickerScopedFactoryServiceProvider.SCMyStoryCustomViewersPickerScopedServices"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d5ac4);
  (*pcVar1)();
}



/* Entry: 1024d5af8; end: 1024d5b07; -[_TtC54MyStoryCustomViewersPickerScopedFactoryServiceProvider42SCMyStoryCustomViewersPickerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d5af8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea0f00));
  return;
}



/* Entry: 1024d5b08; end: 1024d5b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d5b08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105167b8;
  func_0x000107c613fc(&UNK_1105167b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1024d5e4c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1024d5b74; end: 1024d5c0f;  */

void FUN_1024d5b74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105166c8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105166c8;
  return;
}



/* Entry: 1024d5c10; end: 1024d5c47;  */

void FUN_1024d5c10(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1024d5c48; end: 1024d5c4f;  */

undefined8 FUN_1024d5c48(void)

{
  return 0x1b;
}



/* Entry: 1024d5c50; end: 1024d5d83;  */

void FUN_1024d5c50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105167e0;
  func_0x000107c613fc(&UNK_1105167e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024d5e24;
  func_0x00010058fa64(FUN_1024d5e24,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024d5d84; end: 1024d5db3;  */

undefined ** FUN_1024d5d84(void)

{
  return &PTR_DAT_112ea1308;
}



/* Entry: 1024d5db4; end: 1024d5dd3;  */

void FUN_1024d5db4(void)

{
  func_0x000107c61168(&PTR_PTR_112848ca0);
  return;
}



/* Entry: 1024d5dd4; end: 1024d5e23;  */

undefined1  [16] FUN_1024d5dd4(void)

{
  return ZEXT816(0x110516718);
}



/* Entry: 1024d5e24; end: 1024d5e4b;  */

void FUN_1024d5e24(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1024d5e4c; end: 1024d5e4f;  */

void FUN_1024d5e4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024d5e50; end: 1024d5ef7;  */

/* WARNING: Possible PIC construction at 0x0001024d5ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d5ee4) */

void FUN_1024d5e50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110516868;
  func_0x000107c613fc(&UNK_110516868,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112ea0f70;
  func_0x0001000285a8(0x112ea0f70,&UNK_10dab32a0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024d6284;
  func_0x0001000841fc(FUN_1024d6284,puVar1,uVar2);
  func_0x000100084214(&UNK_10dab3260,0x38,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1024d5ef8; end: 1024d5f0f;  */

/* WARNING: Possible PIC construction at 0x0001024d5ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d5ee4) */

void FUN_1024d5ef8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_110516868;
  func_0x000107c613fc(&UNK_110516868,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112ea0f70;
  func_0x0001000285a8(0x112ea0f70,&UNK_10dab32a0);
  func_0x000107c613fc();
  pcVar4 = FUN_1024d6284;
  func_0x0001000841fc(FUN_1024d6284,puVar2,uVar3);
  func_0x000100084214(&UNK_10dab3260,0x38,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024d5f10; end: 1024d6283;  */

void FUN_1024d5f10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112ea0f78,&UNK_10dab32a8);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1024d71c4();
  func_0x000100082720("SCRecipientPickerScopeExposerSubjectServiceProvider",0x33,2);
  puVar3 = puVar2;
  FUN_1024d7250();
  func_0x000100082720("SCRecipientPickerScopeExposerObservableServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1024d5c10;
  func_0x0001000823a8(FUN_1024d5c10,0);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112ea0f80,&UNK_10dab32c0);
  puVar5 = &UNK_110516890;
  func_0x000107c613fc(&UNK_110516890,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 **)(puVar5 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar3);
  uVar11 = 0x1024d628c;
  func_0x0001000823a8(0x1024d628c,puVar5);
  func_0x000100082720("MyStoryCustomViewersPickerEntryPointWrapperServiceProvider",0x3a,2);
  puVar6 = puVar2;
  FUN_1024d7078();
  func_0x000100082720("MyStoryCustomViewersPickerScopeGraphBridgeServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112ea0f88,&UNK_10dab32b0);
  puVar5 = &UNK_1105168b8;
  func_0x000107c613fc(&UNK_1105168b8,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar11;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_1024d62d4;
  func_0x0001000823a8(FUN_1024d62d4,puVar5);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112ea0f08,&UNK_10dab2fe0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1024d62e0;
  func_0x0001000823a8(0x1024d62e0,pcVar7);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ea0ef8,&UNK_10dab2fd0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1024d62e8;
  func_0x0001000823a8(0x1024d62e8,uVar8);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1105168e0;
  func_0x000107c613fc(&UNK_1105168e0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1024d631c;
  func_0x0001000823a8(FUN_1024d631c,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeEntryPointProvider",0x33,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 1024d6284; end: 1024d6297;  */

void FUN_1024d6284(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112ea0f78,&UNK_10dab32a8);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1024d71c4();
  func_0x000100082720("SCRecipientPickerScopeExposerSubjectServiceProvider",0x33,2);
  puVar3 = puVar2;
  FUN_1024d7250();
  func_0x000100082720("SCRecipientPickerScopeExposerObservableServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1024d5c10;
  func_0x0001000823a8(FUN_1024d5c10,0);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112ea0f80,&UNK_10dab32c0);
  puVar5 = &UNK_110516890;
  func_0x000107c613fc(&UNK_110516890,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  *(undefined8 **)(puVar5 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar6 = 0x1024d628c;
  func_0x0001000823a8(0x1024d628c,puVar5);
  func_0x000100082720("MyStoryCustomViewersPickerEntryPointWrapperServiceProvider",0x3a,2);
  puVar7 = puVar2;
  FUN_1024d7078();
  func_0x000100082720("MyStoryCustomViewersPickerScopeGraphBridgeServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112ea0f88,&UNK_10dab32b0);
  puVar5 = &UNK_1105168b8;
  func_0x000107c613fc(&UNK_1105168b8,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar7;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1024d62d4;
  func_0x0001000823a8(FUN_1024d62d4,puVar5);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112ea0f08,&UNK_10dab2fe0);
  func_0x000107c6157c(pcVar8);
  uVar9 = 0x1024d62e0;
  func_0x0001000823a8(0x1024d62e0,pcVar8);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ea0ef8,&UNK_10dab2fd0);
  func_0x000107c6157c(uVar9);
  uVar11 = 0x1024d62e8;
  func_0x0001000823a8(0x1024d62e8,uVar9);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1105168e0;
  func_0x000107c613fc(&UNK_1105168e0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar11;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1024d631c;
  func_0x0001000823a8(FUN_1024d631c,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopeEntryPointProvider",0x33,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 1024d6298; end: 1024d62d3;  */

void FUN_1024d6298(void)

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



/* Entry: 1024d62d4; end: 1024d62ef;  */

void FUN_1024d62d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024d67e0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMyStoryCustomViewersPickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024d62f0; end: 1024d631b;  */

void FUN_1024d62f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024d631c; end: 1024d6323;  */

void FUN_1024d631c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105166c8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105166c8;
  return;
}



/* Entry: 1024d6324; end: 1024d6613;  */

void FUN_1024d6324(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1024d670c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_60;
  *(undefined8 *)(param_2 + 0x28) = uStack_68;
  func_0x0001000285a8(0x112e4de18,&UNK_10db46090);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c6157c(uStack_70);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(param_2 + 0x18) = puVar4;
  FUN_1024d85d0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar4);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar3;
  func_0x0001024d8438();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_1024d8560();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_70);
  func_0x000107c61574(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 1024d6614; end: 1024d664f;  */

void FUN_1024d6614(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024d6650; end: 1024d6657;  */

undefined8 FUN_1024d6650(void)

{
  return 0x1b;
}



/* Entry: 1024d6658; end: 1024d66db;  */

void FUN_1024d6658(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024d674c,param_2,FUN_1024d6750,param_2,0x1024d6778,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024d66dc; end: 1024d670b;  */

undefined ** FUN_1024d66dc(void)

{
  return &PTR_DAT_112ea1308;
}



/* Entry: 1024d670c; end: 1024d672b;  */

void FUN_1024d670c(void)

{
  func_0x000107c61168(&PTR_PTR_112ea0ff8);
  return;
}



/* Entry: 1024d672c; end: 1024d674f;  */

undefined1  [16] FUN_1024d672c(void)

{
  return ZEXT816(0x110516938);
}



/* Entry: 1024d6750; end: 1024d67a3;  */

void FUN_1024d6750(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1024d67a4; end: 1024d67df;  */

void FUN_1024d67a4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1024d67e0();
  func_0x0001000a7f38("SCMyStoryCustomViewersPickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1024d67e0; end: 1024d69cb;  */

void FUN_1024d67e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110516de0;
  ppuVar4 = &PTR_DAT_112ea1308;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ea1070;
  func_0x0001000285a8(0x112ea1070,&UNK_10dab3420);
  func_0x0001000a6ee8(&UNK_110516938,
                      "MyStoryCustomViewersPickerEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,FUN_1024d6a40,param_1,uVar2,&UNK_110516938,&PTR_DAT_112ea0f90);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110516988;
  func_0x000107c613fc(&UNK_110516988,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110516b88,
                      "MyStoryCustomViewersPickerScopeGraphBridgeScopeInitializationPluginKey",0x46,
                      2,FUN_1024d6a48,puVar3,uVar2,&UNK_110516b88,&PTR_DAT_112ea1108);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105169b0;
  func_0x000107c613fc(&UNK_1105169b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110516758,
                      "SCMyStoryCustomViewersPickerScopedServicesScopeInitializationPluginKey",0x46,
                      2,FUN_1024d6b30,puVar3,uVar2,&UNK_110516758,&PTR_DAT_112ea0f10);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ea1078;
  func_0x0001000285a8(0x112ea1078,&UNK_10dab3428);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1024d69cc; end: 1024d6a3f;  */

void FUN_1024d69cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1024d6b6c;
  func_0x0001000823a8(0x1024d6b6c,param_3);
  func_0x000100082720("MyStoryCustomViewersPickerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024d6a40; end: 1024d6a47;  */

void FUN_1024d6a40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1024d6b6c;
  func_0x0001000823a8();
  func_0x000100082720("MyStoryCustomViewersPickerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024d6a48; end: 1024d6a87;  */

void FUN_1024d6a48(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024d72f8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MyStoryCustomViewersPickerScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024d6a88; end: 1024d6b2f;  */

void FUN_1024d6a88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105169d8;
  func_0x000107c613fc(&UNK_1105169d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1024d6b64;
  func_0x0001000823a8(FUN_1024d6b64,puVar1);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1024d6b30; end: 1024d6b37;  */

void FUN_1024d6b30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105169d8;
  func_0x000107c613fc(&UNK_1105169d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1024d6b64;
  func_0x0001000823a8(FUN_1024d6b64,puVar3);
  func_0x000100082720("SCMyStoryCustomViewersPickerScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1024d6b38; end: 1024d6b63;  */

void FUN_1024d6b38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024d6b64; end: 1024d6b73;  */

void FUN_1024d6b64(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105167e0;
  func_0x000107c613fc(&UNK_1105167e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024d5e24;
  func_0x00010058fa64(FUN_1024d5e24,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024d6b74; end: 1024d6c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024d6b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1024d6f88();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ea1080) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ea1088) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d6c50);
  (*pcVar1)();
}



/* Entry: 1024d6c50; end: 1024d6caf; -[_TtC42MyStoryCustomViewersPickerScopeGraphBridge57MyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024d6c50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyStoryCustomViewersPickerScopeGraphBridge.MyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d6c7c);
  (*pcVar1)();
}



/* Entry: 1024d6cb0; end: 1024d6ce7; -[_TtC42MyStoryCustomViewersPickerScopeGraphBridge57MyStoryCustomViewersPickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024d6ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024d6cd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d6cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea1080));
  return;
}



/* Entry: 1024d6ce8; end: 1024d6d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d6ce8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ea1088),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ea1080));
  return;
}



/* Entry: 1024d6d10; end: 1024d6d2f;  */

void FUN_1024d6d10(void)

{
  func_0x000107c61168(&PTR_PTR_112848d60);
  return;
}



/* Entry: 1024d6d30; end: 1024d6db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024d6d30(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea10b8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ea10c0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024d6db8);
  (*pcVar2)();
}



/* Entry: 1024d6db8; end: 1024d6e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024d6db8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea10b8);
  *(undefined **)(unaff_x20 + _DAT_112ea10b8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea10c0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea10c0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110516aa8;
  func_0x000107c613fc(&UNK_110516aa8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1024d6ea4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1024d6ea0; end: 1024d6eab;  */

void FUN_1024d6ea0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024d6eac; end: 1024d6f0b; -[_TtC42MyStoryCustomViewersPickerScopeGraphBridge57SCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint init] */

void FUN_1024d6eac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyStoryCustomViewersPickerScopeGraphBridge.SCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024d6ed8);
  (*pcVar1)();
}



/* Entry: 1024d6f0c; end: 1024d6f43; -[_TtC42MyStoryCustomViewersPickerScopeGraphBridge57SCMyStoryCustomViewersPickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d6f0c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea10c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea10b8));
  return;
}



/* Entry: 1024d6f44; end: 1024d6f47;  */

void FUN_1024d6f44(void)

{
  return;
}



/* Entry: 1024d6f48; end: 1024d6f67;  */

void FUN_1024d6f48(void)

{
  FUN_1024d6db8();
  return;
}



/* Entry: 1024d6f68; end: 1024d6f87;  */

void FUN_1024d6f68(void)

{
  func_0x000107c61168(&PTR_PTR_112848e28);
  return;
}



/* Entry: 1024d6f88; end: 1024d7057;  */

undefined8 FUN_1024d6f88(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ea10f0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1024d7058();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1024d7058; end: 1024d7077;  */

void FUN_1024d7058(void)

{
  func_0x000107c61168(&PTR_PTR_112848ef0);
  return;
}



/* Entry: 1024d7078; end: 1024d7093;  */

void FUN_1024d7078(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea10f8,&UNK_10dab3508);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024d7100,param_1);
  return;
}



/* Entry: 1024d7094; end: 1024d70ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7094(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1024d7058();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ea1100) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1024d7100; end: 1024d7107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7100(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1024d7058();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ea1100) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1024d7108; end: 1024d7153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024d7108(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea1100) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


